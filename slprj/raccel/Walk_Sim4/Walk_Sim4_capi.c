#include "__cf_Walk_Sim4.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Walk_Sim4_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Walk_Sim4.h"
#include "Walk_Sim4_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Walk_Sim4/From Workspace" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
1 , 0 , TARGET_STRING ( "Walk_Sim4/From Workspace2" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING ( "Walk_Sim4/Sine Wave4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/Sum" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/Sum1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Filter" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Saturate" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/SumD" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Filter" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Saturate" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/SumD" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_10_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_11_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_12_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_13_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_13_1_2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_13_1_3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_14_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_15_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_16_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_17_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_17_1_2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_17_1_3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_18_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_19_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 38 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_20_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_21_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 40 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_22_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 42 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 43 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_5_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_6_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 46 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_7_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_8_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_9_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 49 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_9_1_2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 50 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/INPUT_9_1_3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 52 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/OUTPUT_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Solver Configuration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 54 , 1 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Walkway & force plate/FP Contact/MATLAB Function" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 55 , 1 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Walkway & force plate/FP Contact/MATLAB Function" )
, TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 56 , 2 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Walkway & force plate/Ground Contact1/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 57 , 2 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Walkway & force plate/Ground Contact1/MATLAB Function"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 58 , 3 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Walkway & force plate/Ground Contact2/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 59 , 3 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Walkway & force plate/Ground Contact2/MATLAB Function"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 60 , TARGET_STRING ( "Walk_Sim4/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 61 , TARGET_STRING (
"Walk_Sim4/From Workspace" ) , TARGET_STRING ( "Time0" ) , 0 , 6 , 0 } , { 62
, TARGET_STRING ( "Walk_Sim4/From Workspace" ) , TARGET_STRING ( "Data0" ) ,
0 , 7 , 0 } , { 63 , TARGET_STRING ( "Walk_Sim4/From Workspace1" ) ,
TARGET_STRING ( "Time0" ) , 0 , 6 , 0 } , { 64 , TARGET_STRING (
"Walk_Sim4/From Workspace1" ) , TARGET_STRING ( "Data0" ) , 0 , 6 , 0 } , {
65 , TARGET_STRING ( "Walk_Sim4/From Workspace2" ) , TARGET_STRING ( "Time0"
) , 0 , 6 , 0 } , { 66 , TARGET_STRING ( "Walk_Sim4/From Workspace2" ) ,
TARGET_STRING ( "Data0" ) , 0 , 7 , 0 } , { 67 , TARGET_STRING (
"Walk_Sim4/From Workspace9" ) , TARGET_STRING ( "Time0" ) , 0 , 6 , 0 } , {
68 , TARGET_STRING ( "Walk_Sim4/From Workspace9" ) , TARGET_STRING ( "Data0"
) , 0 , 6 , 0 } , { 69 , TARGET_STRING ( "Walk_Sim4/Sine Wave4" ) ,
TARGET_STRING ( "Amplitude" ) , 0 , 1 , 0 } , { 70 , TARGET_STRING (
"Walk_Sim4/Sine Wave4" ) , TARGET_STRING ( "Bias" ) , 0 , 1 , 0 } , { 71 ,
TARGET_STRING ( "Walk_Sim4/Sine Wave4" ) , TARGET_STRING ( "Frequency" ) , 0
, 1 , 0 } , { 72 , TARGET_STRING ( "Walk_Sim4/Sine Wave4" ) , TARGET_STRING (
"SinH" ) , 0 , 1 , 0 } , { 73 , TARGET_STRING ( "Walk_Sim4/Sine Wave4" ) ,
TARGET_STRING ( "CosH" ) , 0 , 1 , 0 } , { 74 , TARGET_STRING (
"Walk_Sim4/Sine Wave4" ) , TARGET_STRING ( "SinPhi" ) , 0 , 1 , 0 } , { 75 ,
TARGET_STRING ( "Walk_Sim4/Sine Wave4" ) , TARGET_STRING ( "CosPhi" ) , 0 , 1
, 0 } , { 76 , TARGET_STRING (
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Derivative Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 77 , TARGET_STRING (
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Filter Coefficient"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 78 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Integral Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 79 , TARGET_STRING (
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Proportional Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 80 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Filter" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 81 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 82 , TARGET_STRING
( "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Saturate"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 1 , 0 } , { 83 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Saturate" )
, TARGET_STRING ( "LowerLimit" ) , 0 , 1 , 0 } , { 84 , TARGET_STRING (
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Derivative Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 85 , TARGET_STRING (
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Filter Coefficient"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 86 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Integral Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 87 , TARGET_STRING (
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Proportional Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 88 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Filter" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 89 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 90 , TARGET_STRING
( "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Saturate"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 1 , 0 } , { 91 , TARGET_STRING (
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Saturate" )
, TARGET_STRING ( "LowerLimit" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] =
{ { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . gcpbvidrnc [ 0 ] , & rtB .
i5pngojnqr [ 0 ] , & rtB . izulu4xivv , & rtB . lji3oip3eh , & rtB .
kbkny1y404 , & rtB . ftzc33eq5a , & rtB . czawg3xijz , & rtB . mxe1jfb20d , &
rtB . hxu10aja3n , & rtB . g1qnevlihp , & rtB . b0em5jvgbh , & rtB .
agaj15tfxi , & rtB . ggozmdzmm5 , & rtB . ptnjmn1blx , & rtB . evn4akd3fq , &
rtB . kdtqmrecw1 , & rtB . jvhlqsjoa5 , & rtB . h5j1pq2oet , & rtB .
j5dq3zbm12 , & rtB . aigqxjxfq3 , & rtB . hih35pqonz , & rtB . a4eplwnvip , &
rtB . avbvpd3knl , & rtB . gck1x5c55z [ 0 ] , & rtB . lneeaq3ggn [ 0 ] , &
rtB . jzvmovor4f [ 0 ] , & rtB . nyjkrhoabu [ 0 ] , & rtB . nskx41j5ik [ 0 ]
, & rtB . o31xe204ix [ 0 ] , & rtB . gstkjtwy5v [ 0 ] , & rtB . lmqf1lcrpl [
0 ] , & rtB . ig3bwkisun [ 0 ] , & rtB . piq3dxclaf [ 0 ] , & rtB .
ipue3gycmh [ 0 ] , & rtB . ignnz2fkm0 [ 0 ] , & rtB . c11psdq1sa [ 0 ] , &
rtB . iejevtu2b2 [ 0 ] , & rtB . giy1h5ky1s [ 0 ] , & rtB . nptbn3r2vs [ 0 ]
, & rtB . iegxcysk54 [ 0 ] , & rtB . bhfomtbk3s [ 0 ] , & rtB . a2a4hpyrz2 [
0 ] , & rtB . avffaxkxts [ 0 ] , & rtB . lron4andxg [ 0 ] , & rtB .
aopnf0g0rt [ 0 ] , & rtB . jd3yc3sozl [ 0 ] , & rtB . cpcxsiqkk2 [ 0 ] , &
rtB . anyhha524k [ 0 ] , & rtB . ngt2nzthph [ 0 ] , & rtB . oagxdgsciz [ 0 ]
, & rtB . byrhxyhu2y [ 0 ] , & rtB . mhcsmwu1e3 [ 0 ] , & rtB . p0ja4kahop [
0 ] , & rtB . fff0lbkzmp [ 0 ] , & rtB . cbshgsh2c0 [ 0 ] , & rtB .
aaktuvfa1z [ 0 ] , & rtB . n1b4dgswxn . ptbvgl0xdm [ 0 ] , & rtB . n1b4dgswxn
. amj0331tiy [ 0 ] , & rtB . hvkcdvrvj3 . ptbvgl0xdm [ 0 ] , & rtB .
hvkcdvrvj3 . amj0331tiy [ 0 ] , & rtP . Constant3_Value , & rtP .
FromWorkspace_Time0 [ 0 ] , & rtP . FromWorkspace_Data0 [ 0 ] , & rtP .
FromWorkspace1_Time0 [ 0 ] , & rtP . FromWorkspace1_Data0 [ 0 ] , & rtP .
FromWorkspace2_Time0 [ 0 ] , & rtP . FromWorkspace2_Data0 [ 0 ] , & rtP .
FromWorkspace9_Time0 [ 0 ] , & rtP . FromWorkspace9_Data0 [ 0 ] , & rtP .
SineWave4_Amp , & rtP . SineWave4_Bias , & rtP . SineWave4_Freq , & rtP .
SineWave4_Hsin , & rtP . SineWave4_HCos , & rtP . SineWave4_PSin , & rtP .
SineWave4_PCos , & rtP . DerivativeGain_Gain_hb0xklitus , & rtP .
FilterCoefficient_Gain_loae5b3qga , & rtP . IntegralGain_Gain_jydit0z4zb , &
rtP . ProportionalGain_Gain_oxrlybfiwz , & rtP . Filter_IC_ip1faalzbr , & rtP
. Integrator_IC_b2h4rjcnp4 , & rtP . Saturate_UpperSat_fewg3kv1xw , & rtP .
Saturate_LowerSat_l0zqlb52y1 , & rtP . DerivativeGain_Gain , & rtP .
FilterCoefficient_Gain , & rtP . IntegralGain_Gain , & rtP .
ProportionalGain_Gain , & rtP . Filter_IC , & rtP . Integrator_IC , & rtP .
Saturate_UpperSat , & rtP . Saturate_LowerSat , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 3 , 1 , 1 , 1 , 4 , 1 , 65 , 1 , 14 , 1
, 33 , 1 , 378 , 1 , 1134 , 1 } ; static const real_T rtcapiStoredFloats [ ]
= { 0.0 , 0.001 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL
) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 0 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , 2 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 60 , ( NULL ) , 0 , ( NULL ) , 0 } , {
rtBlockParameters , 32 , rtModelParameters , 0 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 1872870915U , 323335718U , 3744814416U ,
3555727120U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
Walk_Sim4_GetCAPIStaticMap ( ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Walk_Sim4_InitializeDataMapInfo ( SimStruct * const rtS ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Walk_Sim4_host_InitializeDataMapInfo ( Walk_Sim4_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
