function T = impcont_test(X,R)
% x is current pos and vel
% r is reference pos and vel

K = 1;
B = 1;
Kf = 1;

r = R(1:6);
rdot = R(7:12);
x = X(1:6);
xdot = X(7:12);

Fe = [0;0;0;0;0;0];

% Impedance Control
Fa = K*(r-x)+B*(rdot-xdot)+Kf*(Fe+K*(r-x)+B*(rdot-xdot));

% Motor Torque
T = jacob_gaitEmul(x).'*Fa;
end