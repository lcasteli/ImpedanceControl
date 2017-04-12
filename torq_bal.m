load gaittest.mat

torque_in.signals.values = [ankle.force ankle.torque];
fs = 350;
N = length(torque_in.signals.values);
ti = (0:1/fs:(N-1)/fs).';

torque_in.time = ti;
force_in.time = ti;

initpos = inv(jacob_gaitEmul1(zeros(6,1)))*[ankle_trans_in.signals.values(1,:).';zeros(3,1)];

mass = 83491.14e-3;
PnI = [-2939718522.52 755286751.35 2940276623.48];
Ixy = -254376331060.49; Iyz = -2656879652.72; Izx = 7885931500.71;
inertia = [PnI(1) Ixy Izx; Ixy PnI(2) Iyz; Izx Iyz PnI(3)]*1e-9;

Mq = [diag(repmat(mass,1,3)) zeros(3); zeros(3) inertia];
Gq = 

