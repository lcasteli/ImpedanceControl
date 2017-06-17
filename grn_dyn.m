co = sym('co',[3 1],'real')
syms stiff; K = [0 0 0; 0 0 0; 0 0 1]*stiff;
syms damp; B = [1 0 0; 0 1 0; 0 0 1]*damp;
syms Fo; Fo = -K*(co-0);

%%
stiff_dp=0; stiff_ie=0;
damp_dp=0; damp_ie=0;
sta=[-0.5345 0.03779 -0.0866]; %offset of prosthesis from centre of FP (XZY)

%%
for ii = 1:length(grn_quat.signals.values)
     Q = grn_quat.signals.values(ii,:);
     R(:,:,ii) = [1 - 2*Q(3)^2 - 2*Q(4)^2	2*Q(2)*Q(3) - 2*Q(4)*Q(1)	2*Q(2)*Q(4) + 2*Q(3)*Q(1)
     2*Q(2)*Q(3) + 2*Q(4)*Q(1)	1 - 2*Q(2)^2 - 2*Q(4)^2	2*Q(3)*Q(4) - 2*Q(2)*Q(1)
     2*Q(2)*Q(4) - 2*Q(3)*Q(1)	2*Q(3)*Q(4) + 2*Q(2)*Q(1)	1 - 2*Q(2)^2 - 2*Q(3)^2];
end
 
% th1 = linspace(-pi/2,pi/2,5);
% % th1 = -pi/2 : 0.7 : pi/2;
% r1 = 47e-3.*[cos(th1) cos(th1); sin(th1) sin(th1); zeros(size(th1)), zeros(size(th1))]; % circle
% th2 = linspace(pi/2,-pi/2,5);
% % th2 = pi/2 : -0.7 : -pi/2;
% r2 = 47e-3.*[-cos(th2) -cos(th2); sin(th2) sin(th2); zeros(size(th2)), zeros(size(th2))]; % circle

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

for ii = 1:length(grn_quat.signals.values)
    rr(:,:,ii) = bsxfun(@plus, R(:,:,ii)*r, grn_trans.signals.values(ii,:).'); % vertex position on base frame
    vv(:,:,ii)= bsxfun(@plus, grn_vel.signals.values(ii,:).', bsxfun(@cross, grn_angvel.signals.values(ii,:).', R(:,:,ii)*r)); % vertex velocity on base frame
end

%%
for ii = 1:13
    
    zz = squeeze(rr(3,ii,:));
    zzv = squeeze(vv(3,ii,:));
    
    % Finding heel strike
    zdy = diff(zz);    zdy = [zdy;zdy(end)];
    zyy = bsxfun(@times,zz,(abs(zdy)<2e-5));
    zstancelen = round(0.33*length(zyy):0.7*length(zyy)); %(assuming stance happens within 10% and 70% of step)
    zdymean = sum(zyy(zstancelen,:))./sum(zyy(zstancelen,:)~=0);
    zidxstance = find(zyy(zstancelen,1)~=0);
    zidxhlstrk = zstancelen(1)+ zidxstance(1);

    zsta_start = zidxhlstrk;
    zsta_end = zidxhlstrk + length(zidxstance);

%     figure; plot(zz(zsta_start:zsta_end))

%     zz_m= mean(zz(zsta_start:zsta_end))
%     zzv_m= mean(zzv(zsta_start:zsta_end))

    vec = [zz zzv];
    wght = repmat(70*9.81,[1 length(vec)]);
    
    if ii<11
    Zwght = repmat(35*9.81,[1 length(vec)]);
    else
    Zwght = repmat(70*9.81,[1 length(vec)]);
    end
    grn_dyn(ii,:) = wght/vec.';
    grn_k(ii,:) = Zwght/zz.';
%     % point is active if normal force is compressing ground
%     loss = 1 ./ ( 1 + exp(-[0 0 1]*zz) );
%     % loss = 1 ./ ( 1 + exp(150*[0 0 1]*rr) );
% 
%     % displace force to coordinate center
% 
%     % if abs(p(1))>=0.15 && abs(p(2))>=0.1
%     %     F=[0 0 0]';
%     %     T=[0 0 0]';
%     % else
%         F = sum( repmat(loss,[3 1]) .* FF, 2 ); % contact force on base frame
%         T = sum( repmat(loss,[3 1]) .* cross( R*r, FF ), 2 ); % contact torque on base frame
%     %     F = sum(FF, 2 ); % contact force on base frame
%     %     T = sum(cross( R*r, FF ), 2 ); % contact torque on base frame
end
