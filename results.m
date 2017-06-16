%% Standing Impedance Results
Kdp = linspace(250,350,20);
Kie = linspace(50,150,20);
% Kdp = linspace(315,325,20);
% Kie = linspace(115,125,20);
% Bdp = linspace(0.1,1,20);
% Bie = linspace(0.1,1,20);

for ii = 1:length(Kdp)
    stiff_dp = Kdp(ii); 
    stiff_ie = Kie(ii);
%     damp_dp = Bdp(ii);
%     damp_ie = Bie(ii);
    sim('Sim_si.slx');
    
%     regMdl_dp = regress(torque(:,3),[ankle.ang_dp ankle.vel_dp foot.acc(:,3)]);
%     regMdl_ie = regress(-torque(:,1),[ankle.ang_ie ankle.vel_ie foot.acc(:,1)]);
%     analysis_si = struct('kdp',regMdl_dp(1),'bdp',regMdl_dp(2),...
%         'kie',regMdl_ie(1),'bie',regMdl_ie(2),'Jdp',regMdl_dp(3),...
%         'Jie',regMdl_ie(3),'PE_kdp',abs((abs(regMdl_dp(1))-stiff_dp)/stiff_dp)*100,...
%         'PE_kie',abs((abs(regMdl_ie(1))-stiff_ie)/stiff_ie)*100,'PE_bdp',...
%         abs((abs(regMdl_dp(2))-damp_dp)/damp_dp)*100,...
%         'PE_bie',abs((abs(regMdl_ie(2))-damp_ie)/damp_ie)*100);

    % Stiffness
    kdp_model = fitlm(ankle.ang_dp, torque(:,3), 'robust', true);
    kie_model = fitlm(ankle.ang_ie, -torque(:,1), 'robust', true);
    analysis.stiffness= struct('kdp', kdp_model.Coefficients.Estimate(2), ...
            'Rdp', kdp_model.Rsquared.Ordinary, 'kie', kie_model.Coefficients.Estimate(2), ...
            'Rie', kie_model.Rsquared.Ordinary,...
            'PE_kdp',abs(kdp_model.Coefficients.Estimate(2)-stiff_dp)/stiff_dp*100,...
            'PE_kie',abs(kie_model.Coefficients.Estimate(2)-stiff_ie)/stiff_ie*100);
%     % Damping
%     bdp_model = fitlm(ankle.vel_dp, torque(:,3), 'robust', true);
%     bie_model = fitlm(ankle.vel_ie,  -torque(:,1), 'robust', true);
%     analysis.damping= struct('bdp', bdp_model.Coefficients.Estimate(2), ...
%             'Rdp', bdp_model.Rsquared.Ordinary, 'bie', bie_model.Coefficients.Estimate(2), ...
%             'Rie', bie_model.Rsquared.Ordinary,...
%             'PE_bdp',abs(bdp_model.Coefficients.Estimate(2)-damp_dp)/damp_dp*100,...
%             'PE_bie',abs(bie_model.Coefficients.Estimate(2)-damp_ie)/damp_ie*100);
%     % Inertia
%     jdp_model = fitlm(ankle.acc_dp, torque(:,3), 'robust', true);
%     jie_model = fitlm(ankle.acc_ie, -torque(:,1), 'robust', true);
%     analysis.inertia= struct('jdp', jdp_model.Coefficients.Estimate(2), ...
%             'Rdp', jdp_model.Rsquared.Ordinary, 'jie', jie_model.Coefficients.Estimate(2), ...
%             'Rie', jie_model.Rsquared.Ordinary);

%     results.kdp(ii)= analysis_si.kdp;
%     results.kie(ii)= analysis_si.kie;
%     results.err_dp(ii)= analysis_si.PE_kdp;
%     results.err_ie(ii)= analysis_si.PE_kie;
    results.stiffness.kdplm(ii)= analysis.stiffness.kdp;
    results.stiffness.kielm(ii)= analysis.stiffness.kie;
    results.stiffness.errlm_dp(ii)= analysis.stiffness.PE_kdp;
    results.stiffness.errlm_ie(ii)= analysis.stiffness.PE_kie;
    results.stiffness.rsq_dp(ii) = analysis.stiffness.Rdp;
    results.stiffness.rsq_ie(ii) = analysis.stiffness.Rie;
    
%     results.damping.bdplm(ii)= analysis.damping.bdp;
%     results.damping.bielm(ii)= analysis.damping.bie;
%     results.damping.errlm_dp(ii)= analysis.damping.PE_bdp;
%     results.damping.errlm_ie(ii)= analysis.damping.PE_bie;
%     results.damping.rsq_dp(ii) = analysis.damping.Rdp;
%     results.damping.rsq_ie(ii) = analysis.damping.Rie;
    

end
% figure; plot(1:length(Kdp),results.kdp,1:length(Kdp),Kdp)
% figure; plot(1:length(Kdp),results.kdplm,1:length(Kdp),Kdp)
% figure; plot(1:length(Kie),results.kielm,1:length(Kie),Kie)
% figure; plot(1:length(Kdp),results.errlm_dp)
% figure; plot(1:length(Kie),results.errlm_ie)

%% PID Control Results
% Ankle Translation
figure; plot(ankle_trans_in.time,ankle_trans_in.signals.values)
hold on;
plot(ankle_trans_out.time,ankle_trans_out.signals.values)
% Error in Trasnlation trajectory
ankT_in = interp1(ankle_trans_in.time,ankle_trans_in.signals.values,ankle_trans_out.time);
errT = ankT_in-ankle_trans_out.signals.values;
figure; plot(errT)

% Ankle Angles
figure; plot(ankle_angles_in.time,ankle_angles_in.signals.values)
hold on;
plot(angle_dp_out.time,angle_dp_out.signals.values)
hold on;
plot(angle_ie_out.time,angle_ie_out.signals.values)

% Error in Angular trajectory
ankAdp_in = interp1(ankle_angles_in.time,ankle_angles_in.signals.values(:,2),angle_dp_out.time);
ankAie_in = interp1(ankle_angles_in.time,ankle_angles_in.signals.values(:,1),angle_ie_out.time);
errAdp = ankAdp_in-angle_dp_out.signals.values;
errAie = ankAie_in-angle_ie_out.signals.values;

figure; plot(errAdp)
figure; plot(errAie)




