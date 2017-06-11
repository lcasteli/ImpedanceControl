function [M,c] = foot_dirdyna(s)
%
%-------------------------------------------------------------
%
%	ROBOTRAN - Version 6.6 (build : february 22, 2008)
%
%	Copyright 
%	Universite catholique de Louvain 
%	Departement de Mecanique 
%	Unite de Production Mecanique et Machines 
%	2, Place du Levant 
%	1348 Louvain-la-Neuve 
%	http://www.robotran.be// 
%
%	==> Generation Date : Fri Jun  2 21:19:32 2017
%
%	==> Project name : foot3
%	==> using XML input file 
%
%	==> Number of joints : 2
%
%	==> Function : F 1 : Direct Dynamics (Semi-Explicit formulation) : RNEA
%	==> Flops complexity : 165
%
%	==> Generation Time :  0.000 seconds
%	==> Post-Processing :  0.000 seconds
%
%-------------------------------------------------------------
%

 M = zeros(2,2);
 c = zeros(2,1);

q = s.q; 
qd = s.qd; 
qdd = s.qdd; 
frc = s.frc; 
trq = s.trq; 

% === begin imp_aux === 

% === end imp_aux === 

% ===== BEGIN task 0 ===== 

% = = Block_0_0_0_0_0_1 = = 
 
% Trigonometric Variables  

  C1 = cos(q(1));
  S1 = sin(q(1));
  C2 = cos(q(2));
  S2 = sin(q(2));

% = = Block_0_1_0_0_0_1 = = 
 
% Forward Kinematics 

  AlF21 = -s.g(2)*C1;
  OM12 = qd(1)*C2;
  OM22 = -qd(1)*S2;
  OpF12 = -qd(1)*qd(2)*S2;
  OpF22 = -qd(1)*qd(2)*C2;
  BS22 = OM12*OM22;

% = = Block_0_2_0_1_0_1 = = 
 
% Backward Dynamics 

  FA12 = -(s.frc(1,2)-s.m(2)*(AlF21*S2+BS22*s.l(2,2)-s.l(1,2)*(qd(2)*qd(2)+OM22*OM22)));
  FA22 = -(s.frc(2,2)-s.m(2)*(AlF21*C2+BS22*s.l(1,2)-s.l(2,2)*(qd(2)*qd(2)+OM12*OM12)));
  FA32 = -(s.frc(3,2)+s.m(2)*(qd(1)*qd(1)*s.l(3,2)-s.g(2)*S1+s.l(1,2)*(OpF22-qd(2)*OM12)-s.l(2,2)*(OpF12+qd(2)*OM22)));
  CF32 = -(s.trq(3,2)-s.In(3,2)*OpF12-s.In(6,2)*OpF22+FA12*s.l(2,2)-FA22*s.l(1,2)-OM12*(qd(2)*s.In(6,2)+s.In(2,2)*OM12+s.In(5,2)*OM22)+OM22*(...
 qd(2)*s.In(3,2)+s.In(1,2)*OM12+s.In(2,2)*OM22));
  FB12_1 = -s.m(2)*s.l(3,2)*S2;
  FB22_1 = -s.m(2)*s.l(3,2)*C2;
  FB32_1 = s.m(2)*(s.l(1,2)*S2+s.l(2,2)*C2);
  CM32_1 = s.In(3,2)*C2-s.In(6,2)*S2-FB12_1*s.l(2,2)+FB22_1*s.l(1,2);
  CM32_2 = s.In(9,2)+s.m(2)*s.l(1,2)*s.l(1,2)+s.m(2)*s.l(2,2)*s.l(2,2);
  CF11 = -(s.trq(1,1)+C2*(s.trq(1,2)+qd(2)*(qd(2)*s.In(6,2)+s.In(2,2)*OM12+s.In(5,2)*OM22)-s.In(1,2)*OpF12-s.In(2,2)*OpF22+FA22*s.l(3,2)-FA32*...
 s.l(2,2)-OM22*(qd(2)*s.In(9,2)+s.In(3,2)*OM12+s.In(6,2)*OM22))-S2*(s.trq(2,2)-qd(2)*(qd(2)*s.In(3,2)+s.In(1,2)*OM12+s.In(2,2)*OM22)-s.In(2,2)*OpF12-...
 s.In(5,2)*OpF22-FA12*s.l(3,2)+FA32*s.l(1,2)+OM12*(qd(2)*s.In(9,2)+s.In(3,2)*OM12+s.In(6,2)*OM22)));
  CM11_12 = C2*(s.In(1,2)*C2-s.In(2,2)*S2-FB22_1*s.l(3,2)+FB32_1*s.l(2,2))-S2*(s.In(2,2)*C2-s.In(5,2)*S2+FB12_1*s.l(3,2)-FB32_1*s.l(1,2));

% = = Block_0_3_0_0_0_0 = = 
 
% Symbolic Outputs  

  M(1,1) = CM11_12;
  M(1,2) = CM32_1;
  M(2,1) = CM32_1;
  M(2,2) = CM32_2;
  c(1) = CF11;
  c(2) = CF32;

% ====== END Task 0 ====== 

end