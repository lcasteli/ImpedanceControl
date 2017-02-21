#include "__cf_Walk_Sim4.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "sm_ssci_run_time_errors.h"
PmfMessageId Walk_Sim4_6bedce81_1_checkDynamics ( const double * state ,
const double * input , const double * inputDot , const double * inputDdot ,
const double * discreteState , double * result , NeuDiagnosticManager *
neDiagMgr ) { double xx [ 57 ] ; ( void ) input ; ( void ) inputDot ; ( void
) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] = -
0.0395652553937987 ; xx [ 1 ] = 0.1206627306804083 ; xx [ 2 ] = -
0.2205980134044125 ; xx [ 3 ] = - 0.2705945141749849 ; xx [ 4 ] =
0.6532902568751174 ; xx [ 5 ] = 0.6532726092418986 ; xx [ 6 ] = -
0.2706018240602396 ; xx [ 7 ] = 0.5 ; xx [ 8 ] = xx [ 7 ] * state [ 15 ] ; xx
[ 10 ] = 1.910165910595785e-5 ; xx [ 11 ] = sin ( xx [ 8 ] ) ; xx [ 9 ] =
0.7071070386876468 ; xx [ 14 ] = 0.7071065234273504 ; xx [ 16 ] = cos ( xx [
8 ] ) ; xx [ 17 ] = - xx [ 10 ] * xx [ 11 ] ; xx [ 18 ] = - xx [ 9 ] * xx [
11 ] ; xx [ 19 ] = - xx [ 14 ] * xx [ 11 ] ; pm_math_quatCompose ( xx + 3 ,
xx + 16 , xx + 20 ) ; xx [ 3 ] = - 0.3826832639272861 ; xx [ 4 ] =
0.9238796021743757 ; xx [ 5 ] = - 1.312118906154905e-5 ; xx [ 6 ] =
4.889913705063975e-6 ; xx [ 8 ] = xx [ 7 ] * state [ 17 ] ; xx [ 7 ] =
2.375713491786503e-8 ; xx [ 11 ] = sin ( xx [ 8 ] ) ; xx [ 13 ] =
3.743209958208291e-11 ; xx [ 15 ] = cos ( xx [ 8 ] ) ; xx [ 16 ] = - xx [ 7 ]
* xx [ 11 ] ; xx [ 17 ] = xx [ 13 ] * xx [ 11 ] ; xx [ 18 ] = - xx [ 11 ] ;
pm_math_quatCompose ( xx + 3 , xx + 15 , xx + 24 ) ; pm_math_quatCompose ( xx
+ 20 , xx + 24 , xx + 3 ) ; xx [ 8 ] = 1.0 ; pm_math_quatXform ( xx + 3 , xx
+ 0 , xx + 15 ) ; xx [ 28 ] = - 0.08771541913364658 ; xx [ 29 ] =
1.078809183824322e-5 ; xx [ 30 ] = - 3.057374240528095e-8 ; pm_math_quatXform
( xx + 24 , xx + 28 , xx + 31 ) ; xx [ 28 ] = - xx [ 31 ] ; xx [ 29 ] = - (
1.848830149241486e-15 + xx [ 32 ] ) ; xx [ 30 ] = - ( 5.071415708866186e-9 +
xx [ 33 ] ) ; pm_math_quatXform ( xx + 20 , xx + 28 , xx + 31 ) ; xx [ 34 ] =
1.671395057516844e-7 ; xx [ 35 ] = 6.187186568194987e-3 ; xx [ 36 ] =
6.18717698825356e-3 ; pm_math_quatXform ( xx + 20 , xx + 34 , xx + 37 ) ; xx
[ 11 ] = xx [ 31 ] - xx [ 37 ] - 1.001751448546223e-8 ; xx [ 18 ] = xx [ 15 ]
+ xx [ 11 ] + 0.220599 ; xx [ 12 ] = xx [ 32 ] - xx [ 38 ] +
0.04814999999999942 ; xx [ 21 ] = 0.02539999999999929 ; xx [ 22 ] = xx [ 16 ]
+ xx [ 12 ] - xx [ 21 ] ; xx [ 15 ] = xx [ 33 ] - xx [ 39 ] -
8.752018279986853e-3 ; xx [ 31 ] = 0.12065 ; xx [ 32 ] = xx [ 17 ] + xx [ 15
] - xx [ 31 ] ; xx [ 16 ] = sqrt ( xx [ 18 ] * xx [ 18 ] + xx [ 22 ] * xx [
22 ] + xx [ 32 ] * xx [ 32 ] ) ; if ( xx [ 16 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ForceUndefined" ,
 "'Walk_Sim4/Gait Emulator/Walkway & force plate/Force Plate/Spring1' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 17 ] = xx [ 8 ] / xx [ 16 ] ; xx [ 20 ] = 1.2e4 ; xx [
23 ] = 0.095 ; xx [ 33 ] = 100.0 ; xx [ 34 ] = - 0.4999996439106214 ; xx [ 35
] = - 0.5000003442105691 ; xx [ 36 ] = - 0.4999996558078935 ; xx [ 37 ] =
0.5000003560704259 ; pm_math_quatCompose ( xx + 3 , xx + 34 , xx + 38 ) ; xx
[ 42 ] = - xx [ 10 ] * state [ 16 ] ; xx [ 43 ] = - xx [ 9 ] * state [ 16 ] ;
xx [ 44 ] = - xx [ 14 ] * state [ 16 ] ; pm_math_cross3 ( xx + 42 , xx + 28 ,
xx + 45 ) ; xx [ 28 ] = xx [ 45 ] - 3.586032427602137e-9 * state [ 16 ] ; xx
[ 29 ] = xx [ 46 ] + 8.918159271208881e-14 * state [ 16 ] ; xx [ 30 ] = xx [
47 ] + 7.690831401850464e-15 * state [ 16 ] ; pm_math_quatInverseXform ( xx +
24 , xx + 28 , xx + 45 ) ; xx [ 9 ] = xx [ 45 ] - 1.078809183824208e-5 *
state [ 18 ] ; pm_math_quatInverseXform ( xx + 24 , xx + 42 , xx + 28 ) ; xx
[ 25 ] = xx [ 28 ] - xx [ 7 ] * state [ 18 ] ; xx [ 26 ] = xx [ 29 ] + xx [
13 ] * state [ 18 ] ; xx [ 27 ] = xx [ 30 ] - state [ 18 ] ; pm_math_cross3 (
xx + 25 , xx + 0 , xx + 28 ) ; xx [ 7 ] = xx [ 46 ] - 0.08771541913364594 *
state [ 18 ] ; xx [ 13 ] = xx [ 47 ] - 3.027078150587337e-12 * state [ 18 ] ;
xx [ 42 ] = xx [ 9 ] + xx [ 28 ] ; xx [ 43 ] = xx [ 7 ] + xx [ 29 ] ; xx [ 44
] = xx [ 13 ] + xx [ 30 ] ; pm_math_quatInverseXform ( xx + 34 , xx + 42 , xx
+ 28 ) ; pm_math_quatXform ( xx + 38 , xx + 28 , xx + 42 ) ; xx [ 28 ] = xx [
18 ] ; xx [ 29 ] = xx [ 22 ] ; xx [ 30 ] = xx [ 32 ] ; xx [ 10 ] = xx [ 20 ]
* ( xx [ 16 ] - xx [ 23 ] ) + xx [ 33 ] * pm_math_dot3 ( xx + 42 , xx + 28 )
/ xx [ 16 ] ; xx [ 28 ] = - xx [ 17 ] * xx [ 18 ] * xx [ 10 ] ; xx [ 29 ] = -
xx [ 17 ] * xx [ 22 ] * xx [ 10 ] ; xx [ 30 ] = - xx [ 17 ] * xx [ 32 ] * xx
[ 10 ] ; pm_math_quatInverseXform ( xx + 3 , xx + 28 , xx + 16 ) ;
pm_math_cross3 ( xx + 0 , xx + 16 , xx + 28 ) ; xx [ 0 ] = -
0.03956559334952518 ; xx [ 1 ] = - 0.1206372693193551 ; xx [ 2 ] = -
0.2205980134134368 ; pm_math_quatXform ( xx + 3 , xx + 0 , xx + 42 ) ; xx [
10 ] = xx [ 42 ] + xx [ 11 ] + 0.220599 ; xx [ 14 ] = xx [ 43 ] + xx [ 12 ] -
xx [ 21 ] ; xx [ 19 ] = 0.12065 ; xx [ 22 ] = xx [ 44 ] + xx [ 15 ] + xx [ 19
] ; xx [ 24 ] = sqrt ( xx [ 10 ] * xx [ 10 ] + xx [ 14 ] * xx [ 14 ] + xx [
22 ] * xx [ 22 ] ) ; if ( xx [ 24 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ForceUndefined" ,
 "'Walk_Sim4/Gait Emulator/Walkway & force plate/Force Plate/Spring2' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 32 ] = xx [ 8 ] / xx [ 24 ] ; pm_math_cross3 ( xx + 25
, xx + 0 , xx + 42 ) ; xx [ 45 ] = xx [ 9 ] + xx [ 42 ] ; xx [ 46 ] = xx [ 7
] + xx [ 43 ] ; xx [ 47 ] = xx [ 13 ] + xx [ 44 ] ; pm_math_quatInverseXform
( xx + 34 , xx + 45 , xx + 42 ) ; pm_math_quatXform ( xx + 38 , xx + 42 , xx
+ 45 ) ; xx [ 42 ] = xx [ 10 ] ; xx [ 43 ] = xx [ 14 ] ; xx [ 44 ] = xx [ 22
] ; xx [ 48 ] = xx [ 20 ] * ( xx [ 24 ] - xx [ 23 ] ) + xx [ 33 ] *
pm_math_dot3 ( xx + 45 , xx + 42 ) / xx [ 24 ] ; xx [ 42 ] = - xx [ 32 ] * xx
[ 10 ] * xx [ 48 ] ; xx [ 43 ] = - xx [ 32 ] * xx [ 14 ] * xx [ 48 ] ; xx [
44 ] = - xx [ 32 ] * xx [ 22 ] * xx [ 48 ] ; pm_math_quatInverseXform ( xx +
3 , xx + 42 , xx + 45 ) ; pm_math_cross3 ( xx + 0 , xx + 45 , xx + 42 ) ; xx
[ 0 ] = - 0.03956558286792611 ; xx [ 1 ] = - 0.1206372693358699 ; xx [ 2 ] =
0.2205999865865631 ; pm_math_quatXform ( xx + 3 , xx + 0 , xx + 48 ) ; xx [
10 ] = xx [ 48 ] + xx [ 11 ] - 0.220599 ; xx [ 14 ] = xx [ 49 ] + xx [ 12 ] -
xx [ 21 ] ; xx [ 22 ] = xx [ 50 ] + xx [ 15 ] + xx [ 19 ] ; xx [ 19 ] = sqrt
( xx [ 10 ] * xx [ 10 ] + xx [ 14 ] * xx [ 14 ] + xx [ 22 ] * xx [ 22 ] ) ;
if ( xx [ 19 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ForceUndefined" ,
 "'Walk_Sim4/Gait Emulator/Walkway & force plate/Force Plate/Spring3' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 24 ] = xx [ 8 ] / xx [ 19 ] ; pm_math_cross3 ( xx + 25
, xx + 0 , xx + 48 ) ; xx [ 51 ] = xx [ 9 ] + xx [ 48 ] ; xx [ 52 ] = xx [ 7
] + xx [ 49 ] ; xx [ 53 ] = xx [ 13 ] + xx [ 50 ] ; pm_math_quatInverseXform
( xx + 34 , xx + 51 , xx + 48 ) ; pm_math_quatXform ( xx + 38 , xx + 48 , xx
+ 51 ) ; xx [ 48 ] = xx [ 10 ] ; xx [ 49 ] = xx [ 14 ] ; xx [ 50 ] = xx [ 22
] ; xx [ 32 ] = xx [ 20 ] * ( xx [ 19 ] - xx [ 23 ] ) + xx [ 33 ] *
pm_math_dot3 ( xx + 51 , xx + 48 ) / xx [ 19 ] ; xx [ 48 ] = - xx [ 24 ] * xx
[ 10 ] * xx [ 32 ] ; xx [ 49 ] = - xx [ 24 ] * xx [ 14 ] * xx [ 32 ] ; xx [
50 ] = - xx [ 24 ] * xx [ 22 ] * xx [ 32 ] ; pm_math_quatInverseXform ( xx +
3 , xx + 48 , xx + 51 ) ; pm_math_cross3 ( xx + 0 , xx + 51 , xx + 48 ) ; xx
[ 0 ] = - 0.03956524491219966 ; xx [ 1 ] = 0.1206627306638935 ; xx [ 2 ] =
0.2205999865955874 ; pm_math_quatXform ( xx + 3 , xx + 0 , xx + 54 ) ; xx [
10 ] = xx [ 54 ] + xx [ 11 ] - 0.2205990000000001 ; xx [ 14 ] = xx [ 55 ] +
xx [ 12 ] - xx [ 21 ] ; xx [ 19 ] = xx [ 56 ] + xx [ 15 ] - xx [ 31 ] ; xx [
21 ] = sqrt ( xx [ 10 ] * xx [ 10 ] + xx [ 14 ] * xx [ 14 ] + xx [ 19 ] * xx
[ 19 ] ) ; if ( xx [ 21 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ForceUndefined" ,
 "'Walk_Sim4/Gait Emulator/Walkway & force plate/Force Plate/Spring4' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 11 ] = xx [ 8 ] / xx [ 21 ] ; pm_math_cross3 ( xx + 25
, xx + 0 , xx + 54 ) ; xx [ 24 ] = xx [ 9 ] + xx [ 54 ] ; xx [ 25 ] = xx [ 7
] + xx [ 55 ] ; xx [ 26 ] = xx [ 13 ] + xx [ 56 ] ; pm_math_quatInverseXform
( xx + 34 , xx + 24 , xx + 7 ) ; pm_math_quatXform ( xx + 38 , xx + 7 , xx +
24 ) ; xx [ 7 ] = xx [ 10 ] ; xx [ 8 ] = xx [ 14 ] ; xx [ 9 ] = xx [ 19 ] ;
xx [ 13 ] = xx [ 20 ] * ( xx [ 21 ] - xx [ 23 ] ) + xx [ 33 ] * pm_math_dot3
( xx + 24 , xx + 7 ) / xx [ 21 ] ; xx [ 7 ] = - xx [ 11 ] * xx [ 10 ] * xx [
13 ] ; xx [ 8 ] = - xx [ 11 ] * xx [ 14 ] * xx [ 13 ] ; xx [ 9 ] = - xx [ 11
] * xx [ 19 ] * xx [ 13 ] ; pm_math_quatInverseXform ( xx + 3 , xx + 7 , xx +
10 ) ; pm_math_cross3 ( xx + 0 , xx + 10 , xx + 3 ) ; xx [ 0 ] = xx [ 28 ] +
xx [ 42 ] + xx [ 48 ] + xx [ 3 ] ; xx [ 2 ] = xx [ 29 ] + xx [ 43 ] + xx [ 49
] + xx [ 4 ] ; xx [ 4 ] = xx [ 30 ] + xx [ 44 ] + xx [ 50 ] + xx [ 5 ] ; xx [
6 ] = xx [ 16 ] + xx [ 45 ] + xx [ 51 ] + xx [ 10 ] ; xx [ 8 ] = xx [ 17 ] +
xx [ 46 ] + xx [ 52 ] + xx [ 11 ] ; xx [ 10 ] = xx [ 18 ] + xx [ 47 ] + xx [
53 ] + xx [ 12 ] ; result [ 0 ] = xx [ 0 ] * xx [ 0 ] + xx [ 2 ] * xx [ 2 ] +
xx [ 4 ] * xx [ 4 ] + xx [ 6 ] * xx [ 6 ] + xx [ 8 ] * xx [ 8 ] + xx [ 10 ] *
xx [ 10 ] ; return NULL ; }
