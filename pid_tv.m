clear all;

%% Data for Simlulation
load('dataset_sim.mat')
fp.torque = torquesfp(:,:,1);
clearvars -except fp

% clearvars -except ankle shin torques
load gaittest.mat
tic
% No. of steps
step = 1;
pp=length(ankle.trans);

% Ankle Angles IE/ML/DP
ankle_angle_data = repmat(ankle.angles,step,1);
ankle_angles_in.signals.values = ankle_angle_data(:,[1 3]);

if(mean(ankle_angles_in.signals.values(:,2))<0)
    ankle_angles_in.signals.values(:,2)=-ankle_angles_in.signals.values(:,2); % flipping Z angles
end
% smoothing
ankle_angles_in.signals.values = smoothing(ankle_angles_in.signals.values,pp);
ankle_angles_in.signals.values = curve_smooth(ankle_angles_in.signals.values);

% Ankle Translation
% % -6.54cm is horizontal dist from center of foot to center of ankle
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

% Offset to start prosthesis
idx = find(abs(ankle_trans_in.signals.values(:,1))==min(abs(ankle_trans_in.signals.values(idxhlstrk:idxhlstrk+0.25*pp,1))));
if step~=1
    ankle_trans_in.signals.values(:,1)=bsxfun(@minus,ankle_trans_in.signals.values(:,1),ankle_trans_in.signals.values(idx+pp,1));
end

% Shin angles
% [r1,r2,r3]=quat2angle(shin.quat,'YZX'); % ML/DP/IE
% r123=[r3,abs(r1),r2];
% % r1 = abs(r1);
shin_angles = shin.angles;
% shin_angles(:,2) = abs(shin.angles(:,2));
for ii=1:size(shin.angles,2)
    if mean(shin.angles(:,ii))>2
        shin_angles(:,ii) = shin_angles(:,ii)-pi;
    end
end
shin_angles_in.signals.values = repmat(shin_angles,step,1); %DP/IE/ML
% for ii=1:size(shin_angles_in.signals.values,2)
%     if(mean(shin_angles_in.signals.values(:,ii))<0)
%         shin_angles_in.signals.values(:,ii)=-shin_angles_in.signals.values(:,ii);
%     end
% end
shin_angles_in.signals.values(:,[2 3]) = -shin_angles_in.signals.values(:,[2 3]); % flipping Y & Z angles

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

fp_in.signals.values = repmat(fp.torque,step,1); %DP/IE/ML
fp_in.signals.values = fp_in.signals.values(:,[2 3]);
fp_in.time = ti;

% ankle_trans_in.signals.values(:,2)=ankle_trans_in.signals.values(:,2)+0.1;

toc

% stiff_dp=122.21; stiff_ie=122.21;
% damp_dp=1.4207; damp_ie=1.4207;

% stiff_dp=122.21; stiff_ie=67.2766;
% damp_dp=1.4207; damp_ie=0.5552;
sta=[-0.5345 0.03779 -0.0866]; %offset of prosthesis from centre of FP (XZY)

%%
t_sta = [0.2897 0.3874 0.4851 0.5828 0.6805];
K_dp = [69.8371 113.2203 136.2177 140.6435 151.1421];
K_ie = [82.6537 80.4438 50.3841 52.903 69.9986];
B_dp = [1.1955 1.4139 1.7642 1.5009 1.2292];
B_ie = [0.5354 0.3988 0.496 0.7497 0.5964];
J_dp = [0.0196 0.033 0.0507 0.0765 0.0369];
J_ie = [0.0065 0.0058 0.0153 0.0171 0.0094];
sl = [10.75 30.75 50.75 70.75 90.75]./100;

mdl = 'pid_tv_test3';

for ii = 1:length(t_sta)
    if ii == 1
        tsim = ti(ti<t_sta(ii));
        set_param(mdl,'LoadInitialState','off',...
        'SaveFinalState','on','FinalStateName',['SimState' num2str(ii)],...
        'SaveCompleteFinalSimState','on');
    elseif ii == length(t_sta)
        tsim = ti(ti>=t_sta(ii));
        set_param(mdl,'LoadInitialState','off',...
        'SaveFinalState','on','FinalStateName',['SimState' num2str(ii)],...
        'SaveCompleteFinalSimState','on');
%         set_param(mdl,'LoadInitialState','on','InitialState','xFinal',...
%         'SaveFinalState','on','FinalStateName',...
%         ['SimState' num2str(ii)],'SaveCompleteFinalSimState','on');
    else
        tsim = ti(ti>=t_sta(ii-1) & ti<t_sta(ii));
        set_param(mdl,'LoadInitialState','off',...
        'SaveFinalState','on','FinalStateName',['SimState' num2str(ii)],...
        'SaveCompleteFinalSimState','on');
%         set_param(mdl,'LoadInitialState','on','InitialState','xFinal',...
%         'SaveFinalState','on','FinalStateName',...
%         ['SimState' num2str(ii)],'SaveCompleteFinalSimState','on');
    end
    stiff_dp = K_dp(ii); stiff_ie = K_ie(ii);
    damp_dp = B_dp(ii); damp_ie = B_ie(ii);
    SimOut{ii} = sim(mdl,'StopTime','tsim(end)');
    xFinal = SimOut{ii}.get(['SimState' num2str(ii)]);
end
set_param(mdl,'LoadInitialState','off',...
        'SaveFinalState','off','SaveCompleteFinalSimState','off');
% ii = 1;
% tsim = ti(ti<t_sta(ii));
% set_param(mdl,'LoadInitialState','off',...
%     'SaveFinalState','on','FinalStateName',['SimState' num2str(ii)],...
%     'SaveCompleteFinalSimState','on');
% % set_param(mdl,'LoadInitialState','off',...
% %     'SaveFinalState','on','FinalStateName',['SimState' num2str(ii)],...
% %     'SaveCompleteFinalSimState','off');
% SimOut = sim(mdl,'StopTime','tsim(end)');
% xFinal = SimOut.get(['SimState' num2str(ii)]);
% % SimState0 = SimOut.get(['SimState' num2str(ii)]);
% set_param(mdl,'SaveFinalState','off','LoadInitialState','off')

% ii=ii+1;
% tsim = ti(ti>=t_sta(1) & ti<t_sta(2));
% set_param(mdl,'LoadInitialState','on','InitialState','xFinal',...
%     'SaveFinalState','on','FinalStateName',...
%  ['SimState' num2str(ii)],'SaveCompleteFinalSimState','on');
% % set_param(mdl,'LoadInitialState','on','InitialState','SimState0');
% simOut1 = sim(mdl,'StopTime','tsim(end)')
% xFinal = SimOut.get(['SimState' num2str(ii)]);


%%
for ii = 1:length(SimOut)
    if ii == 1
        t_out = SimOut{ii}.get('tout');
        ak_trans_tmp = SimOut{ii}.get('ankle_trans_out');
        ak_trans_out = ak_trans_tmp.signals.values;
        ak_dp_tmp = SimOut{ii}.get('angle_dp_out');
        ak_dp_out = ak_dp_tmp.signals.values;
        ak_ie_tmp = SimOut{ii}.get('angle_ie_out');
        ak_ie_out = ak_ie_tmp.signals.values;
        ft_trans_tmp = SimOut{ii}.get('trans_foot');
        ft_trans_out = ft_trans_tmp.signals.values;
        ft_quat_tmp = SimOut{ii}.get('quat_foot');
        ft_quat_out = ft_quat_tmp.signals.values;
        sh_trans_tmp = SimOut{ii}.get('trans_shin');
        sh_trans_out = sh_trans_tmp.signals.values;
        sh_quat_tmp = SimOut{ii}.get('quat_shin');
        sh_quat_out = sh_quat_tmp.signals.values;
        fp_trans_tmp = SimOut{ii}.get('trans_fp');
        fp_trans_out = fp_trans_tmp.signals.values;
        fp_quat_tmp = SimOut{ii}.get('quat_fp');
        fp_quat_out = fp_quat_tmp.signals.values;
        fp_for_tmp = SimOut{ii}.get('fp_force_out');
        fp_for_out = fp_for_tmp.signals.values;
        fp_tor_tmp = SimOut{ii}.get('fp_torque_out');
        fp_tor_out = fp_tor_tmp.signals.values;
        ak_tordp_tmp = SimOut{ii}.get('tt_dp');
        ak_tordp_out = ak_tordp_tmp.signals.values;
        ak_torie_tmp = SimOut{ii}.get('tt_ie');
        ak_torie_out = ak_torie_tmp.signals.values;
    else
        t_tmp = SimOut{ii}.get('tout');
        len = t_tmp>t_out(end);
        t_out = [t_out; t_tmp(len)];
        ak_trans_tmp = SimOut{ii}.get('ankle_trans_out');
        ak_trans_out = [ak_trans_out; ak_trans_tmp.signals.values(len,:)];
        ak_dp_tmp = SimOut{ii}.get('angle_dp_out');
        ak_dp_out = [ak_dp_out; ak_dp_tmp.signals.values(len,:)];
        ak_ie_tmp = SimOut{ii}.get('angle_ie_out');
        ak_ie_out = [ak_ie_out; ak_ie_tmp.signals.values(len,:)];
        ft_trans_tmp = SimOut{ii}.get('trans_foot');
        ft_trans_out = [ft_trans_out; ft_trans_tmp.signals.values(len,:)];
        ft_quat_tmp = SimOut{ii}.get('quat_foot');
        ft_quat_out = [ft_quat_out; ft_quat_tmp.signals.values(len,:)];
        sh_trans_tmp = SimOut{ii}.get('trans_shin');
        sh_trans_out = [sh_trans_out; sh_trans_tmp.signals.values(len,:)];
        sh_quat_tmp = SimOut{ii}.get('quat_shin');
        sh_quat_out = [sh_quat_out; sh_quat_tmp.signals.values(len,:)];
        fp_trans_tmp = SimOut{ii}.get('trans_fp');
        fp_trans_out = [fp_trans_out; fp_trans_tmp.signals.values(len,:)];
        fp_quat_tmp = SimOut{ii}.get('quat_fp');
        fp_quat_out = [fp_quat_out; fp_quat_tmp.signals.values(len,:)];
        fp_for_tmp = SimOut{ii}.get('fp_force_out');
        fp_for_out = [fp_for_out; fp_for_tmp.signals.values(len,:)];
        fp_tor_tmp = SimOut{ii}.get('fp_torque_out');
        fp_tor_out = [fp_tor_out; fp_tor_tmp.signals.values(len,:)];
        ak_tordp_tmp = SimOut{ii}.get('tt_dp');
        ak_tordp_out = [ak_tordp_out; ak_tordp_tmp.signals.values(len,:)];
        ak_torie_tmp = SimOut{ii}.get('tt_ie');
        ak_torie_out = [ak_torie_out; ak_torie_tmp.signals.values(len,:)];        
    end
%     ank_out = SimOut{1}.get('ankle_trans_out.signals.values');
%     figure; plot(t_out,ank_out)

end

%% PID Control TV
% load pid_tv_0.1_0.1_5.mat

tf = t_out;
results.ankle = struct('ang_dp', ak_dp_out,'ang_ie', ak_ie_out);
results.shin = struct('trans', sh_trans_out, 'quat', sh_quat_out);
results.foot = struct('trans', ft_trans_out, 'quat', ft_quat_out);
results.fplate = struct('trans', fp_trans_out, 'quat', fp_quat_out,...
    'torques', fp_tor_out, 'forces', fp_for_out);

[~, ~, ankle_ej.trans, ~] = est_joint(results.shin, results.foot);

fpForce = quatrotate(quatinv(results.fplate.quat), results.fplate.forces);
fpTorque = quatrotate(quatinv(results.fplate.quat), results.fplate.torques);

torque = cross(results.fplate.trans - ankle_ej.trans, fpForce) + fpTorque;
% torque = cross(results.fplate.trans - ankle_trans_out.signals.values, fpForce) + fpTorque;

% Torque
ankle_torque = repmat(ankle.torque,step,1); %Input torque
% smoothing
ankle_torque = smoothing(ankle_torque,pp);
ankle_torque = curve_smooth(ankle_torque);

ti_tor = (0:1/fs:(length(ankle_torque)-1)/fs).';
% figure; plot(ti_tor,ankle_torque)

% DP Torque
figure; plot(tf,ak_tordp_out(:,3))
hold on;
plot(tf,torque(:,3))
hold on;
plot(ti_tor,ankle_torque(:,3))
xlabel('Simulation Time (sec)')
ylabel('Torque (N-m)')
legend('Ankle Joint','Calculation','Experimental','location','best')
title('Ankle Torque in DP')

% IE Torque
figure; plot(tf,ak_torie_out(:,3))
hold on;
plot(tf,-torque(:,1))
hold on;
plot(ti_tor,ankle_torque(:,1))
xlabel('Simulation Time (sec)')
ylabel('Torque (N-m)')
legend('Ankle Joint','Calculation','Experimental','location','best')
title('Ankle Torque in IE')

% Ankle Translation Trajectory
figure; plot(tf,ak_trans_out)
hold on;
plot(ti,ankle_trans_in.signals.values)
xlabel('Simulation Time (sec)')
ylabel('Displacement (m)')
legend('Simulated-X','Simulated-Y','Simulated-Z','Experimental-X','Experimental-Y','Experimental-Z','location','best')
title('Ankle Translation Trajectory')
% % Ankle Translation Error
% trans_in = interp1(ti,ankle_trans_in.signals.values,tf);
% perr_trans = abs(ankle_trans_out.signals.values - trans_in)/abs(trans_in)*100;
% figure; plot(tf,perr_trans)
% xlabel('Simulation Time (sec)')
% ylabel('Percentage Error(%)')
% legend('Displacement in X','Displacement in Y','Displacement in Z','location','best')
% title('Percentage Error in Ankle Translation Trajectory')

% Ankle Angular Trajectory
figure; plot(tf,ak_dp_out)
hold on;
plot(ti,ankle_angles_in.signals.values(:,2))
hold on;
plot(tf,ak_ie_out)
hold on;
plot(ti,ankle_angles_in.signals.values(:,1))
xlabel('Simulation Time (sec)')
ylabel('Ankle Angle (rad)')
legend('Simulated-DP','Experimental-DP','Simulated-IE','Experimental-IE','location','best')
title('Ankle Angular Trajectory')
