%% Data Processing

%load ankle_angles.mat, shin_quat.mat, shin_trans.mat
%ankle_angles = IE/ML/DP
%inertial frame = x points backwards, y points upwards

tic
load('dataset_sim.mat')
shinq.trans = strans;
shinq.quat = squat;
footq.quat = fquat;
footq.trans = ftrans;
[shin, ~, ankle] = processdata(shinq,footq);
%% Data for Simlulation

% No. of steps
step = 3;
pp=length(ankle.trans);

% Ankle Angles IE/ML/DP
ankle_angle_data = repmat(ankle.angles,step,1);
ankle_angles_in.signals.values = ankle_angle_data(:,[1 3]);

for ii=1:size(ankle_angles_in.signals.values,2)
    if(mean(ankle_angles_in.signals.values(:,ii))<0)
        ankle_angles_in.signals.values(:,ii)=-ankle_angles_in.signals.values(:,ii);
    end
end
% smoothing
ankle_angles_in.signals.values = smoothing(ankle_angles_in.signals.values,pp);
% ankle_angles_in.signals.values = arrayfun(@smooth,ankle_angles_in.signals.values);
ankle_angles_in.signals.values = curve_smooth(ankle_angles_in.signals.values);

% Ankle Translation
% -6.54cm from center of foot to center of ankle
% -66.30203939mm is the vertical dist bw ankle and heel co-ord frame
% 0.1517 is walkway height
% pos defines the center of fp 
% This is done so that center of fp becomes the origin(0,0) in ankle.trans
% ankle2.trans = ankle.trans + quatrotate(quatinv(shin.quat), [0 -30e-2 0]);
phase = linspace(0, 1, length(shin.quat))';
% pos= mean(ankle.trans(rows,:)) + [-6.54e-2 -.1517-0.0859 0]
pos= mean(ankle.trans((phase > 0.13 & phase < 0.45),:)) + [-6.54e-2*0 -0.1517-66.30203939e-3 0];

ankle_trans_in.signals.values=bsxfun(@minus,ankle.trans,pos);
ankle_trans_in.signals.values=repmat(ankle_trans_in.signals.values,step,1);

% Appending data for steps
for ii=1:step-1
ankle_trans_in.signals.values(ii*pp+1:(ii+1)*pp,1)=ankle_trans_in.signals.values(ii*pp,1)...
    +ankle_trans_in.signals.values(ii*pp+1:(ii+1)*pp,1);
end
% Offset to start prosthesis
ankle_trans_in.signals.values(:,1)=bsxfun(@minus,ankle_trans_in.signals.values(:,1),ankle_trans_in.signals.values(pp,1));
% ankle_trans_in.signals.values(:,2)=bsxfun(@plus,ankle_trans_in.signals.values(:,2),0.1517); % 0.1517 is walkway height

% smoothing
ankle_trans_in.signals.values = smoothing(ankle_trans_in.signals.values,pp);
ankle_trans_in.signals.values = curve_smooth(ankle_trans_in.signals.values);
    
% Shin angles
% [r1,r2,r3]=quat2angle(shin.quat,'YZX'); % ML/DP/IE
% r123=[r3,abs(r1),r2];
% % r1 = abs(r1);
shin_angles = shin.angles;
shin_angles(:,2) = abs(shin.angles(:,2));
for ii=1:size(shin.angles,2)
    if mean(shin.angles(:,ii))>2
        shin_angles(:,ii) = shin_angles(:,ii)-pi;
    end
end
shin_angles_in.signals.values = repmat(shin_angles,step,1); %DP/IE/ML
for ii=1:size(shin_angles_in.signals.values,2)
    if(mean(shin_angles_in.signals.values(:,ii))<0)
        shin_angles_in.signals.values(:,ii)=-shin_angles_in.signals.values(:,ii);
    end
end

% smoothing
shin_angles_in.signals.values = smoothing(shin_angles_in.signals.values,pp);
shin_angles_in.signals.values = curve_smooth(shin_angles_in.signals.values);

% % Force Plate Input
% fp_dp_in.signals.values = ;
% fp_ie_in.signals.values = ;

% time
% t = linspace(0,10,length(shin_angles_in.signals.values))';
fs = 350;
N = length(shin_angles_in.signals.values);
t = (0:1/fs:(N-1)/fs).';

ankle_angles_in.time = t;
ankle_trans_in.time=t;
shin_angles_in.time= t;

toc
%% Gait Cycle
stiff_x=1e4;
stiff_dp=10; stiff_ie=10;
damp_dp=1; damp_ie=1;
sta=[-0.5345 0.03779 -0.0866*0]; %offset of prosthesis from centre of FP (XZY)

% Solver as ode15s, ode23s, ode23t, ode23tb
set_param('Sim_test', 'StopTime', 't(end)')
sim('Sim_test.slx');
toc

%% Results
ankle = struct('ang_dp', angle_dp_out.signals.values,'ang_ie', angle_ie_out.signals.values,...
           'vel_dp',vel_dp.signals.values,'vel_ie',vel_ie.signals.values,... 
           'acc_dp',acc_dp.signals.values,'acc_ie',acc_ie.signals.values);
shin = struct('trans', trans_shin.signals.values, 'quat', quat_shin.signals.values);
foot = struct('trans', trans_foot.signals.values, 'quat', quat_foot.signals.values,...
    'acc',acc_foot.signals.values);
fplate = struct('trans', trans_fp.signals.values, 'quat', quat_fp.signals.values,...
    'torques', fp_torque_out.signals.values, 'forces', fp_force_out.signals.values);

[~, ~, ankle_ej.trans, ~] = est_joint(shin, foot);

fpForce = quatrotate(quatinv(fplate.quat), fplate.forces);
fpTorque = quatrotate(quatinv(fplate.quat), fplate.torques);

torque = cross(fplate.trans - ankle_ej.trans, fpForce) + fpTorque;