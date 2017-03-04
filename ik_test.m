function [qp, dev] = ik_test(t, q)
% Inverse Kinematics
%   t: coordinate target
%   q: initial joint angle guess
%   qp: resulting angle
%   dev: pose deviation, coordinate space

    ITER = 15;      % maximum number of iterations
    TOL = 1e-5;     % maximum error tolerance
    
%     if dir1 == 180
%         q(6)=q(6)+pi;
%     else
%         q(6)=q(6);
%     end
    
    for k = 1 : ITER
        
        s = FK_gaitEmul(q);          % current pose, as transf matrix
        
        e = t - s;          % pose error, cartesian space
        
        if double(norm(e)) < TOL    % solution is close enough
            break
        end

%         J = jacobian1(q);    % jacobian, d pose / d joint
        J = jacob_gaitEmul(q);
        
        dq = J\e;
        if norm(dq) > 3
            factor = 1/norm(dq)^2;
        else
            factor = 1;
        end
        
        q = q + dq*factor;     % update joint angles
     
    end
%     fprintf('Solution completed: %d steps required', k)
    qp = q;
%     dev = t - FK_test(q); % deviation from solution
    dev = t - FK_gaitEmul(q); % deviation from solution
end

% function s = fk_pend(q)
% % Forward kinematics
% %   Transformation matrix for the end-effector
% %   For AL5D robot
%     T01 = DH(q(1), .105, -pi/2, .025);
%     T = T01;
%     
% % End-effector cartesian position and yaw Euler rotation (ZYX)
% %   For AL5D robot
%     x = T(1,4);
%     s = x;
% end
% 
% function s = fk_gaitemul(q)
% % Forward kinematics
% %   Transformation matrix for the end-effector
% %   For AL5D robot
%     T01 = DH(q(1), .105, -pi/2, .025);
%     T12 = DH(q(2)-pi/2, 0, 0, 0.144);
%     T23 = DH(q(3)+pi/2, 0, 0, .185);
%     T34 = DH(q(4), 0, pi/2, .045);
%     T = T01 * T12 * T23 * T34;
%     
% % End-effector cartesian position and yaw Euler rotation (ZYX)
% %   For AL5D robot
%     x = T(1,4);
%     y = T(2,4);
%     z = T(3,4);
% %     r1 = -atan(T(1,2)/T(1,1));  % don't use atan2
%     r2 = asin(-T(3,1)); % pitch (ZYX)
%     s = [x; y; z; r2];
% end

function s = FK_test(q)
% Forward kinematics
%   Transformation matrix for the end-effector

%     q = sym('q', [6 1], 'real')
%     Rz = @(q) [cos(q) -sin(q) 0; sin(q) cos(q) 0; 0 0 1];
%   q=[x z y theta_dp theta_ie theta_ml];
    T01 = [0 0 1 -3.2; 1 0 0  1.455; 0 1 0 0.555; 0 0 0 1] * [eye(3) [0 0 q(1)]'; 0 0 0 1];
    T12 = [-1 0 0 -0.53; 0 0 1 -1.035; 0 1 0 2.479; 0 0 0 1] * [eye(3) [0 0 q(2)]'; 0 0 0 1];
    T23 = [0 0 1 0.035; 0 1 0 0.1713; -1 0 0 0.5028; 0 0 0 1] * [eye(3) [0 0 q(3)]'; 0 0 0 1];
    T34 = [0 0 -1 -0.032; -1 0 0 0.015; 0 1 0 0.2392; 0 0 0 1] * [Rz(q(4)) [0 0 0]'; 0 0 0 1];
    T45 = [0 0 -1 0.02; 0 -1 0 0; -1 0 0 -0.017; 0 0 0 1] * [Rz(q(5)) [0 0 0]'; 0 0 0 1];
    T56 = [0 -1 0 0; 0 0 1 -0.042; -1 0 0 0.02; 0 0 0 1] * [Rz(q(6)) [0 0 0]'; 0 0 0 1];
%     T6a = [0 0 1 0.0085; -1 0 0 0; 0 -1 0 -0.3814; 0 0 0 1];
% With rigid transform
% Forward
    T6a = [-1 0 0 -0.0015; 0 0 1 0; 0 1 0 -0.3814; 0 0 0 1];
% Backward
%     T6a = [1 0 0 0.0015; 0 0 -1 0; 0 1 0 -0.3814; 0 0 0 1];
% before universal joint
%     T6a = [1 0 0 0; 0 -1 0 0; 0 0 -1 -0.05; 0 0 0 1];

%     T01 = [0 0 1 -3.2; 1 0 0  1.455; 0 1 0 0.595; 0 0 0 1] * [Rz(q(4) [0 0 0]'; 0 0 0 1];
%     T01 = DH(pi/2, 0, -pi/2, 0.602294);
%     T12 = DH(0, q(1), pi/2, 0);
%     T23 = DH(pi/2, q(2), pi/2, 0);
%     T34 = DH(0, q(3), -pi/2, 0);
%     T45 = DH(-pi/2+q(4), 0, -pi/2, 0);
%     T56 = DH(-pi/2+q(5), 0, -pi/2, 0);
%     T6a = DH(-pi/2+q(6), -0.383398, pi/2, 0);
    T = T01 * T12 * T23 * T34 * T45 * T56 * T6a;
    
% End-effector cartesian position and yaw Euler rotation (ZYX)
    x = T(1,4);
    y = T(2,4);
    z = T(3,4);
    ry = -atan(T(3,1)/T(1,1));   %yaw (YZX)
    rz = asin(T(2,1));          %pitch (YZX)
    rx = -atan(T(2,3)/T(2,2));  %roll (YZX)
    
    s = [x; y; z; rx; ry; rz];
    
%     matlabFunction(jacobian(s, q), 'Vars', {q}, 'file', 'jacob_gaitEmul')
end
% function s = FK_test(q)
% % Forward kinematics
% %   Transformation matrix for the end-effector
% %   q=[x z y theta_dp theta_ie theta_ml];
%     T01 = DH(pi/2, 0, pi/2, 0.602294);
%     T12 = DH(pi, q(1), -pi/2, 0);
%     T23 = DH(0, 0 ,-pi/2, 0);
%     T34 = DH(pi/2, q(2), pi/2, 0);
%     T45 = DH(-pi/2, q(3), -pi/2, 0);
%     T56 = DH(0, 0, -pi/2, 0);
%     T67 = DH(-pi/2+q(4), 0, pi/2, 0);
%     T78 = DH(0, 0, -pi/2, 0);
%     T89 = DH(pi/2+q(5), 0, 0, 0);
%     T9a = DH(pi+q(6), -0.383398, pi/2, 0);
%     
%     T = T01 * T12 * T23 * T34 * T45 * T56 * T67 * T78 * T89 * T9a;
%     
% % End-effector cartesian position and yaw Euler rotation (ZYX)
%     x = T(1,4);
%     y = T(2,4);
%     z = T(3,4);
%     ry = -atan(T(3,1)/T(1,1));   %yaw (YZX)
%     rz = asin(T(2,1));          %pitch (YZX)
%     rx = -atan(T(2,3)/T(2,2));  %roll (YZX)
% 
%     s = [x; y; z; rx; ry; rz];
% end

function A = DH(angle, offset, twist, length)
% Denavit Hartemberg transformation
    A = [Rz(angle) [0; 0; offset]; 0 0 0 1] * [Rx(twist) [length; 0; 0]; 0 0 0 1];
end

function J = jacobian1(q)
% Jacobian Matrix
%   dS/dQ
    dof = length(q);
    EPS = 1e-3;
    J = zeros(dof, dof);
    for k = 1 : dof
        q1 = q - EPS*((1:dof).'==k);
        s1 = FK_test(q1);
        q2 = q + EPS*((1:dof).'==k);
        s2 = FK_test(q2);
        J(:,k) = (s2-s1)/(2*EPS);
    end
%     J([4:6],[4:6]) = diag([1 1 1]);
end

function R = Rx(q)
    R = [1 0 0; 0 cos(q) -sin(q); 0 sin(q) cos(q)];
end

function R = Ry(q)
    R = [cos(q) 0 sin(q); 0 1 0; -sin(q) 0 cos(q)];
end

function R = Rz(q)
    R = [cos(q) -sin(q) 0; sin(q) cos(q) 0; 0 0 1];
end