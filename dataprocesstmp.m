shinq.trans = gait.strans;
shinq.quat = gait.squat;
footq.quat = gait.fquat;
footq.trans = gait.ftrans;
ankleq.torque = gait.torques;

[shin, foot, ankle] = processdata(shinq,footq,ankleq);
%%
% Ankle Trans
% Evo 50 ask hom jon 10 
rowsat = gait.atrans(end,1,:)<0;
ankle_trans = trimmean(gait.atrans(:,:,rowsat),10, 3);
figure; plot(ankle_trans)
