Tor_o = interp1(ti,ankle.torque,tout);

for ii = 1:size(rr,3)
    
%     For_o(ii) = norm(Tor_o(ii,:))/norm(R(:,:,ii)*r);
%     dR = R(:,:,ii)*r;
    dR = rr(:,:,ii);
%     For_o(ii) = Tor_o(ii,3)/norm(dR(3,:));
    For_oz(ii) = Tor_o(ii,3)/dR(1,13);
    For_ox(ii) = Tor_o(ii,1)/dR(2,13);
    For_oy(ii) = Tor_o(ii,2)/dR(3,13);

    for jj = 1:13
        
        kinz = [rr(3,jj,ii) vv(3,jj,ii)];
        gdz = -For_oz(ii)/kinz.';
        K_z(jj,ii) = gdz(1);
        B_z(jj,ii) = gdz(2);


        kinx = [rr(1,jj,ii) vv(1,jj,ii)];
        gdx = -For_ox(ii)/kinx.';
        K_x(jj,ii) = gdx(1);
        B_x(jj,ii) = gdx(2);

        kiny = [rr(2,jj,ii) vv(2,jj,ii)];
        gdy = -For_oy(ii)/kiny.';
        K_y(jj,ii) = gdy(1);
        B_y(jj,ii) = gdy(2);
    end
end

Km = [mean(K_x,2) mean(K_y,2) mean(K_z,2)];
Bm = [mean(B_x,2) mean(B_y,2) mean(B_z,2)];
figure; plot(Km); legend('X','Y','Z')
figure; plot(Bm); legend('X','Y','Z')
K_est = max(abs(Km));
B_est = max(abs(Bm));

figure; plot([For_ox.' For_oy.' For_oz.'])
figure; plot(K_z.'); hold on; plot(K_x.'); plot(K_y.');
figure; plot(B_z.'); hold on; plot(B_x.'); plot(B_y.');

% sum(norm)

%%
for ii = 1:size(rr,3)
    
    for jj = 1:13
        K = diag([K_x(jj,ii) K_y(jj,ii) K_z(jj,ii)]);
        B = diag([B_x(jj,ii) B_y(jj,ii) B_z(jj,ii)]);
        FF(:,jj,ii) = -K*(rr(:,jj,ii) - 0) - B*vv(:,jj,ii); % force on vertex on base frame
    end
    F(:,ii) = mean(FF(:,:,ii),2);
%     T(:,ii) = mean(cross(R(:,:,ii)*r, FF(:,:,ii)), 2 );
    T(:,ii) = mean(cross(rr(:,:,ii), FF(:,:,ii)), 2 );
end


%%

% spring-damper contact modelc
K = diag([-4.3592 3.0961 1.5015])*1e4;
B = diag([-5.1394 1.8308 1.0588])*1e4;
% K = [0 0 0; 0 0 0; 0 0 1]*2e4;
% B = [1 0 0; 0 1 0; 0 0 1]*2e2;

for ii = 1:size(rr,3)
    FF(:,:,ii) = -K*(rr(:,:,ii) - 0) - B*vv(:,:,ii); % force on vertex on base frame
    F(:,ii) = mean(FF(:,:,ii),2);
    T(:,ii) = mean(cross(R(:,:,ii)*r, FF(:,:,ii)), 2 );
end

figure; plot(F.')
figure; plot(T.')
% % point is active if normal force is compressing ground
% loss = 1 ./ ( 1 + exp(-[0 0 1]*FF) );
% % loss = 1 ./ ( 1 + exp(150*[0 0 1]*rr) );
% 
% % displace force to coordinate center
% 
% % if abs(p(1))>=0.15 && abs(p(2))>=0.1
% %     F=[0 0 0]';
% %     T=[0 0 0]';
% % else
% %     if any(rr(3,:)) && mean(nonzeros(rr(3,:)))<=5e-3
% %     if any(rr(3,:)<=5e-3)
%         F = sum( repmat(loss,[3 1]) .* FF, 2 ); % contact force on base frame
%         T = sum( repmat(loss,[3 1]) .* cross( R*r, FF ), 2 ); % contact torque on base frame
% %     else
% %         F=[0 0 0]';
% %         T=[0 0 0]';
% %     end
% %     F = sum(FF, 2 ); % contact force on base frame
% %     T = sum(cross( R*r, FF ), 2 ); % contact torque on base frame
    