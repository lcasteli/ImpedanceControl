function angle = angquat(shin, foot)
    % log(q1^-1 x q2)
    % represented in shin frame

    q12 = quatmultiply( quatinv(shin.quat), foot.quat );
%     q12 = quatnormalize(q12);

    % axang = quat2axang(q12);
    th = 2 * acos(q12(:,1));
    th(th > pi) = th(th > pi) - 2*pi;
    u = bsxfun(@rdivide,q12(:,2:4),sqrt(1 - q12(:,1).^2));
    axang = [u th];

    angle = bsxfun(@times,axang(:,1:3),axang(:,4));
end