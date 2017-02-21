%% Simulation
%load ankle_angles.mat, shin_quat.mat, shin_trans.mat
%ankle_angles = IE/ML/DP
%inertial frame = x points backwards, y points upwards

% load('ankle_angles.mat');
% load('shin_quat.mat');
% load('shin_trans.mat');
tic
% ankle_angles_in.signals.values = zeros(1,2);
% ankle_trans_in.signals.values = zeros(1,3);
% shin_angles_in.signals.values = zeros(1,3);

load('leslieGait.mat')
offset = mean(ankleTrans(1,1,1:2:end));
for kk=1:size(angles,3)
    ankle.angles=angles(:,:,kk);
    ankle.trans=ankleTrans(:,:,kk);
    shin.quat=shinQuat(:,:,kk);
    shin.trans=shinTrans(:,:,kk);
    
    if mod(kk,2)==0
        ankle.trans(:,1)=-ankle.trans(:,1)+ankle.trans(1,1)+offset;
        ankle.trans(:,3)=-ankle.trans(:,3);
    end
    
    % No. of steps
    steps = 3;
    pp=length(ankle.trans);

    % Ankle Angles IE/ML/DP
    ankle_angle_data = repmat(ankle.angles,steps,1);
    ankle_angle_data = ankle_angle_data(:,[1 3]);

    for ii=1:size(ankle_angle_data,2)
        if(mean(ankle_angle_data(:,ii))<0)
            ankle_angle_data(:,ii)=-ankle_angle_data(:,ii);
        end
    end
    % smoothing
    ankle_angle_data = smoothing(ankle_angle_data,pp);
    ankle_angle_data = curve_smooth(ankle_angle_data);

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

    ankle_trans_data=bsxfun(@minus,ankle.trans,pos);
    ankle_trans_data=repmat(ankle_trans_data,steps,1);

    % Appending data for steps
    for ii=1:steps-1
    ankle_trans_data(ii*pp+1:(ii+1)*pp,1)=ankle_trans_data(ii*pp,1)...
        +ankle_trans_data(ii*pp+1:(ii+1)*pp,1);
    end
    % Offset to start prosthesis
    ankle_trans_data(:,1)=bsxfun(@plus,ankle_trans_data(:,1),-ankle_trans_data(pp,1));
    % ankle_trans_in.signals.values(:,2)=bsxfun(@plus,ankle_trans_in.signals.values(:,2),0.1517); % 0.1517 is walkway height
    % smoothing
    ankle_trans_data = smoothing(ankle_trans_data,pp);
    ankle_trans_data = curve_smooth(ankle_trans_data);  

    % Shin angles
    [r1,r2,r3]=quat2angle(shin.quat,'YZX'); % ML/DP/IE
    r1 = abs(r1);
    r123=[r3,r1,r2];
    for ii=1:size(r123,2)
        if mean(r123(:,ii))>2
            r123(:,ii) = r123(:,ii)-pi;
        end
    end
    shin_angle_data = repmat(r123,steps,1); %DP/IE/ML
    
    for ii=1:size(shin_angle_data,2)
        if(mean(shin_angle_data(:,ii))<0)
            shin_angle_data(:,ii)=-shin_angle_data(:,ii);
        end
    end

    % smoothing
    shin_angle_data = smoothing(shin_angle_data,pp);
    shin_angle_data = curve_smooth(shin_angle_data);

    % Combine data
    hh = length(ankle_trans_data);
    ankle_angles_in.signals.values((kk-1)*hh+1:kk*hh,:) = ankle_angle_data;
    ankle_trans_in.signals.values((kk-1)*hh+1:kk*hh,:) = ankle_trans_data;
    shin_angles_in.signals.values((kk-1)*hh+1:kk*hh,:) = shin_angle_data;
end

% time
t = linspace(0,10*length(ankle_angles_in.signals.values)/hh,length(ankle_angles_in.signals.values))';
ankle_angles_in.time = t;
ankle_trans_in.time = t;
shin_angles_in.time = t;

% Solver as ode15s, ode23s, ode23t, ode23tb
set_param('Walk_Sim_pid', 'StopTime', num2str(10*length(ankle_angles_in.signals.values)/hh))
sim('Walk_Sim_pid.slx');


toc