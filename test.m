% quat = [cosd(180/2), 0, sind(180/2), 0];
% squat2 = squat;
% for k = 1 : size(squat, 3)
%     
%     head = quatrotate(quatinv(squat(:,:,k)), [1, 0, 0]);
%     heading(k) = mean(head(:,1)) > 0;
%     if ~heading(k)
%     squat2(:,:,k) = quatmultiply(quatmultiply( quat, squat(:,:,k)), quatinv(quat));
%     end
% end

%% Shin Quaternions
load('dataset_sim.mat')
clear r123 r1 r2 r3 
for k = 1 : size(squat, 3)
    [r1, r2, r3] = quat2angle(squat(:,:,k), 'YZX');
    r123(:,:,k) = [r3, r1, r2];
end
% plot(squeeze(r123(:,3,:)))

% Identify direction
rows = abs(r123(1,2,:)) < 1;
shin_angle = trimmean(r123(:,:,rows), 10, 3);
shin.quat = angle2quat(shin_angle(:,1),shin_angle(:,2),shin_angle(:,3),'YZX');

% r123a(:,1) = r123a(:,1) * 0.5;

%% Shin Trans
% rowsst = strans(end,1,:)<0;
shin.trans = trimmean(strans(:,:,rows), 10, 3);

%% Foot Quaternions
clear r123 r1 r2 r3
for k = 1 : size(fquat, 3)
    [r1, r2, r3] = quat2angle(fquat(:,:,k), 'YZX');
    r123(:,:,k) = [r3, r1, r2];
end
% plot(squeeze(r123(:,3,:)))
% rowsfq = abs(r123(1,2,:)) > 1;
foot_angle = trimmean(r123(:,:,rows), 10, 3);
foot.quat = angle2quat(foot_angle(:,1),foot_angle(:,2),foot_angle(:,3),'YZX');

% r123a(:,1) = r123a(:,1) * 0.5;

%% Foot Trans
% rowsft = ftrans(end,1,:)<0;
foot.trans = trimmean(ftrans(:,:,rows), 10, 3);

%% Ankle Trans and Angles
[~, ~, ankle.trans, ~] = est_joint(shin, foot);
ankle.angles = angquat(shin,foot);
% for ii = 1:size(squat,3)
%     sh.quat = squat(:,:,ii);
%     sh.trans = strans(:,:,ii);
%     fo.quat = fquat(:,:,ii);
%     fo.trans = ftrans(:,:,ii);
%     [~, ~, ankle_trans(:,:,ii), ~] = est_joint(sh, fo);
%     ankle_angle(:,:,ii) = angquat(sh,fo);
% end
% ankle.trans = nanmean(ankle_trans(:,:,1:2:end),3);
% ankle.angles = nanmean(ankle_angle,3);

%%
rows = 300:4:400;
squat2 = nanmean(squat(:,:,rows), 3);
plot(squeeze(squat(:,1,rows)))

%%
figure
plot(squat2(:,:))