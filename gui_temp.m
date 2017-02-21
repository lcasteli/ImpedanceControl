%% setup
k = 0;
results = {};

%% select trajectory
shin_angles_in.signals.values = filtfilt(fir1(30, 12/125), 1, shin_angles_in.signals.values);
shin_angles_in.signals.values = shin_angles_in_old.signals.values;
%% run
% sim('Sim_no_y.slx')
result = fp_torque_out;

%% save result
k = k + 1;
results{k} = result;

%% plot data

hold on
plot(results{k}.time, results{k}.signals.values)