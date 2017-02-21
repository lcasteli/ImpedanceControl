function [shin, foot, ankle] = processdata(shinq,footq)

    N = size(shinq.trans,1);
    reps = size(shinq.trans,3);
    
    % Shin Quaternions
    r123s = zeros(N,3,reps); % Preallocation
    for k = 1 : reps
        [r1s, r2s, r3s] = quat2angle(shinq.quat(:,:,k), 'YZX');
        r123s(:,:,k) = [r3s, r1s, r2s];
    end
    rowssq = abs(r123s(1,2,:)) < 1; % Identify direction
    shin.angles = trimmean(r123s(:,:,rowssq), 10, 3);
    shin.quat = angle2quat(shin.angles(:,1),shin.angles(:,2),shin.angles(:,3),'YZX');
    
    % Shin Trans
    rowsst = shinq.trans(end,1,:)<0;
    shin.trans = trimmean(shinq.trans(:,:,rowsst), 10, 3);

    % Foot Quaternions
    r123f = zeros(N,3,reps); % Preallocation
    for k = 1 : reps
        [r1f, r2f, r3f] = quat2angle(footq.quat(:,:,k), 'YZX');
        r123f(:,:,k) = [r3f, r1f, r2f];
    end
    rowsfq = abs(r123f(1,2,:)) < 1; % Identify direction
    foot.angles = trimmean(r123s(:,:,rowsfq), 10, 3);
    foot.quat = angle2quat(foot.angles(:,1),foot.angles(:,2),foot.angles(:,3),'YZX');
    % Foot Trans
    rowsft = footq.trans(end,1,:)<0;
    foot.trans = trimmean(footq.trans(:,:,rowsft), 10, 3);

    % Ankle Trans and Angles
    ankle_trans = zeros(N,3,reps); % Preallocation
    ankle_angle = zeros(N,3,reps); % Preallocation
    for ii = 1:reps
        sh.quat = shinq.quat(:,:,ii);
        sh.trans = shinq.trans(:,:,ii);
        fo.quat = footq.quat(:,:,ii);
        fo.trans = footq.trans(:,:,ii);
        [~, ~, ankle_trans(:,:,ii), ~] = est_joint(sh, fo);
        ankle_angle(:,:,ii) = angquat(sh,fo);
    end
    ankle.angles = trimmean(ankle_angle,10,3);
    % Ankle Trans
    rowsat = ankle_trans(end,1,:)<0;
    ankle.trans = trimmean(ankle_trans(:,:,rowsat), 10, 3);

end