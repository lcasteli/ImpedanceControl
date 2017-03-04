%% Data Processing

%load ankle_angles.mat, shin_quat.mat, shin_trans.mat
%ankle_angles = IE/ML/DP
%inertial frame = x points backwards, y points upwards

% load('dataset_sim.mat')
% shinq.trans = strans;
% shinq.quat = squat;
% footq.quat = fquat;
% footq.trans = ftrans;
% [shin, ~, ankle] = processdata(shinq,footq);

%% Data for Simlulation
% clearvars -except ankle shin torques
tic
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
% % -6.54cm from center of foot to center of ankle
% % -66.30203939mm is the vertical dist bw ankle and heel co-ord frame
% % 0.1517 is walkway height
% % pos defines the center of fp 
% % This is done so that center of fp becomes the origin(0,0) in ankle.trans
% % ankle2.trans = ankle.trans + quatrotate(quatinv(shin.quat), [0 -30e-2 0]);
% phase = linspace(0, 1, length(shin.quat))';
% % pos= mean(ankle.trans(rows,:)) + [-6.54e-2 -.1517-0.0859 0]
% pos= mean(ankle.trans((phase > 0.13 & phase < 0.45),:)) + [-6.54e-2*0 -0.1517-66.30203939e-3 0];

% Finding heel strike
dy = diff(ankle.trans(:,1));    dy = [dy;dy(end)];
yy = bsxfun(@times,ankle.trans,(abs(dy)<5e-4));
stancelen = round(0.1*length(yy):0.7*length(yy)); %(assuming stance happens within 10% and 70% of step)
dymean = sum(yy(stancelen,:))./sum(yy(stancelen,:)~=0);
idxstance = find(yy(stancelen,1)~=0);
idxhlstrk = stancelen(1)+ idxstance(1);
pos = dymean + [-6.54e-2*0 -0.1517-66.30203939e-3 0];

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
if step~=1
    ankle_trans_in.signals.values(:,1)=bsxfun(@minus,ankle_trans_in.signals.values(:,1),ankle_trans_in.signals.values(idx+pp,1));
end
% ankle_trans_in.signals.values(:,2)=ankle_trans_in.signals.values(:,2)+0.1;


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

% Ankle Velocity
ankle_vel_in.signals.values = diff(ankle_trans_in.signals.values);
ankle_vel_in.signals.values = [ankle_vel_in.signals.values; ankle_vel_in.signals.values(end,:)];
ankle_vel_in.signals.values = curve_smooth(ankle_vel_in.signals.values);

% Shin Velocity
shin_vel_in.signals.values = diff(shin_angles_in.signals.values);
shin_vel_in.signals.values = [shin_vel_in.signals.values; shin_vel_in.signals.values(end,:)];
shin_vel_in.signals.values = curve_smooth(shin_vel_in.signals.values);

% % Excahnging cloumns for XZY orientation
% ankle_trans_in.signals.values(:,[1 2 3]) = ankle_trans_in.signals.values(:,[2 1 3]);
% ankle_vel_in.signals.values(:,[1 2 3]) = ankle_vel_in.signals.values(:,[2 1 3]);
% shin_angles_in.signals.values(:,[1 2 3]) = shin_angles_in.signals.values(:,[2 1 3]);
% shin_vel_in.signals.values(:,[1 2 3]) = shin_vel_in.signals.values(:,[2 1 3]);

% % Force Plate Input
% fp_dp_in.signals.values = ;
% fp_ie_in.signals.values = ;

% time
% ti = linspace(0,10,length(shin_angles_in.signals.values))';
fs = 350;
N = length(shin_angles_in.signals.values);
ti = (0:1/fs:(N-1)/fs).';

ankle_angles_in.time = ti;
ankle_trans_in.time = ti;
shin_angles_in.time = ti;
shin_vel_in.time = ti;
ankle_vel_in.time = ti;

toc
%% Gait Cycle
stiff_x=1e4;
stiff_dp=0.001; stiff_ie=0.001;
damp_dp=1; damp_ie=1;
sta=[-0.5345 0.03779 -0.0866]; %offset of prosthesis from centre of FP (XZY)

% Solver as ode15s, ode23s, ode23t, ode23tb
set_param('Sim_test_2016a', 'StopTime', 'ti(end)')
sim('Sim_test_2016a.slx');
% set_param('sim_impcont', 'StopTime', 'ti(end)')
% sim('sim_impcont.slx');
toc

%% Results
tf = angle_dp_out.time;
results.ankle = struct('ang_dp', angle_dp_out.signals.values,'ang_ie', angle_ie_out.signals.values,...
           'vel_dp',vel_dp.signals.values,'vel_ie',vel_ie.signals.values,... 
           'acc_dp',acc_dp.signals.values,'acc_ie',acc_ie.signals.values);
results.shin = struct('trans', trans_shin.signals.values, 'quat', quat_shin.signals.values);
results.foot = struct('trans', trans_foot.signals.values, 'quat', quat_foot.signals.values,...
    'acc',acc_foot.signals.values);
results.fplate = struct('trans', trans_fp.signals.values, 'quat', quat_fp.signals.values,...
    'torques', fp_torque_out.signals.values, 'forces', fp_force_out.signals.values);

[~, ~, ankle_ej.trans, ~] = est_joint(results.shin, results.foot);

fpForce = quatrotate(quatinv(results.fplate.quat), results.fplate.forces);
fpTorque = quatrotate(quatinv(results.fplate.quat), results.fplate.torques);

torque = cross(results.fplate.trans - ankle_ej.trans, fpForce) + fpTorque;

% [n, wn] = buttord(80/(350/2), 70/(350/2), 3, 80);
% [b, a] = butter(n, wn);
[b, a] = butter(1, 0.003);
aa=filtfilt(b,a,torque);
figure; plot(aa)

figure; plot(tf,torque)
figure; plot(tf(end/3:2*end/3),tt_dp.signals.values(end/3:2*end/3,:))
figure; plot(trimmean(torques,10,3))

% %% Analysis
% 
% dpangle = results.ankle.ang_dp(end/3:2*end/3);
% ieangle = results.ankle.ang_ie(end/3:2*end/3);
% dpvel = results.ankle.vel_dp(end/3:2*end/3);
% ievel = results.ankle.vel_ie(end/3:2*end/3);
% dpfootacc = results.foot.acc(end/3:2*end/3,3);
% iefootacc = results.foot.acc(end/3:2*end/3,1);
% dptorque = tt_dp.signals.values(end/3:2*end/3,3);
% ietorque = tt_ie.signals.values(end/3:2*end/3,1);
% % regMdl_dp = regress(dptorque,[dpangle dpvel dpfootacc]);
% % regMdl_ie = regress(ietorque,[ieangle ievel iefootacc]);
% % analysis_si = struct('kdp',regMdl_dp(1),'bdp',regMdl_dp(2),...
% %     'kie',regMdl_ie(1),'bie',regMdl_ie(2),'Jdp',regMdl_dp(3),...
% %     'Jie',regMdl_ie(3));
% % Define model  ===========================================================
% 
% Hharm = @(ang, order) [sin(bsxfun(@times, ang, order)) cos(bsxfun(@times, ang, order))];
% Hpoly = @(ang, order) [bsxfun(@power, mod(ang, 2*pi), order) bsxfun(@power, mod(ang+pi, 2*pi), order)];
% 
% % function basis for k, m and b
% %  T_ = f_(kinect, phase)*params
% fk = @(kinect, phase) bsxfun(@times, [Hharm(phase, 1:5) ones(size(phase))], kinect);
% fb = @(kinect, phase) bsxfun(@times, [Hharm(phase, 1:5) ones(size(phase))], kinect);
% fm = @(kinect, phase) bsxfun(@times, [Hharm(phase, 1:5) ones(size(phase))], kinect);
% 
% % system model, T = f(kinect, ang)*params
% f = @(kinect, ang) [fk(kinect(:,1),ang) fb(kinect(:,2),ang) fm(kinect(:,3),ang)];
%             
% % Solve LS for DP================================================================
% Q_dp = [dpangle, dpvel, dpfootacc];
% R_dp = linspace(0,2*pi,length(Q_dp))';
% T_dp = dptorque;
% 
% lm_dp = fitlm(f(Q_dp, R_dp), T_dp)
% params_dp = lm_dp.Coefficients.Estimate(2:end);
% 
% % Solve LS for IE================================================================
% Q_ie = [ieangle, ievel, iefootacc];
% R_ie = linspace(0,2*pi,length(Q_ie))';
% T_ie = ietorque;
% 
% lm_ie = fitlm(f(Q_ie, R_ie), T_ie)
% params_ie = lm_ie.Coefficients.Estimate(2:end);
% 
% figure; plot(params_dp)
% figure; plot(params_ie)