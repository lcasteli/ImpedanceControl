function [footq_trans_in,footq_angles_in] = footkin(footq,nstep,pp)
% Foot Translation
% % -6.54cm from center of footq to center of footq
% % -66.30203939mm is the vertical dist bw footq and heel co-ord frame
% % 0.1517 is walkway height
% % pos defines the center of fp 
% % This is done so that center of fp becomes the origin(0,0) in footq.trans
% % footq2.trans = footq.trans + quatrotate(quatinv(footq.quat), [0 -30e-2 0]);
% phase = linspace(0, 1, length(footq.quat))';
% % pos= mean(footq.trans(rows,:)) + [-6.54e-2 -.1517-0.0859 0]
% pos= mean(footq.trans((phase > 0.13 & phase < 0.45),:)) + [-6.54e-2*0 -0.1517-66.30203939e-3 0];

% Finding heel strike
dy = diff(footq.trans(:,1));    dy = [dy;dy(end)];
yy = bsxfun(@times,footq.trans,(abs(dy)<5e-4));
stancelen = round(0.1*length(yy):0.7*length(yy)); %(assuming stance happens within 10% and 70% of nstep)
dymean = sum(yy(stancelen,:))./sum(yy(stancelen,:)~=0);
idxstance = find(yy(stancelen,1)~=0);
idxhlstrk = stancelen(1)+ idxstance(1);
% pos = dymean + [-6.54e-2*0 -0.1517-66.30203939e-3 0];
pos = dymean + [-6.54e-2*0 -0.1517 0];

footq_trans_in.signals.values=bsxfun(@minus,footq.trans,pos);

% footq_trans_in.signals.values(:,2) = bsxfun(@plus,footq_trans_in.signals.values(:,2),0.1517-min(footq_trans_in.signals.values(:,2)));

footq_trans_in.signals.values=repmat(footq_trans_in.signals.values,nstep,1);

% Appending data for nsteps
for ii=1:nstep-1
footq_trans_in.signals.values(ii*pp+1:(ii+1)*pp,1)=footq_trans_in.signals.values(ii*pp,1)...
    +footq_trans_in.signals.values(ii*pp+1:(ii+1)*pp,1);
end

% smoothing
footq_trans_in.signals.values = smoothing(footq_trans_in.signals.values,pp);
footq_trans_in.signals.values = curve_smooth(footq_trans_in.signals.values);

% Adjustment for ground contact
mean_gc = mean(footq_trans_in.signals.values(idxhlstrk:idxhlstrk+0.25*pp,1));
footq_trans_in.signals.values(:,1)=footq_trans_in.signals.values(:,1)-mean_gc;

% % Y Distance
% ydist = 0.1517+66.30203939e-3-min(abs(footq_trans_in.signals.values(idxhlstrk:idxhlstrk+0.25*pp,2)));
% footq_trans_in.signals.values(:,2)=footq_trans_in.signals.values(:,2)-ydist;

% Offset to start prosthesis
idx = find(abs(footq_trans_in.signals.values(:,1))==min(abs(footq_trans_in.signals.values(idxhlstrk:idxhlstrk+0.25*pp,1))));
if nstep~=1
    footq_trans_in.signals.values(:,1)=bsxfun(@minus,footq_trans_in.signals.values(:,1),footq_trans_in.signals.values(idx+pp,1));
end
% footq_trans_in.signals.values(:,2)=footq_trans_in.signals.values(:,2)+0.1;

% Foot angles
% [r1,r2,r3]=quat2angle(footq.quat,'YZX'); % ML/DP/IE
% r123=[r3,abs(r1),r2];
% % r1 = abs(r1);
footq_angles = footq.angles;
% footq_angles(:,2) = abs(footq.angles(:,2));
for ii=1:size(footq.angles,2)
    if mean(footq.angles(:,ii))>2
        footq_angles(:,ii) = footq_angles(:,ii)-pi;
    end
end
footq_angles_in.signals.values = repmat(footq_angles,nstep,1); %DP/IE/ML
% for ii=1:size(footq_angles_in.signals.values,2)
%     if(mean(footq_angles_in.signals.values(:,ii))<0)
%         footq_angles_in.signals.values(:,ii)=-footq_angles_in.signals.values(:,ii);
%     end
% end
footq_angles_in.signals.values(:,[2 3]) = -footq_angles_in.signals.values(:,[2 3]); % flipping Y & Z angles

% smoothing
footq_angles_in.signals.values = smoothing(footq_angles_in.signals.values,pp);
footq_angles_in.signals.values = curve_smooth(footq_angles_in.signals.values);

end