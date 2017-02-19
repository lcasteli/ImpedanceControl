function [qp, dev] = ik(t, q)
% Inverse Kinematics
%   t: coordinate target
%   q: initial joint angle guess
%   qp: resulting angle
%   dev: pose deviation, coordinate space

    ITER = 100;      % maximum number of iterations
    TOL = 1e-5;     % maximum error tolerance
    
    for k = 1 : ITER
        
        s = FK_gaitemul(q);          % current pose, as transf matrix
        e = t - s;          % pose error, cartesian space
        
        if norm(e) < TOL    % solution is close enough
            break
        end

        J = jacobian1(q);    % jacobian, d pose / d joint
        
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
    dev = t - FK_gaitemul(q); % deviation from solution
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

function s = FK_gaitemul(q)
% Forward kinematics
%   Transformation matrix for the end-effector
%   q=[x z y theta_dp theta_ie theta_ml];
  a0 = 0.4497;
  da = 0.383398;
    T01 = DH(pi/2, 0, -pi/2, 0.1517+a0);
    T12 = DH(0, q(1), pi/2, 0);
    T23 = DH(pi/2, q(2), pi/2, 0);
    T34 = DH(0, q(3), -pi/2, 0);
    T45 = DH(-pi/2+q(4), 0, -pi/2, 0);
    T56 = DH(-pi/2+q(5), 0, -pi/2, 0);
    T6a = DH(-pi/2+q(6), da, pi/2, 0);
    T = T01 * T12 * T23 * T34 * T45 * T56 * T6a;
    
% End-effector cartesian position and yaw Euler rotation (ZYX)
    x = T(1,4);
    y = T(2,4);
    z = T(3,4);
    
%     r1 = -atan(T(1,2)/T(1,1));  % don't use atan2
%     r2 = asin(-T(3,1)); % pitch (ZYX)
    s = [x; y; z];
end

function A = DH(angle, offset, twist, length)
% Denavit Hartemberg transformation
    A = [Rz(angle) [0; 0; offset]; 0 0 0 1] * [Rx(twist) [length; 0; 0]; 0 0 0 1];
end

function J = jacobian1(q)
% Jacobian Matrix
%   dS/dQ
    dof = length(q);
    EPS = 1e-3;
    J = zeros(3, dof);
    for k = 1 : dof
        q1 = q - EPS*((1:dof).'==k);
        s1 = FK_gaitemul(q1);
        q2 = q + EPS*((1:dof).'==k);
        s2 = FK_gaitemul(q2);
        J(:,k) = (s2-s1)/(2*EPS);
    end
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