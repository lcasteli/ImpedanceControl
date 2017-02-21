%% Simulation
%load ankle_angles.mat, shin_quat.mat, shin_trans.mat
%ankle_angles = IE/ML/DP
%inertial frame = x points backwards, y points upwards

% load('ankle_angles.mat');
% load('shin_quat.mat');
% load('shin_trans.mat');
tic

load('leslieGait.mat')
ankle.angles=mean(angles(:,:,1:2:end),3);
ankle.trans=mean(ankleTrans(:,:,1:2:end),3);
shin.quat=mean(shinQuat(:,:,1:2:end),3);
shin.trans=mean(shinTrans(:,:,1:2:end),3);

% % Direction of motion
% if mean(ankle.trans(round(end/2):end,1))>0
%     dir=180;
% else
%     dir=0;
% end

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
% ankle2.trans = ankle.trans + quatrotate(quatinv(shin.quat), [0 -30e-2 0]);
phase = linspace(0, 1, length(shin.quat))';
% pos= mean(ankle.trans(rows,:)) + [-6.54e-2 -.1517-0.0859 0]
% -6.54cm from center of foot to center of ankle
% -66.30203939mm is the vertical dist bw ankle and heel co-ord frame
% 0.1517 is walkway height
% pos defines the center of fp 
% This is done so that center of fp becomes the origin(0,0) in ankle.trans
pos= mean(ankle.trans((phase > 0.13 & phase < 0.45),:)) + [-6.54e-2*0 -0.1517-66.30203939e-3 0];

ankle_trans_in.signals.values=bsxfun(@minus,ankle.trans,pos);
ankle_trans_in.signals.values=repmat(ankle_trans_in.signals.values,step,1);

% Appending data for steps
for ii=1:step-1
ankle_trans_in.signals.values(ii*pp+1:(ii+1)*pp,1)=ankle_trans_in.signals.values(ii*pp,1)...
    +ankle_trans_in.signals.values(ii*pp+1:(ii+1)*pp,1);
end
% Offset to start prosthesis
ankle_trans_in.signals.values(:,1)=bsxfun(@plus,ankle_trans_in.signals.values(:,1),-ankle_trans_in.signals.values(pp,1));
% ankle_trans_in.signals.values(:,2)=bsxfun(@plus,ankle_trans_in.signals.values(:,2),0.1517); % 0.1517 is walkway height
% smoothing
ankle_trans_in.signals.values = smoothing(ankle_trans_in.signals.values,pp);
ankle_trans_in.signals.values = curve_smooth(ankle_trans_in.signals.values);
    
% Shin angles
[r1,r2,r3]=quat2angle(shin.quat,'YZX'); % ML/DP/IE
r123=[r3,r1,r2];
r1 = abs(r1);
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

% % Force Plate Input
% fp_dp_in.signlas.values = ;
% fp_ie_in.signals.values = ;

% time
t = linspace(0,10,length(shin_angles_in.signals.values))';
ankle_angles_in.time = t;
ankle_trans_in.time=t;
shin_angles_in.time= t;

% Solver as ode15s, ode23s, ode23t, ode23tb
set_param('Walk_Sim_pid', 'StopTime', '10')
sim('Walk_Sim_pid.slx');

toc

% Results
result = struct('angle_dp', angle_dp_out.signals.values,'angle_ie', angle_ie_out.signals.values,...
           'vel_dp',vel_dp.signals.values,'vel_ie',vel_ie.signals.values, ... 
           'acc_dp',acc_dp.signals.values,'acc_ie',acc_ie.signals.values,... 
           'torques', fp_torque_out.signals.values, 'forces', fp_force_out.signals.values);
shin = struct('trans', trans_shin.signals.values, 'quat', quat_shin.signals.values);
foot = struct('trans', trans_foot.signals.values, 'quat', quat_foot.signals.values);
fplate = struct('trans', trans_fp.signals.values, 'quat', quat_fp.signals.values);

save('leslie_no_input');

%% Analysis
load('leslie_no_input');

t1 = angle_dp_out.time;

[~, ~, ankle2.trans, ~] = est_joint(shin, foot);

fpForce = quatrotate(quatinv(fplate.quat), result.forces);
fpTorque = quatrotate(quatinv(fplate.quat), result.torques);

torque = cross(fplate.trans - ankle2.trans, fpForce) + fpTorque;

rows = abs(torque)>0;

% Time Invariant
% Stiffness
kdp_model = fitlm(result.angle_dp(rows(:,1)), torque(rows(:,1),3), 'robust', true);
kie_model = fitlm(result.angle_ie(rows(:,1)), torque(rows(:,1),1), 'robust', true);
analysis.stiffness= struct('kdp', kdp_model.Coefficients.Estimate(2), ...
        'Rdp', kdp_model.Rsquared.Ordinary, 'kie', kie_model.Coefficients.Estimate(2), ...
        'Rie', kie_model.Rsquared.Ordinary);
% Damping
bdp_model = fitlm(result.vel_dp(rows(:,1)), torque(rows(:,1),3), 'robust', true);
bie_model = fitlm(result.vel_ie(rows(:,1)), torque(rows(:,1),1), 'robust', true);
analysis.damping= struct('bdp', bdp_model.Coefficients.Estimate(2), ...
        'Rdp', bdp_model.Rsquared.Ordinary, 'bie', bie_model.Coefficients.Estimate(2), ...
        'Rie', bie_model.Rsquared.Ordinary);
% Inertia
jdp_model = fitlm(result.acc_dp(rows(:,1)), torque(rows(:,1),3), 'robust', true);
jie_model = fitlm(result.acc_ie(rows(:,1)), torque(rows(:,1),1), 'robust', true);
analysis.inertia= struct('jdp', jdp_model.Coefficients.Estimate(2), ...
        'Rdp', jdp_model.Rsquared.Ordinary, 'jie', jie_model.Coefficients.Estimate(2), ...
        'Rie', jie_model.Rsquared.Ordinary);
    
% 
% 
% % Time Varying
% rows_tv=abs(torque)>0 & repmat(round(abs(result.angle_dp),1)~=0,1,3)...
%     & repmat(round(abs(result.angle_ie),1)~=0,1,3);
% 
% % FIX ME !!!!!!!!!
% kdp_tv = torque(rows_tv(:,1),3)./result.angle_dp(rows_tv(:,1));
% kie_tv = torque(rows_tv(:,1),1)./result.angle_ie(rows_tv(:,1));
% 
% analysis_tv = struct('kdp', kdp_tv, 'kie', kie_tv);


% Define model  ===========================================================

Hharm = @(ang, order) [sin(bsxfun(@times, ang, order)) cos(bsxfun(@times, ang, order))];
Hpoly = @(ang, order) [bsxfun(@power, mod(ang, 2*pi), order) bsxfun(@power, mod(ang+pi, 2*pi), order)];

% function basis for k, m and b
%  T_ = f_(kinect, phase)*params
fk = @(kinect, phase) bsxfun(@times, [Hharm(phase, 1:5) ones(size(phase))], kinect);
fb = @(kinect, phase) bsxfun(@times, [Hharm(phase, 1:5) ones(size(phase))], kinect);
fm = @(kinect, phase) bsxfun(@times, [Hharm(phase, 1:5) ones(size(phase))], kinect);

% system model, T = f(kinect, ang)*params
f = @(kinect, ang) [fk(kinect(:,1),ang) fb(kinect(:,2),ang) fm(kinect(:,3),ang)];
            
% Solve LS for DP================================================================
Q_dp = [result.angle_dp(rows(:,1)), result.vel_dp(rows(:,1)), result.acc_dp(rows(:,1))];
R_dp = linspace(0,2*pi,length(Q_dp))';
T_dp = torque(rows(:,1),3);

lm_dp = fitlm(f(Q_dp, R_dp), T_dp)
params_dp = lm_dp.Coefficients.Estimate(2:end);

% Solve LS for IE================================================================
Q_ie = [result.angle_ie(rows(:,1)), result.vel_ie(rows(:,1)), result.acc_ie(rows(:,1))];
R_ie = linspace(0,2*pi,length(Q_ie))';
T_ie = torque(rows(:,1),1);

lm_ie = fitlm(f(Q_ie, R_ie), T_ie)
params_ie = lm_ie.Coefficients.Estimate(2:end);