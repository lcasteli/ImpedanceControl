function T = impcont_test(X,R)
% x is current pos and vel
% r is reference pos and vel

% K = 1e4*[1e-1 1e 1e-2 1e-4 1e-4 1e-4].';
K = [1 1.151599e-1 1 1 1 1].';
B = [1 1 1 1 1 1].';
Kf = 0;

r = X(1:6);
rdot = X(7:12);
x = R(1:6);
xdot = R(7:12);

Fe = [0 0 0 0 0 0].';

% Impedance Control
Fa = K.*(r-x)+B.*(rdot-xdot)+Kf.*(Fe+K.*(r-x)+B.*(rdot-xdot));

% Motor Torque
T = jacob_gaitEmul(x).'*Fa;
end