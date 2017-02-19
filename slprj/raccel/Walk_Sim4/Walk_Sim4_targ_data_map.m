  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 32;
      section.data(32)  = dumData; %prealloc
      
	  ;% rtP.FromWorkspace9_Time0
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.FromWorkspace9_Data0
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 378;
	
	  ;% rtP.FromWorkspace2_Time0
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 756;
	
	  ;% rtP.FromWorkspace2_Data0
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 1134;
	
	  ;% rtP.FromWorkspace_Time0
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 2268;
	
	  ;% rtP.FromWorkspace_Data0
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 2646;
	
	  ;% rtP.ProportionalGain_Gain
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 3780;
	
	  ;% rtP.Integrator_IC
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 3781;
	
	  ;% rtP.DerivativeGain_Gain
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 3782;
	
	  ;% rtP.Filter_IC
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 3783;
	
	  ;% rtP.FilterCoefficient_Gain
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 3784;
	
	  ;% rtP.Saturate_UpperSat
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 3785;
	
	  ;% rtP.Saturate_LowerSat
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 3786;
	
	  ;% rtP.FromWorkspace1_Time0
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 3787;
	
	  ;% rtP.FromWorkspace1_Data0
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 4165;
	
	  ;% rtP.ProportionalGain_Gain_oxrlybfiwz
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 4543;
	
	  ;% rtP.Integrator_IC_b2h4rjcnp4
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 4544;
	
	  ;% rtP.DerivativeGain_Gain_hb0xklitus
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 4545;
	
	  ;% rtP.Filter_IC_ip1faalzbr
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 4546;
	
	  ;% rtP.FilterCoefficient_Gain_loae5b3qga
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 4547;
	
	  ;% rtP.Saturate_UpperSat_fewg3kv1xw
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 4548;
	
	  ;% rtP.Saturate_LowerSat_l0zqlb52y1
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 4549;
	
	  ;% rtP.SineWave4_Amp
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 4550;
	
	  ;% rtP.SineWave4_Bias
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 4551;
	
	  ;% rtP.SineWave4_Freq
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 4552;
	
	  ;% rtP.SineWave4_Hsin
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 4553;
	
	  ;% rtP.SineWave4_HCos
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 4554;
	
	  ;% rtP.SineWave4_PSin
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 4555;
	
	  ;% rtP.SineWave4_PCos
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 4556;
	
	  ;% rtP.Constant3_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 4557;
	
	  ;% rtP.IntegralGain_Gain
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 4558;
	
	  ;% rtP.IntegralGain_Gain_jydit0z4zb
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 4559;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 58;
      section.data(58)  = dumData; %prealloc
      
	  ;% rtB.i5pngojnqr
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.jd3yc3sozl
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% rtB.cpcxsiqkk2
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 7;
	
	  ;% rtB.anyhha524k
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 11;
	
	  ;% rtB.gcpbvidrnc
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 15;
	
	  ;% rtB.avffaxkxts
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 18;
	
	  ;% rtB.lron4andxg
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 22;
	
	  ;% rtB.aopnf0g0rt
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 26;
	
	  ;% rtB.fff0lbkzmp
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 30;
	
	  ;% rtB.mhcsmwu1e3
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 63;
	
	  ;% rtB.kbkny1y404
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 128;
	
	  ;% rtB.h5j1pq2oet
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 129;
	
	  ;% rtB.aigqxjxfq3
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 130;
	
	  ;% rtB.evn4akd3fq
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 131;
	
	  ;% rtB.j5dq3zbm12
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 132;
	
	  ;% rtB.avbvpd3knl
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 133;
	
	  ;% rtB.kdtqmrecw1
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 134;
	
	  ;% rtB.a4eplwnvip
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 135;
	
	  ;% rtB.hih35pqonz
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 136;
	
	  ;% rtB.a2a4hpyrz2
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 137;
	
	  ;% rtB.lji3oip3eh
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 141;
	
	  ;% rtB.hxu10aja3n
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 142;
	
	  ;% rtB.b0em5jvgbh
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 143;
	
	  ;% rtB.ftzc33eq5a
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 144;
	
	  ;% rtB.g1qnevlihp
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 145;
	
	  ;% rtB.ptnjmn1blx
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 146;
	
	  ;% rtB.czawg3xijz
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 147;
	
	  ;% rtB.ggozmdzmm5
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 148;
	
	  ;% rtB.agaj15tfxi
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 149;
	
	  ;% rtB.giy1h5ky1s
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 150;
	
	  ;% rtB.gck1x5c55z
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 154;
	
	  ;% rtB.lneeaq3ggn
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 158;
	
	  ;% rtB.jzvmovor4f
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 162;
	
	  ;% rtB.ngt2nzthph
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 166;
	
	  ;% rtB.oagxdgsciz
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 170;
	
	  ;% rtB.byrhxyhu2y
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 174;
	
	  ;% rtB.izulu4xivv
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 178;
	
	  ;% rtB.iegxcysk54
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 179;
	
	  ;% rtB.bhfomtbk3s
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 183;
	
	  ;% rtB.gstkjtwy5v
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 187;
	
	  ;% rtB.lmqf1lcrpl
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 191;
	
	  ;% rtB.ig3bwkisun
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 195;
	
	  ;% rtB.nyjkrhoabu
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 199;
	
	  ;% rtB.nskx41j5ik
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 203;
	
	  ;% rtB.o31xe204ix
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 207;
	
	  ;% rtB.c11psdq1sa
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 211;
	
	  ;% rtB.iejevtu2b2
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 215;
	
	  ;% rtB.nptbn3r2vs
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 219;
	
	  ;% rtB.piq3dxclaf
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 223;
	
	  ;% rtB.ipue3gycmh
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 227;
	
	  ;% rtB.ignnz2fkm0
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 231;
	
	  ;% rtB.p0ja4kahop
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 235;
	
	  ;% rtB.jvhlqsjoa5
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 249;
	
	  ;% rtB.mxe1jfb20d
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 250;
	
	  ;% rtB.cufysxrud3
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 251;
	
	  ;% rtB.gu4box0to2
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 254;
	
	  ;% rtB.cbshgsh2c0
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 257;
	
	  ;% rtB.aaktuvfa1z
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 260;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtB.hvkcdvrvj3.j5waylb1c5
	  section.data(1).logicalSrcIdx = 58;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.hvkcdvrvj3.l1lfivnqwc
	  section.data(2).logicalSrcIdx = 59;
	  section.data(2).dtTransOffset = 3;
	
	  ;% rtB.hvkcdvrvj3.ptbvgl0xdm
	  section.data(3).logicalSrcIdx = 60;
	  section.data(3).dtTransOffset = 6;
	
	  ;% rtB.hvkcdvrvj3.amj0331tiy
	  section.data(4).logicalSrcIdx = 61;
	  section.data(4).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtB.n1b4dgswxn.j5waylb1c5
	  section.data(1).logicalSrcIdx = 62;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.n1b4dgswxn.l1lfivnqwc
	  section.data(2).logicalSrcIdx = 63;
	  section.data(2).dtTransOffset = 3;
	
	  ;% rtB.n1b4dgswxn.ptbvgl0xdm
	  section.data(3).logicalSrcIdx = 64;
	  section.data(3).dtTransOffset = 6;
	
	  ;% rtB.n1b4dgswxn.amj0331tiy
	  section.data(4).logicalSrcIdx = 65;
	  section.data(4).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 5;
    sectIdxOffset = 3;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 30;
      section.data(30)  = dumData; %prealloc
      
	  ;% rtDW.lz43hau3ig
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.gzrlfqcepc
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.fcwoczvcvk
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.fmxt4x3vzi
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.ehes2w3gkx
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.b0jhzc35v0
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.ovtgirnpkm
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.flrsvcdg0r
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.m4y5z5rmyz
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.lzspqinia5
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 10;
	
	  ;% rtDW.buw4n1rvum
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% rtDW.gpk4s0onyl
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 14;
	
	  ;% rtDW.icxehzbrhz
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 16;
	
	  ;% rtDW.ig241xud5a
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 18;
	
	  ;% rtDW.ep3taliqrv
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 20;
	
	  ;% rtDW.fgvya54ooh
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 21;
	
	  ;% rtDW.gda0flyxdj
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 22;
	
	  ;% rtDW.m53yfro10x
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 24;
	
	  ;% rtDW.dgj13ve15g
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 26;
	
	  ;% rtDW.ahznleminz
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 28;
	
	  ;% rtDW.jlqgfyvlhr
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 30;
	
	  ;% rtDW.e5n0z3marz
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 32;
	
	  ;% rtDW.iiohjssyew
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 34;
	
	  ;% rtDW.hikj0frbs2
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 36;
	
	  ;% rtDW.hyzyueow4e
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 38;
	
	  ;% rtDW.ipc5v31ie1
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 40;
	
	  ;% rtDW.fntjzpwqp4
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 42;
	
	  ;% rtDW.lrgvsubcfa
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 44;
	
	  ;% rtDW.bui11fpqhc
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 46;
	
	  ;% rtDW.m33n3pbjwx
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 47;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 41;
      section.data(41)  = dumData; %prealloc
      
	  ;% rtDW.fafkv3xcrk.TimePtr
	  section.data(1).logicalSrcIdx = 30;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.l1fwndj2zw.TimePtr
	  section.data(2).logicalSrcIdx = 31;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.lpq22eshns.TimePtr
	  section.data(3).logicalSrcIdx = 32;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.f2pkiziunv
	  section.data(4).logicalSrcIdx = 33;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.na53wmkywe
	  section.data(5).logicalSrcIdx = 34;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.jhdycf30bg
	  section.data(6).logicalSrcIdx = 35;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.a3s3xrrs52
	  section.data(7).logicalSrcIdx = 36;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.hvgbbz5e1m
	  section.data(8).logicalSrcIdx = 37;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.eu3uzx5cy5
	  section.data(9).logicalSrcIdx = 38;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.fmfjt51fiu
	  section.data(10).logicalSrcIdx = 39;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.m55fft4qhd
	  section.data(11).logicalSrcIdx = 40;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.kldcjb511d
	  section.data(12).logicalSrcIdx = 41;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.hplyuomj1a
	  section.data(13).logicalSrcIdx = 42;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.h2mcpex5lc.TimePtr
	  section.data(14).logicalSrcIdx = 43;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.k4xl5tajfk
	  section.data(15).logicalSrcIdx = 44;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.aiac20tcs1
	  section.data(16).logicalSrcIdx = 45;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.bqvpxns5ic
	  section.data(17).logicalSrcIdx = 46;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.inrngbrgzb
	  section.data(18).logicalSrcIdx = 47;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.eogf2nziqi
	  section.data(19).logicalSrcIdx = 48;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.dhy1gflovz.LoggedData
	  section.data(20).logicalSrcIdx = 49;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.ioooez41vt.LoggedData
	  section.data(21).logicalSrcIdx = 50;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.g5fjljmrja.LoggedData
	  section.data(22).logicalSrcIdx = 51;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.fnpoyjv2kz.LoggedData
	  section.data(23).logicalSrcIdx = 52;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.kyhpgfkqo4.LoggedData
	  section.data(24).logicalSrcIdx = 53;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtDW.hvfr1q1ras.LoggedData
	  section.data(25).logicalSrcIdx = 54;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtDW.dcawsmu0pp.LoggedData
	  section.data(26).logicalSrcIdx = 55;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtDW.ejumgzbajg.LoggedData
	  section.data(27).logicalSrcIdx = 56;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtDW.c2s4lwqau4.LoggedData
	  section.data(28).logicalSrcIdx = 57;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtDW.mqwcoq30lo.LoggedData
	  section.data(29).logicalSrcIdx = 58;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtDW.eqll2jpmri.LoggedData
	  section.data(30).logicalSrcIdx = 59;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtDW.dh3n5iflcj.LoggedData
	  section.data(31).logicalSrcIdx = 60;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtDW.edkohxzpet.LoggedData
	  section.data(32).logicalSrcIdx = 61;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtDW.hy3u52fqzo.LoggedData
	  section.data(33).logicalSrcIdx = 62;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtDW.kw05vumtwg.LoggedData
	  section.data(34).logicalSrcIdx = 63;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtDW.ky34kodbzh.LoggedData
	  section.data(35).logicalSrcIdx = 64;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtDW.eo2mbxwqtp.LoggedData
	  section.data(36).logicalSrcIdx = 65;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtDW.c12ldaiyh0
	  section.data(37).logicalSrcIdx = 66;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtDW.krqurhqe5y
	  section.data(38).logicalSrcIdx = 67;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtDW.nna3b5urvj
	  section.data(39).logicalSrcIdx = 68;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtDW.iouz0hzzff
	  section.data(40).logicalSrcIdx = 69;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtDW.cyz32aqdti
	  section.data(41).logicalSrcIdx = 70;
	  section.data(41).dtTransOffset = 40;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.h4aljpv1cn
	  section.data(1).logicalSrcIdx = 71;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtDW.aanf40bm32.PrevIndex
	  section.data(1).logicalSrcIdx = 72;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.k0p41gumgr.PrevIndex
	  section.data(2).logicalSrcIdx = 73;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.kqviwtyywd.PrevIndex
	  section.data(3).logicalSrcIdx = 74;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.f1homicqdz.PrevIndex
	  section.data(4).logicalSrcIdx = 75;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.mmcrb4wiru
	  section.data(5).logicalSrcIdx = 76;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.bschfredd1
	  section.data(6).logicalSrcIdx = 77;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.edx0zygcli
	  section.data(1).logicalSrcIdx = 78;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.o3ajckmd2u
	  section.data(2).logicalSrcIdx = 79;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.cngerysgtf
	  section.data(3).logicalSrcIdx = 80;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.epflee4abz
	  section.data(4).logicalSrcIdx = 81;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 1872870915;
  targMap.checksum1 = 323335718;
  targMap.checksum2 = 3744814416;
  targMap.checksum3 = 3555727120;

