%% Test mass matrix results of Robotran
s.q = sym('q',[2 1],'real');
s.qd = sym('qd',[2 1],'real');
s.qdd = sym('qdd',[2 1],'real');
s.frc = sym('frc',[3 2],'real');
s.trq = sym('trq',[3 2],'real');
s.g = [0;-9.81;0];
s.m = sym('m',[1 2],'real');
s.l = sym('l',[3 2],'real');
s.In = sym('In',[9 2],'real');
[M,C] = foot_dirdyna(s);
%%
s.q = zeros(2,1);
s.qd = zeros(2,1);
s.qdd = zeros(2,1);
s.frc = zeros(3,2);
s.trq = zeros(3,2);
s.g = [0;-9.81;0];
s.m = [0 1];
s.l = [0 0.0084;0 -0.0325;0 0.0254];
s.In = [0 0.0003;0 0;0 0;0 0;0 0.0011;0 0;0 0;0 0;0 0.0008];
[M,C] = foot_dirdyna(s);