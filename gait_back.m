%% Simulation
%load ankle_angles.mat, shin_quat.mat, shin_trans.mat
%ankle_angles = IE/ML/DP
%inertial frame = x points backwards, y points upwards

tic

load('leslieGait.mat')
ankle.angles=mean(angles(:,:,2:2:end),3);
ankle.trans=mean(ankleTrans(:,:,2:2:end),3);
shin.quat=mean(shinQuat(:,:,1:2:end),3);
shin.trans=mean(shinTrans(:,:,2:2:end),3);

% % Direction of motion
% if mean(ankle.trans(round(end/2):end,1))>0
%     dir=180;
% else
%     dir=0;
% end

% No. of steps
steps = 3;

% time
t = linspace(0,10,length(ankle.trans)*steps)';
pp=length(t)/steps;

% Ankle Angles IE/ML/DP
ankle_angle_data = repmat(ankle.angles,steps,1);
ankle_angles_in.signals.values = ankle_angle_data(:,[1 3]);
ankle_angles_in.time = t;

for ii=1:size(ankle_angles_in.signals.values,2)
    if(mean(ankle_angles_in.signals.values(:,ii))<0)
        ankle_angles_in.signals.values(:,ii)=-ankle_angles_in.signals.values(:,ii);
    end
end
% smoothing
ankle_angles_in.signals.values = smoothing(ankle_angles_in.signals.values,pp);
ankle_angles_in.signals.values = curve_smooth(ankle_angles_in.signals.values);

% Ankle Translation
% ankle2.trans = ankle.trans + quatrotate(quatinv(shin.quat), [0 -30e-2 0]);
phase = linspace(0, 1, length(shin.quat))';
% pos= mean(ankle.trans(rows,:)) + [-6.54e-2 -.1517-0.0859 0]
% -6.54cm from center of foot to center of ankle
% -66.30203939mm is the vertical dist bw ankle and heel co-ord frame
% 0.1517 is walkway height
% pos defines the center of fp 
% This is done so that center of fp becomes the origin(0,0) in ankle.trans
pos= mean(ankle.trans((phase > 0.13 & phase < 0.45),:)) + [-6.54e-2*0 -0.1517-66.30203939e-3 0];

ankle_trans_in.signals.values=bsxfun(@minus,ankle.trans,pos);
ankle_trans_in.signals.values=repmat(ankle_trans_in.signals.values,steps,1);
ankle_trans_in.time=t;

% Appending data for steps
for ii=1:steps-1
ankle_trans_in.signals.values(ii*pp+1:(ii+1)*pp,1)=ankle_trans_in.signals.values(ii*pp,1)...
    +ankle_trans_in.signals.values(ii*pp+1:(ii+1)*pp,1);
end
% Offset to start prosthesis
ankle_trans_in.signals.values(:,1)=bsxfun(@plus,ankle_trans_in.signals.values(:,1),-ankle_trans_in.signals.values(pp,1));
% ankle_trans_in.signals.values(:,2)=bsxfun(@plus,ankle_trans_in.signals.values(:,2),0.1517); % 0.1517 is walkway height
% smoothing
ankle_trans_in.signals.values = smoothing(ankle_trans_in.signals.values,pp);
ankle_trans_in.signals.values = curve_smooth(ankle_trans_in.signals.values);
    
% Shin angles
[r1,r2,r3]=quat2angle(shin.quat,'YZX'); % ML/DP/IE
r1 = abs(r1);
r123=[r3,r1,r2];
for ii=1:size(r123,2)
    if mean(r123(:,ii))>2
        r123(:,ii) = r123(:,ii)-pi;
    end
end
shin_angles_in.signals.values = repmat(r123,steps,1); %DP/IE/ML
shin_angles_in.time= t;
for ii=1:size(shin_angles_in.signals.values,2)
    if(mean(shin_angles_in.signals.values(:,ii))<0)
        shin_angles_in.signals.values(:,ii)=-shin_angles_in.signals.values(:,ii);
    end
end
% if mean(shin_angles_in.signals.values(:,2))<0
%     shin_angles_in.signals.values(:,2)=-shin_angles_in.signals.values(:,2);
% end

% smoothing
shin_angles_in.signals.values = smoothing(shin_angles_in.signals.values,pp);
shin_angles_in.signals.values = curve_smooth(shin_angles_in.signals.values);

toc

% Solver as ode15s, ode23s, ode23t, ode23tb
sim('Walk_Sim_pid.slx');

toc