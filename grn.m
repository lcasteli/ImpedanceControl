function [F, T] = grn(p, v, Q, w)
%#codegen
tic
if abs(p(1))>0.25

% R = quat2dcm(Q);
R = [1 - 2*Q(3)^2 - 2*Q(4)^2	2*Q(2)*Q(3) - 2*Q(4)*Q(1)	2*Q(2)*Q(4) + 2*Q(3)*Q(1)
     2*Q(2)*Q(3) + 2*Q(4)*Q(1)	1 - 2*Q(2)^2 - 2*Q(4)^2	2*Q(3)*Q(4) - 2*Q(2)*Q(1)
     2*Q(2)*Q(4) - 2*Q(3)*Q(1)	2*Q(3)*Q(4) + 2*Q(2)*Q(1)	1 - 2*Q(2)^2 - 2*Q(3)^2];

th1 = linspace(-pi/2,pi/2,5);
% th1 = -pi/2 : 0.7 : pi/2;
r1 = 47e-3.*[cos(th1) cos(th1); sin(th1) sin(th1); zeros(size(th1)), zeros(size(th1))]; % circle
th2 = linspace(pi/2,-pi/2,5);
% th2 = pi/2 : -0.7 : -pi/2;
r2 = 47e-3.*[-cos(th2) -cos(th2); sin(th2) sin(th2); zeros(size(th2)), zeros(size(th2))]; % circle
r2(1,:) = bsxfun(@minus,r2(1,:),134e-3);
% r = ([1 1 1; 1 1 -1; 1 -1 1; 1 -1 -1; -1 1 1; -1 1 -1; -1 -1 1; -1 -1 -1].*repmat([0.2 0.1 0],8,1).*0.5).';
% xx = linspace(-0.11,-0.03,3);
xx = -0.07;
% xx = -0.12:0.04:-0.02;
r3 = [repmat(xx,1,2);repmat(47e-3,1,length(xx)),repmat(-47e-3,1,length(xx));zeros(1,size(xx,2)*2)];
r = [r1,r2,r3];

% spring-damper contact modelc
K = [0 0 0; 0 0 0; 0 0 10]*2e4;
B = [10 0 0; 0 10 0; 0 0 10]*2e2;

rr = bsxfun(@plus, R*r, p); % vertex position on base frame
vv = bsxfun(@plus, v, bsxfun(@cross, w, R*r)); % vertex velocity on base frame

FF = -K*(rr - 0) - B*vv; % force on vertex on base frame

% point is active if normal force is compressing ground
loss = 1 ./ ( 1 + exp(-[0 0 1]*FF) );

% displace force to coordinate center

% if abs(p(1))>=0.15 && abs(p(2))>=0.1
%     F=[0 0 0]';
%     T=[0 0 0]';
% else
    F = sum( repmat(loss,[3 1]) .* FF, 2 ); % contact force on base frame
    T = sum( repmat(loss,[3 1]) .* cross( R*r, FF ), 2 ); % contact torque on base frame
%     F = sum(FF, 2 ); % contact force on base frame
%     T = sum(cross( R*r, FF ), 2 ); % contact torque on base frame
else
    F=[0 0 0]';
    T=[0 0 0]';
end
toc
end