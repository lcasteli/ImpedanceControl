%% Simulation
%load ankle_angles.mat, shin_quat.mat, shin_trans.mat
%ankle_angles = IE/ML/DP
%inertial frame = x points backwards, y points upwards

tic

% Load Data
load('leslieGait.mat')
ankle.angles=mean(angles(:,:,1:2:end),3);
ankle.trans=mean(ankleTrans(:,:,1:2:end),3);
shin.quat=mean(shinQuat(:,:,1:2:end),3);
shin.trans=mean(shinTrans(:,:,1:2:end),3);

% load('gait_data.mat')
% ankle.angles2 = curve_smooth(angquat(shin,foot));
% [~, ~, ankle.trans, ~] = est_joint(shin, foot);

% % Direction of motion
% if mean(ankle.trans(round(end/2):end,1))>0
%     dir=180;
% else
%     dir=0;
% end

% No. of steps
step = 3;
pp=length(ankle.trans);

% Shin angles
[r1,r2,r3]=quat2angle(shin.quat,'YZX'); % ML/DP/IE
r123=[r3,abs(r1),r2];
% r1 = abs(r1);
for ii=1:size(r123,2)
    if mean(r123(:,ii))>2
        r123(:,ii) = r123(:,ii)-pi;
    end
end
shin_angles_in.signals.values = repmat(r123,step,1); %DP/IE/ML
for ii=1:size(shin_angles_in.signals.values,2)
    if(mean(shin_angles_in.signals.values(:,ii))<0)
        shin_angles_in.signals.values(:,ii)=-shin_angles_in.signals.values(:,ii);
    end
end

% smoothing
shin_angles_in.signals.values = smoothing(shin_angles_in.signals.values,pp);
shin_angles_in.signals.values = curve_smooth(shin_angles_in.signals.values);

% Ankle Angles IE/ML/DP
ankle_angle_data = repmat(ankle.angles,step,1);
ankle_angles_in.signals.values = ankle_angle_data(:,[1 3]);
% 
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

% Finding heel strike
dy = diff(ankle.trans(:,1));    dy = [dy;dy(end)];
yy = bsxfun(@times,ankle.trans,(abs(dy)<5e-4));
stancelen = round(0.1*length(yy):0.7*length(yy)); %(assuming stance happens within 10% and 70% of step)
dymean = sum(yy(stancelen,:))./sum(yy(stancelen,:)~=0);
idxstance = find(yy(stancelen,1)~=0);
idxhlstrk = stancelen(1)+ idxstance(1);
pos = dymean + [-6.54e-2*0 -0.1517-66.30203939e-3 0];

% ankle2.trans = ankle.trans + quatrotate(quatinv(shin.quat), [0 -30e-2 0]);
phase = linspace(0, 1, length(shin.quat))';
% pos= mean(ankle.trans(rows,:)) + [-6.54e-2 -.1517-0.0859 0]
% pos= mean(ankle.trans((phase > 0.13 & phase < 0.45),:)) + [-6.54e-2*0 -0.1517-66.30203939e-3 0];

ankle_trans_in.signals.values=bsxfun(@minus,ankle.trans,pos);
ankle_trans_in.signals.values=repmat(ankle_trans_in.signals.values,step,1);

% Appending data for steps
for ii=1:step-1
ankle_trans_in.signals.values(ii*pp+1:(ii+1)*pp,1)=ankle_trans_in.signals.values(ii*pp,1)...
    +ankle_trans_in.signals.values(ii*pp+1:(ii+1)*pp,1);
end

% smoothing
ankle_trans_in.signals.values = smoothing(ankle_trans_in.signals.values,pp);
ankle_trans_in.signals.values = curve_smooth(ankle_trans_in.signals.values);

% Adjustment for ground contact
mean_gc = mean(ankle_trans_in.signals.values(idxhlstrk:idxhlstrk+0.25*pp,1));
ankle_trans_in.signals.values(:,1)=ankle_trans_in.signals.values(:,1)-mean_gc;

% % Y Distance
% ydist = 0.1517+66.30203939e-3-min(abs(ankle_trans_in.signals.values(idxhlstrk:idxhlstrk+0.25*pp,2)));
% ankle_trans_in.signals.values(:,2)=ankle_trans_in.signals.values(:,2)-ydist;

% Offset to start prosthesis
idx = find(abs(ankle_trans_in.signals.values(:,1))==min(abs(ankle_trans_in.signals.values(idxhlstrk:idxhlstrk+0.25*pp,1))));
ankle_trans_in.signals.values(:,1)=bsxfun(@minus,ankle_trans_in.signals.values(:,1),ankle_trans_in.signals.values(idx+pp,1));
% ankle_trans_in.signals.values(:,2)=bsxfun(@plus,ankle_trans_in.signals.values(:,2),0.1517); % 0.1517 is walkway height

% % Force Plate Input
% fp_dp_in.signals.values = ;
% fp_ie_in.signals.values = ;

% Time Vectors
% t = linspace(0,10,length(shin_angles_in.signals.values))';
fs = 250;
N = length(shin_angles_in.signals.values);
t = (0:1/fs:(N-1)/fs).';
% freq = 0:fs/length(ankle.angles):fs/2-fs/length(ankle.angles);

ankle_angles_in.time = t;
ankle_trans_in.time=t;
shin_angles_in.time= t;

toc

% %% Foot Parameters
% mi_dp = @(w,h) (-97.09 + 0.414*w + 0.614*h)*1e-4;
% mi_ie = @(w,h) (-100 + 0.48*w + 0.626*h)*1e-4;
% w_foot = @(w,h) (-0.829 + 0.0077*w + 0.0073*h);

% %% Stiffness Parameters
% stiff_x=1e4;
% stiff_dp=10; stiff_ie=10;
% damp_dp=1; damp_ie=1;
% sta=[-0.5345 0.03779 -66.30203939e-3]; %offset of prosthesis from centre of FP (XZY)

%% Gait Cycle
% stiff_x=1e4;
stiff_dp=10; stiff_ie=10;
damp_dp=1; damp_ie=1;
% sta=[-0.5345 0.03779 -0.0866]; %offset of prosthesis from centre of FP (XZY)

%% Simulation 
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

%% Standing Impedance
stiff_x=1e4;
stiff_dp=10; stiff_ie=10;
damp_dp=1; damp_ie=1;
sta=[-0.5345 0.03779 -0.0866]; %offset of prosthesis from centre of FP (XZY)

% Solver as ode15s, ode23s, ode23t, ode23tb
set_param('Sim_no_y', 'StopTime', '10')
sim('Sim_no_y.slx');

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

regMdl_dp = regress(torque(:,3),[ankle.ang_dp ankle.vel_dp foot.acc(:,3)]);
regMdl_ie = regress(torque(:,1),[ankle.ang_ie ankle.vel_ie foot.acc(:,1)]);
analysis_si = struct('kdp',regMdl_dp(1),'bdp',regMdl_dp(2),...
    'kie',regMdl_ie(1),'bie',regMdl_ie(2),'Jdp',regMdl_dp(3),...
    'Jie',regMdl_ie(3));

%% Simulation
% warning('off','all')

% Solver as ode15s, ode23s, ode23t, ode23tb
set_param('Sim_no_y', 'StopTime', t(end))
sim('Sim_no_y.slx');

toc
save('samp1.mat')
%% Analysis
% Results
load('samp1.mat')
result = struct('angle_dp', angle_dp_out.signals.values,'angle_ie', angle_ie_out.signals.values,...
           'vel_dp',vel_dp.signals.values,'vel_ie',vel_ie.signals.values,... 
           'acc_dp',acc_dp.signals.values,'acc_ie',acc_ie.signals.values,... 
           'torques', fp_torque_out.signals.values, 'forces', fp_force_out.signals.values);
shin = struct('trans', trans_shin.signals.values, 'quat', quat_shin.signals.values);
foot = struct('trans', trans_foot.signals.values, 'quat', quat_foot.signals.values);
fplate = struct('trans', trans_fp.signals.values, 'quat', quat_fp.signals.values);

t1 = angle_dp_out.time;

[~, ~, ankle2.trans, ~] = est_joint(shin, foot);

fpForce = quatrotate(quatinv(fplate.quat), result.forces);
fpTorque = quatrotate(quatinv(fplate.quat), result.torques);

torque = cross(fplate.trans - ankle2.trans, fpForce) + fpTorque;

rows = abs(torque)>0;

