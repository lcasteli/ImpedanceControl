%% Contour of foot
LW=4; FN='Helvetica'; FS=20;
th1 = linspace(-pi/2,pi/2,5);
% th1 = -pi/2 : 0.7 : pi/2;
r1 = 47e-3.*[cos(th1) cos(th1); sin(th1) sin(th1); zeros(size(th1)), zeros(size(th1))]; % circle
th2 = linspace(pi/2,-pi/2,5);
% th2 = pi/2 : -0.7 : -pi/2;
r2 = 47e-3.*[-cos(th2) -cos(th2); sin(th2) sin(th2); zeros(size(th2)), zeros(size(th2))]; % circle
r1(1,:) = bsxfun(@plus,r1(1,:),134e-3/2); 
r2(1,:) = bsxfun(@minus,r2(1,:),134e-3/2);
% r = ([1 1 1; 1 1 -1; 1 -1 1; 1 -1 -1; -1 1 1; -1 1 -1; -1 -1 1; -1 -1 -1].*repmat([0.2 0.1 0],8,1).*0.5).';
% xx = linspace(-0.11,-0.03,2);

% xx = -0.07;
xx = 0;
% xx = -0.12:0.04:-0.02;
r3 = [repmat(xx,1,2);repmat(47e-3,1,length(xx)),repmat(-47e-3,1,length(xx));zeros(1,size(xx,2)*2)];
r = [r1,r2,r3,zeros(3,1)];

% figure; plot(r(1,:),r(2,:),'*','LineWidth',LW)
figure; plot(r(1,:),r(2,:),'*')
axis equal; grid on;
xlim([-0.15 0.15])
% set(gca,'FontSize', FS);
title('Contour of the foot')
xlabel('Length of foot (m)'); ylabel('Width of foot (m)')

%% Standing Impedance
LW=2; FN='Helvetica'; FS=20;
% load si_results_kdp_250_350
% load si_results_kdp_315_325

% Stiffness
figure; plot(1:length(Kdp),results.stiffness.kdplm,1:length(Kdp),Kdp,'LineWidth',LW)
ylabel('Stiffness (N-m/rad)')
xlabel('Simulation Number')
title('Stiffness Estimation for DP')
legend('Estimated Stiffness','Actual Stiffness','location','best')
set(gca,'FontSize', FS);

figure; plot(1:length(Kie),results.stiffness.kielm,1:length(Kie),Kie,'LineWidth',LW)
ylabel('Stiffness (N-m/rad)')
xlabel('Simulation Number')
title('Stiffness Estimation for IE')
legend('Estimated Stiffness','Actual Stiffness','location','best')
set(gca,'FontSize', FS);

figure; plot(1:length(Kdp),results.stiffness.errlm_dp,'LineWidth',LW)
ylabel('Percentage Error (%)')
xlabel('Simulation Number')
title('Percentage Error in Stiffness estimation in DP')
set(gca,'FontSize', FS);

figure; plot(1:length(Kie),results.stiffness.errlm_ie,'LineWidth',LW)
ylabel('Percentage Error (%)')
xlabel('Simulation Number')
title('Percentage Error in Stiffness estimation in IE')
set(gca,'FontSize', FS);

figure; plot(1:length(Kdp),results.stiffness.rsq_dp,'LineWidth',LW)
ylabel('R^2')
xlabel('Simulation Number')
title('R^2 for Stiffness estimation in DP')
set(gca,'FontSize', FS);

figure; plot(1:length(Kie),results.stiffness.rsq_ie,'LineWidth',LW)
ylabel('R^2')
xlabel('Simulation Number')
title('R^2 for Stiffness estimation in IE')
set(gca,'FontSize', FS);

% % Damping
% figure; plot(1:length(Bdp),results.damping.bdplm,1:length(Bdp),Bdp,'LineWidth',LW)
% ylabel('Damping (N-m-s/rad)')
% xlabel('Simulation Number')
% title('Damping Estimation for DP')
% legend('Estimated Damping','Actual Damping','location','best')
% set(gca,'FontSize', FS);
% 
% figure; plot(1:length(Bie),results.damping.bielm,1:length(Bie),Bie,'LineWidth',LW)
% ylabel('Damping (N-m-s/rad)')
% xlabel('Simulation Number')
% title('Damping Estimation for IE')
% legend('Estimated Damping','Actual Damping','location','best')
% set(gca,'FontSize', FS);
% 
% figure; plot(1:length(Bdp),results.damping.errlm_dp,'LineWidth',LW)
% ylabel('Percentage Error (%)')
% xlabel('Simulation Number')
% title('Percentage Error in Damping estimation in DP')
% set(gca,'FontSize', FS);
% 
% figure; plot(1:length(Bie),results.damping.errlm_ie,'LineWidth',LW)
% ylabel('Percentage Error (%)')
% xlabel('Simulation Number')
% title('Percentage Error in Damping estimation in IE')
% set(gca,'FontSize', FS);
% 
% figure; plot(1:length(Bdp),results.damping.rsq_dp,'LineWidth',LW)
% ylabel('R-square')
% xlabel('Simulation Number')
% title('R-square of linear fit for Damping estimation in DP')
% set(gca,'FontSize', FS);
% 
% figure; plot(1:length(Bie),results.damping.rsq_ie,'LineWidth',LW)
% ylabel('R-square')
% xlabel('Simulation Number')
% title('R-square of linear fit for Damping estimation in IE')
% set(gca,'FontSize', FS);

%% PID Control
% load pid_results_0.1.mat
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
% torque = cross(results.fplate.trans - ankle_trans_out.signals.values, fpForce) + fpTorque;

% Torque
ankle_torque = repmat(ankle.torque,step,1); %Input torque
% smoothing
ankle_torque = smoothing(ankle_torque,pp);
ankle_torque = curve_smooth(ankle_torque);

ti_tor = (0:1/fs:(length(ankle_torque)-1)/fs).';
% figure; plot(ti_tor,ankle_torque)

% DP Torque
figure; plot(tf,tt_dp.signals.values(:,3))
hold on;
plot(tf,torque(:,3))
hold on;
plot(ti_tor,ankle_torque(:,3))
xlabel('Simulation Time (sec)')
ylabel('Torque (N-m)')
legend('Ankle Joint','Calculation','Actual','location','best')
title('Ankle Torque in DP')

% IE Torque
figure; plot(tf,-tt_ie.signals.values(:,3))
hold on;
plot(tf,-torque(:,1))
hold on;
plot(ti_tor,ankle_torque(:,1))
xlabel('Simulation Time (sec)')
ylabel('Torque (N-m)')
legend('Ankle Joint','Calculation','Actual','location','best')
title('Ankle Torque in IE')

% Ankle Translation Trajectory
figure; plot(tf,ankle_trans_out.signals.values)
hold on;
plot(ti,ankle_trans_in.signals.values)
xlabel('Simulation Time (sec)')
ylabel('Displacement (m)')
legend('Simulated-X','Simulated-Y','Simulated-Z','Actual-X','Actual-Y','Actual-Z','location','best')
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
figure; plot(tf,angle_dp_out.signals.values)
hold on;
plot(ti,ankle_angles_in.signals.values(:,2))
hold on;
plot(tf,angle_ie_out.signals.values)
hold on;
plot(ti,ankle_angles_in.signals.values(:,1))
xlabel('Simulation Time (sec)')
ylabel('Ankle Angle (rad)')
legend('Simulated-DP','Actual-DP','Simulated-IE','Actual-IE','location','best')
title('Ankle Angular Trajectory')

%% Impedance Control
% load pid_results_0.1.mat
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
% torque = cross(results.fplate.trans - ankle_trans_out.signals.values, fpForce) + fpTorque;

% Torque
ankle_torque = repmat(ankle.torque,nstep,1); %Input torque
% smoothing
ankle_torque = smoothing(ankle_torque,pp);
ankle_torque = curve_smooth(ankle_torque);

ti_tor = (0:1/fs:(length(ankle_torque)-1)/fs).';
% figure; plot(ti_tor,ankle_torque)

% DP Torque
figure; plot(tf,tt_dp.signals.values(:,3))
hold on;
plot(tf,torque(:,3))
hold on;
plot(ti_tor,ankle_torque(:,3))
xlabel('Simulation Time (sec)')
ylabel('Torque (N-m)')
legend('Ankle Joint','Calculation','Actual','location','best')
title('Ankle Torque in DP')

% IE Torque
figure; plot(tf,tt_ie.signals.values(:,3))
hold on;
plot(tf,-torque(:,1))
hold on;
plot(ti_tor,ankle_torque(:,1))
xlabel('Simulation Time (sec)')
ylabel('Torque (N-m)')
legend('Ankle Joint','Calculation','Actual','location','best')
title('Ankle Torque in IE')

% Ankle Translation Trajectory
figure; plot(tf,ankle_trans_out.signals.values)
hold on;
plot(ti,ankle_trans_in.signals.values)
xlabel('Simulation Time (sec)')
ylabel('Displacement (m)')
legend('Simulated-X','Simulated-Y','Simulated-Z','Actual-X','Actual-Y','Actual-Z','location','best')
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
figure; plot(tf,angle_dp_out.signals.values)
hold on;
plot(ti,ankle_angles_in.signals.values(:,2))
hold on;
plot(tf,angle_ie_out.signals.values)
hold on;
plot(ti,ankle_angles_in.signals.values(:,1))
xlabel('Simulation Time (sec)')
ylabel('Ankle Angle (rad)')
legend('Simulated-DP','Actual-DP','Simulated-IE','Actual-IE','location','best')
title('Ankle Angular Trajectory')

