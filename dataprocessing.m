%% Data Processing for leslieGait

load('leslieGait.mat')

% Shin Translation
rowsst = shinTrans(end,1,:)<0;
shin.trans = trimmean(shinTrans(:,:,rowsst), 10, 3);
% Shin Quaternions
r123s = zeros(size(shinTrans));
for k = 1 : size(shinQuat, 3)
    [r1s, r2s, r3s] = quat2angle(shinQuat(:,:,k), 'YZX');
    r123s(:,:,k) = [r3s, r1s, r2s];
end
rowssq = abs(r123s(1,2,:)) < 1; % Identify direction
shin.angle = trimmean(r123s(:,:,rowssq), 10, 3);
shin.quat = angle2quat(shin.angle(:,1),shin.angle(:,2),shin.angle(:,3),'YZX');


% Ankle Translation
rowsat = ankleTrans(end,1,:)<0;
ankle.trans = trimmean(ankleTrans(:,:,rowsat), 10, 3);
% Ankle Angles
ankle.angles=trimmean(angles,10,3);

save('simdata.mat','shin','foot','ankle');

%% Data Processing for dataset_sim

load('dataset_sim.mat')

% Shin Quaternions
for k = 1 : size(squat, 3)
    [r1s, r2s, r3s] = quat2angle(squat(:,:,k), 'YZX');
    r123s(:,:,k) = [r3s, r1s, r2s];
end
rowssq = abs(r123s(1,2,:)) < 1; % Identify direction
shin.angle = trimmean(r123s(:,:,rowssq), 10, 3);
shin.quat = angle2quat(shin.angle(:,1),shin.angle(:,2),shin.angle(:,3),'YZX');
% Shin Trans
rowsst = strans(end,1,:)<0;
shin.trans = trimmean(strans(:,:,rowsst), 10, 3);

% Foot Quaternions
r123f = zeros(size(strans));
for k = 1 : size(fquat, 3)
    [r1f, r2f, r3f] = quat2angle(fquat(:,:,k), 'YZX');
    r123f(:,:,k) = [r3f, r1f, r2f];
end
rowsfq = abs(r123f(1,2,:)) < 1; % Identify direction
foot.angle = trimmean(r123s(:,:,rowsfq), 10, 3);
foot.quat = angle2quat(foot.angle(:,1),foot.angle(:,2),foot.angle(:,3),'YZX');
% Foot Trans
rowsft = ftrans(end,1,:)<0;
foot.trans = trimmean(ftrans(:,:,rowsft), 10, 3);

% Ankle Trans and Angles
for ii = 1:size(squat,3)
    sh.quat = squat(:,:,ii);
    sh.trans = strans(:,:,ii);
    fo.quat = fquat(:,:,ii);
    fo.trans = ftrans(:,:,ii);
    [~, ~, ankle_trans(:,:,ii), ~] = est_joint(sh, fo);
    ankle_angle(:,:,ii) = angquat(sh,fo);
end
ankle.angles = trimmean(ankle_angle,10,3);
% Ankle Trans
rowsat = ankle_trans(end,1,:)<0;
ankle.trans = trimmean(ankle_trans(:,:,rowsat), 10, 3);

save('simdata.mat','shin','foot','ankle');