load('gaittest.mat')
foot_trans = bsxfun(@minus,ankle.trans,[7e-2 6e-2 0]);
ankle.quat = angle2quat(ankle.angles(:,1),ankle.angles(:,2),ankle.angles(:,3),'XYZ');
for ii = 1:length(foot_trans)
     Q = ankle.quat(ii,:);
     R(:,:,ii) = [1 - 2*Q(3)^2 - 2*Q(4)^2	2*Q(2)*Q(3) - 2*Q(4)*Q(1)	2*Q(2)*Q(4) + 2*Q(3)*Q(1)
     2*Q(2)*Q(3) + 2*Q(4)*Q(1)	1 - 2*Q(2)^2 - 2*Q(4)^2	2*Q(3)*Q(4) - 2*Q(2)*Q(1)
     2*Q(2)*Q(4) - 2*Q(3)*Q(1)	2*Q(3)*Q(4) + 2*Q(2)*Q(1)	1 - 2*Q(2)^2 - 2*Q(3)^2];
end

th = linspace(-pi/2,pi/2,5);
r12 = 47e-3.*[cos(th) -cos(th); sin(th) -sin(th); zeros(size(th)), zeros(size(th))]; % circle
r12(1,1:end/2) = bsxfun(@plus,r12(1,1:end/2),134e-3/2); 
r12(1,end/2+1:end) = bsxfun(@minus,r12(1,end/2+1:end),134e-3/2);
% r = ([1 1 1; 1 1 -1; 1 -1 1; 1 -1 -1; -1 1 1; -1 1 -1; -1 -1 1; -1 -1 -1].*repmat([0.2 0.1 0],8,1).*0.5).';
% xx = linspace(-0.11,-0.03,2);

% xx = -0.07;
xx = 0;
% xx = -0.12:0.04:-0.02;
r3 = [repmat(xx,1,2);repmat(47e-3,1,length(xx)),repmat(-47e-3,1,length(xx));zeros(1,size(xx,2)*2)];
r = [r12,r3,zeros(3,1)];

for ii = 1:length(foot_trans)
    rr(:,:,ii) = bsxfun(@plus, R(:,:,ii)*r, foot_trans(ii,:).'); % vertex position on base frame
end
foot_vel = diff(foot_trans); foot_vel=[foot_vel;foot_vel(end,:)];
for ii = 1:length(foot_trans)
    vv(:,:,ii)= bsxfun(@plus, foot_vel(ii,:).', bsxfun(@cross, foot_trans(ii,:).', R(:,:,ii)*r)); % vertex velocity on base frame
end

bb = ankle.torque/ankle.force;





