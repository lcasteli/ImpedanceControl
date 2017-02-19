#include "__cf_Walk_Sim4.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "sm_ssci_run_time_errors.h"
void Walk_Sim4_6bedce81_1_resetStateVector ( const void * mech , double *
state ) { double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx
[ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = 1.0 ;
state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0 ] ;
state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ; state [ 9 ] = xx [ 0 ] ;
state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ; state [ 12 ] = xx [ 0 ] ;
state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ; state [ 15 ] = xx [ 0 ] ;
state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ; state [ 18 ] = xx [ 0 ] ;
state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [ 0 ] ; state [ 21 ] = xx [ 0 ] ;
state [ 22 ] = xx [ 0 ] ; state [ 23 ] = xx [ 0 ] ; state [ 24 ] = xx [ 0 ] ;
state [ 25 ] = xx [ 0 ] ; state [ 26 ] = xx [ 0 ] ; state [ 27 ] = xx [ 0 ] ;
state [ 28 ] = xx [ 0 ] ; state [ 29 ] = xx [ 0 ] ; state [ 30 ] = xx [ 0 ] ;
state [ 31 ] = xx [ 0 ] ; state [ 32 ] = xx [ 0 ] ; state [ 33 ] = xx [ 0 ] ;
state [ 34 ] = xx [ 0 ] ; state [ 35 ] = xx [ 0 ] ; state [ 36 ] = xx [ 0 ] ;
state [ 37 ] = xx [ 0 ] ; state [ 38 ] = xx [ 0 ] ; state [ 39 ] = xx [ 0 ] ;
state [ 40 ] = xx [ 0 ] ; state [ 41 ] = xx [ 0 ] ; state [ 42 ] = xx [ 0 ] ;
state [ 43 ] = xx [ 0 ] ; state [ 44 ] = xx [ 0 ] ; } PmfMessageId
Walk_Sim4_6bedce81_1_initializeTrackedAngleState ( const void * mech , double
* state , void * neDiagMgr0 ) { NeuDiagnosticManager * neDiagMgr = (
NeuDiagnosticManager * ) neDiagMgr0 ; double xx [ 40 ] ; ( void ) mech ; xx [
0 ] = 2.0 ; xx [ 1 ] = - 0.2704361801981385 ; xx [ 2 ] = - 0.6533491792460329
; xx [ 3 ] = - 0.2704345588060376 ; xx [ 4 ] = - 0.653348507170376 ; xx [ 5 ]
= 0.0139948129500692 ; xx [ 6 ] = - 0.01398994455628899 ; xx [ 7 ] =
0.7070593791849739 ; xx [ 8 ] = 0.7068772601862124 ; xx [ 9 ] =
0.6479061989318569 ; xx [ 10 ] = 0.283227010168069 ; xx [ 11 ] = -
0.6478327526628918 ; xx [ 12 ] = 0.2833950293744593 ; xx [ 13 ] = 0.5 ; xx [
14 ] = xx [ 13 ] * state [ 35 ] ; xx [ 16 ] = 1.755163249739233e-6 ; xx [ 17
] = sin ( xx [ 14 ] ) ; xx [ 15 ] = 0.7074588436864477 ; xx [ 20 ] =
0.7067545433081799 ; xx [ 22 ] = cos ( xx [ 14 ] ) ; xx [ 23 ] = xx [ 16 ] *
xx [ 17 ] ; xx [ 24 ] = xx [ 15 ] * xx [ 17 ] ; xx [ 25 ] = - xx [ 20 ] * xx
[ 17 ] ; pm_math_quatCompose ( xx + 9 , xx + 22 , xx + 26 ) ;
pm_math_quatCompose ( xx + 5 , xx + 26 , xx + 9 ) ; xx [ 5 ] = xx [ 13 ] *
state [ 17 ] ; xx [ 6 ] = cos ( xx [ 5 ] ) ; xx [ 7 ] = 1.322560116978622e-11
; xx [ 8 ] = sin ( xx [ 5 ] ) ; xx [ 5 ] = xx [ 6 ] - xx [ 7 ] * xx [ 8 ] ;
xx [ 21 ] = state [ 3 ] ; xx [ 22 ] = state [ 4 ] ; xx [ 23 ] = state [ 5 ] ;
xx [ 24 ] = state [ 6 ] ; xx [ 25 ] = 0.9240143931192876 ; xx [ 26 ] = -
0.382357687652353 ; xx [ 27 ] = 4.753479711208553e-7 ; xx [ 28 ] = -
1.146448133648799e-6 ; pm_math_quatComposeInverse ( xx + 21 , xx + 25 , xx +
29 ) ; xx [ 14 ] = 0.6531857048393208 ; xx [ 17 ] = xx [ 13 ] * state [ 15 ]
; xx [ 13 ] = cos ( xx [ 17 ] ) ; xx [ 18 ] = 0.6531863759394836 ; xx [ 19 ]
= 2.645128560629928e-11 ; xx [ 21 ] = sin ( xx [ 17 ] ) ; xx [ 17 ] = xx [ 19
] * xx [ 21 ] ; xx [ 22 ] = 0.2708275418267761 ; xx [ 33 ] =
0.2708291636228809 ; xx [ 36 ] = - ( xx [ 14 ] * xx [ 13 ] + xx [ 18 ] * xx [
17 ] + xx [ 22 ] * xx [ 21 ] ) ; xx [ 37 ] = xx [ 14 ] * xx [ 21 ] - xx [ 22
] * xx [ 13 ] - xx [ 33 ] * xx [ 17 ] ; xx [ 38 ] = xx [ 18 ] * xx [ 13 ] -
xx [ 14 ] * xx [ 17 ] - xx [ 33 ] * xx [ 21 ] ; xx [ 39 ] = xx [ 33 ] * xx [
13 ] - xx [ 22 ] * xx [ 17 ] + xx [ 18 ] * xx [ 21 ] ; pm_math_quatCompose (
xx + 29 , xx + 36 , xx + 21 ) ; xx [ 13 ] = xx [ 7 ] * xx [ 6 ] + xx [ 8 ] ;
xx [ 29 ] = xx [ 5 ] * xx [ 24 ] - xx [ 21 ] * xx [ 13 ] ; xx [ 30 ] = - ( xx
[ 22 ] * xx [ 13 ] + xx [ 5 ] * xx [ 23 ] ) ; xx [ 31 ] = xx [ 5 ] * xx [ 22
] - xx [ 23 ] * xx [ 13 ] ; xx [ 32 ] = - ( xx [ 24 ] * xx [ 13 ] + xx [ 5 ]
* xx [ 21 ] ) ; pm_math_quatInverseCompose ( xx + 9 , xx + 29 , xx + 21 ) ;
pm_math_quatInverseCompose ( xx + 1 , xx + 21 , xx + 6 ) ; xx [ 1 ] = xx [ 0
] * atan2 ( sqrt ( xx [ 7 ] * xx [ 7 ] + xx [ 8 ] * xx [ 8 ] + xx [ 9 ] * xx
[ 9 ] ) , fabs ( xx [ 6 ] ) ) * ( ( xx [ 6 ] * xx [ 7 ] ) < 0.0 ? - 1.0 : +
1.0 ) ; xx [ 2 ] = ( xx [ 1 ] < 0.0 ? - 1.0 : + 1.0 ) ; xx [ 3 ] =
3.141592653589793 ; xx [ 6 ] = state [ 10 ] ; xx [ 7 ] = state [ 11 ] ; xx [
8 ] = state [ 12 ] ; pm_math_quatXform ( xx + 25 , xx + 6 , xx + 9 ) ;
pm_math_quatInverseXform ( xx + 36 , xx + 9 , xx + 6 ) ; xx [ 9 ] = xx [ 6 ]
- state [ 16 ] ; xx [ 25 ] = xx [ 16 ] * state [ 36 ] ; xx [ 26 ] = xx [ 15 ]
* state [ 36 ] ; xx [ 27 ] = - xx [ 20 ] * state [ 36 ] ;
pm_math_quatInverseXform ( xx + 21 , xx + 25 , xx + 14 ) ; state [ 41 ] = xx
[ 2 ] * ( fmod ( xx [ 3 ] + xx [ 2 ] * xx [ 1 ] , 6.283185307179586 ) - xx [
3 ] ) ; state [ 42 ] = xx [ 9 ] - ( xx [ 5 ] * xx [ 5 ] * xx [ 9 ] - xx [ 5 ]
* ( xx [ 7 ] + xx [ 19 ] * state [ 16 ] ) * xx [ 13 ] ) * xx [ 0 ] - xx [ 14
] ; state [ 43 ] = - xx [ 3 ] ; state [ 44 ] = 0.0 ; return NULL ; } void
Walk_Sim4_6bedce81_1_computeDiscreteState ( const void * mech , double *
state ) { ( void ) mech ; ( void ) state ; } void
Walk_Sim4_6bedce81_1_adjustPosition ( const void * mech , const double *
dofDeltas , double * state ) { double xx [ 14 ] ; ( void ) mech ; xx [ 0 ] =
state [ 3 ] ; xx [ 1 ] = state [ 4 ] ; xx [ 2 ] = state [ 5 ] ; xx [ 3 ] =
state [ 6 ] ; xx [ 4 ] = dofDeltas [ 3 ] ; xx [ 5 ] = dofDeltas [ 4 ] ; xx [
6 ] = dofDeltas [ 5 ] ; pm_math_quatDeriv ( xx + 0 , xx + 4 , xx + 7 ) ; xx [
0 ] = state [ 3 ] + xx [ 7 ] ; xx [ 3 ] = state [ 4 ] + xx [ 8 ] ; xx [ 6 ] =
state [ 5 ] + xx [ 9 ] ; xx [ 9 ] = state [ 6 ] + xx [ 10 ] ; xx [ 12 ] =
sqrt ( xx [ 0 ] * xx [ 0 ] + xx [ 3 ] * xx [ 3 ] + xx [ 6 ] * xx [ 6 ] + xx [
9 ] * xx [ 9 ] ) ; xx [ 13 ] = 1.0e-64 ; if ( xx [ 13 ] > xx [ 12 ] ) xx [ 12
] = xx [ 13 ] ; state [ 0 ] = state [ 0 ] + dofDeltas [ 0 ] ; state [ 1 ] =
state [ 1 ] + dofDeltas [ 1 ] ; state [ 2 ] = state [ 2 ] + dofDeltas [ 2 ] ;
state [ 3 ] = xx [ 0 ] / xx [ 12 ] ; state [ 4 ] = xx [ 3 ] / xx [ 12 ] ;
state [ 5 ] = xx [ 6 ] / xx [ 12 ] ; state [ 6 ] = xx [ 9 ] / xx [ 12 ] ;
state [ 13 ] = state [ 13 ] + dofDeltas [ 6 ] ; state [ 15 ] = state [ 15 ] +
dofDeltas [ 7 ] ; state [ 17 ] = state [ 17 ] + dofDeltas [ 8 ] ; state [ 19
] = state [ 19 ] + dofDeltas [ 9 ] ; state [ 20 ] = state [ 20 ] + dofDeltas
[ 10 ] ; state [ 21 ] = state [ 21 ] + dofDeltas [ 11 ] ; state [ 25 ] =
state [ 25 ] + dofDeltas [ 12 ] ; state [ 27 ] = state [ 27 ] + dofDeltas [
13 ] ; state [ 29 ] = state [ 29 ] + dofDeltas [ 14 ] ; state [ 31 ] = state
[ 31 ] + dofDeltas [ 15 ] ; state [ 33 ] = state [ 33 ] + dofDeltas [ 16 ] ;
state [ 35 ] = state [ 35 ] + dofDeltas [ 17 ] ; state [ 37 ] = state [ 37 ]
+ dofDeltas [ 18 ] ; state [ 39 ] = state [ 39 ] + dofDeltas [ 19 ] ; }
static void perturbState_0_0 ( double mag , double * state ) { state [ 0 ] =
state [ 0 ] + mag ; } static void perturbState_0_0v ( double mag , double *
state ) { state [ 0 ] = state [ 0 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875
* mag ; } static void perturbState_0_1 ( double mag , double * state ) {
state [ 1 ] = state [ 1 ] + mag ; } static void perturbState_0_1v ( double
mag , double * state ) { state [ 1 ] = state [ 1 ] + mag ; state [ 8 ] =
state [ 8 ] - 0.875 * mag ; } static void perturbState_0_2 ( double mag ,
double * state ) { state [ 2 ] = state [ 2 ] + mag ; } static void
perturbState_0_2v ( double mag , double * state ) { state [ 2 ] = state [ 2 ]
+ mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static void
perturbState_0_3 ( double mag , double * state ) { double xx [ 18 ] ; xx [ 0
] = 0.5 * mag ; xx [ 2 ] = fabs ( mag ) ; xx [ 4 ] = 1.0 / ( xx [ 2 ] - floor
( xx [ 2 ] ) + 1.0e-9 ) ; xx [ 2 ] = sin ( xx [ 4 ] ) ; xx [ 5 ] = cos ( xx [
4 ] ) ; xx [ 8 ] = sin ( 2.0 * xx [ 4 ] ) ; xx [ 11 ] = sqrt ( xx [ 2 ] * xx
[ 2 ] + xx [ 5 ] * xx [ 5 ] + xx [ 8 ] * xx [ 8 ] ) ; xx [ 3 ] = sin ( xx [ 0
] ) ; xx [ 14 ] = cos ( xx [ 0 ] ) ; xx [ 15 ] = xx [ 2 ] / xx [ 11 ] * xx [
3 ] ; xx [ 16 ] = xx [ 5 ] / xx [ 11 ] * xx [ 3 ] ; xx [ 17 ] = xx [ 8 ] / xx
[ 11 ] * xx [ 3 ] ; xx [ 0 ] = state [ 3 ] ; xx [ 1 ] = state [ 4 ] ; xx [ 2
] = state [ 5 ] ; xx [ 3 ] = state [ 6 ] ; pm_math_quatCompose ( xx + 14 , xx
+ 0 , xx + 4 ) ; state [ 3 ] = xx [ 4 ] ; state [ 4 ] = xx [ 5 ] ; state [ 5
] = xx [ 6 ] ; state [ 6 ] = xx [ 7 ] ; } static void perturbState_0_3v (
double mag , double * state ) { double xx [ 18 ] ; xx [ 0 ] = 0.5 * mag ; xx
[ 2 ] = fabs ( mag ) ; xx [ 4 ] = 1.0 / ( xx [ 2 ] - floor ( xx [ 2 ] ) +
1.0e-9 ) ; xx [ 2 ] = sin ( xx [ 4 ] ) ; xx [ 5 ] = cos ( xx [ 4 ] ) ; xx [ 8
] = sin ( 2.0 * xx [ 4 ] ) ; xx [ 11 ] = sqrt ( xx [ 2 ] * xx [ 2 ] + xx [ 5
] * xx [ 5 ] + xx [ 8 ] * xx [ 8 ] ) ; xx [ 3 ] = sin ( xx [ 0 ] ) ; xx [ 14
] = cos ( xx [ 0 ] ) ; xx [ 15 ] = xx [ 2 ] / xx [ 11 ] * xx [ 3 ] ; xx [ 16
] = xx [ 5 ] / xx [ 11 ] * xx [ 3 ] ; xx [ 17 ] = xx [ 8 ] / xx [ 11 ] * xx [
3 ] ; xx [ 1 ] = state [ 3 ] ; xx [ 2 ] = state [ 4 ] ; xx [ 3 ] = state [ 5
] ; xx [ 4 ] = state [ 6 ] ; pm_math_quatCompose ( xx + 14 , xx + 1 , xx + 5
) ; state [ 3 ] = xx [ 5 ] ; state [ 4 ] = xx [ 6 ] ; state [ 5 ] = xx [ 7 ]
; state [ 6 ] = xx [ 8 ] ; state [ 10 ] = state [ 10 ] + 1.2 * mag ; state [
11 ] = state [ 11 ] - xx [ 0 ] ; state [ 12 ] = state [ 12 ] + 0.9 * mag ; }
static void perturbState_1_0 ( double mag , double * state ) { state [ 13 ] =
state [ 13 ] + mag ; } static void perturbState_1_0v ( double mag , double *
state ) { state [ 13 ] = state [ 13 ] + mag ; state [ 14 ] = state [ 14 ] -
0.875 * mag ; } static void perturbState_2_0 ( double mag , double * state )
{ state [ 15 ] = state [ 15 ] + mag ; } static void perturbState_2_0v (
double mag , double * state ) { state [ 15 ] = state [ 15 ] + mag ; state [
16 ] = state [ 16 ] - 0.875 * mag ; } static void perturbState_3_0 ( double
mag , double * state ) { state [ 17 ] = state [ 17 ] + mag ; } static void
perturbState_3_0v ( double mag , double * state ) { state [ 17 ] = state [ 17
] + mag ; state [ 18 ] = state [ 18 ] - 0.875 * mag ; } static void
perturbState_4_0 ( double mag , double * state ) { state [ 19 ] = state [ 19
] + mag ; } static void perturbState_4_0v ( double mag , double * state ) {
state [ 19 ] = state [ 19 ] + mag ; state [ 22 ] = state [ 22 ] - 0.875 * mag
; } static void perturbState_4_1 ( double mag , double * state ) { state [ 20
] = state [ 20 ] + mag ; } static void perturbState_4_1v ( double mag ,
double * state ) { state [ 20 ] = state [ 20 ] + mag ; state [ 23 ] = state [
23 ] - 0.875 * mag ; } static void perturbState_4_2 ( double mag , double *
state ) { state [ 21 ] = state [ 21 ] + mag ; } static void perturbState_4_2v
( double mag , double * state ) { state [ 21 ] = state [ 21 ] + mag ; state [
24 ] = state [ 24 ] - 0.875 * mag ; } static void perturbState_5_0 ( double
mag , double * state ) { state [ 25 ] = state [ 25 ] + mag ; } static void
perturbState_5_0v ( double mag , double * state ) { state [ 25 ] = state [ 25
] + mag ; state [ 26 ] = state [ 26 ] - 0.875 * mag ; } static void
perturbState_6_0 ( double mag , double * state ) { state [ 27 ] = state [ 27
] + mag ; } static void perturbState_6_0v ( double mag , double * state ) {
state [ 27 ] = state [ 27 ] + mag ; state [ 28 ] = state [ 28 ] - 0.875 * mag
; } static void perturbState_8_0 ( double mag , double * state ) { state [ 29
] = state [ 29 ] + mag ; } static void perturbState_8_0v ( double mag ,
double * state ) { state [ 29 ] = state [ 29 ] + mag ; state [ 30 ] = state [
30 ] - 0.875 * mag ; } static void perturbState_9_0 ( double mag , double *
state ) { state [ 31 ] = state [ 31 ] + mag ; } static void perturbState_9_0v
( double mag , double * state ) { state [ 31 ] = state [ 31 ] + mag ; state [
32 ] = state [ 32 ] - 0.875 * mag ; } static void perturbState_10_0 ( double
mag , double * state ) { state [ 33 ] = state [ 33 ] + mag ; } static void
perturbState_10_0v ( double mag , double * state ) { state [ 33 ] = state [
33 ] + mag ; state [ 34 ] = state [ 34 ] - 0.875 * mag ; } static void
perturbState_11_0 ( double mag , double * state ) { state [ 35 ] = state [ 35
] + mag ; } static void perturbState_11_0v ( double mag , double * state ) {
state [ 35 ] = state [ 35 ] + mag ; state [ 36 ] = state [ 36 ] - 0.875 * mag
; } static void perturbState_12_0 ( double mag , double * state ) { state [
37 ] = state [ 37 ] + mag ; } static void perturbState_12_0v ( double mag ,
double * state ) { state [ 37 ] = state [ 37 ] + mag ; state [ 38 ] = state [
38 ] - 0.875 * mag ; } static void perturbState_13_0 ( double mag , double *
state ) { state [ 39 ] = state [ 39 ] + mag ; } static void
perturbState_13_0v ( double mag , double * state ) { state [ 39 ] = state [
39 ] + mag ; state [ 40 ] = state [ 40 ] - 0.875 * mag ; } void
Walk_Sim4_6bedce81_1_perturbState ( const void * mech , size_t stageIdx ,
size_t primIdx , double mag , boolean_T doPerturbVelocity , double * state )
{ ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void ) mag ; (
void ) doPerturbVelocity ; ( void ) state ; switch ( ( stageIdx * 6 + primIdx
) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 0 : perturbState_0_0 ( mag ,
state ) ; break ; case 1 : perturbState_0_0v ( mag , state ) ; break ; case 2
: perturbState_0_1 ( mag , state ) ; break ; case 3 : perturbState_0_1v ( mag
, state ) ; break ; case 4 : perturbState_0_2 ( mag , state ) ; break ; case
5 : perturbState_0_2v ( mag , state ) ; break ; case 6 : perturbState_0_3 (
mag , state ) ; break ; case 7 : perturbState_0_3v ( mag , state ) ; break ;
case 12 : perturbState_1_0 ( mag , state ) ; break ; case 13 :
perturbState_1_0v ( mag , state ) ; break ; case 24 : perturbState_2_0 ( mag
, state ) ; break ; case 25 : perturbState_2_0v ( mag , state ) ; break ;
case 36 : perturbState_3_0 ( mag , state ) ; break ; case 37 :
perturbState_3_0v ( mag , state ) ; break ; case 48 : perturbState_4_0 ( mag
, state ) ; break ; case 49 : perturbState_4_0v ( mag , state ) ; break ;
case 50 : perturbState_4_1 ( mag , state ) ; break ; case 51 :
perturbState_4_1v ( mag , state ) ; break ; case 52 : perturbState_4_2 ( mag
, state ) ; break ; case 53 : perturbState_4_2v ( mag , state ) ; break ;
case 60 : perturbState_5_0 ( mag , state ) ; break ; case 61 :
perturbState_5_0v ( mag , state ) ; break ; case 72 : perturbState_6_0 ( mag
, state ) ; break ; case 73 : perturbState_6_0v ( mag , state ) ; break ;
case 96 : perturbState_8_0 ( mag , state ) ; break ; case 97 :
perturbState_8_0v ( mag , state ) ; break ; case 108 : perturbState_9_0 ( mag
, state ) ; break ; case 109 : perturbState_9_0v ( mag , state ) ; break ;
case 120 : perturbState_10_0 ( mag , state ) ; break ; case 121 :
perturbState_10_0v ( mag , state ) ; break ; case 132 : perturbState_11_0 (
mag , state ) ; break ; case 133 : perturbState_11_0v ( mag , state ) ; break
; case 144 : perturbState_12_0 ( mag , state ) ; break ; case 145 :
perturbState_12_0v ( mag , state ) ; break ; case 156 : perturbState_13_0 (
mag , state ) ; break ; case 157 : perturbState_13_0v ( mag , state ) ; break
; } } void Walk_Sim4_6bedce81_1_computeDofBlendMatrix ( const void * mech ,
size_t stageIdx , size_t primIdx , const double * state , int partialType ,
double * matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx *
6 + primIdx ) ) { } } void Walk_Sim4_6bedce81_1_projectPartiallyTargetedPos (
const void * mech , size_t stageIdx , size_t primIdx , const double *
origState , int partialType , double * state ) { ( void ) mech ; ( void )
stageIdx ; ( void ) primIdx ; ( void ) origState ; ( void ) partialType ; (
void ) state ; switch ( ( stageIdx * 6 + primIdx ) ) { } } void
Walk_Sim4_6bedce81_1_propagateMotion ( const void * mech , const double *
state , double * motionData ) { double xx [ 290 ] ; ( void ) mech ; xx [ 0 ]
= state [ 3 ] ; xx [ 1 ] = state [ 4 ] ; xx [ 2 ] = state [ 5 ] ; xx [ 3 ] =
state [ 6 ] ; xx [ 4 ] = 0.9240143931192876 ; xx [ 5 ] = - 0.382357687652353
; xx [ 6 ] = 4.753479711208553e-7 ; xx [ 7 ] = - 1.146448133648799e-6 ;
pm_math_quatComposeInverse ( xx + 0 , xx + 4 , xx + 8 ) ; xx [ 0 ] =
6.591343902079979e-9 ; xx [ 2 ] = 4.647672291017887e-12 ; xx [ 14 ] = xx [ 0
] * xx [ 10 ] + xx [ 2 ] * xx [ 11 ] ; xx [ 1 ] = xx [ 0 ] * xx [ 9 ] ; xx [
16 ] = - xx [ 14 ] ; xx [ 17 ] = xx [ 1 ] ; xx [ 18 ] = xx [ 2 ] * xx [ 9 ] ;
pm_math_cross3 ( xx + 9 , xx + 16 , xx + 19 ) ; xx [ 3 ] = 2.0 ; xx [ 12 ] =
state [ 0 ] - ( xx [ 19 ] - xx [ 8 ] * xx [ 14 ] ) * xx [ 3 ] ; xx [ 13 ] =
state [ 1 ] - xx [ 3 ] * ( xx [ 20 ] + xx [ 8 ] * xx [ 1 ] ) - xx [ 2 ] +
0.1517 ; xx [ 14 ] = state [ 2 ] - ( ( xx [ 2 ] * xx [ 8 ] * xx [ 9 ] + xx [
21 ] ) * xx [ 3 ] - xx [ 0 ] ) ; xx [ 1 ] = 3.385655379519181e-4 ; xx [ 15 ]
= 0.5 ; xx [ 16 ] = xx [ 15 ] * state [ 13 ] ; xx [ 17 ] = cos ( xx [ 16 ] )
; xx [ 19 ] = 0.9237444950219811 ; xx [ 20 ] = sin ( xx [ 16 ] ) ; xx [ 16 ]
= xx [ 1 ] * xx [ 17 ] - xx [ 19 ] * xx [ 20 ] ; xx [ 18 ] =
1.394282752982812e-4 ; xx [ 21 ] = 0.3830091041342462 ; xx [ 23 ] = xx [ 18 ]
* xx [ 17 ] - xx [ 21 ] * xx [ 20 ] ; xx [ 22 ] = xx [ 19 ] * xx [ 17 ] + xx
[ 1 ] * xx [ 20 ] ; xx [ 1 ] = - xx [ 22 ] ; xx [ 19 ] = xx [ 21 ] * xx [ 17
] + xx [ 18 ] * xx [ 20 ] ; xx [ 17 ] = - xx [ 19 ] ; xx [ 18 ] =
0.04062101508027026 ; xx [ 24 ] = xx [ 23 ] ; xx [ 25 ] = xx [ 1 ] ; xx [ 26
] = xx [ 17 ] ; xx [ 20 ] = 0.06932918701200035 ; xx [ 21 ] = xx [ 20 ] * xx
[ 22 ] ; xx [ 27 ] = xx [ 18 ] * xx [ 19 ] + xx [ 23 ] * xx [ 20 ] ; xx [ 19
] = xx [ 18 ] * xx [ 22 ] ; xx [ 29 ] = - xx [ 21 ] ; xx [ 30 ] = - xx [ 27 ]
; xx [ 31 ] = xx [ 19 ] ; pm_math_cross3 ( xx + 24 , xx + 29 , xx + 32 ) ; xx
[ 22 ] = - ( xx [ 18 ] + ( xx [ 32 ] - xx [ 16 ] * xx [ 21 ] ) * xx [ 3 ] ) ;
xx [ 18 ] = xx [ 2 ] - ( xx [ 33 ] - xx [ 16 ] * xx [ 27 ] ) * xx [ 3 ] ; xx
[ 21 ] = - ( xx [ 0 ] + xx [ 20 ] + xx [ 3 ] * ( xx [ 34 ] + xx [ 16 ] * xx [
19 ] ) ) ; xx [ 19 ] = 0.6531857048393208 ; xx [ 20 ] = xx [ 15 ] * state [
15 ] ; xx [ 24 ] = cos ( xx [ 20 ] ) ; xx [ 26 ] = 0.6531863759394836 ; xx [
27 ] = 2.645128560629928e-11 ; xx [ 28 ] = sin ( xx [ 20 ] ) ; xx [ 29 ] = xx
[ 27 ] * xx [ 28 ] ; xx [ 31 ] = 0.2708275418267761 ; xx [ 33 ] = xx [ 19 ] *
xx [ 24 ] + xx [ 26 ] * xx [ 29 ] + xx [ 31 ] * xx [ 28 ] ; xx [ 20 ] = - xx
[ 33 ] ; xx [ 30 ] = 0.2708291636228809 ; xx [ 34 ] = xx [ 19 ] * xx [ 28 ] -
xx [ 31 ] * xx [ 24 ] - xx [ 30 ] * xx [ 29 ] ; xx [ 32 ] = xx [ 26 ] * xx [
24 ] - xx [ 19 ] * xx [ 29 ] - xx [ 30 ] * xx [ 28 ] ; xx [ 19 ] = xx [ 30 ]
* xx [ 24 ] - xx [ 31 ] * xx [ 29 ] + xx [ 26 ] * xx [ 28 ] ; xx [ 24 ] =
8.500000000000068e-3 ; xx [ 25 ] = 0.2887783607120545 ; xx [ 26 ] = xx [ 25 ]
* xx [ 32 ] ; xx [ 28 ] = xx [ 34 ] ; xx [ 29 ] = xx [ 32 ] ; xx [ 30 ] = xx
[ 19 ] ; xx [ 31 ] = xx [ 19 ] * xx [ 24 ] + xx [ 25 ] * xx [ 34 ] ; xx [ 35
] = xx [ 24 ] * xx [ 32 ] ; xx [ 37 ] = - xx [ 26 ] ; xx [ 38 ] = xx [ 31 ] ;
xx [ 39 ] = - xx [ 35 ] ; pm_math_cross3 ( xx + 28 , xx + 37 , xx + 40 ) ; xx
[ 28 ] = 1.491888679546362e-8 + xx [ 24 ] + ( xx [ 26 ] * xx [ 33 ] + xx [ 40
] ) * xx [ 3 ] ; xx [ 24 ] = - xx [ 28 ] ; xx [ 26 ] = 6.014644173113667e-3 +
( xx [ 41 ] - xx [ 33 ] * xx [ 31 ] ) * xx [ 3 ] ; xx [ 29 ] = - xx [ 26 ] ;
xx [ 30 ] = 6.006161522745479e-3 - ( xx [ 3 ] * ( xx [ 42 ] + xx [ 35 ] * xx
[ 33 ] ) - xx [ 25 ] ) ; xx [ 31 ] = 1.322560116978622e-11 ; xx [ 35 ] = xx [
15 ] * state [ 17 ] ; xx [ 36 ] = cos ( xx [ 35 ] ) ; xx [ 38 ] = sin ( xx [
35 ] ) ; xx [ 35 ] = xx [ 31 ] * xx [ 36 ] + xx [ 38 ] ; xx [ 37 ] = 0.0 ; xx
[ 39 ] = xx [ 36 ] - xx [ 31 ] * xx [ 38 ] ; xx [ 31 ] = 0.09863174692125608
; xx [ 38 ] = xx [ 15 ] * state [ 20 ] ; xx [ 41 ] = cos ( xx [ 38 ] ) ; xx [
42 ] = 9.351995539151417e-12 ; xx [ 43 ] = xx [ 15 ] * state [ 21 ] ; xx [ 44
] = cos ( xx [ 43 ] ) ; xx [ 45 ] = xx [ 42 ] * xx [ 44 ] ; xx [ 46 ] =
2.645143785344124e-11 ; xx [ 47 ] = sin ( xx [ 43 ] ) ; xx [ 43 ] = xx [ 46 ]
* xx [ 47 ] ; xx [ 48 ] = xx [ 42 ] * xx [ 43 ] ; xx [ 49 ] =
0.7071067811865476 ; xx [ 50 ] = xx [ 49 ] * xx [ 47 ] ; xx [ 52 ] = xx [ 45
] + xx [ 48 ] + xx [ 50 ] ; xx [ 51 ] = sin ( xx [ 38 ] ) ; xx [ 38 ] = xx [
49 ] * xx [ 44 ] ; xx [ 44 ] = xx [ 42 ] * xx [ 47 ] ; xx [ 47 ] = xx [ 49 ]
* xx [ 43 ] ; xx [ 43 ] = xx [ 38 ] - xx [ 44 ] + xx [ 47 ] ; xx [ 49 ] = xx
[ 41 ] * xx [ 52 ] + xx [ 51 ] * xx [ 43 ] ; xx [ 42 ] = xx [ 15 ] * state [
19 ] ; xx [ 53 ] = cos ( xx [ 42 ] ) ; xx [ 55 ] = xx [ 45 ] - xx [ 48 ] - xx
[ 50 ] ; xx [ 45 ] = xx [ 38 ] - xx [ 47 ] + xx [ 44 ] ; xx [ 38 ] = xx [ 41
] * xx [ 55 ] + xx [ 45 ] * xx [ 51 ] ; xx [ 44 ] = sin ( xx [ 42 ] ) ; xx [
42 ] = xx [ 49 ] * xx [ 53 ] + xx [ 38 ] * xx [ 44 ] ; xx [ 47 ] = xx [ 38 ]
* xx [ 53 ] - xx [ 49 ] * xx [ 44 ] ; xx [ 38 ] = xx [ 41 ] * xx [ 43 ] - xx
[ 51 ] * xx [ 52 ] ; xx [ 43 ] = xx [ 45 ] * xx [ 41 ] - xx [ 51 ] * xx [ 55
] ; xx [ 41 ] = xx [ 53 ] * xx [ 38 ] - xx [ 44 ] * xx [ 43 ] ; xx [ 48 ] =
xx [ 53 ] * xx [ 43 ] + xx [ 44 ] * xx [ 38 ] ; xx [ 38 ] =
0.1150793607120544 ; xx [ 49 ] = - 0.2705945141749849 ; xx [ 50 ] =
0.6532902568751174 ; xx [ 51 ] = 0.6532726092418986 ; xx [ 52 ] = -
0.2706018240602396 ; xx [ 43 ] = xx [ 15 ] * state [ 25 ] ; xx [ 45 ] =
1.910165910595785e-5 ; xx [ 54 ] = sin ( xx [ 43 ] ) ; xx [ 56 ] =
0.7071070386876468 ; xx [ 58 ] = 0.7071065234273504 ; xx [ 60 ] = cos ( xx [
43 ] ) ; xx [ 61 ] = - xx [ 45 ] * xx [ 54 ] ; xx [ 62 ] = - xx [ 56 ] * xx [
54 ] ; xx [ 63 ] = - xx [ 58 ] * xx [ 54 ] ; pm_math_quatCompose ( xx + 49 ,
xx + 60 , xx + 64 ) ; xx [ 49 ] = 1.671395057516844e-7 ; xx [ 50 ] =
6.187186568194987e-3 ; xx [ 51 ] = 6.18717698825356e-3 ; pm_math_quatXform (
xx + 64 , xx + 49 , xx + 59 ) ; xx [ 43 ] = 1.001751448546223e-8 + xx [ 59 ]
; xx [ 49 ] = 0.04814999999999942 - xx [ 60 ] ; xx [ 50 ] =
8.752018279986853e-3 + xx [ 61 ] ; xx [ 59 ] = - 0.3826832639272861 ; xx [ 60
] = 0.9238796021743757 ; xx [ 61 ] = - 1.312118906154905e-5 ; xx [ 62 ] =
4.889913705063975e-6 ; xx [ 52 ] = xx [ 15 ] * state [ 27 ] ; xx [ 54 ] =
2.375713491786503e-8 ; xx [ 55 ] = sin ( xx [ 52 ] ) ; xx [ 57 ] =
3.743209958208291e-11 ; xx [ 69 ] = cos ( xx [ 52 ] ) ; xx [ 70 ] = - xx [ 54
] * xx [ 55 ] ; xx [ 71 ] = xx [ 57 ] * xx [ 55 ] ; xx [ 72 ] = - xx [ 55 ] ;
pm_math_quatCompose ( xx + 59 , xx + 69 , xx + 73 ) ; xx [ 59 ] = -
0.08771541913364658 ; xx [ 60 ] = 1.078809183824322e-5 ; xx [ 61 ] = -
3.057374240528095e-8 ; pm_math_quatXform ( xx + 73 , xx + 59 , xx + 69 ) ; xx
[ 52 ] = - xx [ 69 ] ; xx [ 55 ] = 1.848830149241486e-15 ; xx [ 59 ] = - ( xx
[ 55 ] + xx [ 70 ] ) ; xx [ 60 ] = 5.071415708866186e-9 ; xx [ 62 ] = - ( xx
[ 60 ] + xx [ 71 ] ) ; xx [ 61 ] = 4.951603876933442e-7 ; xx [ 63 ] =
0.7071067895857885 ; xx [ 72 ] = - 4.951868355639957e-7 ; xx [ 78 ] =
0.7071067727869597 ; xx [ 79 ] = 0.01583458085085141 ; xx [ 80 ] = -
3.469188917546366e-7 ; xx [ 81 ] = - 1.472506675461308e-8 ; xx [ 82 ] = -
0.488771237210491 ; xx [ 83 ] = 0.8688660241568518 ; xx [ 84 ] =
0.07133888001692984 ; xx [ 85 ] = - 0.03294349616421144 ; xx [ 86 ] = state [
29 ] - 0.7017121918940203 ; xx [ 87 ] = 1.119707815203533 ; xx [ 88 ] =
0.1650365454702173 ; xx [ 89 ] = - 0.8578129138137675 ; xx [ 90 ] =
0.4993355030609324 ; xx [ 91 ] = 0.04095633244143952 ; xx [ 92 ] = -
0.1146457112593715 ; xx [ 93 ] = 0.2364082607230091 ; xx [ 94 ] =
0.01248981622612128 * state [ 31 ] ; xx [ 95 ] = xx [ 93 ] + xx [ 94 ] ; xx [
96 ] = 0.3263063481368499 ; xx [ 97 ] = 0.8540537474350033 * state [ 31 ] ;
xx [ 98 ] = xx [ 96 ] - xx [ 97 ] ; xx [ 99 ] = 0.1396362516837915 ; xx [ 100
] = 0.5200348074724102 * state [ 31 ] ; xx [ 102 ] = - ( xx [ 99 ] + xx [ 100
] ) ; xx [ 101 ] = 0.07457704069673625 ; xx [ 103 ] = 0.07243809651312444 ;
xx [ 104 ] = - 0.7180962801339385 ; xx [ 105 ] = 0.6881342308243889 ; xx [
106 ] = 7.467718981561455e-3 * state [ 33 ] - 0.1268134545984782 ; xx [ 107 ]
= 0.9990867335093873 * state [ 33 ] - 0.2289672203380519 ; xx [ 108 ] =
0.04207056095128592 * state [ 33 ] - 0.06536422368992957 ; xx [ 109 ] =
0.6479061989318569 ; xx [ 110 ] = 0.283227010168069 ; xx [ 111 ] = -
0.6478327526628918 ; xx [ 112 ] = 0.2833950293744593 ; xx [ 113 ] = xx [ 15 ]
* state [ 35 ] ; xx [ 15 ] = 1.755163249739233e-6 ; xx [ 115 ] = sin ( xx [
113 ] ) ; xx [ 114 ] = 0.7074588436864477 ; xx [ 118 ] = 0.7067545433081799 ;
xx [ 120 ] = cos ( xx [ 113 ] ) ; xx [ 121 ] = xx [ 15 ] * xx [ 115 ] ; xx [
122 ] = xx [ 114 ] * xx [ 115 ] ; xx [ 123 ] = - xx [ 118 ] * xx [ 115 ] ;
pm_math_quatCompose ( xx + 109 , xx + 120 , xx + 124 ) ; xx [ 109 ] =
2.983777524123075e-8 ; xx [ 110 ] = 0.01202680034923488 ; xx [ 111 ] = -
0.01201484041892856 ; pm_math_quatXform ( xx + 124 , xx + 109 , xx + 115 ) ;
xx [ 109 ] = - ( 6.735156427463571e-4 + xx [ 115 ] ) ; xx [ 110 ] =
0.01686440419521255 - xx [ 116 ] ; xx [ 111 ] = - ( 0.4532828338916763 + xx [
117 ] ) ; xx [ 119 ] = xx [ 16 ] ; xx [ 120 ] = xx [ 23 ] ; xx [ 121 ] = xx [
1 ] ; xx [ 122 ] = xx [ 17 ] ; pm_math_quatCompose ( xx + 8 , xx + 119 , xx +
129 ) ; xx [ 115 ] = xx [ 22 ] ; xx [ 116 ] = xx [ 18 ] ; xx [ 117 ] = xx [
21 ] ; pm_math_quatXform ( xx + 8 , xx + 115 , xx + 133 ) ; xx [ 136 ] = xx [
20 ] ; xx [ 137 ] = xx [ 34 ] ; xx [ 138 ] = xx [ 32 ] ; xx [ 139 ] = xx [ 19
] ; pm_math_quatCompose ( xx + 8 , xx + 136 , xx + 140 ) ; xx [ 144 ] = xx [
24 ] ; xx [ 145 ] = xx [ 29 ] ; xx [ 146 ] = xx [ 30 ] ; pm_math_quatXform (
xx + 8 , xx + 144 , xx + 147 ) ; xx [ 112 ] = xx [ 147 ] + xx [ 12 ] ; xx [
113 ] = xx [ 148 ] + xx [ 13 ] ; xx [ 123 ] = xx [ 149 ] + xx [ 14 ] ; xx [
147 ] = xx [ 42 ] ; xx [ 148 ] = xx [ 47 ] ; xx [ 149 ] = xx [ 41 ] ; xx [
150 ] = xx [ 48 ] ; pm_math_quatCompose ( xx + 140 , xx + 147 , xx + 151 ) ;
xx [ 155 ] = xx [ 38 ] * xx [ 142 ] ; xx [ 157 ] = xx [ 38 ] * xx [ 141 ] ;
pm_math_quatCompose ( xx + 136 , xx + 147 , xx + 160 ) ; xx [ 164 ] = xx [ 38
] * xx [ 32 ] ; xx [ 166 ] = xx [ 38 ] * xx [ 34 ] ; pm_math_quatCompose ( xx
+ 64 , xx + 73 , xx + 169 ) ; xx [ 173 ] = xx [ 52 ] ; xx [ 174 ] = xx [ 59 ]
; xx [ 175 ] = xx [ 62 ] ; pm_math_quatXform ( xx + 64 , xx + 173 , xx + 176
) ; xx [ 68 ] = xx [ 176 ] - xx [ 43 ] ; xx [ 179 ] = xx [ 177 ] + xx [ 49 ]
; xx [ 176 ] = xx [ 178 ] - xx [ 50 ] ; xx [ 180 ] = xx [ 61 ] ; xx [ 181 ] =
xx [ 63 ] ; xx [ 182 ] = xx [ 72 ] ; xx [ 183 ] = xx [ 78 ] ;
pm_math_quatCompose ( xx + 169 , xx + 180 , xx + 184 ) ; pm_math_quatXform (
xx + 169 , xx + 79 , xx + 188 ) ; pm_math_quatCompose ( xx + 73 , xx + 180 ,
xx + 191 ) ; pm_math_quatXform ( xx + 73 , xx + 79 , xx + 195 ) ; xx [ 51 ] =
- 0.02127998352011218 ; xx [ 178 ] = - 0.9962147793692904 ; xx [ 198 ] =
1.948216284282225e-3 ; xx [ 199 ] = 0.0842584127603373 ; xx [ 200 ] = xx [ 95
] ; xx [ 201 ] = xx [ 98 ] ; xx [ 202 ] = xx [ 102 ] ; pm_math_quatXform ( xx
+ 82 , xx + 200 , xx + 203 ) ; xx [ 200 ] = xx [ 203 ] + xx [ 86 ] ; xx [ 201
] = xx [ 204 ] + xx [ 87 ] ; xx [ 202 ] = xx [ 205 ] + xx [ 88 ] ; xx [ 203 ]
= 0.0139948129500692 ; xx [ 204 ] = - 0.01398994455628899 ; xx [ 205 ] =
0.7070593791849739 ; xx [ 206 ] = 0.7068772601862124 ; xx [ 207 ] = xx [ 51 ]
; xx [ 208 ] = xx [ 178 ] ; xx [ 209 ] = xx [ 198 ] ; xx [ 210 ] = xx [ 199 ]
; pm_math_quatXform ( xx + 207 , xx + 106 , xx + 211 ) ; xx [ 207 ] = xx [
211 ] + xx [ 200 ] ; xx [ 208 ] = xx [ 212 ] + xx [ 201 ] ; xx [ 209 ] = xx [
213 ] + xx [ 202 ] ; pm_math_quatCompose ( xx + 203 , xx + 124 , xx + 210 ) ;
pm_math_quatXform ( xx + 203 , xx + 109 , xx + 214 ) ; xx [ 217 ] = xx [ 31 ]
* xx [ 142 ] ; xx [ 219 ] = xx [ 31 ] * xx [ 141 ] ; xx [ 222 ] = xx [ 101 ]
; xx [ 223 ] = xx [ 103 ] ; xx [ 224 ] = xx [ 104 ] ; xx [ 225 ] = xx [ 105 ]
; pm_math_quatCompose ( xx + 222 , xx + 124 , xx + 226 ) ; pm_math_quatXform
( xx + 222 , xx + 109 , xx + 230 ) ; xx [ 233 ] = xx [ 230 ] + xx [ 106 ] ;
xx [ 234 ] = xx [ 231 ] + xx [ 107 ] ; xx [ 230 ] = xx [ 232 ] + xx [ 108 ] ;
pm_math_quatCompose ( xx + 89 , xx + 226 , xx + 235 ) ; xx [ 239 ] = xx [ 233
] ; xx [ 240 ] = xx [ 234 ] ; xx [ 241 ] = xx [ 230 ] ; pm_math_quatXform (
xx + 89 , xx + 239 , xx + 242 ) ; xx [ 231 ] = xx [ 31 ] * xx [ 34 ] ; xx [
239 ] = xx [ 31 ] * xx [ 32 ] ; xx [ 245 ] = state [ 10 ] ; xx [ 246 ] =
state [ 11 ] ; xx [ 247 ] = state [ 12 ] ; pm_math_quatXform ( xx + 4 , xx +
245 , xx + 248 ) ; xx [ 245 ] = state [ 7 ] ; xx [ 246 ] = state [ 8 ] ; xx [
247 ] = state [ 9 ] ; pm_math_quatInverseXform ( xx + 8 , xx + 245 , xx + 251
) ; xx [ 245 ] = xx [ 251 ] + xx [ 0 ] * xx [ 249 ] + xx [ 2 ] * xx [ 250 ] ;
xx [ 246 ] = xx [ 252 ] - xx [ 0 ] * xx [ 248 ] ; xx [ 0 ] = xx [ 253 ] - xx
[ 2 ] * xx [ 248 ] ; pm_math_quatInverseXform ( xx + 119 , xx + 248 , xx +
252 ) ; pm_math_cross3 ( xx + 248 , xx + 115 , xx + 255 ) ; xx [ 115 ] = xx [
255 ] + xx [ 245 ] ; xx [ 116 ] = xx [ 256 ] + xx [ 246 ] ; xx [ 117 ] = xx [
257 ] + xx [ 0 ] ; pm_math_quatInverseXform ( xx + 119 , xx + 115 , xx + 255
) ; pm_math_quatInverseXform ( xx + 136 , xx + 248 , xx + 115 ) ; xx [ 2 ] =
xx [ 115 ] - state [ 16 ] ; xx [ 119 ] = xx [ 116 ] + xx [ 27 ] * state [ 16
] ; pm_math_cross3 ( xx + 248 , xx + 144 , xx + 120 ) ; xx [ 258 ] = xx [ 120
] + xx [ 245 ] ; xx [ 259 ] = xx [ 121 ] + xx [ 246 ] ; xx [ 260 ] = xx [ 122
] + xx [ 0 ] ; pm_math_quatInverseXform ( xx + 136 , xx + 258 , xx + 120 ) ;
xx [ 115 ] = xx [ 120 ] + 7.638558896113468e-12 * state [ 16 ] ; xx [ 116 ] =
xx [ 121 ] + xx [ 25 ] * state [ 16 ] ; xx [ 25 ] = xx [ 39 ] * xx [ 2 ] ; xx
[ 120 ] = xx [ 39 ] * xx [ 119 ] ; xx [ 136 ] = xx [ 119 ] * xx [ 31 ] + xx [
115 ] ; xx [ 137 ] = xx [ 39 ] * xx [ 136 ] ; xx [ 139 ] = xx [ 116 ] - xx [
31 ] * xx [ 2 ] ; xx [ 247 ] = xx [ 39 ] * xx [ 139 ] ; xx [ 258 ] = xx [ 2 ]
; xx [ 259 ] = xx [ 119 ] ; xx [ 260 ] = xx [ 117 ] ;
pm_math_quatInverseXform ( xx + 147 , xx + 258 , xx + 261 ) ; xx [ 258 ] = xx
[ 47 ] ; xx [ 259 ] = xx [ 41 ] ; xx [ 260 ] = xx [ 48 ] ; xx [ 251 ] = xx [
48 ] * xx [ 46 ] ; xx [ 264 ] = xx [ 47 ] - xx [ 46 ] * xx [ 41 ] ; xx [ 266
] = xx [ 48 ] ; xx [ 267 ] = - xx [ 251 ] ; xx [ 268 ] = - xx [ 264 ] ;
pm_math_cross3 ( xx + 258 , xx + 266 , xx + 269 ) ; xx [ 258 ] = 1.0 ; xx [
265 ] = xx [ 115 ] - xx [ 119 ] * xx [ 38 ] ; xx [ 266 ] = xx [ 116 ] + xx [
38 ] * xx [ 2 ] ; xx [ 267 ] = xx [ 122 ] ; pm_math_quatInverseXform ( xx +
147 , xx + 265 , xx + 272 ) ; xx [ 150 ] = - xx [ 45 ] * state [ 26 ] ; xx [
260 ] = - xx [ 56 ] * state [ 26 ] ; xx [ 56 ] = - xx [ 58 ] * state [ 26 ] ;
xx [ 58 ] = 3.586032427602137e-9 * state [ 26 ] ; xx [ 265 ] =
8.918159271208881e-14 * state [ 26 ] ; xx [ 266 ] = 7.690831401850464e-15 *
state [ 26 ] ; xx [ 275 ] = xx [ 150 ] ; xx [ 276 ] = xx [ 260 ] ; xx [ 277 ]
= xx [ 56 ] ; pm_math_quatInverseXform ( xx + 73 , xx + 275 , xx + 278 ) ; xx
[ 267 ] = xx [ 278 ] - xx [ 54 ] * state [ 28 ] ; xx [ 54 ] = xx [ 279 ] + xx
[ 57 ] * state [ 28 ] ; xx [ 57 ] = xx [ 280 ] - state [ 28 ] ;
pm_math_cross3 ( xx + 275 , xx + 173 , xx + 278 ) ; xx [ 173 ] = xx [ 278 ] -
xx [ 58 ] ; xx [ 174 ] = xx [ 279 ] + xx [ 265 ] ; xx [ 175 ] = xx [ 280 ] +
xx [ 266 ] ; pm_math_quatInverseXform ( xx + 73 , xx + 173 , xx + 275 ) ; xx
[ 77 ] = xx [ 275 ] - 1.078809183824208e-5 * state [ 28 ] ; xx [ 173 ] = xx [
276 ] - 0.08771541913364594 * state [ 28 ] ; xx [ 174 ] = xx [ 277 ] -
3.027078150587337e-12 * state [ 28 ] ; xx [ 275 ] = xx [ 267 ] ; xx [ 276 ] =
xx [ 54 ] ; xx [ 277 ] = xx [ 57 ] ; pm_math_quatInverseXform ( xx + 180 , xx
+ 275 , xx + 278 ) ; pm_math_cross3 ( xx + 275 , xx + 79 , xx + 281 ) ; xx [
275 ] = xx [ 281 ] + xx [ 77 ] ; xx [ 276 ] = xx [ 282 ] + xx [ 173 ] ; xx [
277 ] = xx [ 283 ] + xx [ 174 ] ; pm_math_quatInverseXform ( xx + 180 , xx +
275 , xx + 281 ) ; xx [ 175 ] = 0.9876509805168177 * state [ 30 ] ; xx [ 181
] = 0.0917641913397837 * state [ 30 ] ; xx [ 182 ] = - 0.126983754362221 *
state [ 30 ] ; xx [ 275 ] = xx [ 175 ] ; xx [ 276 ] = xx [ 181 ] ; xx [ 277 ]
= xx [ 182 ] ; pm_math_quatInverseXform ( xx + 89 , xx + 275 , xx + 284 ) ;
xx [ 183 ] = xx [ 284 ] - 0.1677960361352457 * state [ 32 ] ; xx [ 268 ] = xx
[ 285 ] + 0.04272717539859654 * state [ 32 ] ; xx [ 275 ] = xx [ 286 ] -
0.9848953643609866 * state [ 32 ] ; xx [ 284 ] = xx [ 183 ] ; xx [ 285 ] = xx
[ 268 ] ; xx [ 286 ] = xx [ 275 ] ; pm_math_quatInverseXform ( xx + 222 , xx
+ 284 , xx + 287 ) ; xx [ 222 ] = xx [ 287 ] - 1.787044323203746e-6 * state [
34 ] ; xx [ 223 ] = xx [ 288 ] - 2.576409658941144e-4 * state [ 34 ] ; xx [
224 ] = xx [ 289 ] - 0.9999999668089687 * state [ 34 ] ;
pm_math_quatInverseXform ( xx + 124 , xx + 222 , xx + 284 ) ; motionData [ 0
] = xx [ 8 ] ; motionData [ 1 ] = xx [ 9 ] ; motionData [ 2 ] = xx [ 10 ] ;
motionData [ 3 ] = xx [ 11 ] ; motionData [ 4 ] = xx [ 12 ] ; motionData [ 5
] = xx [ 13 ] ; motionData [ 6 ] = xx [ 14 ] ; motionData [ 7 ] = xx [ 16 ] ;
motionData [ 8 ] = xx [ 23 ] ; motionData [ 9 ] = xx [ 1 ] ; motionData [ 10
] = xx [ 17 ] ; motionData [ 11 ] = xx [ 22 ] ; motionData [ 12 ] = xx [ 18 ]
; motionData [ 13 ] = xx [ 21 ] ; motionData [ 14 ] = xx [ 20 ] ; motionData
[ 15 ] = xx [ 34 ] ; motionData [ 16 ] = xx [ 32 ] ; motionData [ 17 ] = xx [
19 ] ; motionData [ 18 ] = xx [ 24 ] ; motionData [ 19 ] = xx [ 29 ] ;
motionData [ 20 ] = xx [ 30 ] ; motionData [ 21 ] = - xx [ 35 ] ; motionData
[ 22 ] = xx [ 37 ] ; motionData [ 23 ] = xx [ 37 ] ; motionData [ 24 ] = - xx
[ 39 ] ; motionData [ 25 ] = xx [ 37 ] ; motionData [ 26 ] = xx [ 37 ] ;
motionData [ 27 ] = xx [ 31 ] ; motionData [ 28 ] = xx [ 42 ] ; motionData [
29 ] = xx [ 47 ] ; motionData [ 30 ] = xx [ 41 ] ; motionData [ 31 ] = xx [
48 ] ; motionData [ 32 ] = xx [ 37 ] ; motionData [ 33 ] = xx [ 37 ] ;
motionData [ 34 ] = - xx [ 38 ] ; motionData [ 35 ] = xx [ 64 ] ; motionData
[ 36 ] = xx [ 65 ] ; motionData [ 37 ] = xx [ 66 ] ; motionData [ 38 ] = xx [
67 ] ; motionData [ 39 ] = - xx [ 43 ] ; motionData [ 40 ] = xx [ 49 ] ;
motionData [ 41 ] = - xx [ 50 ] ; motionData [ 42 ] = xx [ 73 ] ; motionData
[ 43 ] = xx [ 74 ] ; motionData [ 44 ] = xx [ 75 ] ; motionData [ 45 ] = xx [
76 ] ; motionData [ 46 ] = xx [ 52 ] ; motionData [ 47 ] = xx [ 59 ] ;
motionData [ 48 ] = xx [ 62 ] ; motionData [ 49 ] = xx [ 61 ] ; motionData [
50 ] = xx [ 63 ] ; motionData [ 51 ] = xx [ 72 ] ; motionData [ 52 ] = xx [
78 ] ; motionData [ 53 ] = xx [ 79 ] ; motionData [ 54 ] = xx [ 80 ] ;
motionData [ 55 ] = xx [ 81 ] ; motionData [ 56 ] = xx [ 82 ] ; motionData [
57 ] = xx [ 83 ] ; motionData [ 58 ] = xx [ 84 ] ; motionData [ 59 ] = xx [
85 ] ; motionData [ 60 ] = xx [ 86 ] ; motionData [ 61 ] = xx [ 87 ] ;
motionData [ 62 ] = xx [ 88 ] ; motionData [ 63 ] = xx [ 89 ] ; motionData [
64 ] = xx [ 90 ] ; motionData [ 65 ] = xx [ 91 ] ; motionData [ 66 ] = xx [
92 ] ; motionData [ 67 ] = xx [ 95 ] ; motionData [ 68 ] = xx [ 98 ] ;
motionData [ 69 ] = xx [ 102 ] ; motionData [ 70 ] = xx [ 101 ] ; motionData
[ 71 ] = xx [ 103 ] ; motionData [ 72 ] = xx [ 104 ] ; motionData [ 73 ] = xx
[ 105 ] ; motionData [ 74 ] = xx [ 106 ] ; motionData [ 75 ] = xx [ 107 ] ;
motionData [ 76 ] = xx [ 108 ] ; motionData [ 77 ] = xx [ 124 ] ; motionData
[ 78 ] = xx [ 125 ] ; motionData [ 79 ] = xx [ 126 ] ; motionData [ 80 ] = xx
[ 127 ] ; motionData [ 81 ] = xx [ 109 ] ; motionData [ 82 ] = xx [ 110 ] ;
motionData [ 83 ] = xx [ 111 ] ; motionData [ 84 ] = - 0.3958544256953216 ;
motionData [ 85 ] = - 0.5312303874145018 ; motionData [ 86 ] = -
0.2875505370434657 ; motionData [ 87 ] = - 0.6916706136528282 ; motionData [
88 ] = state [ 37 ] - 0.4642928018242469 ; motionData [ 89 ] =
1.20600484052439 ; motionData [ 90 ] = - 0.2464594539551093 ; motionData [ 91
] = - 0.8542055355263853 ; motionData [ 92 ] = - 0.5199354797242455 ;
motionData [ 93 ] = xx [ 37 ] ; motionData [ 94 ] = xx [ 37 ] ; motionData [
95 ] = state [ 39 ] - 0.2658561785501794 ; motionData [ 96 ] =
1.168159978172667 ; motionData [ 97 ] = 0.216437971521302 ; motionData [ 98 ]
= xx [ 129 ] ; motionData [ 99 ] = xx [ 130 ] ; motionData [ 100 ] = xx [ 131
] ; motionData [ 101 ] = xx [ 132 ] ; motionData [ 102 ] = xx [ 133 ] + xx [
12 ] ; motionData [ 103 ] = xx [ 134 ] + xx [ 13 ] ; motionData [ 104 ] = xx
[ 135 ] + xx [ 14 ] ; motionData [ 105 ] = xx [ 140 ] ; motionData [ 106 ] =
xx [ 141 ] ; motionData [ 107 ] = xx [ 142 ] ; motionData [ 108 ] = xx [ 143
] ; motionData [ 109 ] = xx [ 112 ] ; motionData [ 110 ] = xx [ 113 ] ;
motionData [ 111 ] = xx [ 123 ] ; motionData [ 112 ] = xx [ 151 ] ;
motionData [ 113 ] = xx [ 152 ] ; motionData [ 114 ] = xx [ 153 ] ;
motionData [ 115 ] = xx [ 154 ] ; motionData [ 116 ] = xx [ 112 ] - ( xx [
140 ] * xx [ 155 ] + xx [ 143 ] * xx [ 157 ] ) * xx [ 3 ] ; motionData [ 117
] = xx [ 3 ] * ( xx [ 140 ] * xx [ 157 ] - xx [ 143 ] * xx [ 155 ] ) + xx [
113 ] ; motionData [ 118 ] = ( xx [ 141 ] * xx [ 157 ] + xx [ 142 ] * xx [
155 ] ) * xx [ 3 ] - xx [ 38 ] + xx [ 123 ] ; motionData [ 119 ] = xx [ 160 ]
; motionData [ 120 ] = xx [ 161 ] ; motionData [ 121 ] = xx [ 162 ] ;
motionData [ 122 ] = xx [ 163 ] ; motionData [ 123 ] = ( xx [ 164 ] * xx [ 33
] - xx [ 19 ] * xx [ 166 ] ) * xx [ 3 ] - xx [ 28 ] ; motionData [ 124 ] = -
( xx [ 3 ] * ( xx [ 19 ] * xx [ 164 ] + xx [ 166 ] * xx [ 33 ] ) + xx [ 26 ]
) ; motionData [ 125 ] = ( xx [ 166 ] * xx [ 34 ] + xx [ 164 ] * xx [ 32 ] )
* xx [ 3 ] - xx [ 38 ] + xx [ 30 ] ; motionData [ 126 ] = xx [ 169 ] ;
motionData [ 127 ] = xx [ 170 ] ; motionData [ 128 ] = xx [ 171 ] ;
motionData [ 129 ] = xx [ 172 ] ; motionData [ 130 ] = xx [ 68 ] ; motionData
[ 131 ] = xx [ 179 ] ; motionData [ 132 ] = xx [ 176 ] ; motionData [ 133 ] =
xx [ 184 ] ; motionData [ 134 ] = xx [ 185 ] ; motionData [ 135 ] = xx [ 186
] ; motionData [ 136 ] = xx [ 187 ] ; motionData [ 137 ] = xx [ 188 ] + xx [
68 ] ; motionData [ 138 ] = xx [ 189 ] + xx [ 179 ] ; motionData [ 139 ] = xx
[ 190 ] + xx [ 176 ] ; motionData [ 140 ] = xx [ 191 ] ; motionData [ 141 ] =
xx [ 192 ] ; motionData [ 142 ] = xx [ 193 ] ; motionData [ 143 ] = xx [ 194
] ; motionData [ 144 ] = xx [ 195 ] - xx [ 69 ] ; motionData [ 145 ] = xx [
196 ] - xx [ 70 ] - xx [ 55 ] ; motionData [ 146 ] = xx [ 197 ] - xx [ 71 ] -
xx [ 60 ] ; motionData [ 147 ] = xx [ 51 ] ; motionData [ 148 ] = xx [ 178 ]
; motionData [ 149 ] = xx [ 198 ] ; motionData [ 150 ] = xx [ 199 ] ;
motionData [ 151 ] = xx [ 200 ] ; motionData [ 152 ] = xx [ 201 ] ;
motionData [ 153 ] = xx [ 202 ] ; motionData [ 154 ] = xx [ 203 ] ;
motionData [ 155 ] = xx [ 204 ] ; motionData [ 156 ] = xx [ 205 ] ;
motionData [ 157 ] = xx [ 206 ] ; motionData [ 158 ] = xx [ 207 ] ;
motionData [ 159 ] = xx [ 208 ] ; motionData [ 160 ] = xx [ 209 ] ;
motionData [ 161 ] = xx [ 210 ] ; motionData [ 162 ] = xx [ 211 ] ;
motionData [ 163 ] = xx [ 212 ] ; motionData [ 164 ] = xx [ 213 ] ;
motionData [ 165 ] = xx [ 214 ] + xx [ 207 ] ; motionData [ 166 ] = xx [ 215
] + xx [ 208 ] ; motionData [ 167 ] = xx [ 216 ] + xx [ 209 ] ; motionData [
168 ] = xx [ 39 ] * xx [ 143 ] - xx [ 140 ] * xx [ 35 ] ; motionData [ 169 ]
= - ( xx [ 141 ] * xx [ 35 ] + xx [ 39 ] * xx [ 142 ] ) ; motionData [ 170 ]
= xx [ 39 ] * xx [ 141 ] - xx [ 142 ] * xx [ 35 ] ; motionData [ 171 ] = - (
xx [ 143 ] * xx [ 35 ] + xx [ 39 ] * xx [ 140 ] ) ; motionData [ 172 ] = ( xx
[ 140 ] * xx [ 217 ] + xx [ 143 ] * xx [ 219 ] ) * xx [ 3 ] + xx [ 112 ] ;
motionData [ 173 ] = xx [ 3 ] * ( xx [ 143 ] * xx [ 217 ] - xx [ 140 ] * xx [
219 ] ) + xx [ 113 ] ; motionData [ 174 ] = xx [ 31 ] - ( xx [ 141 ] * xx [
219 ] + xx [ 142 ] * xx [ 217 ] ) * xx [ 3 ] + xx [ 123 ] ; motionData [ 175
] = xx [ 226 ] ; motionData [ 176 ] = xx [ 227 ] ; motionData [ 177 ] = xx [
228 ] ; motionData [ 178 ] = xx [ 229 ] ; motionData [ 179 ] = xx [ 233 ] ;
motionData [ 180 ] = xx [ 234 ] ; motionData [ 181 ] = xx [ 230 ] ;
motionData [ 182 ] = xx [ 235 ] ; motionData [ 183 ] = xx [ 236 ] ;
motionData [ 184 ] = xx [ 237 ] ; motionData [ 185 ] = xx [ 238 ] ;
motionData [ 186 ] = xx [ 242 ] + xx [ 94 ] + xx [ 93 ] ; motionData [ 187 ]
= xx [ 243 ] - xx [ 97 ] + xx [ 96 ] ; motionData [ 188 ] = xx [ 244 ] - xx [
100 ] - xx [ 99 ] ; motionData [ 189 ] = xx [ 33 ] * xx [ 35 ] + xx [ 19 ] *
xx [ 39 ] ; motionData [ 190 ] = - ( xx [ 34 ] * xx [ 35 ] + xx [ 39 ] * xx [
32 ] ) ; motionData [ 191 ] = xx [ 39 ] * xx [ 34 ] - xx [ 32 ] * xx [ 35 ] ;
motionData [ 192 ] = xx [ 39 ] * xx [ 33 ] - xx [ 19 ] * xx [ 35 ] ;
motionData [ 193 ] = ( xx [ 19 ] * xx [ 231 ] - xx [ 239 ] * xx [ 33 ] ) * xx
[ 3 ] - xx [ 28 ] ; motionData [ 194 ] = xx [ 3 ] * ( xx [ 19 ] * xx [ 239 ]
+ xx [ 231 ] * xx [ 33 ] ) - xx [ 26 ] ; motionData [ 195 ] = xx [ 31 ] - (
xx [ 231 ] * xx [ 34 ] + xx [ 239 ] * xx [ 32 ] ) * xx [ 3 ] + xx [ 30 ] ;
motionData [ 196 ] = xx [ 248 ] ; motionData [ 197 ] = xx [ 249 ] ;
motionData [ 198 ] = xx [ 250 ] ; motionData [ 199 ] = xx [ 245 ] ;
motionData [ 200 ] = xx [ 246 ] ; motionData [ 201 ] = xx [ 0 ] ; motionData
[ 202 ] = xx [ 252 ] ; motionData [ 203 ] = xx [ 253 ] - state [ 14 ] ;
motionData [ 204 ] = xx [ 254 ] ; motionData [ 205 ] = xx [ 255 ] +
0.06932918701200033 * state [ 14 ] ; motionData [ 206 ] = xx [ 256 ] ;
motionData [ 207 ] = xx [ 257 ] - 0.04062101508027025 * state [ 14 ] ;
motionData [ 208 ] = xx [ 2 ] ; motionData [ 209 ] = xx [ 119 ] ; motionData
[ 210 ] = xx [ 117 ] ; motionData [ 211 ] = xx [ 115 ] ; motionData [ 212 ] =
xx [ 116 ] ; motionData [ 213 ] = xx [ 122 ] ; motionData [ 214 ] = xx [ 2 ]
- ( xx [ 39 ] * xx [ 25 ] - xx [ 120 ] * xx [ 35 ] ) * xx [ 3 ] ; motionData
[ 215 ] = xx [ 119 ] - xx [ 3 ] * ( xx [ 25 ] * xx [ 35 ] + xx [ 39 ] * xx [
120 ] ) ; motionData [ 216 ] = xx [ 117 ] - state [ 18 ] ; motionData [ 217 ]
= xx [ 136 ] - ( xx [ 39 ] * xx [ 137 ] - xx [ 247 ] * xx [ 35 ] ) * xx [ 3 ]
; motionData [ 218 ] = xx [ 139 ] - xx [ 3 ] * ( xx [ 137 ] * xx [ 35 ] + xx
[ 39 ] * xx [ 247 ] ) ; motionData [ 219 ] = xx [ 122 ] ; motionData [ 220 ]
= xx [ 261 ] + ( xx [ 3 ] * ( xx [ 269 ] - xx [ 42 ] * xx [ 48 ] ) - xx [ 46
] ) * state [ 24 ] - state [ 22 ] ; motionData [ 221 ] = xx [ 262 ] + ( xx [
3 ] * ( xx [ 270 ] + xx [ 42 ] * xx [ 251 ] ) - xx [ 258 ] ) * state [ 24 ] +
( xx [ 3 ] * xx [ 44 ] * xx [ 44 ] - xx [ 258 ] ) * state [ 23 ] ; motionData
[ 222 ] = xx [ 263 ] + xx [ 3 ] * ( xx [ 42 ] * xx [ 264 ] + xx [ 271 ] ) *
state [ 24 ] - xx [ 3 ] * xx [ 53 ] * xx [ 44 ] * state [ 23 ] ; motionData [
223 ] = xx [ 272 ] ; motionData [ 224 ] = xx [ 273 ] ; motionData [ 225 ] =
xx [ 274 ] ; motionData [ 226 ] = xx [ 150 ] ; motionData [ 227 ] = xx [ 260
] ; motionData [ 228 ] = xx [ 56 ] ; motionData [ 229 ] = - xx [ 58 ] ;
motionData [ 230 ] = xx [ 265 ] ; motionData [ 231 ] = xx [ 266 ] ;
motionData [ 232 ] = xx [ 267 ] ; motionData [ 233 ] = xx [ 54 ] ; motionData
[ 234 ] = xx [ 57 ] ; motionData [ 235 ] = xx [ 77 ] ; motionData [ 236 ] =
xx [ 173 ] ; motionData [ 237 ] = xx [ 174 ] ; motionData [ 238 ] = xx [ 278
] ; motionData [ 239 ] = xx [ 279 ] ; motionData [ 240 ] = xx [ 280 ] ;
motionData [ 241 ] = xx [ 281 ] ; motionData [ 242 ] = xx [ 282 ] ;
motionData [ 243 ] = xx [ 283 ] ; motionData [ 244 ] = xx [ 37 ] ; motionData
[ 245 ] = xx [ 37 ] ; motionData [ 246 ] = xx [ 37 ] ; motionData [ 247 ] =
xx [ 175 ] ; motionData [ 248 ] = xx [ 181 ] ; motionData [ 249 ] = xx [ 182
] ; motionData [ 250 ] = xx [ 37 ] ; motionData [ 251 ] = xx [ 37 ] ;
motionData [ 252 ] = xx [ 37 ] ; motionData [ 253 ] = xx [ 183 ] ; motionData
[ 254 ] = xx [ 268 ] ; motionData [ 255 ] = xx [ 275 ] ; motionData [ 256 ] =
xx [ 37 ] ; motionData [ 257 ] = xx [ 37 ] ; motionData [ 258 ] = xx [ 37 ] ;
motionData [ 259 ] = xx [ 222 ] ; motionData [ 260 ] = xx [ 223 ] ;
motionData [ 261 ] = xx [ 224 ] ; motionData [ 262 ] = xx [ 15 ] * state [ 36
] ; motionData [ 263 ] = xx [ 114 ] * state [ 36 ] ; motionData [ 264 ] = -
xx [ 118 ] * state [ 36 ] ; motionData [ 265 ] = xx [ 284 ] +
9.321570239653743e-9 * state [ 36 ] ; motionData [ 266 ] = xx [ 285 ] -
2.314083679089409e-14 * state [ 36 ] ; motionData [ 267 ] = xx [ 286 ] -
1.459081418711272e-17 * state [ 36 ] ; motionData [ 268 ] = xx [ 37 ] ;
motionData [ 269 ] = xx [ 37 ] ; motionData [ 270 ] = xx [ 37 ] ; motionData
[ 271 ] = - 0.1221870982897309 * state [ 38 ] ; motionData [ 272 ] = -
0.2420905806860454 * state [ 38 ] ; motionData [ 273 ] = 0.962529201507481 *
state [ 38 ] ; motionData [ 274 ] = xx [ 37 ] ; motionData [ 275 ] = xx [ 37
] ; motionData [ 276 ] = xx [ 37 ] ; motionData [ 277 ] = state [ 40 ] ;
motionData [ 278 ] = xx [ 37 ] ; motionData [ 279 ] = xx [ 37 ] ; } static
size_t computeAssemblyError_0 ( const double * state , const double *
motionData , double * error ) { ( void ) state ; ( void ) motionData ; ( void
) error ; return 0 ; } static size_t computeAssemblyError_1 ( const double *
state , const double * motionData , double * error ) { ( void ) state ; (
void ) motionData ; ( void ) error ; return 0 ; } static size_t
computeAssemblyError_2 ( const double * state , const double * motionData ,
double * error ) { ( void ) state ; error [ 0 ] = - motionData [ 113 ] ;
error [ 1 ] = - motionData [ 114 ] ; error [ 2 ] = - motionData [ 115 ] ;
return 3 ; } static size_t computeAssemblyError_3 ( const double * state ,
const double * motionData , double * error ) { ( void ) state ; ( void )
motionData ; ( void ) error ; return 0 ; } static size_t
computeAssemblyError_4 ( const double * state , const double * motionData ,
double * error ) { double xx [ 23 ] ; ( void ) state ; xx [ 0 ] = motionData
[ 161 ] ; xx [ 1 ] = motionData [ 162 ] ; xx [ 2 ] = motionData [ 163 ] ; xx
[ 3 ] = motionData [ 164 ] ; xx [ 4 ] = 0.653348032512154 ; xx [ 5 ] = -
0.2704357055399164 ; xx [ 6 ] = - 0.2704350334642597 ; xx [ 7 ] = -
0.6533496539042549 ; pm_math_quatCompose ( xx + 0 , xx + 4 , xx + 8 ) ; xx [
4 ] = motionData [ 168 ] ; xx [ 5 ] = motionData [ 169 ] ; xx [ 6 ] =
motionData [ 170 ] ; xx [ 7 ] = motionData [ 171 ] ; xx [ 12 ] = - 0.5 ; xx [
13 ] = xx [ 12 ] ; xx [ 14 ] = xx [ 12 ] ; xx [ 15 ] = xx [ 12 ] ; xx [ 16 ]
= xx [ 12 ] ; pm_math_quatCompose ( xx + 4 , xx + 13 , xx + 17 ) ;
pm_math_quatInverseCompose ( xx + 8 , xx + 17 , xx + 4 ) ; xx [ 4 ] =
0.03598789236668963 ; xx [ 7 ] = motionData [ 169 ] ; xx [ 8 ] = motionData [
170 ] ; xx [ 9 ] = motionData [ 171 ] ; xx [ 10 ] = 0.01999999999999998 ; xx
[ 12 ] = xx [ 10 ] * motionData [ 171 ] + xx [ 4 ] * motionData [ 169 ] ; xx
[ 11 ] = xx [ 10 ] * motionData [ 170 ] ; xx [ 14 ] = xx [ 4 ] * motionData [
170 ] ; xx [ 15 ] = - xx [ 12 ] ; xx [ 16 ] = xx [ 11 ] ; pm_math_cross3 ( xx
+ 7 , xx + 14 , xx + 17 ) ; xx [ 7 ] = 2.0 ; xx [ 13 ] = -
3.51032649919941e-8 ; xx [ 14 ] = - 0.01413509085955482 ; xx [ 15 ] = -
0.01414919005646189 ; pm_math_quatXform ( xx + 0 , xx + 13 , xx + 20 ) ;
error [ 0 ] = xx [ 5 ] ; error [ 1 ] = xx [ 6 ] ; error [ 2 ] = ( xx [ 4 ] *
motionData [ 168 ] * motionData [ 170 ] + xx [ 17 ] ) * xx [ 7 ] + motionData
[ 172 ] - ( xx [ 20 ] + motionData [ 165 ] ) - xx [ 10 ] ; error [ 3 ] = ( xx
[ 18 ] - xx [ 12 ] * motionData [ 168 ] ) * xx [ 7 ] + motionData [ 173 ] - (
xx [ 21 ] + motionData [ 166 ] ) ; error [ 4 ] = xx [ 7 ] * ( xx [ 19 ] + xx
[ 11 ] * motionData [ 168 ] ) + motionData [ 174 ] - ( xx [ 22 ] + motionData
[ 167 ] ) + xx [ 4 ] ; return 5 ; } static size_t computeAssemblyError_5 (
const double * state , const double * motionData , double * error ) { double
xx [ 22 ] ; ( void ) state ; xx [ 0 ] = motionData [ 56 ] ; xx [ 1 ] =
motionData [ 57 ] ; xx [ 2 ] = motionData [ 58 ] ; xx [ 3 ] = motionData [ 59
] ; xx [ 4 ] = 0.3960576621027012 ; xx [ 5 ] = 0.5910864880901976 ; xx [ 6 ]
= - 0.2951692504582522 ; xx [ 7 ] = - 0.6376756271576114 ;
pm_math_quatCompose ( xx + 0 , xx + 4 , xx + 8 ) ; xx [ 4 ] = motionData [ 84
] ; xx [ 5 ] = motionData [ 85 ] ; xx [ 6 ] = motionData [ 86 ] ; xx [ 7 ] =
motionData [ 87 ] ; xx [ 13 ] = 0.1134483719482246 ; xx [ 14 ] = -
0.4832402834491367 ; xx [ 15 ] = 0.8647215905745264 ; xx [ 16 ] =
0.07658241409460011 ; pm_math_quatCompose ( xx + 4 , xx + 13 , xx + 17 ) ;
pm_math_quatInverseCompose ( xx + 8 , xx + 17 , xx + 13 ) ; xx [ 16 ] =
0.2873151938228897 ; xx [ 17 ] = 0.4197933119419017 ; xx [ 18 ] = -
0.1608565849218315 ; pm_math_quatXform ( xx + 4 , xx + 16 , xx + 19 ) ; xx [
4 ] = - 0.03488895747042069 ; xx [ 5 ] = - 0.09380454412175876 ; xx [ 6 ] =
0.08723931278924425 ; pm_math_quatXform ( xx + 0 , xx + 4 , xx + 16 ) ; xx [
0 ] = xx [ 19 ] + motionData [ 88 ] - ( xx [ 16 ] + motionData [ 60 ] ) ; xx
[ 1 ] = xx [ 20 ] + motionData [ 89 ] - ( xx [ 17 ] + motionData [ 61 ] ) ;
xx [ 2 ] = xx [ 21 ] + motionData [ 90 ] - ( xx [ 18 ] + motionData [ 62 ] )
; xx [ 3 ] = 2.0 ; xx [ 16 ] = ( xx [ 8 ] * xx [ 10 ] + xx [ 9 ] * xx [ 11 ]
) * xx [ 3 ] ; xx [ 17 ] = xx [ 3 ] * ( xx [ 10 ] * xx [ 11 ] - xx [ 8 ] * xx
[ 9 ] ) ; xx [ 18 ] = 1.0 - ( xx [ 9 ] * xx [ 9 ] + xx [ 10 ] * xx [ 10 ] ) *
xx [ 3 ] ; error [ 0 ] = xx [ 14 ] ; error [ 1 ] = xx [ 15 ] ; error [ 2 ] =
pm_math_dot3 ( xx + 0 , xx + 16 ) ; return 3 ; } static size_t
computeAssemblyError_6 ( const double * state , const double * motionData ,
double * error ) { double xx [ 25 ] ; ( void ) state ; xx [ 0 ] = motionData
[ 91 ] ; xx [ 1 ] = motionData [ 92 ] ; xx [ 2 ] = motionData [ 93 ] ; xx [ 3
] = motionData [ 94 ] ; xx [ 4 ] = 0.6040145266977934 ; xx [ 5 ] = -
0.3676499034924946 ; xx [ 6 ] = xx [ 4 ] ; xx [ 7 ] = xx [ 5 ] ; xx [ 8 ] =
xx [ 5 ] ; xx [ 9 ] = - xx [ 4 ] ; pm_math_quatCompose ( xx + 0 , xx + 6 , xx
+ 10 ) ; xx [ 4 ] = motionData [ 147 ] ; xx [ 5 ] = motionData [ 148 ] ; xx [
6 ] = motionData [ 149 ] ; xx [ 7 ] = motionData [ 150 ] ; xx [ 15 ] = -
0.07462691568545904 ; xx [ 16 ] = 0.7058078229561192 ; xx [ 17 ] =
0.7030526290644511 ; xx [ 18 ] = - 0.04453247438424026 ; pm_math_quatCompose
( xx + 4 , xx + 15 , xx + 19 ) ; pm_math_quatInverseCompose ( xx + 10 , xx +
19 , xx + 15 ) ; xx [ 19 ] = 0.2410356410535518 ; xx [ 20 ] = -
0.07227724362667258 ; xx [ 21 ] = 0.4044985689216228 ; pm_math_quatXform ( xx
+ 4 , xx + 19 , xx + 22 ) ; xx [ 4 ] = 0.0150000000000002 ; xx [ 5 ] = -
0.7303121434161086 ; xx [ 6 ] = - 0.1039076336974666 ; pm_math_quatXform ( xx
+ 0 , xx + 4 , xx + 7 ) ; xx [ 0 ] = xx [ 22 ] + motionData [ 151 ] - ( xx [
7 ] + motionData [ 95 ] ) ; xx [ 1 ] = xx [ 23 ] + motionData [ 152 ] - ( xx
[ 8 ] + motionData [ 96 ] ) ; xx [ 2 ] = xx [ 24 ] + motionData [ 153 ] - (
xx [ 9 ] + motionData [ 97 ] ) ; xx [ 3 ] = 1.0 ; xx [ 4 ] = xx [ 13 ] * xx [
13 ] ; xx [ 6 ] = 2.0 ; xx [ 8 ] = xx [ 10 ] * xx [ 13 ] ; xx [ 9 ] = xx [ 11
] * xx [ 12 ] ; xx [ 19 ] = xx [ 3 ] - ( xx [ 12 ] * xx [ 12 ] + xx [ 4 ] ) *
xx [ 6 ] ; xx [ 20 ] = ( xx [ 8 ] + xx [ 9 ] ) * xx [ 6 ] ; xx [ 21 ] = xx [
6 ] * ( xx [ 11 ] * xx [ 13 ] - xx [ 10 ] * xx [ 12 ] ) ; xx [ 22 ] = xx [ 6
] * ( xx [ 9 ] - xx [ 8 ] ) ; xx [ 23 ] = xx [ 3 ] - ( xx [ 4 ] + xx [ 11 ] *
xx [ 11 ] ) * xx [ 6 ] ; xx [ 24 ] = ( xx [ 10 ] * xx [ 11 ] + xx [ 12 ] * xx
[ 13 ] ) * xx [ 6 ] ; error [ 0 ] = xx [ 16 ] ; error [ 1 ] = xx [ 17 ] ;
error [ 2 ] = xx [ 18 ] ; error [ 3 ] = pm_math_dot3 ( xx + 0 , xx + 19 ) ;
error [ 4 ] = pm_math_dot3 ( xx + 0 , xx + 22 ) ; return 5 ; } size_t
Walk_Sim4_6bedce81_1_computeAssemblyError ( const void * mech , size_t
constraintIdx , const double * state , const double * motionData , double *
error ) { ( void ) mech ; ( void ) state ; ( void ) motionData ; ( void )
error ; ( void ) state ; switch ( constraintIdx ) { case 0 : return
computeAssemblyError_0 ( state , motionData , error ) ; case 1 : return
computeAssemblyError_1 ( state , motionData , error ) ; case 2 : return
computeAssemblyError_2 ( state , motionData , error ) ; case 3 : return
computeAssemblyError_3 ( state , motionData , error ) ; case 4 : return
computeAssemblyError_4 ( state , motionData , error ) ; case 5 : return
computeAssemblyError_5 ( state , motionData , error ) ; case 6 : return
computeAssemblyError_6 ( state , motionData , error ) ; } return 0 ; } static
size_t computeAssemblyJacobian_0 ( const double * state , const double *
motionData , double * J ) { ( void ) state ; ( void ) motionData ; ( void ) J
; return 0 ; } static size_t computeAssemblyJacobian_1 ( const double * state
, const double * motionData , double * J ) { ( void ) state ; ( void )
motionData ; ( void ) J ; return 0 ; } static size_t
computeAssemblyJacobian_2 ( const double * state , const double * motionData
, double * J ) { double xx [ 55 ] ; xx [ 0 ] = - motionData [ 112 ] ; xx [ 1
] = - motionData [ 113 ] ; xx [ 2 ] = - motionData [ 114 ] ; xx [ 3 ] = -
motionData [ 115 ] ; xx [ 4 ] = 0.0 ; xx [ 5 ] = xx [ 4 ] ; xx [ 6 ] = xx [ 4
] ; xx [ 7 ] = xx [ 4 ] ; pm_math_quatDeriv ( xx + 0 , xx + 5 , xx + 8 ) ; xx
[ 12 ] = motionData [ 119 ] ; xx [ 13 ] = motionData [ 120 ] ; xx [ 14 ] =
motionData [ 121 ] ; xx [ 15 ] = motionData [ 122 ] ; xx [ 5 ] =
0.9999999999969194 ; xx [ 6 ] = - 2.482175055048485e-6 ; xx [ 7 ] = -
1.750219320822278e-9 ; pm_math_quatInverseXform ( xx + 12 , xx + 5 , xx + 16
) ; pm_math_quatDeriv ( xx + 0 , xx + 16 , xx + 19 ) ; xx [ 5 ] =
1.755163250776454e-6 ; xx [ 6 ] = 0.7076051973836626 ; xx [ 7 ] = -
0.7066080134222561 ; pm_math_quatInverseXform ( xx + 12 , xx + 5 , xx + 16 )
; pm_math_quatDeriv ( xx + 0 , xx + 16 , xx + 23 ) ; xx [ 5 ] =
1.755163248902065e-6 ; xx [ 6 ] = 0.7066080134200763 ; xx [ 7 ] =
0.7076051973858394 ; pm_math_quatInverseXform ( xx + 12 , xx + 5 , xx + 16 )
; pm_math_quatDeriv ( xx + 0 , xx + 16 , xx + 12 ) ; xx [ 5 ] = 0.0 ; xx [ 6
] = 2.645128560629928e-11 ; xx [ 7 ] = xx [ 6 ] * motionData [ 31 ] ; xx [ 16
] = motionData [ 29 ] ; xx [ 17 ] = motionData [ 30 ] ; xx [ 18 ] =
motionData [ 31 ] ; xx [ 27 ] = xx [ 6 ] * motionData [ 29 ] + motionData [
30 ] ; xx [ 28 ] = - xx [ 7 ] ; xx [ 29 ] = - motionData [ 31 ] ; xx [ 30 ] =
xx [ 27 ] ; pm_math_cross3 ( xx + 16 , xx + 28 , xx + 31 ) ; xx [ 16 ] = 2.0
; xx [ 18 ] = 1.0 ; xx [ 28 ] = ( xx [ 7 ] * motionData [ 28 ] + xx [ 31 ] )
* xx [ 16 ] - xx [ 18 ] ; xx [ 29 ] = xx [ 6 ] + ( motionData [ 28 ] *
motionData [ 31 ] + xx [ 32 ] ) * xx [ 16 ] ; xx [ 30 ] = xx [ 16 ] * ( xx [
33 ] - xx [ 27 ] * motionData [ 28 ] ) ; pm_math_quatDeriv ( xx + 0 , xx + 28
, xx + 31 ) ; xx [ 27 ] = - xx [ 18 ] ; xx [ 28 ] = xx [ 4 ] ; xx [ 29 ] = xx
[ 4 ] ; pm_math_quatDeriv ( xx + 0 , xx + 27 , xx + 35 ) ; xx [ 6 ] = 0.5 ;
xx [ 7 ] = xx [ 6 ] * state [ 19 ] ; xx [ 17 ] = sin ( xx [ 7 ] ) ; xx [ 27 ]
= cos ( xx [ 7 ] ) ; xx [ 39 ] = xx [ 4 ] ; xx [ 40 ] = xx [ 16 ] * xx [ 17 ]
* xx [ 17 ] - xx [ 18 ] ; xx [ 41 ] = - xx [ 16 ] * xx [ 27 ] * xx [ 17 ] ;
pm_math_quatDeriv ( xx + 0 , xx + 39 , xx + 42 ) ; xx [ 4 ] = xx [ 6 ] *
state [ 20 ] ; xx [ 7 ] = cos ( xx [ 4 ] ) ; xx [ 28 ] =
9.351995539151417e-12 ; xx [ 29 ] = xx [ 6 ] * state [ 21 ] ; xx [ 6 ] = cos
( xx [ 29 ] ) ; xx [ 30 ] = xx [ 28 ] * xx [ 6 ] ; xx [ 39 ] =
2.645143785344124e-11 ; xx [ 40 ] = sin ( xx [ 29 ] ) ; xx [ 29 ] = xx [ 39 ]
* xx [ 40 ] ; xx [ 41 ] = xx [ 28 ] * xx [ 29 ] ; xx [ 46 ] =
0.7071067811865476 ; xx [ 47 ] = xx [ 46 ] * xx [ 40 ] ; xx [ 48 ] = xx [ 30
] - xx [ 41 ] - xx [ 47 ] ; xx [ 50 ] = xx [ 46 ] * xx [ 6 ] ; xx [ 6 ] = xx
[ 46 ] * xx [ 29 ] ; xx [ 29 ] = xx [ 28 ] * xx [ 40 ] ; xx [ 28 ] = xx [ 50
] - xx [ 6 ] + xx [ 29 ] ; xx [ 40 ] = sin ( xx [ 4 ] ) ; xx [ 4 ] = xx [ 7 ]
* xx [ 48 ] + xx [ 28 ] * xx [ 40 ] ; xx [ 46 ] = xx [ 30 ] + xx [ 41 ] + xx
[ 47 ] ; xx [ 30 ] = xx [ 50 ] - xx [ 29 ] + xx [ 6 ] ; xx [ 6 ] = xx [ 7 ] *
xx [ 46 ] + xx [ 40 ] * xx [ 30 ] ; xx [ 29 ] = xx [ 4 ] * xx [ 27 ] - xx [ 6
] * xx [ 17 ] ; xx [ 47 ] = xx [ 7 ] * xx [ 30 ] - xx [ 40 ] * xx [ 46 ] ; xx
[ 30 ] = xx [ 28 ] * xx [ 7 ] - xx [ 40 ] * xx [ 48 ] ; xx [ 7 ] = xx [ 27 ]
* xx [ 47 ] - xx [ 17 ] * xx [ 30 ] ; xx [ 40 ] = xx [ 27 ] * xx [ 30 ] + xx
[ 17 ] * xx [ 47 ] ; xx [ 46 ] = xx [ 29 ] ; xx [ 47 ] = xx [ 7 ] ; xx [ 48 ]
= xx [ 40 ] ; xx [ 28 ] = xx [ 40 ] * xx [ 39 ] ; xx [ 30 ] = xx [ 29 ] - xx
[ 39 ] * xx [ 7 ] ; xx [ 49 ] = xx [ 40 ] ; xx [ 50 ] = - xx [ 28 ] ; xx [ 51
] = - xx [ 30 ] ; pm_math_cross3 ( xx + 46 , xx + 49 , xx + 52 ) ; xx [ 7 ] =
xx [ 6 ] * xx [ 27 ] + xx [ 4 ] * xx [ 17 ] ; xx [ 46 ] = xx [ 16 ] * ( xx [
52 ] - xx [ 7 ] * xx [ 40 ] ) - xx [ 39 ] ; xx [ 47 ] = xx [ 16 ] * ( xx [ 53
] + xx [ 7 ] * xx [ 28 ] ) - xx [ 18 ] ; xx [ 48 ] = ( xx [ 30 ] * xx [ 7 ] +
xx [ 54 ] ) * xx [ 16 ] ; pm_math_quatDeriv ( xx + 0 , xx + 46 , xx + 27 ) ;
J [ 0 ] = xx [ 9 ] ; J [ 1 ] = xx [ 9 ] ; J [ 2 ] = xx [ 9 ] ; J [ 3 ] = xx [
20 ] ; J [ 4 ] = xx [ 24 ] ; J [ 5 ] = xx [ 13 ] ; J [ 7 ] = xx [ 32 ] ; J [
9 ] = xx [ 36 ] ; J [ 10 ] = xx [ 43 ] ; J [ 11 ] = xx [ 28 ] ; J [ 20 ] = xx
[ 10 ] ; J [ 21 ] = xx [ 10 ] ; J [ 22 ] = xx [ 10 ] ; J [ 23 ] = xx [ 21 ] ;
J [ 24 ] = xx [ 25 ] ; J [ 25 ] = xx [ 14 ] ; J [ 27 ] = xx [ 33 ] ; J [ 29 ]
= xx [ 37 ] ; J [ 30 ] = xx [ 44 ] ; J [ 31 ] = xx [ 29 ] ; J [ 40 ] = xx [
11 ] ; J [ 41 ] = xx [ 11 ] ; J [ 42 ] = xx [ 11 ] ; J [ 43 ] = xx [ 22 ] ; J
[ 44 ] = xx [ 26 ] ; J [ 45 ] = xx [ 15 ] ; J [ 47 ] = xx [ 34 ] ; J [ 49 ] =
xx [ 38 ] ; J [ 50 ] = xx [ 45 ] ; J [ 51 ] = xx [ 30 ] ; return 3 ; } static
size_t computeAssemblyJacobian_3 ( const double * state , const double *
motionData , double * J ) { ( void ) state ; ( void ) motionData ; ( void ) J
; return 0 ; } static size_t computeAssemblyJacobian_4 ( const double * state
, const double * motionData , double * J ) { double xx [ 92 ] ; xx [ 0 ] =
motionData [ 161 ] ; xx [ 1 ] = motionData [ 162 ] ; xx [ 2 ] = motionData [
163 ] ; xx [ 3 ] = motionData [ 164 ] ; xx [ 4 ] = 0.653348032512154 ; xx [ 5
] = - 0.2704357055399164 ; xx [ 6 ] = - 0.2704350334642597 ; xx [ 7 ] = -
0.6533496539042549 ; pm_math_quatCompose ( xx + 0 , xx + 4 , xx + 8 ) ; xx [
4 ] = motionData [ 168 ] ; xx [ 5 ] = motionData [ 169 ] ; xx [ 6 ] =
motionData [ 170 ] ; xx [ 7 ] = motionData [ 171 ] ; xx [ 12 ] = 0.5 ; xx [
13 ] = - xx [ 12 ] ; xx [ 14 ] = xx [ 13 ] ; xx [ 15 ] = xx [ 13 ] ; xx [ 16
] = xx [ 13 ] ; xx [ 17 ] = xx [ 13 ] ; pm_math_quatCompose ( xx + 4 , xx +
14 , xx + 18 ) ; pm_math_quatInverseCompose ( xx + 8 , xx + 18 , xx + 4 ) ;
xx [ 8 ] = 0.0 ; xx [ 9 ] = xx [ 8 ] ; xx [ 10 ] = xx [ 8 ] ; xx [ 11 ] = xx
[ 8 ] ; pm_math_quatDeriv ( xx + 4 , xx + 9 , xx + 22 ) ; xx [ 26 ] =
motionData [ 189 ] ; xx [ 27 ] = motionData [ 190 ] ; xx [ 28 ] = motionData
[ 191 ] ; xx [ 29 ] = motionData [ 192 ] ; xx [ 9 ] = 0.9999999999969194 ; xx
[ 10 ] = - 2.482175055048485e-6 ; xx [ 11 ] = - 1.750219320822278e-9 ;
pm_math_quatInverseXform ( xx + 26 , xx + 9 , xx + 30 ) ;
pm_math_quatInverseXform ( xx + 14 , xx + 30 , xx + 34 ) ; pm_math_quatDeriv
( xx + 4 , xx + 34 , xx + 37 ) ; xx [ 33 ] = 1.755163250776454e-6 ; xx [ 34 ]
= 0.7076051973836626 ; xx [ 35 ] = - 0.7066080134222561 ;
pm_math_quatInverseXform ( xx + 26 , xx + 33 , xx + 41 ) ;
pm_math_quatInverseXform ( xx + 14 , xx + 41 , xx + 45 ) ; pm_math_quatDeriv
( xx + 4 , xx + 45 , xx + 48 ) ; xx [ 44 ] = 1.755163248902065e-6 ; xx [ 45 ]
= 0.7066080134200763 ; xx [ 46 ] = 0.7076051973858394 ;
pm_math_quatInverseXform ( xx + 26 , xx + 44 , xx + 52 ) ;
pm_math_quatInverseXform ( xx + 14 , xx + 52 , xx + 56 ) ; pm_math_quatDeriv
( xx + 4 , xx + 56 , xx + 59 ) ; xx [ 13 ] = 0.0 ; xx [ 36 ] =
2.645128560629928e-11 ; xx [ 47 ] = xx [ 36 ] * motionData [ 24 ] ; xx [ 55 ]
= motionData [ 22 ] ; xx [ 56 ] = motionData [ 23 ] ; xx [ 57 ] = motionData
[ 24 ] ; xx [ 58 ] = xx [ 36 ] * motionData [ 22 ] + motionData [ 23 ] ; xx [
63 ] = - xx [ 47 ] ; xx [ 64 ] = - motionData [ 24 ] ; xx [ 65 ] = xx [ 58 ]
; pm_math_cross3 ( xx + 55 , xx + 63 , xx + 66 ) ; xx [ 55 ] = 2.0 ; xx [ 57
] = 1.0 ; xx [ 63 ] = ( xx [ 47 ] * motionData [ 21 ] + xx [ 66 ] ) * xx [ 55
] - xx [ 57 ] ; xx [ 47 ] = xx [ 36 ] + ( motionData [ 21 ] * motionData [ 24
] + xx [ 67 ] ) * xx [ 55 ] ; xx [ 56 ] = xx [ 68 ] - xx [ 58 ] * motionData
[ 21 ] ; xx [ 64 ] = xx [ 63 ] ; xx [ 65 ] = xx [ 47 ] ; xx [ 66 ] = xx [ 55
] * xx [ 56 ] ; pm_math_quatInverseXform ( xx + 14 , xx + 64 , xx + 67 ) ;
pm_math_quatDeriv ( xx + 4 , xx + 67 , xx + 14 ) ; xx [ 58 ] = - xx [ 57 ] ;
xx [ 64 ] = xx [ 8 ] ; xx [ 65 ] = xx [ 58 ] ; xx [ 66 ] = xx [ 8 ] ;
pm_math_quatDeriv ( xx + 4 , xx + 64 , xx + 67 ) ; xx [ 64 ] =
1.755163249739233e-6 ; xx [ 65 ] = 0.7074588436864477 ; xx [ 66 ] =
0.7067545433081799 ; xx [ 71 ] = xx [ 64 ] ; xx [ 72 ] = xx [ 65 ] ; xx [ 73
] = - xx [ 66 ] ; pm_math_quatXform ( xx + 0 , xx + 71 , xx + 74 ) ;
pm_math_quatInverseXform ( xx + 18 , xx + 74 , xx + 0 ) ; xx [ 18 ] = - xx [
0 ] ; xx [ 19 ] = - xx [ 1 ] ; xx [ 20 ] = - xx [ 2 ] ; pm_math_quatDeriv (
xx + 4 , xx + 18 , xx + 0 ) ; xx [ 3 ] = state [ 3 ] ; xx [ 4 ] = state [ 4 ]
; xx [ 5 ] = state [ 5 ] ; xx [ 6 ] = state [ 6 ] ; xx [ 17 ] =
0.9240143931192876 ; xx [ 18 ] = - 0.382357687652353 ; xx [ 19 ] =
4.753479711208553e-7 ; xx [ 20 ] = - 1.146448133648799e-6 ;
pm_math_quatComposeInverse ( xx + 3 , xx + 17 , xx + 70 ) ;
pm_math_quatCompose ( xx + 70 , xx + 26 , xx + 3 ) ; xx [ 0 ] =
0.03598789236668963 ; xx [ 7 ] = 0.01999999999999998 ; xx [ 17 ] = xx [ 0 ] *
xx [ 31 ] ; xx [ 18 ] = - ( xx [ 7 ] * xx [ 32 ] + xx [ 0 ] * xx [ 30 ] ) ;
xx [ 19 ] = xx [ 7 ] * xx [ 31 ] ; pm_math_quatXform ( xx + 3 , xx + 17 , xx
+ 20 ) ; xx [ 17 ] = motionData [ 193 ] ; xx [ 18 ] = motionData [ 194 ] ; xx
[ 19 ] = motionData [ 195 ] ; pm_math_cross3 ( xx + 9 , xx + 17 , xx + 25 ) ;
pm_math_quatXform ( xx + 70 , xx + 25 , xx + 9 ) ; xx [ 25 ] = -
1.636087754743471e-14 ; xx [ 26 ] = - 6.591343902059674e-9 ; xx [ 27 ] = -
4.647672291003569e-12 ; pm_math_quatXform ( xx + 70 , xx + 25 , xx + 28 ) ;
xx [ 25 ] = xx [ 0 ] * xx [ 42 ] ; xx [ 26 ] = - ( xx [ 7 ] * xx [ 43 ] + xx
[ 0 ] * xx [ 41 ] ) ; xx [ 27 ] = xx [ 7 ] * xx [ 42 ] ; pm_math_quatXform (
xx + 3 , xx + 25 , xx + 40 ) ; pm_math_cross3 ( xx + 33 , xx + 17 , xx + 25 )
; pm_math_quatXform ( xx + 70 , xx + 25 , xx + 31 ) ; xx [ 25 ] =
4.66078512037031e-9 ; xx [ 26 ] = - 1.156888459016026e-14 ; xx [ 27 ] = -
8.157423606846605e-18 ; pm_math_quatXform ( xx + 70 , xx + 25 , xx + 74 ) ;
xx [ 25 ] = xx [ 0 ] * xx [ 53 ] ; xx [ 26 ] = - ( xx [ 7 ] * xx [ 54 ] + xx
[ 0 ] * xx [ 52 ] ) ; xx [ 27 ] = xx [ 7 ] * xx [ 53 ] ; pm_math_quatXform (
xx + 3 , xx + 25 , xx + 51 ) ; pm_math_cross3 ( xx + 44 , xx + 17 , xx + 3 )
; pm_math_quatXform ( xx + 70 , xx + 3 , xx + 17 ) ; xx [ 3 ] =
4.660785137486138e-9 ; xx [ 4 ] = - 1.156888457780551e-14 ; xx [ 5 ] = -
8.157423598135056e-18 ; pm_math_quatXform ( xx + 70 , xx + 3 , xx + 25 ) ; xx
[ 3 ] = motionData [ 0 ] ; xx [ 4 ] = motionData [ 1 ] ; xx [ 5 ] =
motionData [ 2 ] ; xx [ 6 ] = motionData [ 3 ] ; xx [ 14 ] =
0.6531857048393208 ; xx [ 34 ] = xx [ 12 ] * state [ 15 ] ; xx [ 35 ] = cos (
xx [ 34 ] ) ; xx [ 37 ] = 0.6531863759394836 ; xx [ 43 ] = sin ( xx [ 34 ] )
; xx [ 34 ] = xx [ 36 ] * xx [ 43 ] ; xx [ 44 ] = 0.2708275418267761 ; xx [
46 ] = xx [ 14 ] * xx [ 35 ] + xx [ 37 ] * xx [ 34 ] + xx [ 44 ] * xx [ 43 ]
; xx [ 48 ] = 0.2708291636228809 ; xx [ 54 ] = xx [ 14 ] * xx [ 43 ] - xx [
44 ] * xx [ 35 ] - xx [ 48 ] * xx [ 34 ] ; xx [ 45 ] = xx [ 37 ] * xx [ 35 ]
- xx [ 14 ] * xx [ 34 ] - xx [ 48 ] * xx [ 43 ] ; xx [ 14 ] = xx [ 48 ] * xx
[ 35 ] - xx [ 44 ] * xx [ 34 ] + xx [ 37 ] * xx [ 43 ] ; xx [ 70 ] = - xx [
46 ] ; xx [ 71 ] = xx [ 54 ] ; xx [ 72 ] = xx [ 45 ] ; xx [ 73 ] = xx [ 14 ]
; pm_math_quatCompose ( xx + 3 , xx + 70 , xx + 77 ) ; xx [ 81 ] = motionData
[ 21 ] ; xx [ 82 ] = motionData [ 22 ] ; xx [ 83 ] = motionData [ 23 ] ; xx [
84 ] = motionData [ 24 ] ; pm_math_quatCompose ( xx + 77 , xx + 81 , xx + 85
) ; xx [ 77 ] = xx [ 47 ] * xx [ 0 ] ; xx [ 78 ] = - ( 0.03999999999999996 *
xx [ 56 ] + xx [ 63 ] * xx [ 0 ] ) ; xx [ 79 ] = xx [ 47 ] * xx [ 7 ] ;
pm_math_quatXform ( xx + 85 , xx + 77 , xx + 80 ) ; xx [ 77 ] = xx [ 36 ] *
motionData [ 27 ] ; xx [ 78 ] = motionData [ 27 ] ; xx [ 79 ] = - (
motionData [ 26 ] + xx [ 36 ] * motionData [ 25 ] ) ; pm_math_quatXform ( xx
+ 70 , xx + 77 , xx + 34 ) ; xx [ 70 ] = xx [ 54 ] ; xx [ 71 ] = xx [ 45 ] ;
xx [ 72 ] = xx [ 14 ] ; xx [ 0 ] = 0.2887783607120545 ; xx [ 37 ] = xx [ 14 ]
* xx [ 0 ] ; xx [ 43 ] = 7.638558896113468e-12 ; xx [ 44 ] = xx [ 14 ] * xx [
43 ] ; xx [ 14 ] = xx [ 0 ] * xx [ 54 ] - xx [ 43 ] * xx [ 45 ] ; xx [ 77 ] =
- xx [ 37 ] ; xx [ 78 ] = xx [ 44 ] ; xx [ 79 ] = xx [ 14 ] ; pm_math_cross3
( xx + 70 , xx + 77 , xx + 83 ) ; xx [ 70 ] = xx [ 34 ] + xx [ 55 ] * ( xx [
83 ] + xx [ 37 ] * xx [ 46 ] ) + xx [ 43 ] ; xx [ 71 ] = xx [ 35 ] + ( xx [
84 ] - xx [ 44 ] * xx [ 46 ] ) * xx [ 55 ] + xx [ 0 ] ; xx [ 72 ] = xx [ 36 ]
+ ( xx [ 85 ] - xx [ 46 ] * xx [ 14 ] ) * xx [ 55 ] ; pm_math_quatXform ( xx
+ 3 , xx + 70 , xx + 34 ) ; xx [ 0 ] = xx [ 12 ] * state [ 17 ] ; xx [ 3 ] =
cos ( xx [ 0 ] ) ; xx [ 4 ] = 1.322560116978622e-11 ; xx [ 5 ] = sin ( xx [ 0
] ) ; xx [ 0 ] = xx [ 3 ] - xx [ 4 ] * xx [ 5 ] ; xx [ 6 ] = xx [ 4 ] * xx [
3 ] + xx [ 5 ] ; xx [ 3 ] = xx [ 0 ] * motionData [ 108 ] - xx [ 6 ] *
motionData [ 105 ] ; xx [ 4 ] = xx [ 6 ] * motionData [ 108 ] + xx [ 0 ] *
motionData [ 105 ] ; xx [ 5 ] = xx [ 7 ] * xx [ 4 ] ; xx [ 14 ] = xx [ 0 ] *
motionData [ 106 ] - xx [ 6 ] * motionData [ 107 ] ; xx [ 37 ] = xx [ 6 ] *
motionData [ 106 ] + xx [ 0 ] * motionData [ 107 ] ; xx [ 0 ] = xx [ 7 ] * xx
[ 37 ] ; xx [ 43 ] = motionData [ 56 ] ; xx [ 44 ] = motionData [ 57 ] ; xx [
45 ] = motionData [ 58 ] ; xx [ 46 ] = motionData [ 59 ] ; xx [ 70 ] =
0.01248981622612128 ; xx [ 71 ] = - 0.8540537474350033 ; xx [ 72 ] = -
0.5200348074724102 ; pm_math_quatXform ( xx + 43 , xx + 70 , xx + 77 ) ; xx [
43 ] = motionData [ 147 ] ; xx [ 44 ] = motionData [ 148 ] ; xx [ 45 ] =
motionData [ 149 ] ; xx [ 46 ] = motionData [ 150 ] ; xx [ 70 ] =
7.467718981561455e-3 ; xx [ 71 ] = 0.9990867335093873 ; xx [ 72 ] =
0.04207056095128592 ; pm_math_quatXform ( xx + 43 , xx + 70 , xx + 83 ) ; xx
[ 43 ] = motionData [ 154 ] ; xx [ 44 ] = motionData [ 155 ] ; xx [ 45 ] =
motionData [ 156 ] ; xx [ 46 ] = motionData [ 157 ] ; xx [ 70 ] =
0.6479061989318569 ; xx [ 71 ] = 0.283227010168069 ; xx [ 72 ] = -
0.6478327526628918 ; xx [ 73 ] = 0.2833950293744593 ; xx [ 47 ] = xx [ 12 ] *
state [ 35 ] ; xx [ 12 ] = sin ( xx [ 47 ] ) ; xx [ 86 ] = cos ( xx [ 47 ] )
; xx [ 87 ] = xx [ 64 ] * xx [ 12 ] ; xx [ 88 ] = xx [ 65 ] * xx [ 12 ] ; xx
[ 89 ] = - xx [ 66 ] * xx [ 12 ] ; pm_math_quatCompose ( xx + 70 , xx + 86 ,
xx + 62 ) ; pm_math_quatCompose ( xx + 43 , xx + 62 , xx + 70 ) ; xx [ 86 ] =
- 0.02000000932150861 ; xx [ 87 ] = 4.964353041872051e-8 ; xx [ 88 ] =
2.472325243953481e-11 ; pm_math_quatXform ( xx + 70 , xx + 86 , xx + 89 ) ;
xx [ 70 ] = 9.321570239653743e-9 ; xx [ 71 ] = - 2.314083679089409e-14 ; xx [
72 ] = - 1.459081418711272e-17 ; pm_math_quatXform ( xx + 62 , xx + 70 , xx +
86 ) ; pm_math_quatXform ( xx + 43 , xx + 86 , xx + 62 ) ; J [ 0 ] = xx [ 23
] ; J [ 1 ] = xx [ 23 ] ; J [ 2 ] = xx [ 23 ] ; J [ 3 ] = xx [ 38 ] ; J [ 4 ]
= xx [ 49 ] ; J [ 5 ] = xx [ 60 ] ; J [ 7 ] = xx [ 15 ] ; J [ 8 ] = xx [ 68 ]
; J [ 14 ] = xx [ 23 ] ; J [ 15 ] = xx [ 23 ] ; J [ 16 ] = xx [ 23 ] ; J [ 17
] = xx [ 1 ] ; J [ 20 ] = xx [ 24 ] ; J [ 21 ] = xx [ 24 ] ; J [ 22 ] = xx [
24 ] ; J [ 23 ] = xx [ 39 ] ; J [ 24 ] = xx [ 50 ] ; J [ 25 ] = xx [ 61 ] ; J
[ 27 ] = xx [ 16 ] ; J [ 28 ] = xx [ 69 ] ; J [ 34 ] = xx [ 24 ] ; J [ 35 ] =
xx [ 24 ] ; J [ 36 ] = xx [ 24 ] ; J [ 37 ] = xx [ 2 ] ; J [ 40 ] = xx [ 57 ]
; J [ 41 ] = xx [ 8 ] ; J [ 42 ] = xx [ 8 ] ; J [ 43 ] = xx [ 20 ] + xx [ 9 ]
+ xx [ 28 ] ; J [ 44 ] = xx [ 40 ] + xx [ 31 ] + xx [ 74 ] ; J [ 45 ] = xx [
51 ] + xx [ 17 ] + xx [ 25 ] ; J [ 47 ] = xx [ 80 ] + xx [ 34 ] ; J [ 48 ] =
xx [ 55 ] * ( xx [ 3 ] * xx [ 5 ] - xx [ 14 ] * xx [ 0 ] ) ; J [ 54 ] = xx [
58 ] ; J [ 55 ] = - xx [ 77 ] ; J [ 56 ] = - xx [ 83 ] ; J [ 57 ] = - ( xx [
89 ] + xx [ 62 ] ) ; J [ 60 ] = xx [ 8 ] ; J [ 61 ] = xx [ 57 ] ; J [ 62 ] =
xx [ 8 ] ; J [ 63 ] = xx [ 21 ] + xx [ 10 ] + xx [ 29 ] ; J [ 64 ] = xx [ 41
] + xx [ 32 ] + xx [ 75 ] ; J [ 65 ] = xx [ 52 ] + xx [ 18 ] + xx [ 26 ] ; J
[ 67 ] = xx [ 81 ] + xx [ 35 ] ; J [ 68 ] = xx [ 7 ] - ( xx [ 5 ] * xx [ 4 ]
+ xx [ 0 ] * xx [ 37 ] ) * xx [ 55 ] ; J [ 74 ] = xx [ 8 ] ; J [ 75 ] = - xx
[ 78 ] ; J [ 76 ] = - xx [ 84 ] ; J [ 77 ] = - ( xx [ 90 ] + xx [ 63 ] ) ; J
[ 80 ] = xx [ 8 ] ; J [ 81 ] = xx [ 8 ] ; J [ 82 ] = xx [ 57 ] ; J [ 83 ] =
xx [ 22 ] + xx [ 11 ] + xx [ 30 ] ; J [ 84 ] = xx [ 42 ] + xx [ 33 ] + xx [
76 ] ; J [ 85 ] = xx [ 53 ] + xx [ 19 ] + xx [ 27 ] ; J [ 87 ] = xx [ 82 ] +
xx [ 36 ] ; J [ 88 ] = - ( xx [ 3 ] * xx [ 0 ] + xx [ 14 ] * xx [ 5 ] ) * xx
[ 55 ] ; J [ 94 ] = xx [ 8 ] ; J [ 95 ] = - xx [ 79 ] ; J [ 96 ] = - xx [ 85
] ; J [ 97 ] = - ( xx [ 91 ] + xx [ 64 ] ) ; return 5 ; } static size_t
computeAssemblyJacobian_5 ( const double * state , const double * motionData
, double * J ) { double xx [ 18 ] ; ( void ) state ; xx [ 0 ] = 0.0 ; xx [ 1
] = motionData [ 56 ] ; xx [ 2 ] = motionData [ 57 ] ; xx [ 3 ] = motionData
[ 58 ] ; xx [ 4 ] = motionData [ 59 ] ; xx [ 5 ] = 0.3960576621027012 ; xx [
6 ] = 0.5910864880901976 ; xx [ 7 ] = - 0.2951692504582522 ; xx [ 8 ] = -
0.6376756271576114 ; pm_math_quatCompose ( xx + 1 , xx + 5 , xx + 9 ) ; xx [
1 ] = motionData [ 84 ] ; xx [ 2 ] = motionData [ 85 ] ; xx [ 3 ] =
motionData [ 86 ] ; xx [ 4 ] = motionData [ 87 ] ; xx [ 5 ] =
0.1134483719482246 ; xx [ 6 ] = - 0.4832402834491367 ; xx [ 7 ] =
0.8647215905745264 ; xx [ 8 ] = 0.07658241409460011 ; pm_math_quatCompose (
xx + 1 , xx + 5 , xx + 14 ) ; pm_math_quatInverseCompose ( xx + 9 , xx + 14 ,
xx + 1 ) ; xx [ 5 ] = 0.0 ; xx [ 6 ] = xx [ 5 ] ; xx [ 7 ] = xx [ 5 ] ; xx [
8 ] = xx [ 5 ] ; pm_math_quatDeriv ( xx + 1 , xx + 6 , xx + 13 ) ; xx [ 1 ] =
( xx [ 9 ] * xx [ 11 ] + xx [ 10 ] * xx [ 12 ] ) * 2.0 ; J [ 14 ] = xx [ 14 ]
; J [ 18 ] = xx [ 14 ] ; J [ 34 ] = xx [ 15 ] ; J [ 38 ] = xx [ 15 ] ; J [ 54
] = - xx [ 1 ] ; J [ 58 ] = xx [ 1 ] ; return 3 ; } static size_t
computeAssemblyJacobian_6 ( const double * state , const double * motionData
, double * J ) { double xx [ 29 ] ; ( void ) state ; xx [ 0 ] = 0.0 ; xx [ 1
] = motionData [ 91 ] ; xx [ 2 ] = motionData [ 92 ] ; xx [ 3 ] = motionData
[ 93 ] ; xx [ 4 ] = motionData [ 94 ] ; xx [ 5 ] = 0.6040145266977934 ; xx [
6 ] = - 0.3676499034924946 ; xx [ 7 ] = xx [ 5 ] ; xx [ 8 ] = xx [ 6 ] ; xx [
9 ] = xx [ 6 ] ; xx [ 10 ] = - xx [ 5 ] ; pm_math_quatCompose ( xx + 1 , xx +
7 , xx + 11 ) ; xx [ 1 ] = motionData [ 147 ] ; xx [ 2 ] = motionData [ 148 ]
; xx [ 3 ] = motionData [ 149 ] ; xx [ 4 ] = motionData [ 150 ] ; xx [ 5 ] =
- 0.07462691568545904 ; xx [ 6 ] = 0.7058078229561192 ; xx [ 7 ] =
0.7030526290644511 ; xx [ 8 ] = - 0.04453247438424026 ; pm_math_quatCompose (
xx + 1 , xx + 5 , xx + 16 ) ; pm_math_quatInverseCompose ( xx + 11 , xx + 16
, xx + 1 ) ; xx [ 5 ] = 0.0 ; xx [ 6 ] = xx [ 5 ] ; xx [ 7 ] = xx [ 5 ] ; xx
[ 8 ] = xx [ 5 ] ; pm_math_quatDeriv ( xx + 1 , xx + 6 , xx + 15 ) ; xx [ 1 ]
= 1.0 ; xx [ 2 ] = xx [ 14 ] * xx [ 14 ] ; xx [ 4 ] = 2.0 ; xx [ 5 ] = ( xx [
13 ] * xx [ 13 ] + xx [ 2 ] ) * xx [ 4 ] ; xx [ 3 ] = xx [ 1 ] - xx [ 5 ] ;
xx [ 6 ] = motionData [ 56 ] ; xx [ 7 ] = motionData [ 57 ] ; xx [ 8 ] =
motionData [ 58 ] ; xx [ 9 ] = motionData [ 59 ] ; xx [ 19 ] =
0.01248981622612128 ; xx [ 20 ] = - 0.8540537474350033 ; xx [ 21 ] = -
0.5200348074724102 ; pm_math_quatXform ( xx + 6 , xx + 19 , xx + 22 ) ; xx [
6 ] = xx [ 11 ] * xx [ 14 ] ; xx [ 7 ] = xx [ 12 ] * xx [ 13 ] ; xx [ 19 ] =
xx [ 3 ] ; xx [ 20 ] = ( xx [ 6 ] + xx [ 7 ] ) * xx [ 4 ] ; xx [ 21 ] = xx [
4 ] * ( xx [ 12 ] * xx [ 14 ] - xx [ 11 ] * xx [ 13 ] ) ; xx [ 8 ] = xx [ 4 ]
* ( xx [ 7 ] - xx [ 6 ] ) ; xx [ 26 ] = xx [ 8 ] ; xx [ 27 ] = xx [ 1 ] - (
xx [ 2 ] + xx [ 12 ] * xx [ 12 ] ) * xx [ 4 ] ; xx [ 28 ] = ( xx [ 11 ] * xx
[ 12 ] + xx [ 13 ] * xx [ 14 ] ) * xx [ 4 ] ; J [ 14 ] = xx [ 16 ] ; J [ 15 ]
= xx [ 16 ] ; J [ 19 ] = xx [ 16 ] ; J [ 34 ] = xx [ 17 ] ; J [ 35 ] = xx [
17 ] ; J [ 39 ] = xx [ 17 ] ; J [ 54 ] = xx [ 18 ] ; J [ 55 ] = xx [ 18 ] ; J
[ 59 ] = xx [ 18 ] ; J [ 74 ] = xx [ 3 ] ; J [ 75 ] = pm_math_dot3 ( xx + 22
, xx + 19 ) ; J [ 79 ] = xx [ 5 ] - xx [ 1 ] ; J [ 94 ] = xx [ 8 ] ; J [ 95 ]
= pm_math_dot3 ( xx + 22 , xx + 26 ) ; J [ 99 ] = - xx [ 8 ] ; return 5 ; }
size_t Walk_Sim4_6bedce81_1_computeAssemblyJacobian ( const void * mech ,
size_t constraintIdx , boolean_T forVelocitySatisfaction , const double *
state , const double * motionData , double * J ) { ( void ) mech ; ( void )
state ; ( void ) forVelocitySatisfaction ; ( void ) motionData ; ( void ) J ;
switch ( constraintIdx ) { case 0 : return computeAssemblyJacobian_0 ( state
, motionData , J ) ; case 1 : return computeAssemblyJacobian_1 ( state ,
motionData , J ) ; case 2 : return computeAssemblyJacobian_2 ( state ,
motionData , J ) ; case 3 : return computeAssemblyJacobian_3 ( state ,
motionData , J ) ; case 4 : return computeAssemblyJacobian_4 ( state ,
motionData , J ) ; case 5 : return computeAssemblyJacobian_5 ( state ,
motionData , J ) ; case 6 : return computeAssemblyJacobian_6 ( state ,
motionData , J ) ; } return 0 ; } size_t
Walk_Sim4_6bedce81_1_computeFullAssemblyJacobian ( const void * mech , const
double * state , const double * motionData , double * J ) { double xx [ 134 ]
; ( void ) mech ; xx [ 0 ] = - motionData [ 112 ] ; xx [ 1 ] = - motionData [
113 ] ; xx [ 2 ] = - motionData [ 114 ] ; xx [ 3 ] = - motionData [ 115 ] ;
xx [ 4 ] = 0.0 ; xx [ 5 ] = xx [ 4 ] ; xx [ 6 ] = xx [ 4 ] ; xx [ 7 ] = xx [
4 ] ; pm_math_quatDeriv ( xx + 0 , xx + 5 , xx + 8 ) ; xx [ 12 ] = motionData
[ 119 ] ; xx [ 13 ] = motionData [ 120 ] ; xx [ 14 ] = motionData [ 121 ] ;
xx [ 15 ] = motionData [ 122 ] ; xx [ 16 ] = 0.9999999999969194 ; xx [ 17 ] =
- 2.482175055048485e-6 ; xx [ 18 ] = - 1.750219320822278e-9 ;
pm_math_quatInverseXform ( xx + 12 , xx + 16 , xx + 19 ) ; pm_math_quatDeriv
( xx + 0 , xx + 19 , xx + 22 ) ; xx [ 19 ] = 1.755163250776454e-6 ; xx [ 20 ]
= 0.7076051973836626 ; xx [ 21 ] = - 0.7066080134222561 ;
pm_math_quatInverseXform ( xx + 12 , xx + 19 , xx + 26 ) ; pm_math_quatDeriv
( xx + 0 , xx + 26 , xx + 29 ) ; xx [ 26 ] = 1.755163248902065e-6 ; xx [ 27 ]
= 0.7066080134200763 ; xx [ 28 ] = 0.7076051973858394 ;
pm_math_quatInverseXform ( xx + 12 , xx + 26 , xx + 33 ) ; pm_math_quatDeriv
( xx + 0 , xx + 33 , xx + 12 ) ; xx [ 33 ] = 0.0 ; xx [ 34 ] =
2.645128560629928e-11 ; xx [ 35 ] = xx [ 34 ] * motionData [ 31 ] ; xx [ 37 ]
= motionData [ 29 ] ; xx [ 38 ] = motionData [ 30 ] ; xx [ 39 ] = motionData
[ 31 ] ; xx [ 40 ] = xx [ 34 ] * motionData [ 29 ] + motionData [ 30 ] ; xx [
41 ] = - xx [ 35 ] ; xx [ 42 ] = - motionData [ 31 ] ; xx [ 43 ] = xx [ 40 ]
; pm_math_cross3 ( xx + 37 , xx + 41 , xx + 44 ) ; xx [ 36 ] = 2.0 ; xx [ 38
] = 1.0 ; xx [ 41 ] = ( xx [ 35 ] * motionData [ 28 ] + xx [ 44 ] ) * xx [ 36
] - xx [ 38 ] ; xx [ 42 ] = xx [ 34 ] + ( motionData [ 28 ] * motionData [ 31
] + xx [ 45 ] ) * xx [ 36 ] ; xx [ 43 ] = xx [ 36 ] * ( xx [ 46 ] - xx [ 40 ]
* motionData [ 28 ] ) ; pm_math_quatDeriv ( xx + 0 , xx + 41 , xx + 44 ) ; xx
[ 35 ] = - xx [ 38 ] ; xx [ 39 ] = xx [ 35 ] ; xx [ 40 ] = xx [ 4 ] ; xx [ 41
] = xx [ 4 ] ; pm_math_quatDeriv ( xx + 0 , xx + 39 , xx + 48 ) ; xx [ 37 ] =
0.5 ; xx [ 39 ] = xx [ 37 ] * state [ 19 ] ; xx [ 40 ] = sin ( xx [ 39 ] ) ;
xx [ 43 ] = cos ( xx [ 39 ] ) ; xx [ 52 ] = xx [ 4 ] ; xx [ 53 ] = xx [ 36 ]
* xx [ 40 ] * xx [ 40 ] - xx [ 38 ] ; xx [ 54 ] = - xx [ 36 ] * xx [ 43 ] *
xx [ 40 ] ; pm_math_quatDeriv ( xx + 0 , xx + 52 , xx + 55 ) ; xx [ 39 ] = xx
[ 37 ] * state [ 20 ] ; xx [ 41 ] = cos ( xx [ 39 ] ) ; xx [ 42 ] =
9.351995539151417e-12 ; xx [ 52 ] = xx [ 37 ] * state [ 21 ] ; xx [ 53 ] =
cos ( xx [ 52 ] ) ; xx [ 54 ] = xx [ 42 ] * xx [ 53 ] ; xx [ 59 ] =
2.645143785344124e-11 ; xx [ 60 ] = sin ( xx [ 52 ] ) ; xx [ 52 ] = xx [ 59 ]
* xx [ 60 ] ; xx [ 61 ] = xx [ 42 ] * xx [ 52 ] ; xx [ 63 ] =
0.7071067811865476 ; xx [ 64 ] = xx [ 63 ] * xx [ 60 ] ; xx [ 65 ] = xx [ 54
] - xx [ 61 ] - xx [ 64 ] ; xx [ 62 ] = xx [ 63 ] * xx [ 53 ] ; xx [ 53 ] =
xx [ 63 ] * xx [ 52 ] ; xx [ 52 ] = xx [ 42 ] * xx [ 60 ] ; xx [ 60 ] = xx [
62 ] - xx [ 53 ] + xx [ 52 ] ; xx [ 63 ] = sin ( xx [ 39 ] ) ; xx [ 39 ] = xx
[ 41 ] * xx [ 65 ] + xx [ 60 ] * xx [ 63 ] ; xx [ 42 ] = xx [ 54 ] + xx [ 61
] + xx [ 64 ] ; xx [ 54 ] = xx [ 62 ] - xx [ 52 ] + xx [ 53 ] ; xx [ 52 ] =
xx [ 41 ] * xx [ 42 ] + xx [ 63 ] * xx [ 54 ] ; xx [ 61 ] = xx [ 39 ] * xx [
43 ] - xx [ 52 ] * xx [ 40 ] ; xx [ 53 ] = xx [ 41 ] * xx [ 54 ] - xx [ 63 ]
* xx [ 42 ] ; xx [ 42 ] = xx [ 60 ] * xx [ 41 ] - xx [ 63 ] * xx [ 65 ] ; xx
[ 60 ] = xx [ 43 ] * xx [ 53 ] - xx [ 40 ] * xx [ 42 ] ; xx [ 54 ] = xx [ 43
] * xx [ 42 ] + xx [ 40 ] * xx [ 53 ] ; xx [ 62 ] = xx [ 61 ] ; xx [ 63 ] =
xx [ 60 ] ; xx [ 64 ] = xx [ 54 ] ; xx [ 41 ] = xx [ 54 ] * xx [ 59 ] ; xx [
53 ] = xx [ 61 ] - xx [ 59 ] * xx [ 60 ] ; xx [ 65 ] = xx [ 54 ] ; xx [ 66 ]
= - xx [ 41 ] ; xx [ 67 ] = - xx [ 53 ] ; pm_math_cross3 ( xx + 62 , xx + 65
, xx + 68 ) ; xx [ 42 ] = xx [ 52 ] * xx [ 43 ] + xx [ 39 ] * xx [ 40 ] ; xx
[ 60 ] = xx [ 36 ] * ( xx [ 68 ] - xx [ 42 ] * xx [ 54 ] ) - xx [ 59 ] ; xx [
61 ] = xx [ 36 ] * ( xx [ 69 ] + xx [ 42 ] * xx [ 41 ] ) - xx [ 38 ] ; xx [
62 ] = ( xx [ 42 ] * xx [ 53 ] + xx [ 70 ] ) * xx [ 36 ] ; pm_math_quatDeriv
( xx + 0 , xx + 60 , xx + 39 ) ; xx [ 0 ] = motionData [ 161 ] ; xx [ 1 ] =
motionData [ 162 ] ; xx [ 2 ] = motionData [ 163 ] ; xx [ 3 ] = motionData [
164 ] ; xx [ 52 ] = 0.653348032512154 ; xx [ 53 ] = - 0.2704357055399164 ; xx
[ 54 ] = - 0.2704350334642597 ; xx [ 55 ] = - 0.6533496539042549 ;
pm_math_quatCompose ( xx + 0 , xx + 52 , xx + 59 ) ; xx [ 52 ] = motionData [
168 ] ; xx [ 53 ] = motionData [ 169 ] ; xx [ 54 ] = motionData [ 170 ] ; xx
[ 55 ] = motionData [ 171 ] ; xx [ 8 ] = - xx [ 37 ] ; xx [ 63 ] = xx [ 8 ] ;
xx [ 64 ] = xx [ 8 ] ; xx [ 65 ] = xx [ 8 ] ; xx [ 66 ] = xx [ 8 ] ;
pm_math_quatCompose ( xx + 52 , xx + 63 , xx + 67 ) ;
pm_math_quatInverseCompose ( xx + 59 , xx + 67 , xx + 52 ) ;
pm_math_quatDeriv ( xx + 52 , xx + 5 , xx + 59 ) ; xx [ 71 ] = motionData [
189 ] ; xx [ 72 ] = motionData [ 190 ] ; xx [ 73 ] = motionData [ 191 ] ; xx
[ 74 ] = motionData [ 192 ] ; pm_math_quatInverseXform ( xx + 71 , xx + 16 ,
xx + 75 ) ; pm_math_quatInverseXform ( xx + 63 , xx + 75 , xx + 79 ) ;
pm_math_quatDeriv ( xx + 52 , xx + 79 , xx + 82 ) ; pm_math_quatInverseXform
( xx + 71 , xx + 19 , xx + 78 ) ; pm_math_quatInverseXform ( xx + 63 , xx +
78 , xx + 86 ) ; pm_math_quatDeriv ( xx + 52 , xx + 86 , xx + 89 ) ;
pm_math_quatInverseXform ( xx + 71 , xx + 26 , xx + 86 ) ;
pm_math_quatInverseXform ( xx + 63 , xx + 86 , xx + 93 ) ; pm_math_quatDeriv
( xx + 52 , xx + 93 , xx + 96 ) ; xx [ 8 ] = xx [ 34 ] * motionData [ 24 ] ;
xx [ 93 ] = motionData [ 22 ] ; xx [ 94 ] = motionData [ 23 ] ; xx [ 95 ] =
motionData [ 24 ] ; xx [ 12 ] = xx [ 34 ] * motionData [ 22 ] + motionData [
23 ] ; xx [ 100 ] = - xx [ 8 ] ; xx [ 101 ] = - motionData [ 24 ] ; xx [ 102
] = xx [ 12 ] ; pm_math_cross3 ( xx + 93 , xx + 100 , xx + 103 ) ; xx [ 22 ]
= ( xx [ 8 ] * motionData [ 21 ] + xx [ 103 ] ) * xx [ 36 ] - xx [ 38 ] ; xx
[ 8 ] = xx [ 34 ] + ( motionData [ 21 ] * motionData [ 24 ] + xx [ 104 ] ) *
xx [ 36 ] ; xx [ 29 ] = xx [ 105 ] - xx [ 12 ] * motionData [ 21 ] ; xx [ 93
] = xx [ 22 ] ; xx [ 94 ] = xx [ 8 ] ; xx [ 95 ] = xx [ 36 ] * xx [ 29 ] ;
pm_math_quatInverseXform ( xx + 63 , xx + 93 , xx + 100 ) ; pm_math_quatDeriv
( xx + 52 , xx + 100 , xx + 63 ) ; xx [ 93 ] = xx [ 4 ] ; xx [ 94 ] = xx [ 35
] ; xx [ 95 ] = xx [ 4 ] ; pm_math_quatDeriv ( xx + 52 , xx + 93 , xx + 100 )
; xx [ 12 ] = 1.755163249739233e-6 ; xx [ 39 ] = 0.7074588436864477 ; xx [ 43
] = 0.7067545433081799 ; xx [ 93 ] = xx [ 12 ] ; xx [ 94 ] = xx [ 39 ] ; xx [
95 ] = - xx [ 43 ] ; pm_math_quatXform ( xx + 0 , xx + 93 , xx + 104 ) ;
pm_math_quatInverseXform ( xx + 67 , xx + 104 , xx + 0 ) ; xx [ 67 ] = - xx [
0 ] ; xx [ 68 ] = - xx [ 1 ] ; xx [ 69 ] = - xx [ 2 ] ; pm_math_quatDeriv (
xx + 52 , xx + 67 , xx + 0 ) ; xx [ 52 ] = state [ 3 ] ; xx [ 53 ] = state [
4 ] ; xx [ 54 ] = state [ 5 ] ; xx [ 55 ] = state [ 6 ] ; xx [ 66 ] =
0.9240143931192876 ; xx [ 67 ] = - 0.382357687652353 ; xx [ 68 ] =
4.753479711208553e-7 ; xx [ 69 ] = - 1.146448133648799e-6 ;
pm_math_quatComposeInverse ( xx + 52 , xx + 66 , xx + 92 ) ;
pm_math_quatCompose ( xx + 92 , xx + 71 , xx + 52 ) ; xx [ 0 ] =
0.03598789236668963 ; xx [ 3 ] = 0.01999999999999998 ; xx [ 66 ] = xx [ 0 ] *
xx [ 76 ] ; xx [ 67 ] = - ( xx [ 3 ] * xx [ 77 ] + xx [ 0 ] * xx [ 75 ] ) ;
xx [ 68 ] = xx [ 3 ] * xx [ 76 ] ; pm_math_quatXform ( xx + 52 , xx + 66 , xx
+ 69 ) ; xx [ 66 ] = motionData [ 193 ] ; xx [ 67 ] = motionData [ 194 ] ; xx
[ 68 ] = motionData [ 195 ] ; pm_math_cross3 ( xx + 16 , xx + 66 , xx + 72 )
; pm_math_quatXform ( xx + 92 , xx + 72 , xx + 16 ) ; xx [ 72 ] = -
1.636087754743471e-14 ; xx [ 73 ] = - 6.591343902059674e-9 ; xx [ 74 ] = -
4.647672291003569e-12 ; pm_math_quatXform ( xx + 92 , xx + 72 , xx + 75 ) ;
xx [ 72 ] = xx [ 0 ] * xx [ 79 ] ; xx [ 73 ] = - ( xx [ 3 ] * xx [ 80 ] + xx
[ 0 ] * xx [ 78 ] ) ; xx [ 74 ] = xx [ 3 ] * xx [ 79 ] ; pm_math_quatXform (
xx + 52 , xx + 72 , xx + 78 ) ; pm_math_cross3 ( xx + 19 , xx + 66 , xx + 72
) ; pm_math_quatXform ( xx + 92 , xx + 72 , xx + 19 ) ; xx [ 72 ] =
4.66078512037031e-9 ; xx [ 73 ] = - 1.156888459016026e-14 ; xx [ 74 ] = -
8.157423606846605e-18 ; pm_math_quatXform ( xx + 92 , xx + 72 , xx + 103 ) ;
xx [ 72 ] = xx [ 0 ] * xx [ 87 ] ; xx [ 73 ] = - ( xx [ 3 ] * xx [ 88 ] + xx
[ 0 ] * xx [ 86 ] ) ; xx [ 74 ] = xx [ 3 ] * xx [ 87 ] ; pm_math_quatXform (
xx + 52 , xx + 72 , xx + 85 ) ; pm_math_cross3 ( xx + 26 , xx + 66 , xx + 52
) ; pm_math_quatXform ( xx + 92 , xx + 52 , xx + 26 ) ; xx [ 52 ] =
4.660785137486138e-9 ; xx [ 53 ] = - 1.156888457780551e-14 ; xx [ 54 ] = -
8.157423598135056e-18 ; pm_math_quatXform ( xx + 92 , xx + 52 , xx + 66 ) ;
xx [ 52 ] = motionData [ 0 ] ; xx [ 53 ] = motionData [ 1 ] ; xx [ 54 ] =
motionData [ 2 ] ; xx [ 55 ] = motionData [ 3 ] ; xx [ 44 ] =
0.6531857048393208 ; xx [ 48 ] = xx [ 37 ] * state [ 15 ] ; xx [ 59 ] = cos (
xx [ 48 ] ) ; xx [ 62 ] = 0.6531863759394836 ; xx [ 63 ] = sin ( xx [ 48 ] )
; xx [ 48 ] = xx [ 34 ] * xx [ 63 ] ; xx [ 72 ] = 0.2708275418267761 ; xx [
74 ] = xx [ 44 ] * xx [ 59 ] + xx [ 62 ] * xx [ 48 ] + xx [ 72 ] * xx [ 63 ]
; xx [ 81 ] = 0.2708291636228809 ; xx [ 88 ] = xx [ 44 ] * xx [ 63 ] - xx [
72 ] * xx [ 59 ] - xx [ 81 ] * xx [ 48 ] ; xx [ 73 ] = xx [ 62 ] * xx [ 59 ]
- xx [ 44 ] * xx [ 48 ] - xx [ 81 ] * xx [ 63 ] ; xx [ 44 ] = xx [ 81 ] * xx
[ 59 ] - xx [ 72 ] * xx [ 48 ] + xx [ 62 ] * xx [ 63 ] ; xx [ 92 ] = - xx [
74 ] ; xx [ 93 ] = xx [ 88 ] ; xx [ 94 ] = xx [ 73 ] ; xx [ 95 ] = xx [ 44 ]
; pm_math_quatCompose ( xx + 52 , xx + 92 , xx + 106 ) ; xx [ 110 ] =
motionData [ 21 ] ; xx [ 111 ] = motionData [ 22 ] ; xx [ 112 ] = motionData
[ 23 ] ; xx [ 113 ] = motionData [ 24 ] ; pm_math_quatCompose ( xx + 106 , xx
+ 110 , xx + 114 ) ; xx [ 106 ] = xx [ 8 ] * xx [ 0 ] ; xx [ 107 ] = - (
0.03999999999999996 * xx [ 29 ] + xx [ 22 ] * xx [ 0 ] ) ; xx [ 108 ] = xx [
8 ] * xx [ 3 ] ; pm_math_quatXform ( xx + 114 , xx + 106 , xx + 109 ) ; xx [
106 ] = xx [ 34 ] * motionData [ 27 ] ; xx [ 107 ] = motionData [ 27 ] ; xx [
108 ] = - ( motionData [ 26 ] + xx [ 34 ] * motionData [ 25 ] ) ;
pm_math_quatXform ( xx + 92 , xx + 106 , xx + 112 ) ; xx [ 92 ] = xx [ 88 ] ;
xx [ 93 ] = xx [ 73 ] ; xx [ 94 ] = xx [ 44 ] ; xx [ 0 ] = 0.2887783607120545
; xx [ 8 ] = xx [ 44 ] * xx [ 0 ] ; xx [ 22 ] = 7.638558896113468e-12 ; xx [
29 ] = xx [ 44 ] * xx [ 22 ] ; xx [ 34 ] = xx [ 0 ] * xx [ 88 ] - xx [ 22 ] *
xx [ 73 ] ; xx [ 106 ] = - xx [ 8 ] ; xx [ 107 ] = xx [ 29 ] ; xx [ 108 ] =
xx [ 34 ] ; pm_math_cross3 ( xx + 92 , xx + 106 , xx + 115 ) ; xx [ 92 ] = xx
[ 112 ] + xx [ 36 ] * ( xx [ 115 ] + xx [ 8 ] * xx [ 74 ] ) + xx [ 22 ] ; xx
[ 93 ] = xx [ 113 ] + ( xx [ 116 ] - xx [ 29 ] * xx [ 74 ] ) * xx [ 36 ] + xx
[ 0 ] ; xx [ 94 ] = xx [ 114 ] + ( xx [ 117 ] - xx [ 34 ] * xx [ 74 ] ) * xx
[ 36 ] ; pm_math_quatXform ( xx + 52 , xx + 92 , xx + 72 ) ; xx [ 0 ] = xx [
37 ] * state [ 17 ] ; xx [ 8 ] = cos ( xx [ 0 ] ) ; xx [ 22 ] =
1.322560116978622e-11 ; xx [ 29 ] = sin ( xx [ 0 ] ) ; xx [ 0 ] = xx [ 8 ] -
xx [ 22 ] * xx [ 29 ] ; xx [ 34 ] = xx [ 22 ] * xx [ 8 ] + xx [ 29 ] ; xx [ 8
] = xx [ 0 ] * motionData [ 108 ] - xx [ 34 ] * motionData [ 105 ] ; xx [ 22
] = xx [ 34 ] * motionData [ 108 ] + xx [ 0 ] * motionData [ 105 ] ; xx [ 29
] = xx [ 3 ] * xx [ 22 ] ; xx [ 44 ] = xx [ 0 ] * motionData [ 106 ] - xx [
34 ] * motionData [ 107 ] ; xx [ 48 ] = xx [ 34 ] * motionData [ 106 ] + xx [
0 ] * motionData [ 107 ] ; xx [ 0 ] = xx [ 3 ] * xx [ 48 ] ; xx [ 52 ] =
motionData [ 56 ] ; xx [ 53 ] = motionData [ 57 ] ; xx [ 54 ] = motionData [
58 ] ; xx [ 55 ] = motionData [ 59 ] ; xx [ 92 ] = 0.01248981622612128 ; xx [
93 ] = - 0.8540537474350033 ; xx [ 94 ] = - 0.5200348074724102 ;
pm_math_quatXform ( xx + 52 , xx + 92 , xx + 106 ) ; xx [ 92 ] = motionData [
147 ] ; xx [ 93 ] = motionData [ 148 ] ; xx [ 94 ] = motionData [ 149 ] ; xx
[ 95 ] = motionData [ 150 ] ; xx [ 112 ] = 7.467718981561455e-3 ; xx [ 113 ]
= 0.9990867335093873 ; xx [ 114 ] = 0.04207056095128592 ; pm_math_quatXform (
xx + 92 , xx + 112 , xx + 115 ) ; xx [ 118 ] = motionData [ 154 ] ; xx [ 119
] = motionData [ 155 ] ; xx [ 120 ] = motionData [ 156 ] ; xx [ 121 ] =
motionData [ 157 ] ; xx [ 122 ] = 0.6479061989318569 ; xx [ 123 ] =
0.283227010168069 ; xx [ 124 ] = - 0.6478327526628918 ; xx [ 125 ] =
0.2833950293744593 ; xx [ 34 ] = xx [ 37 ] * state [ 35 ] ; xx [ 59 ] = sin (
xx [ 34 ] ) ; xx [ 126 ] = cos ( xx [ 34 ] ) ; xx [ 127 ] = xx [ 12 ] * xx [
59 ] ; xx [ 128 ] = xx [ 39 ] * xx [ 59 ] ; xx [ 129 ] = - xx [ 43 ] * xx [
59 ] ; pm_math_quatCompose ( xx + 122 , xx + 126 , xx + 130 ) ;
pm_math_quatCompose ( xx + 118 , xx + 130 , xx + 122 ) ; xx [ 112 ] = -
0.02000000932150861 ; xx [ 113 ] = 4.964353041872051e-8 ; xx [ 114 ] =
2.472325243953481e-11 ; pm_math_quatXform ( xx + 122 , xx + 112 , xx + 126 )
; xx [ 112 ] = 9.321570239653743e-9 ; xx [ 113 ] = - 2.314083679089409e-14 ;
xx [ 114 ] = - 1.459081418711272e-17 ; pm_math_quatXform ( xx + 130 , xx +
112 , xx + 122 ) ; pm_math_quatXform ( xx + 118 , xx + 122 , xx + 112 ) ; xx
[ 118 ] = 0.3960576621027012 ; xx [ 119 ] = 0.5910864880901976 ; xx [ 120 ] =
- 0.2951692504582522 ; xx [ 121 ] = - 0.6376756271576114 ;
pm_math_quatCompose ( xx + 52 , xx + 118 , xx + 122 ) ; xx [ 52 ] =
motionData [ 84 ] ; xx [ 53 ] = motionData [ 85 ] ; xx [ 54 ] = motionData [
86 ] ; xx [ 55 ] = motionData [ 87 ] ; xx [ 118 ] = 0.1134483719482246 ; xx [
119 ] = - 0.4832402834491367 ; xx [ 120 ] = 0.8647215905745264 ; xx [ 121 ] =
0.07658241409460011 ; pm_math_quatCompose ( xx + 52 , xx + 118 , xx + 129 ) ;
pm_math_quatInverseCompose ( xx + 122 , xx + 129 , xx + 52 ) ;
pm_math_quatDeriv ( xx + 52 , xx + 5 , xx + 118 ) ; xx [ 12 ] = ( xx [ 122 ]
* xx [ 124 ] + xx [ 123 ] * xx [ 125 ] ) * xx [ 36 ] ; xx [ 52 ] = motionData
[ 91 ] ; xx [ 53 ] = motionData [ 92 ] ; xx [ 54 ] = motionData [ 93 ] ; xx [
55 ] = motionData [ 94 ] ; xx [ 34 ] = 0.6040145266977934 ; xx [ 39 ] = -
0.3676499034924946 ; xx [ 121 ] = xx [ 34 ] ; xx [ 122 ] = xx [ 39 ] ; xx [
123 ] = xx [ 39 ] ; xx [ 124 ] = - xx [ 34 ] ; pm_math_quatCompose ( xx + 52
, xx + 121 , xx + 129 ) ; xx [ 52 ] = - 0.07462691568545904 ; xx [ 53 ] =
0.7058078229561192 ; xx [ 54 ] = 0.7030526290644511 ; xx [ 55 ] = -
0.04453247438424026 ; pm_math_quatCompose ( xx + 92 , xx + 52 , xx + 121 ) ;
pm_math_quatInverseCompose ( xx + 129 , xx + 121 , xx + 52 ) ;
pm_math_quatDeriv ( xx + 52 , xx + 5 , xx + 92 ) ; xx [ 5 ] = xx [ 132 ] * xx
[ 132 ] ; xx [ 7 ] = ( xx [ 131 ] * xx [ 131 ] + xx [ 5 ] ) * xx [ 36 ] ; xx
[ 6 ] = xx [ 38 ] - xx [ 7 ] ; xx [ 34 ] = xx [ 129 ] * xx [ 132 ] ; xx [ 39
] = xx [ 130 ] * xx [ 131 ] ; xx [ 52 ] = xx [ 6 ] ; xx [ 53 ] = ( xx [ 34 ]
+ xx [ 39 ] ) * xx [ 36 ] ; xx [ 54 ] = xx [ 36 ] * ( xx [ 130 ] * xx [ 132 ]
- xx [ 129 ] * xx [ 131 ] ) ; xx [ 43 ] = xx [ 36 ] * ( xx [ 39 ] - xx [ 34 ]
) ; xx [ 121 ] = xx [ 43 ] ; xx [ 122 ] = xx [ 38 ] - ( xx [ 5 ] + xx [ 130 ]
* xx [ 130 ] ) * xx [ 36 ] ; xx [ 123 ] = ( xx [ 129 ] * xx [ 130 ] + xx [
131 ] * xx [ 132 ] ) * xx [ 36 ] ; J [ 0 ] = xx [ 9 ] ; J [ 1 ] = xx [ 9 ] ;
J [ 2 ] = xx [ 9 ] ; J [ 3 ] = xx [ 23 ] ; J [ 4 ] = xx [ 30 ] ; J [ 5 ] = xx
[ 13 ] ; J [ 7 ] = xx [ 45 ] ; J [ 9 ] = xx [ 49 ] ; J [ 10 ] = xx [ 56 ] ; J
[ 11 ] = xx [ 40 ] ; J [ 20 ] = xx [ 10 ] ; J [ 21 ] = xx [ 10 ] ; J [ 22 ] =
xx [ 10 ] ; J [ 23 ] = xx [ 24 ] ; J [ 24 ] = xx [ 31 ] ; J [ 25 ] = xx [ 14
] ; J [ 27 ] = xx [ 46 ] ; J [ 29 ] = xx [ 50 ] ; J [ 30 ] = xx [ 57 ] ; J [
31 ] = xx [ 41 ] ; J [ 40 ] = xx [ 11 ] ; J [ 41 ] = xx [ 11 ] ; J [ 42 ] =
xx [ 11 ] ; J [ 43 ] = xx [ 25 ] ; J [ 44 ] = xx [ 32 ] ; J [ 45 ] = xx [ 15
] ; J [ 47 ] = xx [ 47 ] ; J [ 49 ] = xx [ 51 ] ; J [ 50 ] = xx [ 58 ] ; J [
51 ] = xx [ 42 ] ; J [ 60 ] = xx [ 60 ] ; J [ 61 ] = xx [ 60 ] ; J [ 62 ] =
xx [ 60 ] ; J [ 63 ] = xx [ 83 ] ; J [ 64 ] = xx [ 90 ] ; J [ 65 ] = xx [ 97
] ; J [ 67 ] = xx [ 64 ] ; J [ 68 ] = xx [ 101 ] ; J [ 74 ] = xx [ 60 ] ; J [
75 ] = xx [ 60 ] ; J [ 76 ] = xx [ 60 ] ; J [ 77 ] = xx [ 1 ] ; J [ 80 ] = xx
[ 61 ] ; J [ 81 ] = xx [ 61 ] ; J [ 82 ] = xx [ 61 ] ; J [ 83 ] = xx [ 84 ] ;
J [ 84 ] = xx [ 91 ] ; J [ 85 ] = xx [ 98 ] ; J [ 87 ] = xx [ 65 ] ; J [ 88 ]
= xx [ 102 ] ; J [ 94 ] = xx [ 61 ] ; J [ 95 ] = xx [ 61 ] ; J [ 96 ] = xx [
61 ] ; J [ 97 ] = xx [ 2 ] ; J [ 100 ] = xx [ 38 ] ; J [ 101 ] = xx [ 4 ] ; J
[ 102 ] = xx [ 4 ] ; J [ 103 ] = xx [ 69 ] + xx [ 16 ] + xx [ 75 ] ; J [ 104
] = xx [ 78 ] + xx [ 19 ] + xx [ 103 ] ; J [ 105 ] = xx [ 85 ] + xx [ 26 ] +
xx [ 66 ] ; J [ 107 ] = xx [ 109 ] + xx [ 72 ] ; J [ 108 ] = xx [ 36 ] * ( xx
[ 8 ] * xx [ 29 ] - xx [ 44 ] * xx [ 0 ] ) ; J [ 114 ] = xx [ 35 ] ; J [ 115
] = - xx [ 106 ] ; J [ 116 ] = - xx [ 115 ] ; J [ 117 ] = - ( xx [ 126 ] + xx
[ 112 ] ) ; J [ 120 ] = xx [ 4 ] ; J [ 121 ] = xx [ 38 ] ; J [ 122 ] = xx [ 4
] ; J [ 123 ] = xx [ 70 ] + xx [ 17 ] + xx [ 76 ] ; J [ 124 ] = xx [ 79 ] +
xx [ 20 ] + xx [ 104 ] ; J [ 125 ] = xx [ 86 ] + xx [ 27 ] + xx [ 67 ] ; J [
127 ] = xx [ 110 ] + xx [ 73 ] ; J [ 128 ] = xx [ 3 ] - ( xx [ 29 ] * xx [ 22
] + xx [ 0 ] * xx [ 48 ] ) * xx [ 36 ] ; J [ 134 ] = xx [ 4 ] ; J [ 135 ] = -
xx [ 107 ] ; J [ 136 ] = - xx [ 116 ] ; J [ 137 ] = - ( xx [ 127 ] + xx [ 113
] ) ; J [ 140 ] = xx [ 4 ] ; J [ 141 ] = xx [ 4 ] ; J [ 142 ] = xx [ 38 ] ; J
[ 143 ] = xx [ 71 ] + xx [ 18 ] + xx [ 77 ] ; J [ 144 ] = xx [ 80 ] + xx [ 21
] + xx [ 105 ] ; J [ 145 ] = xx [ 87 ] + xx [ 28 ] + xx [ 68 ] ; J [ 147 ] =
xx [ 111 ] + xx [ 74 ] ; J [ 148 ] = - ( xx [ 8 ] * xx [ 0 ] + xx [ 44 ] * xx
[ 29 ] ) * xx [ 36 ] ; J [ 154 ] = xx [ 4 ] ; J [ 155 ] = - xx [ 108 ] ; J [
156 ] = - xx [ 117 ] ; J [ 157 ] = - ( xx [ 128 ] + xx [ 114 ] ) ; J [ 174 ]
= xx [ 119 ] ; J [ 178 ] = xx [ 119 ] ; J [ 194 ] = xx [ 120 ] ; J [ 198 ] =
xx [ 120 ] ; J [ 214 ] = - xx [ 12 ] ; J [ 218 ] = xx [ 12 ] ; J [ 234 ] = xx
[ 93 ] ; J [ 235 ] = xx [ 93 ] ; J [ 239 ] = xx [ 93 ] ; J [ 254 ] = xx [ 94
] ; J [ 255 ] = xx [ 94 ] ; J [ 259 ] = xx [ 94 ] ; J [ 274 ] = xx [ 95 ] ; J
[ 275 ] = xx [ 95 ] ; J [ 279 ] = xx [ 95 ] ; J [ 294 ] = xx [ 6 ] ; J [ 295
] = pm_math_dot3 ( xx + 106 , xx + 52 ) ; J [ 299 ] = xx [ 7 ] - xx [ 38 ] ;
J [ 314 ] = xx [ 43 ] ; J [ 315 ] = pm_math_dot3 ( xx + 106 , xx + 121 ) ; J
[ 319 ] = - xx [ 43 ] ; return 16 ; } PmfMessageId
Walk_Sim4_6bedce81_1_convertStateVector ( const void * asmMech , const void *
simMech , const double * asmState , double * simState , void * neDiagMgr0 ) {
NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ;
double xx [ 40 ] ; ( void ) asmMech ; ( void ) simMech ; xx [ 0 ] = 2.0 ; xx
[ 1 ] = - 0.2704361801981385 ; xx [ 2 ] = - 0.6533491792460329 ; xx [ 3 ] = -
0.2704345588060376 ; xx [ 4 ] = - 0.653348507170376 ; xx [ 5 ] =
0.0139948129500692 ; xx [ 6 ] = - 0.01398994455628899 ; xx [ 7 ] =
0.7070593791849739 ; xx [ 8 ] = 0.7068772601862124 ; xx [ 9 ] =
0.6479061989318569 ; xx [ 10 ] = 0.283227010168069 ; xx [ 11 ] = -
0.6478327526628918 ; xx [ 12 ] = 0.2833950293744593 ; xx [ 13 ] = 0.5 ; xx [
14 ] = xx [ 13 ] * asmState [ 35 ] ; xx [ 16 ] = 1.755163249739233e-6 ; xx [
17 ] = sin ( xx [ 14 ] ) ; xx [ 15 ] = 0.7074588436864477 ; xx [ 20 ] =
0.7067545433081799 ; xx [ 22 ] = cos ( xx [ 14 ] ) ; xx [ 23 ] = xx [ 16 ] *
xx [ 17 ] ; xx [ 24 ] = xx [ 15 ] * xx [ 17 ] ; xx [ 25 ] = - xx [ 20 ] * xx
[ 17 ] ; pm_math_quatCompose ( xx + 9 , xx + 22 , xx + 26 ) ;
pm_math_quatCompose ( xx + 5 , xx + 26 , xx + 9 ) ; xx [ 5 ] = xx [ 13 ] *
asmState [ 17 ] ; xx [ 6 ] = cos ( xx [ 5 ] ) ; xx [ 7 ] =
1.322560116978622e-11 ; xx [ 8 ] = sin ( xx [ 5 ] ) ; xx [ 5 ] = xx [ 6 ] -
xx [ 7 ] * xx [ 8 ] ; xx [ 21 ] = asmState [ 3 ] ; xx [ 22 ] = asmState [ 4 ]
; xx [ 23 ] = asmState [ 5 ] ; xx [ 24 ] = asmState [ 6 ] ; xx [ 25 ] =
0.9240143931192876 ; xx [ 26 ] = - 0.382357687652353 ; xx [ 27 ] =
4.753479711208553e-7 ; xx [ 28 ] = - 1.146448133648799e-6 ;
pm_math_quatComposeInverse ( xx + 21 , xx + 25 , xx + 29 ) ; xx [ 14 ] =
0.6531857048393208 ; xx [ 17 ] = xx [ 13 ] * asmState [ 15 ] ; xx [ 13 ] =
cos ( xx [ 17 ] ) ; xx [ 18 ] = 0.6531863759394836 ; xx [ 19 ] =
2.645128560629928e-11 ; xx [ 21 ] = sin ( xx [ 17 ] ) ; xx [ 17 ] = xx [ 19 ]
* xx [ 21 ] ; xx [ 22 ] = 0.2708275418267761 ; xx [ 33 ] = 0.2708291636228809
; xx [ 36 ] = - ( xx [ 14 ] * xx [ 13 ] + xx [ 18 ] * xx [ 17 ] + xx [ 22 ] *
xx [ 21 ] ) ; xx [ 37 ] = xx [ 14 ] * xx [ 21 ] - xx [ 22 ] * xx [ 13 ] - xx
[ 33 ] * xx [ 17 ] ; xx [ 38 ] = xx [ 18 ] * xx [ 13 ] - xx [ 14 ] * xx [ 17
] - xx [ 33 ] * xx [ 21 ] ; xx [ 39 ] = xx [ 33 ] * xx [ 13 ] - xx [ 22 ] *
xx [ 17 ] + xx [ 18 ] * xx [ 21 ] ; pm_math_quatCompose ( xx + 29 , xx + 36 ,
xx + 21 ) ; xx [ 13 ] = xx [ 7 ] * xx [ 6 ] + xx [ 8 ] ; xx [ 29 ] = xx [ 5 ]
* xx [ 24 ] - xx [ 21 ] * xx [ 13 ] ; xx [ 30 ] = - ( xx [ 22 ] * xx [ 13 ] +
xx [ 5 ] * xx [ 23 ] ) ; xx [ 31 ] = xx [ 5 ] * xx [ 22 ] - xx [ 23 ] * xx [
13 ] ; xx [ 32 ] = - ( xx [ 24 ] * xx [ 13 ] + xx [ 5 ] * xx [ 21 ] ) ;
pm_math_quatInverseCompose ( xx + 9 , xx + 29 , xx + 21 ) ;
pm_math_quatInverseCompose ( xx + 1 , xx + 21 , xx + 6 ) ; xx [ 2 ] = xx [ 0
] * atan2 ( sqrt ( xx [ 7 ] * xx [ 7 ] + xx [ 8 ] * xx [ 8 ] + xx [ 9 ] * xx
[ 9 ] ) , fabs ( xx [ 6 ] ) ) * ( ( xx [ 6 ] * xx [ 7 ] ) < 0.0 ? - 1.0 : +
1.0 ) - asmState [ 41 ] ; xx [ 1 ] = ( xx [ 2 ] < 0.0 ? - 1.0 : + 1.0 ) ; xx
[ 3 ] = 3.141592653589793 ; xx [ 6 ] = 6.283185307179586 ; xx [ 8 ] =
asmState [ 10 ] ; xx [ 9 ] = asmState [ 11 ] ; xx [ 10 ] = asmState [ 12 ] ;
pm_math_quatXform ( xx + 25 , xx + 8 , xx + 29 ) ; pm_math_quatInverseXform (
xx + 36 , xx + 29 , xx + 8 ) ; xx [ 11 ] = xx [ 8 ] - asmState [ 16 ] ; xx [
25 ] = xx [ 16 ] * asmState [ 36 ] ; xx [ 26 ] = xx [ 15 ] * asmState [ 36 ]
; xx [ 27 ] = - xx [ 20 ] * asmState [ 36 ] ; pm_math_quatInverseXform ( xx +
21 , xx + 25 , xx + 14 ) ; xx [ 8 ] = 3.141592653589793 - asmState [ 43 ] ;
xx [ 10 ] = ( xx [ 8 ] < 0.0 ? - 1.0 : + 1.0 ) ; simState [ 0 ] = asmState [
0 ] ; simState [ 1 ] = asmState [ 1 ] ; simState [ 2 ] = asmState [ 2 ] ;
simState [ 3 ] = asmState [ 3 ] ; simState [ 4 ] = asmState [ 4 ] ; simState
[ 5 ] = asmState [ 5 ] ; simState [ 6 ] = asmState [ 6 ] ; simState [ 7 ] =
asmState [ 7 ] ; simState [ 8 ] = asmState [ 8 ] ; simState [ 9 ] = asmState
[ 9 ] ; simState [ 10 ] = asmState [ 10 ] ; simState [ 11 ] = asmState [ 11 ]
; simState [ 12 ] = asmState [ 12 ] ; simState [ 13 ] = asmState [ 13 ] ;
simState [ 14 ] = asmState [ 14 ] ; simState [ 15 ] = asmState [ 15 ] ;
simState [ 16 ] = asmState [ 16 ] ; simState [ 17 ] = asmState [ 17 ] ;
simState [ 18 ] = asmState [ 18 ] ; simState [ 19 ] = asmState [ 41 ] + xx [
1 ] * ( fmod ( xx [ 3 ] + xx [ 1 ] * xx [ 2 ] , xx [ 6 ] ) - xx [ 3 ] ) ;
simState [ 20 ] = xx [ 11 ] - ( xx [ 5 ] * xx [ 5 ] * xx [ 11 ] - xx [ 5 ] *
( xx [ 9 ] + xx [ 19 ] * asmState [ 16 ] ) * xx [ 13 ] ) * xx [ 0 ] - xx [ 14
] ; simState [ 21 ] = asmState [ 19 ] ; simState [ 22 ] = asmState [ 20 ] ;
simState [ 23 ] = asmState [ 21 ] ; simState [ 24 ] = asmState [ 22 ] ;
simState [ 25 ] = asmState [ 23 ] ; simState [ 26 ] = asmState [ 24 ] ;
simState [ 27 ] = asmState [ 25 ] ; simState [ 28 ] = asmState [ 26 ] ;
simState [ 29 ] = asmState [ 27 ] ; simState [ 30 ] = asmState [ 28 ] ;
simState [ 31 ] = asmState [ 29 ] ; simState [ 32 ] = asmState [ 30 ] ;
simState [ 33 ] = asmState [ 31 ] ; simState [ 34 ] = asmState [ 32 ] ;
simState [ 35 ] = asmState [ 33 ] ; simState [ 36 ] = asmState [ 34 ] ;
simState [ 37 ] = asmState [ 37 ] ; simState [ 38 ] = asmState [ 38 ] ;
simState [ 39 ] = asmState [ 39 ] ; simState [ 40 ] = asmState [ 40 ] ;
simState [ 41 ] = asmState [ 35 ] ; simState [ 42 ] = asmState [ 36 ] ;
simState [ 43 ] = asmState [ 43 ] + xx [ 10 ] * ( fmod ( xx [ 3 ] + xx [ 10 ]
* xx [ 8 ] , xx [ 6 ] ) - xx [ 3 ] ) ; simState [ 44 ] = 0.0 ; return NULL ;
} void Walk_Sim4_6bedce81_1_constructStateVector ( const void * mech , const
double * solverState , const double * u , const double * uDot , double *
discreteState , double * fullState ) { ( void ) mech ; ( void ) discreteState
; fullState [ 0 ] = u [ 5 ] ; fullState [ 1 ] = u [ 6 ] ; fullState [ 2 ] = u
[ 7 ] ; fullState [ 3 ] = solverState [ 0 ] ; fullState [ 4 ] = solverState [
1 ] ; fullState [ 5 ] = solverState [ 2 ] ; fullState [ 6 ] = solverState [ 3
] ; fullState [ 7 ] = uDot [ 5 ] ; fullState [ 8 ] = uDot [ 6 ] ; fullState [
9 ] = uDot [ 7 ] ; fullState [ 10 ] = solverState [ 4 ] ; fullState [ 11 ] =
solverState [ 5 ] ; fullState [ 12 ] = solverState [ 6 ] ; fullState [ 13 ] =
solverState [ 7 ] ; fullState [ 14 ] = solverState [ 8 ] ; fullState [ 15 ] =
solverState [ 9 ] ; fullState [ 16 ] = solverState [ 10 ] ; fullState [ 17 ]
= solverState [ 11 ] ; fullState [ 18 ] = solverState [ 12 ] ; fullState [ 19
] = solverState [ 13 ] ; fullState [ 20 ] = solverState [ 14 ] ; fullState [
21 ] = u [ 2 ] ; fullState [ 22 ] = u [ 3 ] ; fullState [ 23 ] = u [ 4 ] ;
fullState [ 24 ] = uDot [ 2 ] ; fullState [ 25 ] = uDot [ 3 ] ; fullState [
26 ] = uDot [ 4 ] ; fullState [ 27 ] = solverState [ 15 ] ; fullState [ 28 ]
= solverState [ 16 ] ; fullState [ 29 ] = solverState [ 17 ] ; fullState [ 30
] = solverState [ 18 ] ; fullState [ 31 ] = solverState [ 19 ] ; fullState [
32 ] = solverState [ 20 ] ; fullState [ 33 ] = solverState [ 21 ] ; fullState
[ 34 ] = solverState [ 22 ] ; fullState [ 35 ] = solverState [ 23 ] ;
fullState [ 36 ] = solverState [ 24 ] ; fullState [ 37 ] = solverState [ 25 ]
; fullState [ 38 ] = solverState [ 26 ] ; fullState [ 39 ] = solverState [ 27
] ; fullState [ 40 ] = solverState [ 28 ] ; fullState [ 41 ] = solverState [
29 ] ; fullState [ 42 ] = solverState [ 30 ] ; fullState [ 43 ] = solverState
[ 31 ] ; fullState [ 44 ] = solverState [ 32 ] ; } void
Walk_Sim4_6bedce81_1_extractSolverStateVector ( const void * mech , const
double * fullState , double * solverState ) { ( void ) mech ; solverState [ 0
] = fullState [ 3 ] ; solverState [ 1 ] = fullState [ 4 ] ; solverState [ 2 ]
= fullState [ 5 ] ; solverState [ 3 ] = fullState [ 6 ] ; solverState [ 4 ] =
fullState [ 10 ] ; solverState [ 5 ] = fullState [ 11 ] ; solverState [ 6 ] =
fullState [ 12 ] ; solverState [ 7 ] = fullState [ 13 ] ; solverState [ 8 ] =
fullState [ 14 ] ; solverState [ 9 ] = fullState [ 15 ] ; solverState [ 10 ]
= fullState [ 16 ] ; solverState [ 11 ] = fullState [ 17 ] ; solverState [ 12
] = fullState [ 18 ] ; solverState [ 13 ] = fullState [ 19 ] ; solverState [
14 ] = fullState [ 20 ] ; solverState [ 15 ] = fullState [ 27 ] ; solverState
[ 16 ] = fullState [ 28 ] ; solverState [ 17 ] = fullState [ 29 ] ;
solverState [ 18 ] = fullState [ 30 ] ; solverState [ 19 ] = fullState [ 31 ]
; solverState [ 20 ] = fullState [ 32 ] ; solverState [ 21 ] = fullState [ 33
] ; solverState [ 22 ] = fullState [ 34 ] ; solverState [ 23 ] = fullState [
35 ] ; solverState [ 24 ] = fullState [ 36 ] ; solverState [ 25 ] = fullState
[ 37 ] ; solverState [ 26 ] = fullState [ 38 ] ; solverState [ 27 ] =
fullState [ 39 ] ; solverState [ 28 ] = fullState [ 40 ] ; solverState [ 29 ]
= fullState [ 41 ] ; solverState [ 30 ] = fullState [ 42 ] ; solverState [ 31
] = fullState [ 43 ] ; solverState [ 32 ] = fullState [ 44 ] ; } int
Walk_Sim4_6bedce81_1_isPositionViolation ( const void * mech , const double *
state ) { double xx [ 68 ] ; int ii [ 3 ] ; ( void ) mech ; xx [ 0 ] = state
[ 3 ] ; xx [ 1 ] = state [ 4 ] ; xx [ 2 ] = state [ 5 ] ; xx [ 3 ] = state [
6 ] ; xx [ 4 ] = 0.9240143931192876 ; xx [ 5 ] = - 0.382357687652353 ; xx [ 6
] = 4.753479711208553e-7 ; xx [ 7 ] = - 1.146448133648799e-6 ;
pm_math_quatComposeInverse ( xx + 0 , xx + 4 , xx + 8 ) ; xx [ 0 ] =
0.6531857048393208 ; xx [ 1 ] = 0.5 ; xx [ 2 ] = xx [ 1 ] * state [ 15 ] ; xx
[ 3 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = 0.6531863759394836 ; xx [ 6 ] = sin (
xx [ 2 ] ) ; xx [ 2 ] = 2.645128560629928e-11 * xx [ 6 ] ; xx [ 7 ] =
0.2708275418267761 ; xx [ 13 ] = xx [ 0 ] * xx [ 3 ] + xx [ 5 ] * xx [ 2 ] +
xx [ 7 ] * xx [ 6 ] ; xx [ 15 ] = 0.2708291636228809 ; xx [ 17 ] = xx [ 0 ] *
xx [ 6 ] - xx [ 7 ] * xx [ 3 ] - xx [ 15 ] * xx [ 2 ] ; xx [ 18 ] = xx [ 5 ]
* xx [ 3 ] - xx [ 0 ] * xx [ 2 ] - xx [ 15 ] * xx [ 6 ] ; xx [ 0 ] = xx [ 15
] * xx [ 3 ] - xx [ 7 ] * xx [ 2 ] + xx [ 5 ] * xx [ 6 ] ; xx [ 2 ] = - xx [
13 ] ; xx [ 3 ] = xx [ 17 ] ; xx [ 4 ] = xx [ 18 ] ; xx [ 5 ] = xx [ 0 ] ;
pm_math_quatCompose ( xx + 8 , xx + 2 , xx + 19 ) ; xx [ 2 ] = xx [ 1 ] *
state [ 22 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = 9.351995539151417e-12
; xx [ 5 ] = xx [ 1 ] * state [ 23 ] ; xx [ 6 ] = cos ( xx [ 5 ] ) ; xx [ 7 ]
= xx [ 4 ] * xx [ 6 ] ; xx [ 14 ] = sin ( xx [ 5 ] ) ; xx [ 5 ] =
2.645143785344124e-11 * xx [ 14 ] ; xx [ 15 ] = xx [ 4 ] * xx [ 5 ] ; xx [ 16
] = 0.7071067811865476 ; xx [ 24 ] = xx [ 16 ] * xx [ 14 ] ; xx [ 26 ] = xx [
7 ] + xx [ 15 ] + xx [ 24 ] ; xx [ 25 ] = sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [
16 ] * xx [ 6 ] ; xx [ 6 ] = xx [ 4 ] * xx [ 14 ] ; xx [ 14 ] = xx [ 16 ] *
xx [ 5 ] ; xx [ 5 ] = xx [ 2 ] - xx [ 6 ] + xx [ 14 ] ; xx [ 16 ] = xx [ 3 ]
* xx [ 26 ] + xx [ 25 ] * xx [ 5 ] ; xx [ 4 ] = xx [ 1 ] * state [ 21 ] ; xx
[ 27 ] = cos ( xx [ 4 ] ) ; xx [ 29 ] = xx [ 7 ] - xx [ 15 ] - xx [ 24 ] ; xx
[ 7 ] = xx [ 2 ] - xx [ 14 ] + xx [ 6 ] ; xx [ 2 ] = xx [ 3 ] * xx [ 29 ] +
xx [ 7 ] * xx [ 25 ] ; xx [ 6 ] = sin ( xx [ 4 ] ) ; xx [ 14 ] = xx [ 3 ] *
xx [ 5 ] - xx [ 25 ] * xx [ 26 ] ; xx [ 4 ] = xx [ 7 ] * xx [ 3 ] - xx [ 25 ]
* xx [ 29 ] ; xx [ 31 ] = xx [ 16 ] * xx [ 27 ] + xx [ 2 ] * xx [ 6 ] ; xx [
32 ] = xx [ 2 ] * xx [ 27 ] - xx [ 16 ] * xx [ 6 ] ; xx [ 33 ] = xx [ 27 ] *
xx [ 14 ] - xx [ 6 ] * xx [ 4 ] ; xx [ 34 ] = xx [ 27 ] * xx [ 4 ] + xx [ 6 ]
* xx [ 14 ] ; pm_math_quatCompose ( xx + 19 , xx + 31 , xx + 2 ) ; xx [ 7 ] =
2.0 ; xx [ 14 ] = xx [ 1 ] * state [ 17 ] ; xx [ 15 ] = cos ( xx [ 14 ] ) ;
xx [ 16 ] = 1.322560116978622e-11 ; xx [ 23 ] = sin ( xx [ 14 ] ) ; xx [ 14 ]
= xx [ 15 ] - xx [ 16 ] * xx [ 23 ] ; xx [ 24 ] = xx [ 16 ] * xx [ 15 ] + xx
[ 23 ] ; xx [ 28 ] = xx [ 14 ] * xx [ 22 ] - xx [ 19 ] * xx [ 24 ] ; xx [ 29
] = - ( xx [ 20 ] * xx [ 24 ] + xx [ 14 ] * xx [ 21 ] ) ; xx [ 30 ] = xx [ 14
] * xx [ 20 ] - xx [ 21 ] * xx [ 24 ] ; xx [ 31 ] = - ( xx [ 22 ] * xx [ 24 ]
+ xx [ 14 ] * xx [ 19 ] ) ; xx [ 23 ] = - 0.2704361801981385 ; xx [ 24 ] =
0.6533491792460329 ; xx [ 25 ] = 0.2704345588060376 ; xx [ 26 ] =
0.6533485071703761 ; xx [ 14 ] = xx [ 1 ] * state [ 19 ] ; xx [ 1 ] = sin (
xx [ 14 ] ) ; xx [ 32 ] = cos ( xx [ 14 ] ) ; xx [ 33 ] = -
1.7551632495727e-6 * xx [ 1 ] ; xx [ 34 ] = - 0.7067545433060005 * xx [ 1 ] ;
xx [ 35 ] = - 0.7074588436886248 * xx [ 1 ] ; pm_math_quatCompose ( xx + 23 ,
xx + 32 , xx + 36 ) ; pm_math_quatCompose ( xx + 28 , xx + 36 , xx + 23 ) ;
xx [ 32 ] = - 0.2707610494993393 ; xx [ 33 ] = 0.653213270297222 ; xx [ 34 ]
= - 0.6532148920238258 ; xx [ 35 ] = - 0.2707603782312443 ;
pm_math_quatCompose ( xx + 23 , xx + 32 , xx + 40 ) ; xx [ 14 ] = ( xx [ 40 ]
* xx [ 42 ] + xx [ 41 ] * xx [ 43 ] ) * xx [ 7 ] ; xx [ 15 ] = xx [ 7 ] * (
xx [ 42 ] * xx [ 43 ] - xx [ 40 ] * xx [ 41 ] ) ; xx [ 16 ] = 1.0 - ( xx [ 41
] * xx [ 41 ] + xx [ 42 ] * xx [ 42 ] ) * xx [ 7 ] ; xx [ 1 ] = -
1.000000000000005 ; xx [ 27 ] = 4.753142324176457e-16 ; xx [ 32 ] = xx [ 1 ]
; xx [ 33 ] = - xx [ 27 ] ; xx [ 34 ] = 2.532696274926141e-16 ; xx [ 40 ] =
xx [ 27 ] ; xx [ 41 ] = xx [ 1 ] ; xx [ 42 ] = - 3.622861559360319e-16 ; xx [
43 ] = 2.983777524123075e-8 ; xx [ 44 ] = 0.01202680034923488 ; xx [ 45 ] = -
0.01201484041892856 ; pm_math_quatXform ( xx + 23 , xx + 43 , xx + 46 ) ; xx
[ 23 ] = - 3.51032649919941e-8 ; xx [ 24 ] = - 0.01413509085955482 ; xx [ 25
] = - 0.01414919005646189 ; pm_math_quatXform ( xx + 36 , xx + 23 , xx + 43 )
; xx [ 23 ] = - ( 0.01999999999999998 + xx [ 43 ] ) ; xx [ 24 ] = - xx [ 44 ]
; xx [ 25 ] = 0.03598789236668963 - xx [ 45 ] ; pm_math_quatXform ( xx + 28 ,
xx + 23 , xx + 35 ) ; xx [ 1 ] = 0.09863174692125608 ; xx [ 23 ] = xx [ 1 ] *
xx [ 21 ] ; xx [ 25 ] = xx [ 1 ] * xx [ 20 ] ; xx [ 1 ] = 0.2887783607120545
; xx [ 27 ] = xx [ 1 ] * xx [ 18 ] ; xx [ 29 ] = xx [ 17 ] ; xx [ 30 ] = xx [
18 ] ; xx [ 31 ] = xx [ 0 ] ; xx [ 38 ] = 8.500000000000068e-3 ; xx [ 43 ] =
xx [ 0 ] * xx [ 38 ] + xx [ 1 ] * xx [ 17 ] ; xx [ 0 ] = xx [ 38 ] * xx [ 18
] ; xx [ 49 ] = - xx [ 27 ] ; xx [ 50 ] = xx [ 43 ] ; xx [ 51 ] = - xx [ 0 ]
; pm_math_cross3 ( xx + 29 , xx + 49 , xx + 52 ) ; xx [ 28 ] = - (
8.500014918886864e-3 + ( xx [ 27 ] * xx [ 13 ] + xx [ 52 ] ) * xx [ 7 ] ) ;
xx [ 29 ] = - ( 6.014644173113667e-3 + ( xx [ 53 ] - xx [ 43 ] * xx [ 13 ] )
* xx [ 7 ] ) ; xx [ 30 ] = 0.2947845222348 - xx [ 7 ] * ( xx [ 54 ] + xx [ 0
] * xx [ 13 ] ) ; pm_math_quatXform ( xx + 8 , xx + 28 , xx + 43 ) ; xx [ 0 ]
= 6.591343902079979e-9 ; xx [ 13 ] = 4.647672291017887e-12 ; xx [ 18 ] = xx [
0 ] * xx [ 10 ] + xx [ 13 ] * xx [ 11 ] ; xx [ 1 ] = xx [ 0 ] * xx [ 9 ] ; xx
[ 27 ] = - xx [ 18 ] ; xx [ 28 ] = xx [ 1 ] ; xx [ 29 ] = xx [ 13 ] * xx [ 9
] ; pm_math_cross3 ( xx + 9 , xx + 27 , xx + 49 ) ; xx [ 27 ] = -
0.02127998352011218 ; xx [ 28 ] = - 0.9962147793692904 ; xx [ 29 ] =
1.948216284282225e-3 ; xx [ 30 ] = 0.0842584127603373 ; xx [ 10 ] =
7.467718981561455e-3 * state [ 35 ] - 0.1268134545984782 ; xx [ 11 ] =
0.9990867335093873 * state [ 35 ] - 0.2289672203380519 ; xx [ 12 ] =
0.04207056095128592 * state [ 35 ] - 0.06536422368992957 ; pm_math_quatXform
( xx + 27 , xx + 10 , xx + 52 ) ; xx [ 27 ] = - 0.488771237210491 ; xx [ 28 ]
= 0.8688660241568518 ; xx [ 29 ] = 0.07133888001692984 ; xx [ 30 ] = -
0.03294349616421144 ; xx [ 10 ] = 0.2364082607230091 + 0.01248981622612128 *
state [ 33 ] ; xx [ 11 ] = 0.3263063481368499 - 0.8540537474350033 * state [
33 ] ; xx [ 12 ] = - ( 0.1396362516837915 + 0.5200348074724102 * state [ 33 ]
) ; pm_math_quatXform ( xx + 27 , xx + 10 , xx + 55 ) ; xx [ 0 ] = state [ 31
] - 0.7017121918940203 ; xx [ 10 ] = xx [ 55 ] + xx [ 0 ] ; xx [ 12 ] = xx [
56 ] + 1.119707815203533 ; xx [ 58 ] = fabs ( ( xx [ 3 ] * xx [ 4 ] + xx [ 2
] * xx [ 5 ] ) * xx [ 7 ] ) ; xx [ 59 ] = fabs ( ( xx [ 4 ] * xx [ 5 ] + xx [
2 ] * xx [ 3 ] ) * xx [ 7 ] ) ; xx [ 60 ] = fabs ( ( xx [ 3 ] * xx [ 5 ] + xx
[ 2 ] * xx [ 4 ] ) * xx [ 7 ] ) ; xx [ 61 ] = fabs ( pm_math_dot3 ( xx + 14 ,
xx + 32 ) ) ; xx [ 62 ] = fabs ( pm_math_dot3 ( xx + 14 , xx + 40 ) ) ; xx [
63 ] = fabs ( xx [ 46 ] + xx [ 35 ] + ( xx [ 19 ] * xx [ 23 ] + xx [ 22 ] *
xx [ 25 ] ) * xx [ 7 ] + xx [ 43 ] + state [ 0 ] - ( xx [ 49 ] - xx [ 8 ] *
xx [ 18 ] ) * xx [ 7 ] - ( xx [ 52 ] + xx [ 10 ] ) - 2.556854334041575e-7 ) ;
xx [ 64 ] = fabs ( xx [ 47 ] + xx [ 36 ] + xx [ 7 ] * ( xx [ 22 ] * xx [ 23 ]
- xx [ 19 ] * xx [ 25 ] ) + xx [ 44 ] + state [ 1 ] - xx [ 7 ] * ( xx [ 50 ]
+ xx [ 8 ] * xx [ 1 ] ) - ( xx [ 53 ] + xx [ 12 ] ) + 0.6049784750843215 ) ;
xx [ 65 ] = fabs ( xx [ 48 ] + xx [ 37 ] + xx [ 45 ] + state [ 2 ] - ( xx [
13 ] * xx [ 8 ] * xx [ 9 ] + xx [ 51 ] ) * xx [ 7 ] - ( xx [ 20 ] * xx [ 25 ]
+ xx [ 21 ] * xx [ 23 ] ) * xx [ 7 ] - ( xx [ 54 ] + xx [ 57 ] ) -
0.08339929912917302 ) ; xx [ 66 ] = fabs ( - ( ( state [ 37 ] - xx [ 0 ] -
0.7017121918940222 ) * 1.0 + 1.894351807465706e-30 ) ) ; xx [ 67 ] = fabs ( (
xx [ 10 ] - state [ 39 ] + 0.4205485677389729 ) * 1.0 + ( xx [ 12 ] -
0.8716062328884188 ) * 2.220446049250313e-16 ) ; ii [ 0 ] = 58 ; { int ll ;
for ( ll = 59 ; ll < 68 ; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ]
= ll ; } ii [ 0 ] -= 58 ; xx [ 0 ] = xx [ 58 + ( ii [ 0 ] ) ] ; xx [ 1 ] = xx
[ 0 ] - 1.0e-9 ; if ( xx [ 1 ] < 0.0 ) ii [ 0 ] = - 1 ; else if ( xx [ 1 ] >
0.0 ) ii [ 0 ] = + 1 ; else ii [ 0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; ii [ 2 ] = 0
; if ( ii [ 2 ] > ii [ 1 ] ) ii [ 1 ] = ii [ 2 ] ; return ii [ 1 ] ; } int
Walk_Sim4_6bedce81_1_isVelocityViolation ( const void * mech , const double *
state ) { double xx [ 78 ] ; int ii [ 3 ] ; ( void ) mech ; xx [ 0 ] =
0.6531857048393208 ; xx [ 1 ] = 0.5 ; xx [ 2 ] = xx [ 1 ] * state [ 15 ] ; xx
[ 3 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = 0.6531863759394836 ; xx [ 6 ] =
2.645128560629928e-11 ; xx [ 7 ] = sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 6 ] *
xx [ 7 ] ; xx [ 8 ] = 0.2708275418267761 ; xx [ 10 ] = xx [ 0 ] * xx [ 3 ] +
xx [ 5 ] * xx [ 2 ] + xx [ 8 ] * xx [ 7 ] ; xx [ 12 ] = 0.2708291636228809 ;
xx [ 14 ] = xx [ 0 ] * xx [ 7 ] - xx [ 8 ] * xx [ 3 ] - xx [ 12 ] * xx [ 2 ]
; xx [ 9 ] = xx [ 5 ] * xx [ 3 ] - xx [ 0 ] * xx [ 2 ] - xx [ 12 ] * xx [ 7 ]
; xx [ 0 ] = xx [ 12 ] * xx [ 3 ] - xx [ 8 ] * xx [ 2 ] + xx [ 5 ] * xx [ 7 ]
; xx [ 2 ] = - xx [ 10 ] ; xx [ 3 ] = xx [ 14 ] ; xx [ 4 ] = xx [ 9 ] ; xx [
5 ] = xx [ 0 ] ; xx [ 7 ] = xx [ 1 ] * state [ 22 ] ; xx [ 8 ] = cos ( xx [ 7
] ) ; xx [ 11 ] = 9.351995539151417e-12 ; xx [ 12 ] = xx [ 1 ] * state [ 23 ]
; xx [ 13 ] = cos ( xx [ 12 ] ) ; xx [ 15 ] = xx [ 11 ] * xx [ 13 ] ; xx [ 16
] = 2.645143785344124e-11 ; xx [ 17 ] = sin ( xx [ 12 ] ) ; xx [ 12 ] = xx [
16 ] * xx [ 17 ] ; xx [ 18 ] = xx [ 11 ] * xx [ 12 ] ; xx [ 19 ] =
0.7071067811865476 ; xx [ 20 ] = xx [ 19 ] * xx [ 17 ] ; xx [ 22 ] = xx [ 15
] + xx [ 18 ] + xx [ 20 ] ; xx [ 21 ] = sin ( xx [ 7 ] ) ; xx [ 7 ] = xx [ 19
] * xx [ 13 ] ; xx [ 13 ] = xx [ 11 ] * xx [ 17 ] ; xx [ 11 ] = xx [ 19 ] *
xx [ 12 ] ; xx [ 12 ] = xx [ 7 ] - xx [ 13 ] + xx [ 11 ] ; xx [ 17 ] = xx [ 8
] * xx [ 22 ] + xx [ 21 ] * xx [ 12 ] ; xx [ 19 ] = xx [ 1 ] * state [ 21 ] ;
xx [ 23 ] = cos ( xx [ 19 ] ) ; xx [ 25 ] = xx [ 15 ] - xx [ 18 ] - xx [ 20 ]
; xx [ 15 ] = xx [ 7 ] - xx [ 11 ] + xx [ 13 ] ; xx [ 7 ] = xx [ 8 ] * xx [
25 ] + xx [ 15 ] * xx [ 21 ] ; xx [ 11 ] = sin ( xx [ 19 ] ) ; xx [ 13 ] = xx
[ 17 ] * xx [ 23 ] + xx [ 7 ] * xx [ 11 ] ; xx [ 18 ] = xx [ 7 ] * xx [ 23 ]
- xx [ 17 ] * xx [ 11 ] ; xx [ 7 ] = xx [ 8 ] * xx [ 12 ] - xx [ 21 ] * xx [
22 ] ; xx [ 12 ] = xx [ 15 ] * xx [ 8 ] - xx [ 21 ] * xx [ 25 ] ; xx [ 15 ] =
xx [ 23 ] * xx [ 7 ] - xx [ 11 ] * xx [ 12 ] ; xx [ 8 ] = xx [ 23 ] * xx [ 12
] + xx [ 11 ] * xx [ 7 ] ; xx [ 19 ] = xx [ 13 ] ; xx [ 20 ] = xx [ 18 ] ; xx
[ 21 ] = xx [ 15 ] ; xx [ 22 ] = xx [ 8 ] ; pm_math_quatCompose ( xx + 2 , xx
+ 19 , xx + 24 ) ; xx [ 19 ] = 0.9240143931192876 ; xx [ 20 ] = -
0.382357687652353 ; xx [ 21 ] = 4.753479711208553e-7 ; xx [ 22 ] = -
1.146448133648799e-6 ; xx [ 28 ] = state [ 10 ] ; xx [ 29 ] = state [ 11 ] ;
xx [ 30 ] = state [ 12 ] ; pm_math_quatXform ( xx + 19 , xx + 28 , xx + 31 )
; pm_math_quatInverseXform ( xx + 24 , xx + 31 , xx + 28 ) ; xx [ 7 ] = 2.0 ;
xx [ 35 ] = xx [ 18 ] ; xx [ 36 ] = xx [ 15 ] ; xx [ 37 ] = xx [ 8 ] ; xx [
12 ] = xx [ 6 ] * state [ 16 ] ; xx [ 6 ] = xx [ 8 ] * xx [ 12 ] ; xx [ 17 ]
= xx [ 8 ] * state [ 16 ] ; xx [ 38 ] = xx [ 12 ] * xx [ 18 ] + xx [ 15 ] *
state [ 16 ] ; xx [ 39 ] = - xx [ 6 ] ; xx [ 40 ] = - xx [ 17 ] ; xx [ 41 ] =
xx [ 38 ] ; pm_math_cross3 ( xx + 35 , xx + 39 , xx + 42 ) ; xx [ 39 ] = xx [
18 ] - xx [ 16 ] * xx [ 15 ] ; xx [ 15 ] = xx [ 8 ] * xx [ 16 ] ; xx [ 46 ] =
xx [ 8 ] ; xx [ 47 ] = - xx [ 15 ] ; xx [ 48 ] = - xx [ 39 ] ; pm_math_cross3
( xx + 35 , xx + 46 , xx + 49 ) ; xx [ 18 ] = xx [ 30 ] + xx [ 7 ] * ( xx [
44 ] - xx [ 13 ] * xx [ 38 ] ) + xx [ 7 ] * ( xx [ 39 ] * xx [ 13 ] + xx [ 51
] ) * state [ 26 ] - xx [ 7 ] * xx [ 23 ] * xx [ 11 ] * state [ 25 ] ; xx [
35 ] = state [ 3 ] ; xx [ 36 ] = state [ 4 ] ; xx [ 37 ] = state [ 5 ] ; xx [
38 ] = state [ 6 ] ; pm_math_quatComposeInverse ( xx + 35 , xx + 19 , xx + 45
) ; pm_math_quatCompose ( xx + 45 , xx + 24 , xx + 19 ) ; xx [ 23 ] = 1.0 ;
xx [ 25 ] = xx [ 29 ] + xx [ 12 ] + ( xx [ 13 ] * xx [ 17 ] + xx [ 43 ] ) *
xx [ 7 ] + ( xx [ 7 ] * ( xx [ 50 ] + xx [ 13 ] * xx [ 15 ] ) - xx [ 23 ] ) *
state [ 26 ] + ( xx [ 7 ] * xx [ 11 ] * xx [ 11 ] - xx [ 23 ] ) * state [ 25
] ; xx [ 11 ] = xx [ 25 ] * xx [ 20 ] ; xx [ 15 ] = xx [ 25 ] * xx [ 21 ] ;
xx [ 17 ] = xx [ 18 ] * xx [ 22 ] ; xx [ 35 ] = - ( xx [ 15 ] + xx [ 17 ] ) ;
xx [ 36 ] = xx [ 11 ] ; xx [ 37 ] = xx [ 18 ] * xx [ 20 ] ; pm_math_cross3 (
xx + 20 , xx + 35 , xx + 38 ) ; xx [ 24 ] = xx [ 28 ] + ( xx [ 13 ] * xx [ 6
] + xx [ 42 ] ) * xx [ 7 ] - state [ 16 ] + ( xx [ 7 ] * ( xx [ 49 ] - xx [ 8
] * xx [ 13 ] ) - xx [ 16 ] ) * state [ 26 ] - state [ 24 ] ; xx [ 6 ] = xx [
18 ] * xx [ 21 ] ; xx [ 13 ] = xx [ 24 ] * xx [ 20 ] ; xx [ 26 ] = xx [ 24 ]
* xx [ 21 ] ; xx [ 27 ] = - ( xx [ 17 ] + xx [ 13 ] ) ; xx [ 28 ] = xx [ 6 ]
; pm_math_cross3 ( xx + 20 , xx + 26 , xx + 35 ) ; xx [ 16 ] = xx [ 24 ] * xx
[ 22 ] ; xx [ 27 ] = xx [ 16 ] ; xx [ 28 ] = xx [ 25 ] * xx [ 22 ] ; xx [ 29
] = - ( xx [ 13 ] + xx [ 15 ] ) ; pm_math_cross3 ( xx + 20 , xx + 27 , xx +
40 ) ; xx [ 13 ] = xx [ 1 ] * state [ 17 ] ; xx [ 15 ] = cos ( xx [ 13 ] ) ;
xx [ 17 ] = 1.322560116978622e-11 ; xx [ 22 ] = sin ( xx [ 13 ] ) ; xx [ 13 ]
= xx [ 15 ] - xx [ 17 ] * xx [ 22 ] ; xx [ 26 ] = - 0.2704361801981385 ; xx [
27 ] = 0.6533491792460329 ; xx [ 28 ] = 0.2704345588060376 ; xx [ 29 ] =
0.6533485071703761 ; xx [ 23 ] = xx [ 1 ] * state [ 19 ] ; xx [ 1 ] =
1.7551632495727e-6 ; xx [ 30 ] = sin ( xx [ 23 ] ) ; xx [ 35 ] =
0.7067545433060005 ; xx [ 38 ] = 0.7074588436886248 ; xx [ 41 ] = cos ( xx [
23 ] ) ; xx [ 42 ] = - xx [ 1 ] * xx [ 30 ] ; xx [ 43 ] = - xx [ 35 ] * xx [
30 ] ; xx [ 44 ] = - xx [ 38 ] * xx [ 30 ] ; pm_math_quatCompose ( xx + 26 ,
xx + 41 , xx + 49 ) ; xx [ 23 ] = xx [ 17 ] * xx [ 15 ] + xx [ 22 ] ; xx [ 15
] = xx [ 13 ] * xx [ 52 ] - xx [ 49 ] * xx [ 23 ] ; xx [ 17 ] = xx [ 13 ] *
xx [ 51 ] - xx [ 50 ] * xx [ 23 ] ; xx [ 22 ] = xx [ 51 ] * xx [ 23 ] + xx [
13 ] * xx [ 50 ] ; xx [ 26 ] = - xx [ 22 ] ; xx [ 27 ] = xx [ 52 ] * xx [ 23
] + xx [ 13 ] * xx [ 49 ] ; xx [ 28 ] = - xx [ 27 ] ; xx [ 41 ] = xx [ 15 ] ;
xx [ 42 ] = xx [ 17 ] ; xx [ 43 ] = xx [ 26 ] ; xx [ 44 ] = xx [ 28 ] ;
pm_math_quatCompose ( xx + 2 , xx + 41 , xx + 53 ) ; pm_math_quatCompose ( xx
+ 45 , xx + 53 , xx + 41 ) ; pm_math_quatInverseXform ( xx + 53 , xx + 31 ,
xx + 57 ) ; xx [ 53 ] = xx [ 17 ] ; xx [ 54 ] = xx [ 26 ] ; xx [ 55 ] = xx [
28 ] ; xx [ 26 ] = xx [ 12 ] * xx [ 27 ] ; xx [ 28 ] = xx [ 27 ] * state [ 16
] ; xx [ 27 ] = xx [ 17 ] * xx [ 12 ] - xx [ 22 ] * state [ 16 ] ; xx [ 60 ]
= xx [ 26 ] ; xx [ 61 ] = xx [ 28 ] ; xx [ 62 ] = xx [ 27 ] ; pm_math_cross3
( xx + 53 , xx + 60 , xx + 63 ) ; xx [ 17 ] = xx [ 51 ] * state [ 18 ] ; xx [
22 ] = xx [ 50 ] * state [ 18 ] ; xx [ 60 ] = xx [ 57 ] + ( xx [ 63 ] - xx [
15 ] * xx [ 26 ] ) * xx [ 7 ] - state [ 16 ] + xx [ 7 ] * ( xx [ 49 ] * xx [
17 ] - xx [ 52 ] * xx [ 22 ] ) - xx [ 1 ] * state [ 20 ] ; xx [ 61 ] = xx [
58 ] + xx [ 12 ] + ( xx [ 64 ] - xx [ 15 ] * xx [ 28 ] ) * xx [ 7 ] - ( xx [
35 ] * state [ 20 ] + ( xx [ 49 ] * xx [ 22 ] + xx [ 52 ] * xx [ 17 ] ) * xx
[ 7 ] ) ; xx [ 62 ] = xx [ 59 ] + xx [ 7 ] * ( xx [ 65 ] - xx [ 15 ] * xx [
27 ] ) + ( xx [ 50 ] * xx [ 22 ] + xx [ 51 ] * xx [ 17 ] ) * xx [ 7 ] - state
[ 18 ] - xx [ 38 ] * state [ 20 ] ; xx [ 26 ] = 1.755163249739233e-6 ; xx [
27 ] = 0.7074588436864477 ; xx [ 28 ] = - 0.7067545433081797 ; pm_math_cross3
( xx + 60 , xx + 26 , xx + 53 ) ; pm_math_quatXform ( xx + 41 , xx + 53 , xx
+ 26 ) ; xx [ 1 ] = - 1.000000000000005 ; xx [ 15 ] = 4.753142324176457e-16 ;
xx [ 53 ] = xx [ 1 ] ; xx [ 54 ] = - xx [ 15 ] ; xx [ 55 ] =
2.532696274926141e-16 ; xx [ 56 ] = xx [ 15 ] ; xx [ 57 ] = xx [ 1 ] ; xx [
58 ] = - 3.622861559360319e-16 ; xx [ 63 ] = 2.983777524123075e-8 ; xx [ 64 ]
= 0.01202680034923488 ; xx [ 65 ] = - 0.01201484041892856 ; pm_math_cross3 (
xx + 60 , xx + 63 , xx + 66 ) ; pm_math_quatXform ( xx + 41 , xx + 66 , xx +
59 ) ; xx [ 1 ] = 6.591343902079979e-9 ; xx [ 15 ] = 4.647672291017887e-12 ;
xx [ 41 ] = xx [ 1 ] * xx [ 32 ] + xx [ 15 ] * xx [ 33 ] ; xx [ 42 ] = - xx [
1 ] * xx [ 31 ] ; xx [ 43 ] = - xx [ 15 ] * xx [ 31 ] ; pm_math_quatXform (
xx + 45 , xx + 41 , xx + 34 ) ; xx [ 1 ] = 7.638558896113468e-12 ; xx [ 41 ]
= xx [ 14 ] ; xx [ 42 ] = xx [ 9 ] ; xx [ 43 ] = xx [ 0 ] ; xx [ 15 ] =
0.2887783607120545 ; xx [ 17 ] = xx [ 0 ] * xx [ 15 ] ; xx [ 22 ] = xx [ 0 ]
* xx [ 1 ] ; xx [ 30 ] = xx [ 15 ] * xx [ 14 ] ; xx [ 14 ] = xx [ 30 ] - xx [
1 ] * xx [ 9 ] ; xx [ 62 ] = - xx [ 17 ] ; xx [ 63 ] = xx [ 22 ] ; xx [ 64 ]
= xx [ 14 ] ; pm_math_cross3 ( xx + 41 , xx + 62 , xx + 65 ) ; xx [ 62 ] = -
9.321570227510678e-9 ; xx [ 63 ] = 2.313738986310713e-14 ; xx [ 64 ] =
1.190470065780192e-17 ; pm_math_quatXform ( xx + 49 , xx + 62 , xx + 68 ) ;
xx [ 62 ] = - 3.51032649919941e-8 ; xx [ 63 ] = - 0.01413509085955482 ; xx [
64 ] = - 0.01414919005646189 ; pm_math_quatXform ( xx + 49 , xx + 62 , xx +
71 ) ; xx [ 38 ] = xx [ 68 ] * state [ 20 ] - xx [ 72 ] * state [ 18 ] ; xx [
44 ] = 0.01999999999999998 + xx [ 71 ] ; xx [ 49 ] = xx [ 69 ] * state [ 20 ]
+ xx [ 44 ] * state [ 18 ] ; xx [ 50 ] = xx [ 13 ] * xx [ 49 ] ; xx [ 52 ] =
xx [ 13 ] * xx [ 38 ] ; xx [ 62 ] = 0.03598789236668963 - xx [ 73 ] +
0.09863174692125608 ; xx [ 68 ] = xx [ 13 ] * xx [ 72 ] ; xx [ 71 ] = xx [ 13
] * xx [ 44 ] ; xx [ 73 ] = xx [ 7 ] * ( xx [ 13 ] * xx [ 68 ] - xx [ 71 ] *
xx [ 23 ] ) - xx [ 72 ] ; xx [ 69 ] = ( xx [ 68 ] * xx [ 23 ] + xx [ 13 ] *
xx [ 71 ] ) * xx [ 7 ] - xx [ 44 ] ; xx [ 75 ] = xx [ 38 ] - xx [ 7 ] * ( xx
[ 50 ] * xx [ 23 ] + xx [ 13 ] * xx [ 52 ] ) + xx [ 62 ] * xx [ 12 ] ; xx [
76 ] = xx [ 49 ] - ( xx [ 13 ] * xx [ 50 ] - xx [ 52 ] * xx [ 23 ] ) * xx [ 7
] + xx [ 62 ] * state [ 16 ] ; xx [ 77 ] = xx [ 70 ] * state [ 20 ] - ( xx [
73 ] * state [ 16 ] + xx [ 12 ] * xx [ 69 ] ) ; pm_math_quatXform ( xx + 2 ,
xx + 75 , xx + 49 ) ; xx [ 70 ] = xx [ 69 ] ; xx [ 71 ] = xx [ 73 ] ; xx [ 72
] = xx [ 62 ] ; pm_math_quatXform ( xx + 2 , xx + 70 , xx + 62 ) ; xx [ 2 ] =
xx [ 15 ] * xx [ 9 ] ; xx [ 4 ] = 8.500000000000068e-3 ; xx [ 12 ] = xx [ 0 ]
* xx [ 4 ] + xx [ 30 ] ; xx [ 0 ] = xx [ 4 ] * xx [ 9 ] ; xx [ 68 ] = - xx [
2 ] ; xx [ 69 ] = xx [ 12 ] ; xx [ 70 ] = - xx [ 0 ] ; pm_math_cross3 ( xx +
41 , xx + 68 , xx + 3 ) ; xx [ 41 ] = xx [ 62 ] - ( xx [ 2 ] * xx [ 10 ] + xx
[ 3 ] ) * xx [ 7 ] - 8.500014918886864e-3 ; xx [ 42 ] = xx [ 63 ] - ( xx [ 4
] - xx [ 10 ] * xx [ 12 ] ) * xx [ 7 ] - 6.014644173113667e-3 ; xx [ 43 ] =
xx [ 64 ] - xx [ 7 ] * ( xx [ 5 ] + xx [ 0 ] * xx [ 10 ] ) + 0.2947845222348
; pm_math_cross3 ( xx + 31 , xx + 41 , xx + 2 ) ; xx [ 30 ] = ( xx [ 1 ] + xx
[ 7 ] * ( xx [ 65 ] + xx [ 17 ] * xx [ 10 ] ) ) * state [ 16 ] + xx [ 49 ] +
xx [ 2 ] ; xx [ 31 ] = ( xx [ 15 ] + ( xx [ 66 ] - xx [ 22 ] * xx [ 10 ] ) *
xx [ 7 ] ) * state [ 16 ] + xx [ 50 ] + xx [ 3 ] ; xx [ 32 ] = xx [ 7 ] * (
xx [ 67 ] - xx [ 10 ] * xx [ 14 ] ) * state [ 16 ] + xx [ 51 ] + xx [ 4 ] ;
pm_math_quatXform ( xx + 45 , xx + 30 , xx + 0 ) ; xx [ 12 ] = -
0.488771237210491 ; xx [ 13 ] = 0.8688660241568518 ; xx [ 14 ] =
0.07133888001692984 ; xx [ 15 ] = - 0.03294349616421144 ; xx [ 3 ] =
0.01248981622612128 * state [ 34 ] ; xx [ 30 ] = - 0.8578129138137675 ; xx [
31 ] = 0.4993355030609324 ; xx [ 32 ] = 0.04095633244143952 ; xx [ 33 ] = -
0.1146457112593715 ; xx [ 41 ] = 7.467718981561455e-3 * state [ 36 ] ; xx [
42 ] = 0.9990867335093873 * state [ 36 ] ; xx [ 43 ] = 0.04207056095128592 *
state [ 36 ] ; pm_math_quatXform ( xx + 30 , xx + 41 , xx + 44 ) ; xx [ 5 ] =
0.8540537474350033 * state [ 34 ] ; xx [ 10 ] = 0.5200348074724102 * state [
34 ] ; xx [ 30 ] = xx [ 3 ] + xx [ 44 ] ; xx [ 31 ] = xx [ 45 ] - xx [ 5 ] ;
xx [ 32 ] = xx [ 46 ] - xx [ 10 ] ; pm_math_quatXform ( xx + 12 , xx + 30 ,
xx + 41 ) ; xx [ 30 ] = xx [ 3 ] ; xx [ 31 ] = - xx [ 5 ] ; xx [ 32 ] = - xx
[ 10 ] ; pm_math_quatXform ( xx + 12 , xx + 30 , xx + 3 ) ; xx [ 62 ] = fabs
( xx [ 18 ] + ( xx [ 19 ] * xx [ 11 ] + xx [ 39 ] ) * xx [ 7 ] ) ; xx [ 63 ]
= fabs ( xx [ 24 ] + ( xx [ 19 ] * xx [ 6 ] + xx [ 37 ] ) * xx [ 7 ] ) ; xx [
64 ] = fabs ( xx [ 25 ] + ( xx [ 19 ] * xx [ 16 ] + xx [ 40 ] ) * xx [ 7 ] )
; xx [ 65 ] = fabs ( pm_math_dot3 ( xx + 26 , xx + 53 ) ) ; xx [ 66 ] = fabs
( pm_math_dot3 ( xx + 26 , xx + 56 ) ) ; xx [ 67 ] = fabs ( xx [ 59 ] + xx [
34 ] + state [ 7 ] + xx [ 0 ] - ( state [ 32 ] + xx [ 41 ] ) ) ; xx [ 68 ] =
fabs ( xx [ 60 ] + xx [ 35 ] + state [ 8 ] + xx [ 1 ] - xx [ 42 ] ) ; xx [ 69
] = fabs ( xx [ 61 ] + xx [ 36 ] + state [ 9 ] + xx [ 2 ] - xx [ 43 ] ) ; xx
[ 70 ] = fabs ( - 1.0 * ( state [ 38 ] - state [ 32 ] ) ) ; xx [ 71 ] = fabs
( 1.0 * ( state [ 32 ] + xx [ 3 ] - state [ 40 ] ) + 2.220446049250313e-16 *
xx [ 4 ] ) ; ii [ 0 ] = 62 ; { int ll ; for ( ll = 63 ; ll < 72 ; ++ ll ) if
( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -= 62 ; xx [ 0 ] =
xx [ 62 + ( ii [ 0 ] ) ] ; xx [ 1 ] = xx [ 0 ] - 1.0e-9 ; if ( xx [ 1 ] < 0.0
) ii [ 0 ] = - 1 ; else if ( xx [ 1 ] > 0.0 ) ii [ 0 ] = + 1 ; else ii [ 0 ]
= 0 ; ii [ 1 ] = ii [ 0 ] ; ii [ 2 ] = 0 ; if ( ii [ 2 ] > ii [ 1 ] ) ii [ 1
] = ii [ 2 ] ; return ii [ 1 ] ; } PmfMessageId
Walk_Sim4_6bedce81_1_projectStateSim ( const void * mech , const double *
input , double * state , void * neDiagMgr0 ) { NeuDiagnosticManager *
neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; double xx [ 619 ] ; int
ii [ 13 ] ; ( void ) mech ; ( void ) input ; xx [ 0 ] = 1.0 ; xx [ 1 ] = xx [
0 ] / sqrt ( state [ 3 ] * state [ 3 ] + state [ 4 ] * state [ 4 ] + state [
5 ] * state [ 5 ] + state [ 6 ] * state [ 6 ] ) ; xx [ 2 ] = xx [ 1 ] * state
[ 3 ] ; xx [ 3 ] = xx [ 1 ] * state [ 4 ] ; xx [ 4 ] = xx [ 1 ] * state [ 5 ]
; xx [ 5 ] = xx [ 1 ] * state [ 6 ] ; xx [ 1 ] = 0.6531857048393208 ; xx [ 7
] = 0.5 ; xx [ 8 ] = xx [ 7 ] * state [ 15 ] ; xx [ 9 ] = cos ( xx [ 8 ] ) ;
xx [ 11 ] = 0.6531863759394836 ; xx [ 12 ] = 2.645128560629928e-11 ; xx [ 13
] = sin ( xx [ 8 ] ) ; xx [ 8 ] = xx [ 12 ] * xx [ 13 ] ; xx [ 14 ] =
0.2708275418267761 ; xx [ 16 ] = xx [ 1 ] * xx [ 9 ] + xx [ 11 ] * xx [ 8 ] +
xx [ 14 ] * xx [ 13 ] ; xx [ 18 ] = 0.2708291636228809 ; xx [ 20 ] = xx [ 1 ]
* xx [ 13 ] - xx [ 14 ] * xx [ 9 ] - xx [ 18 ] * xx [ 8 ] ; xx [ 15 ] = xx [
11 ] * xx [ 9 ] - xx [ 1 ] * xx [ 8 ] - xx [ 18 ] * xx [ 13 ] ; xx [ 10 ] =
xx [ 18 ] * xx [ 9 ] - xx [ 14 ] * xx [ 8 ] + xx [ 11 ] * xx [ 13 ] ; xx [ 21
] = - xx [ 16 ] ; xx [ 22 ] = xx [ 20 ] ; xx [ 23 ] = xx [ 15 ] ; xx [ 24 ] =
xx [ 10 ] ; xx [ 8 ] = xx [ 7 ] * state [ 22 ] ; xx [ 9 ] = cos ( xx [ 8 ] )
; xx [ 13 ] = 9.351995539151417e-12 ; xx [ 17 ] = xx [ 7 ] * state [ 23 ] ;
xx [ 19 ] = cos ( xx [ 17 ] ) ; xx [ 25 ] = xx [ 13 ] * xx [ 19 ] ; xx [ 26 ]
= 2.645143785344124e-11 ; xx [ 27 ] = sin ( xx [ 17 ] ) ; xx [ 17 ] = xx [ 26
] * xx [ 27 ] ; xx [ 28 ] = xx [ 13 ] * xx [ 17 ] ; xx [ 29 ] =
0.7071067811865476 ; xx [ 30 ] = xx [ 29 ] * xx [ 27 ] ; xx [ 32 ] = xx [ 25
] + xx [ 28 ] + xx [ 30 ] ; xx [ 31 ] = sin ( xx [ 8 ] ) ; xx [ 8 ] = xx [ 29
] * xx [ 19 ] ; xx [ 19 ] = xx [ 13 ] * xx [ 27 ] ; xx [ 27 ] = xx [ 29 ] *
xx [ 17 ] ; xx [ 17 ] = xx [ 8 ] - xx [ 19 ] + xx [ 27 ] ; xx [ 34 ] = xx [ 9
] * xx [ 32 ] + xx [ 31 ] * xx [ 17 ] ; xx [ 33 ] = xx [ 7 ] * state [ 21 ] ;
xx [ 35 ] = cos ( xx [ 33 ] ) ; xx [ 37 ] = xx [ 25 ] - xx [ 28 ] - xx [ 30 ]
; xx [ 25 ] = xx [ 8 ] - xx [ 27 ] + xx [ 19 ] ; xx [ 8 ] = xx [ 9 ] * xx [
37 ] + xx [ 25 ] * xx [ 31 ] ; xx [ 19 ] = sin ( xx [ 33 ] ) ; xx [ 27 ] = xx
[ 34 ] * xx [ 35 ] + xx [ 8 ] * xx [ 19 ] ; xx [ 28 ] = xx [ 8 ] * xx [ 35 ]
- xx [ 34 ] * xx [ 19 ] ; xx [ 8 ] = xx [ 9 ] * xx [ 17 ] - xx [ 31 ] * xx [
32 ] ; xx [ 17 ] = xx [ 25 ] * xx [ 9 ] - xx [ 31 ] * xx [ 37 ] ; xx [ 25 ] =
xx [ 35 ] * xx [ 8 ] - xx [ 19 ] * xx [ 17 ] ; xx [ 9 ] = xx [ 35 ] * xx [ 17
] + xx [ 19 ] * xx [ 8 ] ; xx [ 30 ] = xx [ 27 ] ; xx [ 31 ] = xx [ 28 ] ; xx
[ 32 ] = xx [ 25 ] ; xx [ 33 ] = xx [ 9 ] ; pm_math_quatCompose ( xx + 21 ,
xx + 30 , xx + 34 ) ; xx [ 8 ] = 0.9999999999969194 ; xx [ 38 ] = xx [ 8 ] ;
xx [ 39 ] = - 2.482175055048485e-6 ; xx [ 40 ] = - 1.750219320822278e-9 ;
pm_math_quatInverseXform ( xx + 34 , xx + 38 , xx + 41 ) ; xx [ 45 ] =
0.9240143931192876 ; xx [ 46 ] = - 0.382357687652353 ; xx [ 47 ] =
4.753479711208553e-7 ; xx [ 48 ] = - 1.146448133648799e-6 ;
pm_math_quatComposeInverse ( xx + 2 , xx + 45 , xx + 49 ) ;
pm_math_quatCompose ( xx + 49 , xx + 34 , xx + 54 ) ; xx [ 17 ] = xx [ 42 ] *
xx [ 55 ] ; xx [ 19 ] = xx [ 42 ] * xx [ 56 ] ; xx [ 59 ] = xx [ 43 ] * xx [
57 ] ; xx [ 61 ] = - ( xx [ 19 ] + xx [ 59 ] ) ; xx [ 62 ] = xx [ 17 ] ; xx [
63 ] = xx [ 43 ] * xx [ 55 ] ; pm_math_cross3 ( xx + 55 , xx + 61 , xx + 64 )
; xx [ 60 ] = 2.0 ; xx [ 62 ] = 1.755163250776454e-6 ; xx [ 63 ] =
0.7076051973836626 ; xx [ 64 ] = - 0.7066080134222561 ;
pm_math_quatInverseXform ( xx + 34 , xx + 62 , xx + 66 ) ; xx [ 70 ] = xx [
67 ] * xx [ 55 ] ; xx [ 72 ] = xx [ 67 ] * xx [ 56 ] ; xx [ 73 ] = xx [ 68 ]
* xx [ 57 ] ; xx [ 75 ] = - ( xx [ 72 ] + xx [ 73 ] ) ; xx [ 76 ] = xx [ 70 ]
; xx [ 77 ] = xx [ 68 ] * xx [ 55 ] ; pm_math_cross3 ( xx + 55 , xx + 75 , xx
+ 78 ) ; xx [ 74 ] = 1.755163248902065e-6 ; xx [ 75 ] = 0.7066080134200763 ;
xx [ 76 ] = 0.7076051973858394 ; pm_math_quatInverseXform ( xx + 34 , xx + 74
, xx + 80 ) ; xx [ 34 ] = xx [ 81 ] * xx [ 55 ] ; xx [ 36 ] = xx [ 81 ] * xx
[ 56 ] ; xx [ 37 ] = xx [ 82 ] * xx [ 57 ] ; xx [ 85 ] = - ( xx [ 36 ] + xx [
37 ] ) ; xx [ 86 ] = xx [ 34 ] ; xx [ 87 ] = xx [ 82 ] * xx [ 55 ] ;
pm_math_cross3 ( xx + 55 , xx + 85 , xx + 88 ) ; xx [ 35 ] = 0.0 ; xx [ 85 ]
= xx [ 28 ] ; xx [ 86 ] = xx [ 25 ] ; xx [ 87 ] = xx [ 9 ] ; xx [ 71 ] = xx [
9 ] * xx [ 12 ] ; xx [ 77 ] = xx [ 12 ] * xx [ 28 ] + xx [ 25 ] ; xx [ 90 ] =
- xx [ 71 ] ; xx [ 91 ] = - xx [ 9 ] ; xx [ 92 ] = xx [ 77 ] ; pm_math_cross3
( xx + 85 , xx + 90 , xx + 93 ) ; xx [ 25 ] = xx [ 60 ] * ( xx [ 95 ] - xx [
27 ] * xx [ 77 ] ) ; pm_math_quatCompose ( xx + 49 , xx + 21 , xx + 85 ) ;
pm_math_quatCompose ( xx + 85 , xx + 30 , xx + 96 ) ; xx [ 77 ] = xx [ 12 ] +
( xx [ 27 ] * xx [ 9 ] + xx [ 94 ] ) * xx [ 60 ] ; xx [ 9 ] = xx [ 77 ] * xx
[ 97 ] ; xx [ 28 ] = xx [ 77 ] * xx [ 98 ] ; xx [ 78 ] = xx [ 99 ] * xx [ 25
] ; xx [ 90 ] = - ( xx [ 28 ] + xx [ 78 ] ) ; xx [ 91 ] = xx [ 9 ] ; xx [ 92
] = xx [ 97 ] * xx [ 25 ] ; pm_math_cross3 ( xx + 97 , xx + 90 , xx + 101 ) ;
xx [ 90 ] = xx [ 43 ] * xx [ 56 ] ; xx [ 44 ] = xx [ 41 ] * xx [ 55 ] ; xx [
103 ] = xx [ 41 ] * xx [ 56 ] ; xx [ 104 ] = - ( xx [ 59 ] + xx [ 44 ] ) ; xx
[ 105 ] = xx [ 90 ] ; pm_math_cross3 ( xx + 55 , xx + 103 , xx + 106 ) ; xx [
59 ] = xx [ 68 ] * xx [ 56 ] ; xx [ 69 ] = xx [ 66 ] * xx [ 55 ] ; xx [ 103 ]
= xx [ 66 ] * xx [ 56 ] ; xx [ 104 ] = - ( xx [ 73 ] + xx [ 69 ] ) ; xx [ 105
] = xx [ 59 ] ; pm_math_cross3 ( xx + 55 , xx + 103 , xx + 109 ) ; xx [ 73 ]
= xx [ 82 ] * xx [ 56 ] ; xx [ 83 ] = xx [ 80 ] * xx [ 55 ] ; xx [ 103 ] = xx
[ 80 ] * xx [ 56 ] ; xx [ 104 ] = - ( xx [ 37 ] + xx [ 83 ] ) ; xx [ 105 ] =
xx [ 73 ] ; pm_math_cross3 ( xx + 55 , xx + 103 , xx + 112 ) ; xx [ 37 ] = (
xx [ 27 ] * xx [ 71 ] + xx [ 93 ] ) * xx [ 60 ] - xx [ 0 ] ; xx [ 27 ] = xx [
98 ] * xx [ 25 ] ; xx [ 71 ] = xx [ 37 ] * xx [ 97 ] ; xx [ 91 ] = xx [ 37 ]
* xx [ 98 ] ; xx [ 92 ] = - ( xx [ 78 ] + xx [ 71 ] ) ; xx [ 93 ] = xx [ 27 ]
; pm_math_cross3 ( xx + 97 , xx + 91 , xx + 103 ) ; xx [ 78 ] = xx [ 41 ] *
xx [ 57 ] ; xx [ 91 ] = xx [ 78 ] ; xx [ 92 ] = xx [ 42 ] * xx [ 57 ] ; xx [
93 ] = - ( xx [ 44 ] + xx [ 19 ] ) ; pm_math_cross3 ( xx + 55 , xx + 91 , xx
+ 115 ) ; xx [ 19 ] = xx [ 66 ] * xx [ 57 ] ; xx [ 91 ] = xx [ 19 ] ; xx [ 92
] = xx [ 67 ] * xx [ 57 ] ; xx [ 93 ] = - ( xx [ 69 ] + xx [ 72 ] ) ;
pm_math_cross3 ( xx + 55 , xx + 91 , xx + 116 ) ; xx [ 44 ] = xx [ 80 ] * xx
[ 57 ] ; xx [ 91 ] = xx [ 44 ] ; xx [ 92 ] = xx [ 81 ] * xx [ 57 ] ; xx [ 93
] = - ( xx [ 83 ] + xx [ 36 ] ) ; pm_math_cross3 ( xx + 55 , xx + 91 , xx +
117 ) ; xx [ 36 ] = xx [ 37 ] * xx [ 99 ] ; xx [ 91 ] = xx [ 36 ] ; xx [ 92 ]
= xx [ 77 ] * xx [ 99 ] ; xx [ 93 ] = - ( xx [ 71 ] + xx [ 28 ] ) ;
pm_math_cross3 ( xx + 97 , xx + 91 , xx + 118 ) ; xx [ 28 ] = xx [ 7 ] *
state [ 17 ] ; xx [ 69 ] = cos ( xx [ 28 ] ) ; xx [ 71 ] =
1.322560116978622e-11 ; xx [ 72 ] = sin ( xx [ 28 ] ) ; xx [ 28 ] = xx [ 69 ]
- xx [ 71 ] * xx [ 72 ] ; xx [ 91 ] = - 0.2704361801981385 ; xx [ 92 ] =
0.6533491792460329 ; xx [ 93 ] = 0.2704345588060376 ; xx [ 94 ] =
0.6533485071703761 ; xx [ 83 ] = xx [ 7 ] * state [ 19 ] ; xx [ 95 ] =
1.7551632495727e-6 ; xx [ 100 ] = sin ( xx [ 83 ] ) ; xx [ 84 ] =
0.7067545433060005 ; xx [ 103 ] = 0.7074588436886248 ; xx [ 119 ] = cos ( xx
[ 83 ] ) ; xx [ 120 ] = - xx [ 95 ] * xx [ 100 ] ; xx [ 121 ] = - xx [ 84 ] *
xx [ 100 ] ; xx [ 122 ] = - xx [ 103 ] * xx [ 100 ] ; pm_math_quatCompose (
xx + 91 , xx + 119 , xx + 123 ) ; xx [ 83 ] = xx [ 71 ] * xx [ 69 ] + xx [ 72
] ; xx [ 69 ] = xx [ 28 ] * xx [ 126 ] - xx [ 123 ] * xx [ 83 ] ; xx [ 72 ] =
xx [ 28 ] * xx [ 125 ] - xx [ 124 ] * xx [ 83 ] ; xx [ 100 ] = xx [ 125 ] *
xx [ 83 ] + xx [ 28 ] * xx [ 124 ] ; xx [ 101 ] = - xx [ 100 ] ; xx [ 104 ] =
xx [ 126 ] * xx [ 83 ] + xx [ 28 ] * xx [ 123 ] ; xx [ 106 ] = - xx [ 104 ] ;
xx [ 119 ] = xx [ 69 ] ; xx [ 120 ] = xx [ 72 ] ; xx [ 121 ] = xx [ 101 ] ;
xx [ 122 ] = xx [ 106 ] ; pm_math_quatCompose ( xx + 21 , xx + 119 , xx + 127
) ; pm_math_quatCompose ( xx + 49 , xx + 127 , xx + 131 ) ;
pm_math_quatInverseXform ( xx + 127 , xx + 38 , xx + 135 ) ; xx [ 107 ] =
1.755163249739233e-6 ; xx [ 109 ] = 0.7074588436864477 ; xx [ 138 ] = xx [
107 ] ; xx [ 139 ] = xx [ 109 ] ; xx [ 140 ] = - 0.7067545433081797 ;
pm_math_cross3 ( xx + 135 , xx + 138 , xx + 141 ) ; pm_math_quatXform ( xx +
131 , xx + 141 , xx + 144 ) ; xx [ 110 ] = - 1.000000000000005 ; xx [ 112 ] =
4.753142324176457e-16 ; xx [ 141 ] = xx [ 110 ] ; xx [ 142 ] = - xx [ 112 ] ;
xx [ 143 ] = 2.532696274926141e-16 ; pm_math_quatInverseXform ( xx + 127 , xx
+ 62 , xx + 148 ) ; pm_math_cross3 ( xx + 148 , xx + 138 , xx + 151 ) ;
pm_math_quatXform ( xx + 131 , xx + 151 , xx + 154 ) ;
pm_math_quatInverseXform ( xx + 127 , xx + 74 , xx + 151 ) ; pm_math_cross3 (
xx + 151 , xx + 138 , xx + 127 ) ; pm_math_quatXform ( xx + 131 , xx + 127 ,
xx + 158 ) ; pm_math_quatCompose ( xx + 85 , xx + 119 , xx + 127 ) ; xx [ 119
] = xx [ 72 ] ; xx [ 120 ] = xx [ 101 ] ; xx [ 121 ] = xx [ 106 ] ; xx [ 101
] = xx [ 12 ] * xx [ 104 ] ; xx [ 106 ] = xx [ 72 ] * xx [ 12 ] - xx [ 100 ]
; xx [ 162 ] = xx [ 101 ] ; xx [ 163 ] = xx [ 104 ] ; xx [ 164 ] = xx [ 106 ]
; pm_math_cross3 ( xx + 119 , xx + 162 , xx + 165 ) ; xx [ 119 ] = ( xx [ 165
] - xx [ 69 ] * xx [ 101 ] ) * xx [ 60 ] - xx [ 0 ] ; xx [ 120 ] = xx [ 12 ]
+ ( xx [ 166 ] - xx [ 69 ] * xx [ 104 ] ) * xx [ 60 ] ; xx [ 121 ] = xx [ 60
] * ( xx [ 167 ] - xx [ 106 ] * xx [ 69 ] ) ; pm_math_cross3 ( xx + 119 , xx
+ 138 , xx + 162 ) ; pm_math_quatXform ( xx + 127 , xx + 162 , xx + 165 ) ;
xx [ 169 ] = xx [ 28 ] * xx [ 88 ] - xx [ 85 ] * xx [ 83 ] ; xx [ 170 ] = - (
xx [ 86 ] * xx [ 83 ] + xx [ 28 ] * xx [ 87 ] ) ; xx [ 171 ] = xx [ 28 ] * xx
[ 86 ] - xx [ 87 ] * xx [ 83 ] ; xx [ 172 ] = - ( xx [ 88 ] * xx [ 83 ] + xx
[ 28 ] * xx [ 85 ] ) ; pm_math_quatCompose ( xx + 169 , xx + 123 , xx + 173 )
; xx [ 162 ] = xx [ 60 ] * ( xx [ 123 ] * xx [ 125 ] - xx [ 124 ] * xx [ 126
] ) ; xx [ 163 ] = - ( xx [ 123 ] * xx [ 124 ] + xx [ 125 ] * xx [ 126 ] ) *
xx [ 60 ] ; xx [ 164 ] = ( xx [ 124 ] * xx [ 124 ] + xx [ 125 ] * xx [ 125 ]
) * xx [ 60 ] - xx [ 0 ] ; pm_math_cross3 ( xx + 162 , xx + 138 , xx + 177 )
; pm_math_quatXform ( xx + 173 , xx + 177 , xx + 180 ) ; xx [ 177 ] = xx [ 8
] ; xx [ 178 ] = - 2.482175364028341e-6 ; xx [ 179 ] = - 1.236162026722808e-9
; pm_math_quatXform ( xx + 173 , xx + 177 , xx + 184 ) ; xx [ 188 ] = xx [
112 ] ; xx [ 189 ] = xx [ 110 ] ; xx [ 190 ] = - 3.622861559360319e-16 ; xx [
197 ] = 2.983777524123075e-8 ; xx [ 198 ] = 0.01202680034923488 ; xx [ 199 ]
= - 0.01201484041892856 ; pm_math_cross3 ( xx + 135 , xx + 197 , xx + 200 ) ;
pm_math_quatXform ( xx + 131 , xx + 200 , xx + 135 ) ; xx [ 200 ] = -
3.51032649919941e-8 ; xx [ 201 ] = - 0.01413509085955482 ; xx [ 202 ] = -
0.01414919005646189 ; pm_math_quatXform ( xx + 123 , xx + 200 , xx + 203 ) ;
xx [ 8 ] = xx [ 28 ] * xx [ 204 ] ; xx [ 69 ] = 0.01999999999999998 ; xx [ 72
] = xx [ 69 ] + xx [ 203 ] ; xx [ 100 ] = xx [ 28 ] * xx [ 72 ] ; xx [ 104 ]
= ( xx [ 8 ] * xx [ 83 ] + xx [ 28 ] * xx [ 100 ] ) * xx [ 60 ] ; xx [ 101 ]
= xx [ 104 ] - xx [ 72 ] ; xx [ 106 ] = xx [ 60 ] * ( xx [ 28 ] * xx [ 8 ] -
xx [ 100 ] * xx [ 83 ] ) - xx [ 204 ] ; xx [ 8 ] = 0.03598789236668963 ; xx [
28 ] = xx [ 8 ] - xx [ 205 ] ; xx [ 83 ] = 0.09863174692125608 ; xx [ 100 ] =
xx [ 28 ] + xx [ 83 ] ; xx [ 205 ] = xx [ 101 ] ; xx [ 206 ] = xx [ 106 ] ;
xx [ 207 ] = xx [ 100 ] ; pm_math_quatXform ( xx + 21 , xx + 205 , xx + 208 )
; xx [ 110 ] = 1.491888679546362e-8 ; xx [ 112 ] = 8.500000000000068e-3 ; xx
[ 113 ] = 0.2887783607120545 ; xx [ 122 ] = xx [ 113 ] * xx [ 15 ] ; xx [ 205
] = xx [ 20 ] ; xx [ 206 ] = xx [ 15 ] ; xx [ 207 ] = xx [ 10 ] ; xx [ 203 ]
= xx [ 113 ] * xx [ 20 ] ; xx [ 20 ] = xx [ 10 ] * xx [ 112 ] + xx [ 203 ] ;
xx [ 211 ] = xx [ 112 ] * xx [ 15 ] ; xx [ 213 ] = - xx [ 122 ] ; xx [ 214 ]
= xx [ 20 ] ; xx [ 215 ] = - xx [ 211 ] ; pm_math_cross3 ( xx + 205 , xx +
213 , xx + 216 ) ; xx [ 212 ] = xx [ 110 ] + xx [ 112 ] + ( xx [ 122 ] * xx [
16 ] + xx [ 216 ] ) * xx [ 60 ] ; xx [ 122 ] = 6.014644173113667e-3 ; xx [
214 ] = xx [ 122 ] + ( xx [ 217 ] - xx [ 20 ] * xx [ 16 ] ) * xx [ 60 ] ; xx
[ 20 ] = 6.006161522745479e-3 ; xx [ 216 ] = xx [ 20 ] - ( xx [ 60 ] * ( xx [
218 ] + xx [ 211 ] * xx [ 16 ] ) - xx [ 113 ] ) ; xx [ 218 ] = xx [ 208 ] -
xx [ 212 ] ; xx [ 219 ] = xx [ 209 ] - xx [ 214 ] ; xx [ 220 ] = xx [ 210 ] +
xx [ 216 ] ; pm_math_cross3 ( xx + 38 , xx + 218 , xx + 208 ) ;
pm_math_quatXform ( xx + 49 , xx + 208 , xx + 221 ) ; xx [ 208 ] = -
1.636087754743471e-14 ; xx [ 209 ] = - 6.591343902059674e-9 ; xx [ 210 ] = -
4.647672291003569e-12 ; pm_math_quatXform ( xx + 49 , xx + 208 , xx + 224 ) ;
pm_math_cross3 ( xx + 148 , xx + 197 , xx + 227 ) ; pm_math_quatXform ( xx +
131 , xx + 227 , xx + 148 ) ; pm_math_cross3 ( xx + 62 , xx + 218 , xx + 227
) ; pm_math_quatXform ( xx + 49 , xx + 227 , xx + 230 ) ; xx [ 227 ] =
4.66078512037031e-9 ; xx [ 228 ] = - 1.156888459016026e-14 ; xx [ 229 ] = -
8.157423606846605e-18 ; pm_math_quatXform ( xx + 49 , xx + 227 , xx + 233 ) ;
pm_math_cross3 ( xx + 151 , xx + 197 , xx + 236 ) ; pm_math_quatXform ( xx +
131 , xx + 236 , xx + 151 ) ; pm_math_cross3 ( xx + 74 , xx + 218 , xx + 131
) ; pm_math_quatXform ( xx + 49 , xx + 131 , xx + 217 ) ; xx [ 131 ] =
4.660785137486138e-9 ; xx [ 132 ] = - 1.156888457780551e-14 ; xx [ 133 ] = -
8.157423598135056e-18 ; pm_math_quatXform ( xx + 49 , xx + 131 , xx + 236 ) ;
pm_math_cross3 ( xx + 119 , xx + 197 , xx + 239 ) ; pm_math_quatXform ( xx +
127 , xx + 239 , xx + 119 ) ; xx [ 127 ] = xx [ 100 ] * xx [ 12 ] ; xx [ 128
] = xx [ 100 ] ; xx [ 129 ] = - ( xx [ 106 ] + xx [ 12 ] * xx [ 101 ] ) ;
pm_math_quatXform ( xx + 21 , xx + 127 , xx + 239 ) ; xx [ 21 ] = xx [ 10 ] *
xx [ 113 ] ; xx [ 23 ] = 7.638558896113468e-12 ; xx [ 24 ] = xx [ 10 ] * xx [
23 ] ; xx [ 10 ] = xx [ 203 ] - xx [ 23 ] * xx [ 15 ] ; xx [ 127 ] = - xx [
21 ] ; xx [ 128 ] = xx [ 24 ] ; xx [ 129 ] = xx [ 10 ] ; pm_math_cross3 ( xx
+ 205 , xx + 127 , xx + 242 ) ; xx [ 127 ] = xx [ 239 ] + xx [ 60 ] * ( xx [
242 ] + xx [ 21 ] * xx [ 16 ] ) + xx [ 23 ] ; xx [ 128 ] = xx [ 240 ] + ( xx
[ 243 ] - xx [ 24 ] * xx [ 16 ] ) * xx [ 60 ] + xx [ 113 ] ; xx [ 129 ] = xx
[ 241 ] + ( xx [ 244 ] - xx [ 10 ] * xx [ 16 ] ) * xx [ 60 ] ;
pm_math_quatXform ( xx + 49 , xx + 127 , xx + 205 ) ; pm_math_cross3 ( xx +
162 , xx + 197 , xx + 127 ) ; pm_math_quatXform ( xx + 173 , xx + 127 , xx +
162 ) ; xx [ 10 ] = xx [ 72 ] - xx [ 104 ] ; xx [ 15 ] = xx [ 88 ] * xx [ 10
] ; xx [ 21 ] = xx [ 88 ] * xx [ 106 ] ; xx [ 22 ] = xx [ 86 ] * xx [ 10 ] -
xx [ 87 ] * xx [ 106 ] ; xx [ 127 ] = - xx [ 15 ] ; xx [ 128 ] = xx [ 21 ] ;
xx [ 129 ] = xx [ 22 ] ; pm_math_cross3 ( xx + 86 , xx + 127 , xx + 239 ) ;
xx [ 127 ] = 0.01700000932151799 ; xx [ 128 ] = - 4.219700432318626e-8 ; xx [
129 ] = - 2.101476904204633e-11 ; pm_math_quatXform ( xx + 173 , xx + 127 ,
xx + 242 ) ; xx [ 245 ] = - 9.321570227510678e-9 ; xx [ 246 ] =
2.313738986310713e-14 ; xx [ 247 ] = 1.190470065780192e-17 ;
pm_math_quatXform ( xx + 123 , xx + 245 , xx + 248 ) ; pm_math_quatXform ( xx
+ 169 , xx + 248 , xx + 123 ) ; xx [ 16 ] = - xx [ 0 ] ; xx [ 24 ] = -
1.387778780781446e-17 ; xx [ 100 ] = - 2.038300084272748e-16 ; xx [ 101 ] =
5.551115123125783e-16 ; xx [ 104 ] = 1.000000000000004 ; xx [ 126 ] = -
1.000000000000001 ; xx [ 130 ] = - 3.538835890992687e-16 ; xx [ 134 ] = 1.0 ;
xx [ 203 ] = - xx [ 134 ] ; xx [ 211 ] = 1.0 ; xx [ 213 ] =
1.387778780781434e-17 ; xx [ 215 ] = - xx [ 211 ] ; xx [ 248 ] = xx [ 43 ] +
( xx [ 54 ] * xx [ 17 ] + xx [ 65 ] ) * xx [ 60 ] ; xx [ 249 ] = xx [ 68 ] +
( xx [ 54 ] * xx [ 70 ] + xx [ 79 ] ) * xx [ 60 ] ; xx [ 250 ] = xx [ 82 ] +
( xx [ 54 ] * xx [ 34 ] + xx [ 89 ] ) * xx [ 60 ] ; xx [ 251 ] = xx [ 35 ] ;
xx [ 252 ] = xx [ 25 ] + ( xx [ 96 ] * xx [ 9 ] + xx [ 102 ] ) * xx [ 60 ] ;
xx [ 253 ] = xx [ 35 ] ; xx [ 254 ] = xx [ 35 ] ; xx [ 255 ] = xx [ 35 ] ; xx
[ 256 ] = xx [ 35 ] ; xx [ 257 ] = xx [ 35 ] ; xx [ 258 ] = xx [ 35 ] ; xx [
259 ] = xx [ 35 ] ; xx [ 260 ] = xx [ 35 ] ; xx [ 261 ] = xx [ 35 ] ; xx [
262 ] = xx [ 41 ] + ( xx [ 54 ] * xx [ 90 ] + xx [ 108 ] ) * xx [ 60 ] ; xx [
263 ] = xx [ 66 ] + ( xx [ 54 ] * xx [ 59 ] + xx [ 111 ] ) * xx [ 60 ] ; xx [
264 ] = xx [ 80 ] + ( xx [ 54 ] * xx [ 73 ] + xx [ 114 ] ) * xx [ 60 ] ; xx [
265 ] = xx [ 35 ] ; xx [ 266 ] = xx [ 37 ] + ( xx [ 96 ] * xx [ 27 ] + xx [
105 ] ) * xx [ 60 ] ; xx [ 267 ] = xx [ 35 ] ; xx [ 268 ] = xx [ 35 ] ; xx [
269 ] = xx [ 35 ] ; xx [ 270 ] = xx [ 35 ] ; xx [ 271 ] = xx [ 35 ] ; xx [
272 ] = xx [ 35 ] ; xx [ 273 ] = xx [ 35 ] ; xx [ 274 ] = xx [ 35 ] ; xx [
275 ] = xx [ 35 ] ; xx [ 276 ] = xx [ 42 ] + ( xx [ 54 ] * xx [ 78 ] + xx [
115 ] ) * xx [ 60 ] ; xx [ 277 ] = xx [ 67 ] + ( xx [ 54 ] * xx [ 19 ] + xx [
116 ] ) * xx [ 60 ] ; xx [ 278 ] = xx [ 81 ] + ( xx [ 54 ] * xx [ 44 ] + xx [
117 ] ) * xx [ 60 ] ; xx [ 279 ] = xx [ 35 ] ; xx [ 280 ] = xx [ 77 ] + ( xx
[ 96 ] * xx [ 36 ] + xx [ 118 ] ) * xx [ 60 ] ; xx [ 281 ] = xx [ 35 ] ; xx [
282 ] = xx [ 35 ] ; xx [ 283 ] = xx [ 35 ] ; xx [ 284 ] = xx [ 35 ] ; xx [
285 ] = xx [ 35 ] ; xx [ 286 ] = xx [ 35 ] ; xx [ 287 ] = xx [ 35 ] ; xx [
288 ] = xx [ 35 ] ; xx [ 289 ] = xx [ 35 ] ; xx [ 290 ] = pm_math_dot3 ( xx +
144 , xx + 141 ) ; xx [ 291 ] = pm_math_dot3 ( xx + 154 , xx + 141 ) ; xx [
292 ] = pm_math_dot3 ( xx + 158 , xx + 141 ) ; xx [ 293 ] = xx [ 35 ] ; xx [
294 ] = pm_math_dot3 ( xx + 165 , xx + 141 ) ; xx [ 295 ] = pm_math_dot3 ( xx
+ 180 , xx + 141 ) ; xx [ 296 ] = pm_math_dot3 ( xx + 184 , xx + 141 ) ; xx [
297 ] = xx [ 35 ] ; xx [ 298 ] = xx [ 35 ] ; xx [ 299 ] = xx [ 35 ] ; xx [
300 ] = xx [ 35 ] ; xx [ 301 ] = xx [ 35 ] ; xx [ 302 ] = xx [ 35 ] ; xx [
303 ] = xx [ 35 ] ; xx [ 304 ] = pm_math_dot3 ( xx + 144 , xx + 188 ) ; xx [
305 ] = pm_math_dot3 ( xx + 154 , xx + 188 ) ; xx [ 306 ] = pm_math_dot3 ( xx
+ 158 , xx + 188 ) ; xx [ 307 ] = xx [ 35 ] ; xx [ 308 ] = pm_math_dot3 ( xx
+ 165 , xx + 188 ) ; xx [ 309 ] = pm_math_dot3 ( xx + 180 , xx + 188 ) ; xx [
310 ] = pm_math_dot3 ( xx + 184 , xx + 188 ) ; xx [ 311 ] = xx [ 35 ] ; xx [
312 ] = xx [ 35 ] ; xx [ 313 ] = xx [ 35 ] ; xx [ 314 ] = xx [ 35 ] ; xx [
315 ] = xx [ 35 ] ; xx [ 316 ] = xx [ 35 ] ; xx [ 317 ] = xx [ 35 ] ; xx [
318 ] = xx [ 135 ] + xx [ 221 ] + xx [ 224 ] ; xx [ 319 ] = xx [ 148 ] + xx [
230 ] + xx [ 233 ] ; xx [ 320 ] = xx [ 151 ] + xx [ 217 ] + xx [ 236 ] ; xx [
321 ] = xx [ 35 ] ; xx [ 322 ] = xx [ 119 ] + xx [ 205 ] ; xx [ 323 ] = xx [
162 ] + xx [ 106 ] + xx [ 60 ] * ( xx [ 239 ] - xx [ 85 ] * xx [ 15 ] ) ; xx
[ 324 ] = xx [ 242 ] + xx [ 123 ] ; xx [ 325 ] = xx [ 35 ] ; xx [ 326 ] = xx
[ 35 ] ; xx [ 327 ] = xx [ 16 ] ; xx [ 328 ] = xx [ 24 ] ; xx [ 329 ] = xx [
100 ] ; xx [ 330 ] = xx [ 35 ] ; xx [ 331 ] = xx [ 35 ] ; xx [ 332 ] = xx [
136 ] + xx [ 222 ] + xx [ 225 ] ; xx [ 333 ] = xx [ 149 ] + xx [ 231 ] + xx [
234 ] ; xx [ 334 ] = xx [ 152 ] + xx [ 218 ] + xx [ 237 ] ; xx [ 335 ] = xx [
35 ] ; xx [ 336 ] = xx [ 120 ] + xx [ 206 ] ; xx [ 337 ] = xx [ 163 ] + xx [
10 ] + ( xx [ 85 ] * xx [ 21 ] + xx [ 240 ] ) * xx [ 60 ] ; xx [ 338 ] = xx [
243 ] + xx [ 124 ] ; xx [ 339 ] = xx [ 35 ] ; xx [ 340 ] = xx [ 35 ] ; xx [
341 ] = xx [ 35 ] ; xx [ 342 ] = xx [ 101 ] ; xx [ 343 ] = xx [ 104 ] ; xx [
344 ] = xx [ 35 ] ; xx [ 345 ] = xx [ 35 ] ; xx [ 346 ] = xx [ 137 ] + xx [
223 ] + xx [ 226 ] ; xx [ 347 ] = xx [ 150 ] + xx [ 232 ] + xx [ 235 ] ; xx [
348 ] = xx [ 153 ] + xx [ 219 ] + xx [ 238 ] ; xx [ 349 ] = xx [ 35 ] ; xx [
350 ] = xx [ 121 ] + xx [ 207 ] ; xx [ 351 ] = xx [ 164 ] + ( xx [ 85 ] * xx
[ 22 ] + xx [ 241 ] ) * xx [ 60 ] ; xx [ 352 ] = xx [ 244 ] + xx [ 125 ] ; xx
[ 353 ] = xx [ 35 ] ; xx [ 354 ] = xx [ 35 ] ; xx [ 355 ] = xx [ 35 ] ; xx [
356 ] = xx [ 126 ] ; xx [ 357 ] = xx [ 130 ] ; xx [ 358 ] = xx [ 35 ] ; xx [
359 ] = xx [ 35 ] ; xx [ 360 ] = xx [ 35 ] ; xx [ 361 ] = xx [ 35 ] ; xx [
362 ] = xx [ 35 ] ; xx [ 363 ] = xx [ 35 ] ; xx [ 364 ] = xx [ 35 ] ; xx [
365 ] = xx [ 35 ] ; xx [ 366 ] = xx [ 35 ] ; xx [ 367 ] = xx [ 35 ] ; xx [
368 ] = xx [ 35 ] ; xx [ 369 ] = xx [ 134 ] ; xx [ 370 ] = xx [ 35 ] ; xx [
371 ] = xx [ 35 ] ; xx [ 372 ] = xx [ 203 ] ; xx [ 373 ] = xx [ 35 ] ; xx [
374 ] = xx [ 35 ] ; xx [ 375 ] = xx [ 35 ] ; xx [ 376 ] = xx [ 35 ] ; xx [
377 ] = xx [ 35 ] ; xx [ 378 ] = xx [ 35 ] ; xx [ 379 ] = xx [ 35 ] ; xx [
380 ] = xx [ 35 ] ; xx [ 381 ] = xx [ 35 ] ; xx [ 382 ] = xx [ 35 ] ; xx [
383 ] = xx [ 211 ] ; xx [ 384 ] = xx [ 213 ] ; xx [ 385 ] = xx [ 35 ] ; xx [
386 ] = xx [ 35 ] ; xx [ 387 ] = xx [ 215 ] ; xx [ 41 ] = -
0.2707610494993393 ; xx [ 42 ] = 0.653213270297222 ; xx [ 43 ] = -
0.6532148920238258 ; xx [ 44 ] = - 0.2707603782312443 ; pm_math_quatCompose (
xx + 173 , xx + 41 , xx + 54 ) ; xx [ 65 ] = ( xx [ 54 ] * xx [ 56 ] + xx [
55 ] * xx [ 57 ] ) * xx [ 60 ] ; xx [ 66 ] = xx [ 60 ] * ( xx [ 56 ] * xx [
57 ] - xx [ 54 ] * xx [ 55 ] ) ; xx [ 67 ] = xx [ 0 ] - ( xx [ 55 ] * xx [ 55
] + xx [ 56 ] * xx [ 56 ] ) * xx [ 60 ] ; pm_math_quatXform ( xx + 173 , xx +
197 , xx + 54 ) ; xx [ 57 ] = - xx [ 72 ] ; xx [ 58 ] = - xx [ 204 ] ; xx [
59 ] = xx [ 28 ] ; pm_math_quatXform ( xx + 169 , xx + 57 , xx + 78 ) ; xx [
9 ] = xx [ 83 ] * xx [ 87 ] ; xx [ 15 ] = xx [ 83 ] * xx [ 86 ] ; xx [ 57 ] =
- xx [ 212 ] ; xx [ 58 ] = - xx [ 214 ] ; xx [ 59 ] = xx [ 216 ] ;
pm_math_quatXform ( xx + 49 , xx + 57 , xx + 114 ) ; xx [ 17 ] =
6.591343902079979e-9 ; xx [ 19 ] = 4.647672291017887e-12 ; xx [ 21 ] = xx [
17 ] * xx [ 51 ] + xx [ 19 ] * xx [ 52 ] ; xx [ 27 ] = xx [ 17 ] * xx [ 50 ]
; xx [ 57 ] = - xx [ 21 ] ; xx [ 58 ] = xx [ 27 ] ; xx [ 59 ] = xx [ 19 ] *
xx [ 50 ] ; pm_math_cross3 ( xx + 50 , xx + 57 , xx + 117 ) ; xx [ 145 ] = -
0.02127998352011218 ; xx [ 146 ] = - 0.9962147793692904 ; xx [ 147 ] =
1.948216284282225e-3 ; xx [ 148 ] = 0.0842584127603373 ; xx [ 22 ] =
7.467718981561455e-3 ; xx [ 28 ] = 0.1268134545984782 ; xx [ 34 ] =
0.9990867335093873 ; xx [ 36 ] = 0.2289672203380519 ; xx [ 51 ] =
0.04207056095128592 ; xx [ 53 ] = 0.06536422368992957 ; xx [ 57 ] = xx [ 22 ]
* state [ 35 ] - xx [ 28 ] ; xx [ 58 ] = xx [ 34 ] * state [ 35 ] - xx [ 36 ]
; xx [ 59 ] = xx [ 51 ] * state [ 35 ] - xx [ 53 ] ; pm_math_quatXform ( xx +
145 , xx + 57 , xx + 123 ) ; xx [ 149 ] = - 0.488771237210491 ; xx [ 150 ] =
0.8688660241568518 ; xx [ 151 ] = 0.07133888001692984 ; xx [ 152 ] = -
0.03294349616421144 ; xx [ 52 ] = 0.2364082607230091 ; xx [ 57 ] =
0.01248981622612128 ; xx [ 59 ] = 0.3263063481368499 ; xx [ 70 ] =
0.8540537474350033 ; xx [ 72 ] = 0.1396362516837915 ; xx [ 73 ] =
0.5200348074724102 ; xx [ 135 ] = xx [ 52 ] + xx [ 57 ] * state [ 33 ] ; xx [
136 ] = xx [ 59 ] - xx [ 70 ] * state [ 33 ] ; xx [ 137 ] = - ( xx [ 72 ] +
xx [ 73 ] * state [ 33 ] ) ; pm_math_quatXform ( xx + 149 , xx + 135 , xx +
153 ) ; xx [ 58 ] = 0.7017121918940203 ; xx [ 81 ] = state [ 31 ] - xx [ 58 ]
; xx [ 82 ] = xx [ 153 ] + xx [ 81 ] ; xx [ 90 ] = 2.556854334041575e-7 ; xx
[ 102 ] = 1.119707815203533 ; xx [ 105 ] = xx [ 154 ] + xx [ 102 ] ; xx [ 108
] = 0.6049784750843215 ; xx [ 111 ] = 0.08339929912917302 ; xx [ 120 ] =
0.7017121918940222 ; xx [ 136 ] = 1.894351807465706e-30 ; xx [ 153 ] =
0.4205485677389729 ; xx [ 156 ] = 0.8716062328884188 ; xx [ 158 ] =
2.220446049250313e-16 ; xx [ 160 ] = - ( xx [ 97 ] * xx [ 98 ] + xx [ 96 ] *
xx [ 99 ] ) * xx [ 60 ] ; xx [ 161 ] = - ( xx [ 98 ] * xx [ 99 ] + xx [ 96 ]
* xx [ 97 ] ) * xx [ 60 ] ; xx [ 162 ] = - ( xx [ 97 ] * xx [ 99 ] + xx [ 96
] * xx [ 98 ] ) * xx [ 60 ] ; xx [ 163 ] = - pm_math_dot3 ( xx + 65 , xx +
141 ) ; xx [ 164 ] = - pm_math_dot3 ( xx + 65 , xx + 188 ) ; xx [ 165 ] = - (
xx [ 54 ] + xx [ 78 ] + ( xx [ 85 ] * xx [ 9 ] + xx [ 88 ] * xx [ 15 ] ) * xx
[ 60 ] + xx [ 114 ] + state [ 0 ] - ( xx [ 117 ] - xx [ 49 ] * xx [ 21 ] ) *
xx [ 60 ] - ( xx [ 123 ] + xx [ 82 ] ) - xx [ 90 ] ) ; xx [ 166 ] = - ( xx [
55 ] + xx [ 79 ] + xx [ 60 ] * ( xx [ 88 ] * xx [ 9 ] - xx [ 85 ] * xx [ 15 ]
) + xx [ 115 ] + state [ 1 ] - xx [ 60 ] * ( xx [ 118 ] + xx [ 49 ] * xx [ 27
] ) - ( xx [ 124 ] + xx [ 105 ] ) + xx [ 108 ] ) ; xx [ 167 ] = - ( xx [ 56 ]
+ xx [ 80 ] + xx [ 116 ] + state [ 2 ] - ( xx [ 19 ] * xx [ 49 ] * xx [ 50 ]
+ xx [ 119 ] ) * xx [ 60 ] - ( xx [ 86 ] * xx [ 15 ] + xx [ 87 ] * xx [ 9 ] )
* xx [ 60 ] - ( xx [ 125 ] + xx [ 155 ] ) - xx [ 111 ] ) ; xx [ 168 ] = (
state [ 37 ] - xx [ 81 ] - xx [ 120 ] ) * xx [ 134 ] + xx [ 136 ] ; xx [ 169
] = - ( ( xx [ 82 ] - state [ 39 ] + xx [ 153 ] ) * xx [ 211 ] + ( xx [ 105 ]
- xx [ 156 ] ) * xx [ 158 ] ) ; xx [ 9 ] = 1.0e-8 ; memcpy ( xx + 388 , xx +
248 , 140 * sizeof ( double ) ) ; factorAndSolveWide ( 10 , 14 , xx + 388 ,
xx + 216 , xx + 528 , ii + 0 , xx + 160 , xx [ 9 ] , xx + 230 ) ;
pm_math_quatDeriv ( xx + 2 , xx + 230 , xx + 65 ) ; xx [ 6 ] = xx [ 2 ] + xx
[ 65 ] ; xx [ 2 ] = xx [ 3 ] + xx [ 66 ] ; xx [ 10 ] = xx [ 4 ] + xx [ 67 ] ;
xx [ 15 ] = xx [ 5 ] + xx [ 68 ] ; xx [ 5 ] = 1.0e-64 ; xx [ 21 ] = sqrt ( xx
[ 6 ] * xx [ 6 ] + xx [ 2 ] * xx [ 2 ] + xx [ 10 ] * xx [ 10 ] + xx [ 15 ] *
xx [ 15 ] ) ; if ( xx [ 5 ] > xx [ 21 ] ) xx [ 21 ] = xx [ 5 ] ; xx [ 3 ] =
xx [ 6 ] / xx [ 21 ] ; xx [ 4 ] = xx [ 2 ] / xx [ 21 ] ; xx [ 2 ] = xx [ 10 ]
/ xx [ 21 ] ; xx [ 6 ] = xx [ 15 ] / xx [ 21 ] ; xx [ 65 ] = xx [ 3 ] ; xx [
66 ] = xx [ 4 ] ; xx [ 67 ] = xx [ 2 ] ; xx [ 68 ] = xx [ 6 ] ; xx [ 10 ] =
state [ 15 ] + xx [ 234 ] ; xx [ 15 ] = xx [ 10 ] * xx [ 7 ] ; xx [ 21 ] =
cos ( xx [ 15 ] ) ; xx [ 27 ] = sin ( xx [ 15 ] ) ; xx [ 15 ] = xx [ 12 ] *
xx [ 27 ] ; xx [ 49 ] = xx [ 1 ] * xx [ 21 ] + xx [ 11 ] * xx [ 15 ] + xx [
14 ] * xx [ 27 ] ; xx [ 54 ] = xx [ 1 ] * xx [ 27 ] - xx [ 14 ] * xx [ 21 ] -
xx [ 18 ] * xx [ 15 ] ; xx [ 55 ] = xx [ 11 ] * xx [ 21 ] - xx [ 1 ] * xx [
15 ] - xx [ 18 ] * xx [ 27 ] ; xx [ 56 ] = xx [ 18 ] * xx [ 21 ] - xx [ 14 ]
* xx [ 15 ] + xx [ 11 ] * xx [ 27 ] ; xx [ 78 ] = - xx [ 49 ] ; xx [ 79 ] =
xx [ 54 ] ; xx [ 80 ] = xx [ 55 ] ; xx [ 81 ] = xx [ 56 ] ;
pm_math_quatCompose ( xx + 78 , xx + 30 , xx + 85 ) ;
pm_math_quatInverseXform ( xx + 85 , xx + 38 , xx + 96 ) ;
pm_math_quatComposeInverse ( xx + 65 , xx + 45 , xx + 114 ) ;
pm_math_quatCompose ( xx + 114 , xx + 85 , xx + 159 ) ; xx [ 15 ] = xx [ 97 ]
* xx [ 160 ] ; xx [ 21 ] = xx [ 97 ] * xx [ 161 ] ; xx [ 27 ] = xx [ 98 ] *
xx [ 162 ] ; xx [ 123 ] = - ( xx [ 21 ] + xx [ 27 ] ) ; xx [ 124 ] = xx [ 15
] ; xx [ 125 ] = xx [ 98 ] * xx [ 160 ] ; pm_math_cross3 ( xx + 160 , xx +
123 , xx + 164 ) ; pm_math_quatInverseXform ( xx + 85 , xx + 62 , xx + 123 )
; xx [ 50 ] = xx [ 124 ] * xx [ 160 ] ; xx [ 82 ] = xx [ 124 ] * xx [ 161 ] ;
xx [ 89 ] = xx [ 125 ] * xx [ 162 ] ; xx [ 166 ] = - ( xx [ 82 ] + xx [ 89 ]
) ; xx [ 167 ] = xx [ 50 ] ; xx [ 168 ] = xx [ 125 ] * xx [ 160 ] ;
pm_math_cross3 ( xx + 160 , xx + 166 , xx + 169 ) ; pm_math_quatInverseXform
( xx + 85 , xx + 74 , xx + 166 ) ; xx [ 85 ] = xx [ 167 ] * xx [ 160 ] ; xx [
87 ] = xx [ 167 ] * xx [ 161 ] ; xx [ 88 ] = xx [ 168 ] * xx [ 162 ] ; xx [
171 ] = - ( xx [ 87 ] + xx [ 88 ] ) ; xx [ 172 ] = xx [ 85 ] ; xx [ 173 ] =
xx [ 168 ] * xx [ 160 ] ; pm_math_cross3 ( xx + 160 , xx + 171 , xx + 174 ) ;
pm_math_quatCompose ( xx + 114 , xx + 78 , xx + 171 ) ; pm_math_quatCompose (
xx + 171 , xx + 30 , xx + 180 ) ; xx [ 86 ] = xx [ 77 ] * xx [ 181 ] ; xx [
105 ] = xx [ 77 ] * xx [ 182 ] ; xx [ 106 ] = xx [ 183 ] * xx [ 25 ] ; xx [
185 ] = - ( xx [ 105 ] + xx [ 106 ] ) ; xx [ 186 ] = xx [ 86 ] ; xx [ 187 ] =
xx [ 181 ] * xx [ 25 ] ; pm_math_cross3 ( xx + 181 , xx + 185 , xx + 191 ) ;
xx [ 119 ] = xx [ 98 ] * xx [ 161 ] ; xx [ 99 ] = xx [ 96 ] * xx [ 160 ] ; xx
[ 185 ] = xx [ 96 ] * xx [ 161 ] ; xx [ 186 ] = - ( xx [ 27 ] + xx [ 99 ] ) ;
xx [ 187 ] = xx [ 119 ] ; pm_math_cross3 ( xx + 160 , xx + 185 , xx + 193 ) ;
xx [ 27 ] = xx [ 125 ] * xx [ 161 ] ; xx [ 121 ] = xx [ 123 ] * xx [ 160 ] ;
xx [ 185 ] = xx [ 123 ] * xx [ 161 ] ; xx [ 186 ] = - ( xx [ 89 ] + xx [ 121
] ) ; xx [ 187 ] = xx [ 27 ] ; pm_math_cross3 ( xx + 160 , xx + 185 , xx +
204 ) ; xx [ 89 ] = xx [ 168 ] * xx [ 161 ] ; xx [ 135 ] = xx [ 166 ] * xx [
160 ] ; xx [ 185 ] = xx [ 166 ] * xx [ 161 ] ; xx [ 186 ] = - ( xx [ 88 ] +
xx [ 135 ] ) ; xx [ 187 ] = xx [ 89 ] ; pm_math_cross3 ( xx + 160 , xx + 185
, xx + 216 ) ; xx [ 88 ] = xx [ 182 ] * xx [ 25 ] ; xx [ 137 ] = xx [ 37 ] *
xx [ 181 ] ; xx [ 185 ] = xx [ 37 ] * xx [ 182 ] ; xx [ 186 ] = - ( xx [ 106
] + xx [ 137 ] ) ; xx [ 187 ] = xx [ 88 ] ; pm_math_cross3 ( xx + 181 , xx +
185 , xx + 219 ) ; xx [ 106 ] = xx [ 96 ] * xx [ 162 ] ; xx [ 185 ] = xx [
106 ] ; xx [ 186 ] = xx [ 97 ] * xx [ 162 ] ; xx [ 187 ] = - ( xx [ 99 ] + xx
[ 21 ] ) ; pm_math_cross3 ( xx + 160 , xx + 185 , xx + 222 ) ; xx [ 21 ] = xx
[ 123 ] * xx [ 162 ] ; xx [ 185 ] = xx [ 21 ] ; xx [ 186 ] = xx [ 124 ] * xx
[ 162 ] ; xx [ 187 ] = - ( xx [ 121 ] + xx [ 82 ] ) ; pm_math_cross3 ( xx +
160 , xx + 185 , xx + 223 ) ; xx [ 82 ] = xx [ 166 ] * xx [ 162 ] ; xx [ 185
] = xx [ 82 ] ; xx [ 186 ] = xx [ 167 ] * xx [ 162 ] ; xx [ 187 ] = - ( xx [
135 ] + xx [ 87 ] ) ; pm_math_cross3 ( xx + 160 , xx + 185 , xx + 224 ) ; xx
[ 87 ] = xx [ 37 ] * xx [ 183 ] ; xx [ 248 ] = xx [ 87 ] ; xx [ 249 ] = xx [
77 ] * xx [ 183 ] ; xx [ 250 ] = - ( xx [ 137 ] + xx [ 105 ] ) ;
pm_math_cross3 ( xx + 181 , xx + 248 , xx + 185 ) ; xx [ 99 ] = state [ 17 ]
+ xx [ 235 ] ; xx [ 105 ] = xx [ 99 ] * xx [ 7 ] ; xx [ 121 ] = cos ( xx [
105 ] ) ; xx [ 135 ] = sin ( xx [ 105 ] ) ; xx [ 105 ] = xx [ 121 ] - xx [ 71
] * xx [ 135 ] ; xx [ 137 ] = state [ 19 ] + xx [ 236 ] ; xx [ 144 ] = xx [
137 ] * xx [ 7 ] ; xx [ 154 ] = sin ( xx [ 144 ] ) ; xx [ 248 ] = cos ( xx [
144 ] ) ; xx [ 249 ] = - xx [ 95 ] * xx [ 154 ] ; xx [ 250 ] = - xx [ 84 ] *
xx [ 154 ] ; xx [ 251 ] = - xx [ 103 ] * xx [ 154 ] ; pm_math_quatCompose (
xx + 91 , xx + 248 , xx + 252 ) ; xx [ 144 ] = xx [ 71 ] * xx [ 121 ] + xx [
135 ] ; xx [ 121 ] = xx [ 105 ] * xx [ 255 ] - xx [ 252 ] * xx [ 144 ] ; xx [
135 ] = xx [ 105 ] * xx [ 254 ] - xx [ 253 ] * xx [ 144 ] ; xx [ 154 ] = xx [
254 ] * xx [ 144 ] + xx [ 105 ] * xx [ 253 ] ; xx [ 155 ] = - xx [ 154 ] ; xx
[ 157 ] = xx [ 255 ] * xx [ 144 ] + xx [ 105 ] * xx [ 252 ] ; xx [ 169 ] = -
xx [ 157 ] ; xx [ 248 ] = xx [ 121 ] ; xx [ 249 ] = xx [ 135 ] ; xx [ 250 ] =
xx [ 155 ] ; xx [ 251 ] = xx [ 169 ] ; pm_math_quatCompose ( xx + 78 , xx +
248 , xx + 256 ) ; pm_math_quatCompose ( xx + 114 , xx + 256 , xx + 260 ) ;
pm_math_quatInverseXform ( xx + 256 , xx + 38 , xx + 264 ) ; pm_math_cross3 (
xx + 264 , xx + 138 , xx + 267 ) ; pm_math_quatXform ( xx + 260 , xx + 267 ,
xx + 270 ) ; pm_math_quatInverseXform ( xx + 256 , xx + 62 , xx + 267 ) ;
pm_math_cross3 ( xx + 267 , xx + 138 , xx + 274 ) ; pm_math_quatXform ( xx +
260 , xx + 274 , xx + 277 ) ; pm_math_quatInverseXform ( xx + 256 , xx + 74 ,
xx + 274 ) ; pm_math_cross3 ( xx + 274 , xx + 138 , xx + 256 ) ;
pm_math_quatXform ( xx + 260 , xx + 256 , xx + 281 ) ; pm_math_quatCompose (
xx + 171 , xx + 248 , xx + 256 ) ; xx [ 248 ] = xx [ 135 ] ; xx [ 249 ] = xx
[ 155 ] ; xx [ 250 ] = xx [ 169 ] ; xx [ 155 ] = xx [ 12 ] * xx [ 157 ] ; xx
[ 169 ] = xx [ 135 ] * xx [ 12 ] - xx [ 154 ] ; xx [ 285 ] = xx [ 155 ] ; xx
[ 286 ] = xx [ 157 ] ; xx [ 287 ] = xx [ 169 ] ; pm_math_cross3 ( xx + 248 ,
xx + 285 , xx + 288 ) ; xx [ 248 ] = ( xx [ 288 ] - xx [ 121 ] * xx [ 155 ] )
* xx [ 60 ] - xx [ 0 ] ; xx [ 249 ] = xx [ 12 ] + ( xx [ 289 ] - xx [ 121 ] *
xx [ 157 ] ) * xx [ 60 ] ; xx [ 250 ] = xx [ 60 ] * ( xx [ 290 ] - xx [ 169 ]
* xx [ 121 ] ) ; pm_math_cross3 ( xx + 248 , xx + 138 , xx + 285 ) ;
pm_math_quatXform ( xx + 256 , xx + 285 , xx + 288 ) ; xx [ 292 ] = xx [ 105
] * xx [ 174 ] - xx [ 171 ] * xx [ 144 ] ; xx [ 293 ] = - ( xx [ 172 ] * xx [
144 ] + xx [ 105 ] * xx [ 173 ] ) ; xx [ 294 ] = xx [ 105 ] * xx [ 172 ] - xx
[ 173 ] * xx [ 144 ] ; xx [ 295 ] = - ( xx [ 174 ] * xx [ 144 ] + xx [ 105 ]
* xx [ 171 ] ) ; pm_math_quatCompose ( xx + 292 , xx + 252 , xx + 296 ) ; xx
[ 285 ] = xx [ 60 ] * ( xx [ 252 ] * xx [ 254 ] - xx [ 253 ] * xx [ 255 ] ) ;
xx [ 286 ] = - ( xx [ 252 ] * xx [ 253 ] + xx [ 254 ] * xx [ 255 ] ) * xx [
60 ] ; xx [ 287 ] = ( xx [ 253 ] * xx [ 253 ] + xx [ 254 ] * xx [ 254 ] ) *
xx [ 60 ] - xx [ 0 ] ; pm_math_cross3 ( xx + 285 , xx + 138 , xx + 300 ) ;
pm_math_quatXform ( xx + 296 , xx + 300 , xx + 303 ) ; pm_math_quatXform ( xx
+ 296 , xx + 177 , xx + 300 ) ; pm_math_cross3 ( xx + 264 , xx + 197 , xx +
307 ) ; pm_math_quatXform ( xx + 260 , xx + 307 , xx + 264 ) ;
pm_math_quatXform ( xx + 252 , xx + 200 , xx + 307 ) ; xx [ 121 ] = xx [ 105
] * xx [ 308 ] ; xx [ 135 ] = xx [ 69 ] + xx [ 307 ] ; xx [ 154 ] = xx [ 105
] * xx [ 135 ] ; xx [ 157 ] = ( xx [ 121 ] * xx [ 144 ] + xx [ 105 ] * xx [
154 ] ) * xx [ 60 ] ; xx [ 155 ] = xx [ 157 ] - xx [ 135 ] ; xx [ 169 ] = xx
[ 60 ] * ( xx [ 105 ] * xx [ 121 ] - xx [ 154 ] * xx [ 144 ] ) - xx [ 308 ] ;
xx [ 105 ] = xx [ 8 ] - xx [ 309 ] ; xx [ 121 ] = xx [ 105 ] + xx [ 83 ] ; xx
[ 309 ] = xx [ 155 ] ; xx [ 310 ] = xx [ 169 ] ; xx [ 311 ] = xx [ 121 ] ;
pm_math_quatXform ( xx + 78 , xx + 309 , xx + 312 ) ; xx [ 154 ] = xx [ 113 ]
* xx [ 55 ] ; xx [ 176 ] = xx [ 113 ] * xx [ 54 ] ; xx [ 184 ] = xx [ 56 ] *
xx [ 112 ] + xx [ 176 ] ; xx [ 186 ] = xx [ 112 ] * xx [ 55 ] ; xx [ 309 ] =
- xx [ 154 ] ; xx [ 310 ] = xx [ 184 ] ; xx [ 311 ] = - xx [ 186 ] ;
pm_math_cross3 ( xx + 54 , xx + 309 , xx + 315 ) ; xx [ 187 ] = xx [ 110 ] +
xx [ 112 ] + ( xx [ 154 ] * xx [ 49 ] + xx [ 315 ] ) * xx [ 60 ] ; xx [ 154 ]
= xx [ 122 ] + ( xx [ 316 ] - xx [ 184 ] * xx [ 49 ] ) * xx [ 60 ] ; xx [ 184
] = xx [ 20 ] - ( xx [ 60 ] * ( xx [ 317 ] + xx [ 186 ] * xx [ 49 ] ) - xx [
113 ] ) ; xx [ 309 ] = xx [ 312 ] - xx [ 187 ] ; xx [ 310 ] = xx [ 313 ] - xx
[ 154 ] ; xx [ 311 ] = xx [ 314 ] + xx [ 184 ] ; pm_math_cross3 ( xx + 38 ,
xx + 309 , xx + 312 ) ; pm_math_quatXform ( xx + 114 , xx + 312 , xx + 315 )
; pm_math_quatXform ( xx + 114 , xx + 208 , xx + 312 ) ; pm_math_cross3 ( xx
+ 267 , xx + 197 , xx + 318 ) ; pm_math_quatXform ( xx + 260 , xx + 318 , xx
+ 267 ) ; pm_math_cross3 ( xx + 62 , xx + 309 , xx + 318 ) ;
pm_math_quatXform ( xx + 114 , xx + 318 , xx + 321 ) ; pm_math_quatXform ( xx
+ 114 , xx + 227 , xx + 318 ) ; pm_math_cross3 ( xx + 274 , xx + 197 , xx +
324 ) ; pm_math_quatXform ( xx + 260 , xx + 324 , xx + 274 ) ; pm_math_cross3
( xx + 74 , xx + 309 , xx + 260 ) ; pm_math_quatXform ( xx + 114 , xx + 260 ,
xx + 309 ) ; pm_math_quatXform ( xx + 114 , xx + 131 , xx + 260 ) ;
pm_math_cross3 ( xx + 248 , xx + 197 , xx + 324 ) ; pm_math_quatXform ( xx +
256 , xx + 324 , xx + 248 ) ; xx [ 256 ] = xx [ 121 ] * xx [ 12 ] ; xx [ 257
] = xx [ 121 ] ; xx [ 258 ] = - ( xx [ 169 ] + xx [ 12 ] * xx [ 155 ] ) ;
pm_math_quatXform ( xx + 78 , xx + 256 , xx + 324 ) ; xx [ 79 ] = xx [ 56 ] *
xx [ 113 ] ; xx [ 81 ] = xx [ 56 ] * xx [ 23 ] ; xx [ 121 ] = xx [ 176 ] - xx
[ 23 ] * xx [ 55 ] ; xx [ 256 ] = - xx [ 79 ] ; xx [ 257 ] = xx [ 81 ] ; xx [
258 ] = xx [ 121 ] ; pm_math_cross3 ( xx + 54 , xx + 256 , xx + 327 ) ; xx [
54 ] = xx [ 324 ] + xx [ 60 ] * ( xx [ 327 ] + xx [ 79 ] * xx [ 49 ] ) + xx [
23 ] ; xx [ 55 ] = xx [ 325 ] + ( xx [ 328 ] - xx [ 81 ] * xx [ 49 ] ) * xx [
60 ] + xx [ 113 ] ; xx [ 56 ] = xx [ 326 ] + ( xx [ 329 ] - xx [ 121 ] * xx [
49 ] ) * xx [ 60 ] ; pm_math_quatXform ( xx + 114 , xx + 54 , xx + 79 ) ;
pm_math_cross3 ( xx + 285 , xx + 197 , xx + 54 ) ; pm_math_quatXform ( xx +
296 , xx + 54 , xx + 256 ) ; xx [ 49 ] = xx [ 135 ] - xx [ 157 ] ; xx [ 54 ]
= xx [ 174 ] * xx [ 49 ] ; xx [ 56 ] = xx [ 174 ] * xx [ 169 ] ; xx [ 121 ] =
xx [ 172 ] * xx [ 49 ] - xx [ 173 ] * xx [ 169 ] ; xx [ 285 ] = - xx [ 54 ] ;
xx [ 286 ] = xx [ 56 ] ; xx [ 287 ] = xx [ 121 ] ; pm_math_cross3 ( xx + 172
, xx + 285 , xx + 324 ) ; pm_math_quatXform ( xx + 296 , xx + 127 , xx + 285
) ; pm_math_quatXform ( xx + 252 , xx + 245 , xx + 327 ) ; pm_math_quatXform
( xx + 292 , xx + 327 , xx + 251 ) ; xx [ 327 ] = xx [ 98 ] + ( xx [ 159 ] *
xx [ 15 ] + xx [ 165 ] ) * xx [ 60 ] ; xx [ 328 ] = xx [ 125 ] + ( xx [ 159 ]
* xx [ 50 ] + xx [ 170 ] ) * xx [ 60 ] ; xx [ 329 ] = xx [ 168 ] + ( xx [ 159
] * xx [ 85 ] + xx [ 175 ] ) * xx [ 60 ] ; xx [ 330 ] = xx [ 35 ] ; xx [ 331
] = xx [ 25 ] + ( xx [ 180 ] * xx [ 86 ] + xx [ 192 ] ) * xx [ 60 ] ; xx [
332 ] = xx [ 35 ] ; xx [ 333 ] = xx [ 35 ] ; xx [ 334 ] = xx [ 35 ] ; xx [
335 ] = xx [ 35 ] ; xx [ 336 ] = xx [ 35 ] ; xx [ 337 ] = xx [ 35 ] ; xx [
338 ] = xx [ 35 ] ; xx [ 339 ] = xx [ 35 ] ; xx [ 340 ] = xx [ 35 ] ; xx [
341 ] = xx [ 96 ] + ( xx [ 159 ] * xx [ 119 ] + xx [ 195 ] ) * xx [ 60 ] ; xx
[ 342 ] = xx [ 123 ] + ( xx [ 159 ] * xx [ 27 ] + xx [ 206 ] ) * xx [ 60 ] ;
xx [ 343 ] = xx [ 166 ] + ( xx [ 159 ] * xx [ 89 ] + xx [ 218 ] ) * xx [ 60 ]
; xx [ 344 ] = xx [ 35 ] ; xx [ 345 ] = xx [ 37 ] + ( xx [ 180 ] * xx [ 88 ]
+ xx [ 221 ] ) * xx [ 60 ] ; xx [ 346 ] = xx [ 35 ] ; xx [ 347 ] = xx [ 35 ]
; xx [ 348 ] = xx [ 35 ] ; xx [ 349 ] = xx [ 35 ] ; xx [ 350 ] = xx [ 35 ] ;
xx [ 351 ] = xx [ 35 ] ; xx [ 352 ] = xx [ 35 ] ; xx [ 353 ] = xx [ 35 ] ; xx
[ 354 ] = xx [ 35 ] ; xx [ 355 ] = xx [ 97 ] + ( xx [ 159 ] * xx [ 106 ] + xx
[ 222 ] ) * xx [ 60 ] ; xx [ 356 ] = xx [ 124 ] + ( xx [ 159 ] * xx [ 21 ] +
xx [ 223 ] ) * xx [ 60 ] ; xx [ 357 ] = xx [ 167 ] + ( xx [ 159 ] * xx [ 82 ]
+ xx [ 224 ] ) * xx [ 60 ] ; xx [ 358 ] = xx [ 35 ] ; xx [ 359 ] = xx [ 77 ]
+ ( xx [ 180 ] * xx [ 87 ] + xx [ 185 ] ) * xx [ 60 ] ; xx [ 360 ] = xx [ 35
] ; xx [ 361 ] = xx [ 35 ] ; xx [ 362 ] = xx [ 35 ] ; xx [ 363 ] = xx [ 35 ]
; xx [ 364 ] = xx [ 35 ] ; xx [ 365 ] = xx [ 35 ] ; xx [ 366 ] = xx [ 35 ] ;
xx [ 367 ] = xx [ 35 ] ; xx [ 368 ] = xx [ 35 ] ; xx [ 369 ] = pm_math_dot3 (
xx + 270 , xx + 141 ) ; xx [ 370 ] = pm_math_dot3 ( xx + 277 , xx + 141 ) ;
xx [ 371 ] = pm_math_dot3 ( xx + 281 , xx + 141 ) ; xx [ 372 ] = xx [ 35 ] ;
xx [ 373 ] = pm_math_dot3 ( xx + 288 , xx + 141 ) ; xx [ 374 ] = pm_math_dot3
( xx + 303 , xx + 141 ) ; xx [ 375 ] = pm_math_dot3 ( xx + 300 , xx + 141 ) ;
xx [ 376 ] = xx [ 35 ] ; xx [ 377 ] = xx [ 35 ] ; xx [ 378 ] = xx [ 35 ] ; xx
[ 379 ] = xx [ 35 ] ; xx [ 380 ] = xx [ 35 ] ; xx [ 381 ] = xx [ 35 ] ; xx [
382 ] = xx [ 35 ] ; xx [ 383 ] = pm_math_dot3 ( xx + 270 , xx + 188 ) ; xx [
384 ] = pm_math_dot3 ( xx + 277 , xx + 188 ) ; xx [ 385 ] = pm_math_dot3 ( xx
+ 281 , xx + 188 ) ; xx [ 386 ] = xx [ 35 ] ; xx [ 387 ] = pm_math_dot3 ( xx
+ 288 , xx + 188 ) ; xx [ 388 ] = pm_math_dot3 ( xx + 303 , xx + 188 ) ; xx [
389 ] = pm_math_dot3 ( xx + 300 , xx + 188 ) ; xx [ 390 ] = xx [ 35 ] ; xx [
391 ] = xx [ 35 ] ; xx [ 392 ] = xx [ 35 ] ; xx [ 393 ] = xx [ 35 ] ; xx [
394 ] = xx [ 35 ] ; xx [ 395 ] = xx [ 35 ] ; xx [ 396 ] = xx [ 35 ] ; xx [
397 ] = xx [ 264 ] + xx [ 315 ] + xx [ 312 ] ; xx [ 398 ] = xx [ 267 ] + xx [
321 ] + xx [ 318 ] ; xx [ 399 ] = xx [ 274 ] + xx [ 309 ] + xx [ 260 ] ; xx [
400 ] = xx [ 35 ] ; xx [ 401 ] = xx [ 248 ] + xx [ 79 ] ; xx [ 402 ] = xx [
256 ] + xx [ 169 ] + xx [ 60 ] * ( xx [ 324 ] - xx [ 171 ] * xx [ 54 ] ) ; xx
[ 403 ] = xx [ 285 ] + xx [ 251 ] ; xx [ 404 ] = xx [ 35 ] ; xx [ 405 ] = xx
[ 35 ] ; xx [ 406 ] = xx [ 16 ] ; xx [ 407 ] = xx [ 24 ] ; xx [ 408 ] = xx [
100 ] ; xx [ 409 ] = xx [ 35 ] ; xx [ 410 ] = xx [ 35 ] ; xx [ 411 ] = xx [
265 ] + xx [ 316 ] + xx [ 313 ] ; xx [ 412 ] = xx [ 268 ] + xx [ 322 ] + xx [
319 ] ; xx [ 413 ] = xx [ 275 ] + xx [ 310 ] + xx [ 261 ] ; xx [ 414 ] = xx [
35 ] ; xx [ 415 ] = xx [ 249 ] + xx [ 80 ] ; xx [ 416 ] = xx [ 257 ] + xx [
49 ] + ( xx [ 171 ] * xx [ 56 ] + xx [ 325 ] ) * xx [ 60 ] ; xx [ 417 ] = xx
[ 286 ] + xx [ 252 ] ; xx [ 418 ] = xx [ 35 ] ; xx [ 419 ] = xx [ 35 ] ; xx [
420 ] = xx [ 35 ] ; xx [ 421 ] = xx [ 101 ] ; xx [ 422 ] = xx [ 104 ] ; xx [
423 ] = xx [ 35 ] ; xx [ 424 ] = xx [ 35 ] ; xx [ 425 ] = xx [ 266 ] + xx [
317 ] + xx [ 314 ] ; xx [ 426 ] = xx [ 269 ] + xx [ 323 ] + xx [ 320 ] ; xx [
427 ] = xx [ 276 ] + xx [ 311 ] + xx [ 262 ] ; xx [ 428 ] = xx [ 35 ] ; xx [
429 ] = xx [ 250 ] + xx [ 81 ] ; xx [ 430 ] = xx [ 258 ] + ( xx [ 171 ] * xx
[ 121 ] + xx [ 326 ] ) * xx [ 60 ] ; xx [ 431 ] = xx [ 287 ] + xx [ 253 ] ;
xx [ 432 ] = xx [ 35 ] ; xx [ 433 ] = xx [ 35 ] ; xx [ 434 ] = xx [ 35 ] ; xx
[ 435 ] = xx [ 126 ] ; xx [ 436 ] = xx [ 130 ] ; xx [ 437 ] = xx [ 35 ] ; xx
[ 438 ] = xx [ 35 ] ; xx [ 439 ] = xx [ 35 ] ; xx [ 440 ] = xx [ 35 ] ; xx [
441 ] = xx [ 35 ] ; xx [ 442 ] = xx [ 35 ] ; xx [ 443 ] = xx [ 35 ] ; xx [
444 ] = xx [ 35 ] ; xx [ 445 ] = xx [ 35 ] ; xx [ 446 ] = xx [ 35 ] ; xx [
447 ] = xx [ 35 ] ; xx [ 448 ] = xx [ 134 ] ; xx [ 449 ] = xx [ 35 ] ; xx [
450 ] = xx [ 35 ] ; xx [ 451 ] = xx [ 203 ] ; xx [ 452 ] = xx [ 35 ] ; xx [
453 ] = xx [ 35 ] ; xx [ 454 ] = xx [ 35 ] ; xx [ 455 ] = xx [ 35 ] ; xx [
456 ] = xx [ 35 ] ; xx [ 457 ] = xx [ 35 ] ; xx [ 458 ] = xx [ 35 ] ; xx [
459 ] = xx [ 35 ] ; xx [ 460 ] = xx [ 35 ] ; xx [ 461 ] = xx [ 35 ] ; xx [
462 ] = xx [ 211 ] ; xx [ 463 ] = xx [ 213 ] ; xx [ 464 ] = xx [ 35 ] ; xx [
465 ] = xx [ 35 ] ; xx [ 466 ] = xx [ 215 ] ; pm_math_quatCompose ( xx + 296
, xx + 41 , xx + 78 ) ; xx [ 54 ] = ( xx [ 78 ] * xx [ 80 ] + xx [ 79 ] * xx
[ 81 ] ) * xx [ 60 ] ; xx [ 55 ] = xx [ 60 ] * ( xx [ 80 ] * xx [ 81 ] - xx [
78 ] * xx [ 79 ] ) ; xx [ 56 ] = xx [ 0 ] - ( xx [ 79 ] * xx [ 79 ] + xx [ 80
] * xx [ 80 ] ) * xx [ 60 ] ; pm_math_quatXform ( xx + 296 , xx + 197 , xx +
78 ) ; xx [ 85 ] = - xx [ 135 ] ; xx [ 86 ] = - xx [ 308 ] ; xx [ 87 ] = xx [
105 ] ; pm_math_quatXform ( xx + 292 , xx + 85 , xx + 96 ) ; xx [ 15 ] = xx [
83 ] * xx [ 173 ] ; xx [ 21 ] = xx [ 83 ] * xx [ 172 ] ; xx [ 85 ] = - xx [
187 ] ; xx [ 86 ] = - xx [ 154 ] ; xx [ 87 ] = xx [ 184 ] ; pm_math_quatXform
( xx + 114 , xx + 85 , xx + 123 ) ; xx [ 27 ] = xx [ 17 ] * xx [ 116 ] + xx [
19 ] * xx [ 117 ] ; xx [ 49 ] = xx [ 17 ] * xx [ 115 ] ; xx [ 85 ] = - xx [
27 ] ; xx [ 86 ] = xx [ 49 ] ; xx [ 87 ] = xx [ 19 ] * xx [ 115 ] ;
pm_math_cross3 ( xx + 115 , xx + 85 , xx + 159 ) ; xx [ 50 ] = state [ 35 ] +
xx [ 241 ] ; xx [ 85 ] = xx [ 50 ] * xx [ 22 ] - xx [ 28 ] ; xx [ 86 ] = xx [
50 ] * xx [ 34 ] - xx [ 36 ] ; xx [ 87 ] = xx [ 50 ] * xx [ 51 ] - xx [ 53 ]
; pm_math_quatXform ( xx + 145 , xx + 85 , xx + 116 ) ; xx [ 81 ] = state [
33 ] + xx [ 240 ] ; xx [ 85 ] = xx [ 52 ] + xx [ 81 ] * xx [ 57 ] ; xx [ 86 ]
= xx [ 59 ] - xx [ 81 ] * xx [ 70 ] ; xx [ 87 ] = - ( xx [ 72 ] + xx [ 81 ] *
xx [ 73 ] ) ; pm_math_quatXform ( xx + 149 , xx + 85 , xx + 162 ) ; xx [ 82 ]
= state [ 31 ] + xx [ 239 ] ; xx [ 85 ] = xx [ 82 ] - xx [ 58 ] ; xx [ 86 ] =
xx [ 162 ] + xx [ 85 ] ; xx [ 88 ] = xx [ 163 ] + xx [ 102 ] ; xx [ 105 ] =
state [ 37 ] + xx [ 242 ] ; xx [ 119 ] = state [ 39 ] + xx [ 243 ] ; xx [ 216
] = - ( xx [ 181 ] * xx [ 182 ] + xx [ 180 ] * xx [ 183 ] ) * xx [ 60 ] ; xx
[ 217 ] = - ( xx [ 182 ] * xx [ 183 ] + xx [ 180 ] * xx [ 181 ] ) * xx [ 60 ]
; xx [ 218 ] = - ( xx [ 181 ] * xx [ 183 ] + xx [ 180 ] * xx [ 182 ] ) * xx [
60 ] ; xx [ 219 ] = - pm_math_dot3 ( xx + 54 , xx + 141 ) ; xx [ 220 ] = -
pm_math_dot3 ( xx + 54 , xx + 188 ) ; xx [ 221 ] = - ( xx [ 78 ] + xx [ 96 ]
+ ( xx [ 171 ] * xx [ 15 ] + xx [ 174 ] * xx [ 21 ] ) * xx [ 60 ] + xx [ 123
] + state [ 0 ] - ( xx [ 159 ] - xx [ 114 ] * xx [ 27 ] ) * xx [ 60 ] - ( xx
[ 116 ] + xx [ 86 ] ) - xx [ 90 ] ) ; xx [ 222 ] = - ( xx [ 79 ] + xx [ 97 ]
+ xx [ 60 ] * ( xx [ 174 ] * xx [ 15 ] - xx [ 171 ] * xx [ 21 ] ) + xx [ 124
] + state [ 1 ] - xx [ 60 ] * ( xx [ 160 ] + xx [ 114 ] * xx [ 49 ] ) - ( xx
[ 117 ] + xx [ 88 ] ) + xx [ 108 ] ) ; xx [ 223 ] = - ( xx [ 80 ] + xx [ 98 ]
+ xx [ 125 ] + state [ 2 ] - ( xx [ 19 ] * xx [ 114 ] * xx [ 115 ] + xx [ 161
] ) * xx [ 60 ] - ( xx [ 172 ] * xx [ 21 ] + xx [ 173 ] * xx [ 15 ] ) * xx [
60 ] - ( xx [ 118 ] + xx [ 164 ] ) - xx [ 111 ] ) ; xx [ 224 ] = ( xx [ 105 ]
- xx [ 85 ] - xx [ 120 ] ) * xx [ 134 ] + xx [ 136 ] ; xx [ 225 ] = - ( ( xx
[ 86 ] - xx [ 119 ] + xx [ 153 ] ) * xx [ 211 ] + ( xx [ 88 ] - xx [ 156 ] )
* xx [ 158 ] ) ; memcpy ( xx + 467 , xx + 327 , 140 * sizeof ( double ) ) ;
factorAndSolveWide ( 10 , 14 , xx + 467 , xx + 248 , xx + 258 , ii + 0 , xx +
216 , xx [ 9 ] , xx + 159 ) ; pm_math_quatDeriv ( xx + 65 , xx + 159 , xx +
85 ) ; xx [ 15 ] = xx [ 3 ] + xx [ 85 ] ; xx [ 3 ] = xx [ 4 ] + xx [ 86 ] ;
xx [ 21 ] = xx [ 2 ] + xx [ 87 ] ; xx [ 2 ] = xx [ 6 ] + xx [ 88 ] ; xx [ 6 ]
= sqrt ( xx [ 15 ] * xx [ 15 ] + xx [ 3 ] * xx [ 3 ] + xx [ 21 ] * xx [ 21 ]
+ xx [ 2 ] * xx [ 2 ] ) ; if ( xx [ 5 ] > xx [ 6 ] ) xx [ 6 ] = xx [ 5 ] ; xx
[ 4 ] = xx [ 15 ] / xx [ 6 ] ; xx [ 15 ] = xx [ 3 ] / xx [ 6 ] ; xx [ 3 ] =
xx [ 21 ] / xx [ 6 ] ; xx [ 21 ] = xx [ 2 ] / xx [ 6 ] ; xx [ 65 ] = xx [ 4 ]
; xx [ 66 ] = xx [ 15 ] ; xx [ 67 ] = xx [ 3 ] ; xx [ 68 ] = xx [ 21 ] ; xx [
2 ] = xx [ 10 ] + xx [ 163 ] ; xx [ 6 ] = xx [ 2 ] * xx [ 7 ] ; xx [ 10 ] =
cos ( xx [ 6 ] ) ; xx [ 27 ] = sin ( xx [ 6 ] ) ; xx [ 6 ] = xx [ 12 ] * xx [
27 ] ; xx [ 49 ] = xx [ 1 ] * xx [ 10 ] + xx [ 11 ] * xx [ 6 ] + xx [ 14 ] *
xx [ 27 ] ; xx [ 54 ] = xx [ 1 ] * xx [ 27 ] - xx [ 14 ] * xx [ 10 ] - xx [
18 ] * xx [ 6 ] ; xx [ 55 ] = xx [ 11 ] * xx [ 10 ] - xx [ 1 ] * xx [ 6 ] -
xx [ 18 ] * xx [ 27 ] ; xx [ 56 ] = xx [ 18 ] * xx [ 10 ] - xx [ 14 ] * xx [
6 ] + xx [ 11 ] * xx [ 27 ] ; xx [ 85 ] = - xx [ 49 ] ; xx [ 86 ] = xx [ 54 ]
; xx [ 87 ] = xx [ 55 ] ; xx [ 88 ] = xx [ 56 ] ; pm_math_quatCompose ( xx +
85 , xx + 30 , xx + 114 ) ; pm_math_quatInverseXform ( xx + 114 , xx + 38 ,
xx + 78 ) ; pm_math_quatComposeInverse ( xx + 65 , xx + 45 , xx + 173 ) ;
pm_math_quatCompose ( xx + 173 , xx + 114 , xx + 180 ) ; xx [ 6 ] = xx [ 79 ]
* xx [ 181 ] ; xx [ 10 ] = xx [ 79 ] * xx [ 182 ] ; xx [ 27 ] = xx [ 80 ] *
xx [ 183 ] ; xx [ 96 ] = - ( xx [ 10 ] + xx [ 27 ] ) ; xx [ 97 ] = xx [ 6 ] ;
xx [ 98 ] = xx [ 80 ] * xx [ 181 ] ; pm_math_cross3 ( xx + 181 , xx + 96 , xx
+ 123 ) ; pm_math_quatInverseXform ( xx + 114 , xx + 62 , xx + 96 ) ; xx [ 89
] = xx [ 181 ] * xx [ 97 ] ; xx [ 106 ] = xx [ 182 ] * xx [ 97 ] ; xx [ 118 ]
= xx [ 183 ] * xx [ 98 ] ; xx [ 185 ] = - ( xx [ 106 ] + xx [ 118 ] ) ; xx [
186 ] = xx [ 89 ] ; xx [ 187 ] = xx [ 181 ] * xx [ 98 ] ; pm_math_cross3 ( xx
+ 181 , xx + 185 , xx + 191 ) ; pm_math_quatInverseXform ( xx + 114 , xx + 74
, xx + 185 ) ; xx [ 114 ] = xx [ 181 ] * xx [ 186 ] ; xx [ 116 ] = xx [ 182 ]
* xx [ 186 ] ; xx [ 117 ] = xx [ 183 ] * xx [ 187 ] ; xx [ 193 ] = - ( xx [
116 ] + xx [ 117 ] ) ; xx [ 194 ] = xx [ 114 ] ; xx [ 195 ] = xx [ 181 ] * xx
[ 187 ] ; pm_math_cross3 ( xx + 181 , xx + 193 , xx + 204 ) ;
pm_math_quatCompose ( xx + 173 , xx + 85 , xx + 193 ) ; pm_math_quatCompose (
xx + 193 , xx + 30 , xx + 216 ) ; xx [ 115 ] = xx [ 77 ] * xx [ 217 ] ; xx [
121 ] = xx [ 77 ] * xx [ 218 ] ; xx [ 123 ] = xx [ 219 ] * xx [ 25 ] ; xx [
221 ] = - ( xx [ 121 ] + xx [ 123 ] ) ; xx [ 222 ] = xx [ 115 ] ; xx [ 223 ]
= xx [ 217 ] * xx [ 25 ] ; pm_math_cross3 ( xx + 217 , xx + 221 , xx + 224 )
; xx [ 125 ] = xx [ 80 ] * xx [ 182 ] ; xx [ 135 ] = xx [ 78 ] * xx [ 181 ] ;
xx [ 221 ] = xx [ 78 ] * xx [ 182 ] ; xx [ 222 ] = - ( xx [ 27 ] + xx [ 135 ]
) ; xx [ 223 ] = xx [ 125 ] ; pm_math_cross3 ( xx + 181 , xx + 221 , xx + 248
) ; xx [ 27 ] = xx [ 182 ] * xx [ 98 ] ; xx [ 144 ] = xx [ 181 ] * xx [ 96 ]
; xx [ 221 ] = xx [ 182 ] * xx [ 96 ] ; xx [ 222 ] = - ( xx [ 118 ] + xx [
144 ] ) ; xx [ 223 ] = xx [ 27 ] ; pm_math_cross3 ( xx + 181 , xx + 221 , xx
+ 251 ) ; xx [ 118 ] = xx [ 182 ] * xx [ 187 ] ; xx [ 154 ] = xx [ 181 ] * xx
[ 185 ] ; xx [ 221 ] = xx [ 182 ] * xx [ 185 ] ; xx [ 222 ] = - ( xx [ 117 ]
+ xx [ 154 ] ) ; xx [ 223 ] = xx [ 118 ] ; pm_math_cross3 ( xx + 181 , xx +
221 , xx + 254 ) ; xx [ 117 ] = xx [ 218 ] * xx [ 25 ] ; xx [ 155 ] = xx [ 37
] * xx [ 217 ] ; xx [ 221 ] = xx [ 37 ] * xx [ 218 ] ; xx [ 222 ] = - ( xx [
123 ] + xx [ 155 ] ) ; xx [ 223 ] = xx [ 117 ] ; pm_math_cross3 ( xx + 217 ,
xx + 221 , xx + 257 ) ; xx [ 123 ] = xx [ 78 ] * xx [ 183 ] ; xx [ 221 ] = xx
[ 123 ] ; xx [ 222 ] = xx [ 79 ] * xx [ 183 ] ; xx [ 223 ] = - ( xx [ 135 ] +
xx [ 10 ] ) ; pm_math_cross3 ( xx + 181 , xx + 221 , xx + 260 ) ; xx [ 10 ] =
xx [ 183 ] * xx [ 96 ] ; xx [ 221 ] = xx [ 10 ] ; xx [ 222 ] = xx [ 183 ] *
xx [ 97 ] ; xx [ 223 ] = - ( xx [ 144 ] + xx [ 106 ] ) ; pm_math_cross3 ( xx
+ 181 , xx + 221 , xx + 261 ) ; xx [ 106 ] = xx [ 183 ] * xx [ 185 ] ; xx [
221 ] = xx [ 106 ] ; xx [ 222 ] = xx [ 183 ] * xx [ 186 ] ; xx [ 223 ] = - (
xx [ 154 ] + xx [ 116 ] ) ; pm_math_cross3 ( xx + 181 , xx + 221 , xx + 262 )
; xx [ 116 ] = xx [ 37 ] * xx [ 219 ] ; xx [ 222 ] = xx [ 116 ] ; xx [ 223 ]
= xx [ 77 ] * xx [ 219 ] ; xx [ 224 ] = - ( xx [ 155 ] + xx [ 121 ] ) ;
pm_math_cross3 ( xx + 217 , xx + 222 , xx + 263 ) ; xx [ 121 ] = xx [ 99 ] +
xx [ 164 ] ; xx [ 99 ] = xx [ 121 ] * xx [ 7 ] ; xx [ 135 ] = cos ( xx [ 99 ]
) ; xx [ 144 ] = sin ( xx [ 99 ] ) ; xx [ 99 ] = xx [ 135 ] - xx [ 71 ] * xx
[ 144 ] ; xx [ 154 ] = xx [ 137 ] + xx [ 165 ] ; xx [ 137 ] = xx [ 154 ] * xx
[ 7 ] ; xx [ 155 ] = sin ( xx [ 137 ] ) ; xx [ 220 ] = cos ( xx [ 137 ] ) ;
xx [ 221 ] = - xx [ 95 ] * xx [ 155 ] ; xx [ 222 ] = - xx [ 84 ] * xx [ 155 ]
; xx [ 223 ] = - xx [ 103 ] * xx [ 155 ] ; pm_math_quatCompose ( xx + 91 , xx
+ 220 , xx + 264 ) ; xx [ 137 ] = xx [ 71 ] * xx [ 135 ] + xx [ 144 ] ; xx [
135 ] = xx [ 99 ] * xx [ 267 ] - xx [ 264 ] * xx [ 137 ] ; xx [ 144 ] = xx [
99 ] * xx [ 266 ] - xx [ 265 ] * xx [ 137 ] ; xx [ 155 ] = xx [ 266 ] * xx [
137 ] + xx [ 99 ] * xx [ 265 ] ; xx [ 157 ] = - xx [ 155 ] ; xx [ 191 ] = xx
[ 267 ] * xx [ 137 ] + xx [ 99 ] * xx [ 264 ] ; xx [ 204 ] = - xx [ 191 ] ;
xx [ 220 ] = xx [ 135 ] ; xx [ 221 ] = xx [ 144 ] ; xx [ 222 ] = xx [ 157 ] ;
xx [ 223 ] = xx [ 204 ] ; pm_math_quatCompose ( xx + 85 , xx + 220 , xx + 268
) ; pm_math_quatCompose ( xx + 173 , xx + 268 , xx + 272 ) ;
pm_math_quatInverseXform ( xx + 268 , xx + 38 , xx + 276 ) ; pm_math_cross3 (
xx + 276 , xx + 138 , xx + 279 ) ; pm_math_quatXform ( xx + 272 , xx + 279 ,
xx + 282 ) ; pm_math_quatInverseXform ( xx + 268 , xx + 62 , xx + 279 ) ;
pm_math_cross3 ( xx + 279 , xx + 138 , xx + 286 ) ; pm_math_quatXform ( xx +
272 , xx + 286 , xx + 289 ) ; pm_math_quatInverseXform ( xx + 268 , xx + 74 ,
xx + 286 ) ; pm_math_cross3 ( xx + 286 , xx + 138 , xx + 268 ) ;
pm_math_quatXform ( xx + 272 , xx + 268 , xx + 293 ) ; pm_math_quatCompose (
xx + 193 , xx + 220 , xx + 268 ) ; xx [ 220 ] = xx [ 144 ] ; xx [ 221 ] = xx
[ 157 ] ; xx [ 222 ] = xx [ 204 ] ; xx [ 157 ] = xx [ 12 ] * xx [ 191 ] ; xx
[ 204 ] = xx [ 144 ] * xx [ 12 ] - xx [ 155 ] ; xx [ 297 ] = xx [ 157 ] ; xx
[ 298 ] = xx [ 191 ] ; xx [ 299 ] = xx [ 204 ] ; pm_math_cross3 ( xx + 220 ,
xx + 297 , xx + 300 ) ; xx [ 220 ] = ( xx [ 300 ] - xx [ 135 ] * xx [ 157 ] )
* xx [ 60 ] - xx [ 0 ] ; xx [ 221 ] = xx [ 12 ] + ( xx [ 301 ] - xx [ 135 ] *
xx [ 191 ] ) * xx [ 60 ] ; xx [ 222 ] = xx [ 60 ] * ( xx [ 302 ] - xx [ 135 ]
* xx [ 204 ] ) ; pm_math_cross3 ( xx + 220 , xx + 138 , xx + 297 ) ;
pm_math_quatXform ( xx + 268 , xx + 297 , xx + 300 ) ; xx [ 304 ] = xx [ 99 ]
* xx [ 196 ] - xx [ 193 ] * xx [ 137 ] ; xx [ 305 ] = - ( xx [ 194 ] * xx [
137 ] + xx [ 99 ] * xx [ 195 ] ) ; xx [ 306 ] = xx [ 99 ] * xx [ 194 ] - xx [
195 ] * xx [ 137 ] ; xx [ 307 ] = - ( xx [ 196 ] * xx [ 137 ] + xx [ 99 ] *
xx [ 193 ] ) ; pm_math_quatCompose ( xx + 304 , xx + 264 , xx + 308 ) ; xx [
297 ] = xx [ 60 ] * ( xx [ 264 ] * xx [ 266 ] - xx [ 265 ] * xx [ 267 ] ) ;
xx [ 298 ] = - ( xx [ 264 ] * xx [ 265 ] + xx [ 266 ] * xx [ 267 ] ) * xx [
60 ] ; xx [ 299 ] = ( xx [ 265 ] * xx [ 265 ] + xx [ 266 ] * xx [ 266 ] ) *
xx [ 60 ] - xx [ 0 ] ; pm_math_cross3 ( xx + 297 , xx + 138 , xx + 312 ) ;
pm_math_quatXform ( xx + 308 , xx + 312 , xx + 315 ) ; pm_math_quatXform ( xx
+ 308 , xx + 177 , xx + 312 ) ; pm_math_cross3 ( xx + 276 , xx + 197 , xx +
319 ) ; pm_math_quatXform ( xx + 272 , xx + 319 , xx + 276 ) ;
pm_math_quatXform ( xx + 264 , xx + 200 , xx + 319 ) ; xx [ 135 ] = xx [ 99 ]
* xx [ 320 ] ; xx [ 155 ] = xx [ 69 ] + xx [ 319 ] ; xx [ 157 ] = xx [ 99 ] *
xx [ 155 ] ; xx [ 204 ] = ( xx [ 135 ] * xx [ 137 ] + xx [ 99 ] * xx [ 157 ]
) * xx [ 60 ] ; xx [ 206 ] = xx [ 204 ] - xx [ 155 ] ; xx [ 207 ] = xx [ 60 ]
* ( xx [ 99 ] * xx [ 135 ] - xx [ 157 ] * xx [ 137 ] ) - xx [ 320 ] ; xx [ 99
] = xx [ 8 ] - xx [ 321 ] ; xx [ 135 ] = xx [ 99 ] + xx [ 83 ] ; xx [ 321 ] =
xx [ 206 ] ; xx [ 322 ] = xx [ 207 ] ; xx [ 323 ] = xx [ 135 ] ;
pm_math_quatXform ( xx + 85 , xx + 321 , xx + 324 ) ; xx [ 137 ] = xx [ 113 ]
* xx [ 55 ] ; xx [ 157 ] = xx [ 113 ] * xx [ 54 ] ; xx [ 212 ] = xx [ 56 ] *
xx [ 112 ] + xx [ 157 ] ; xx [ 214 ] = xx [ 112 ] * xx [ 55 ] ; xx [ 321 ] =
- xx [ 137 ] ; xx [ 322 ] = xx [ 212 ] ; xx [ 323 ] = - xx [ 214 ] ;
pm_math_cross3 ( xx + 54 , xx + 321 , xx + 327 ) ; xx [ 223 ] = xx [ 110 ] +
xx [ 112 ] + ( xx [ 137 ] * xx [ 49 ] + xx [ 327 ] ) * xx [ 60 ] ; xx [ 110 ]
= xx [ 122 ] + ( xx [ 328 ] - xx [ 49 ] * xx [ 212 ] ) * xx [ 60 ] ; xx [ 137
] = xx [ 20 ] - ( xx [ 60 ] * ( xx [ 329 ] + xx [ 214 ] * xx [ 49 ] ) - xx [
113 ] ) ; xx [ 321 ] = xx [ 324 ] - xx [ 223 ] ; xx [ 322 ] = xx [ 325 ] - xx
[ 110 ] ; xx [ 323 ] = xx [ 326 ] + xx [ 137 ] ; pm_math_cross3 ( xx + 38 ,
xx + 321 , xx + 324 ) ; pm_math_quatXform ( xx + 173 , xx + 324 , xx + 327 )
; pm_math_quatXform ( xx + 173 , xx + 208 , xx + 324 ) ; pm_math_cross3 ( xx
+ 279 , xx + 197 , xx + 330 ) ; pm_math_quatXform ( xx + 272 , xx + 330 , xx
+ 279 ) ; pm_math_cross3 ( xx + 62 , xx + 321 , xx + 330 ) ;
pm_math_quatXform ( xx + 173 , xx + 330 , xx + 333 ) ; pm_math_quatXform ( xx
+ 173 , xx + 227 , xx + 330 ) ; pm_math_cross3 ( xx + 286 , xx + 197 , xx +
336 ) ; pm_math_quatXform ( xx + 272 , xx + 336 , xx + 286 ) ; pm_math_cross3
( xx + 74 , xx + 321 , xx + 272 ) ; pm_math_quatXform ( xx + 173 , xx + 272 ,
xx + 321 ) ; pm_math_quatXform ( xx + 173 , xx + 131 , xx + 272 ) ;
pm_math_cross3 ( xx + 220 , xx + 197 , xx + 336 ) ; pm_math_quatXform ( xx +
268 , xx + 336 , xx + 220 ) ; xx [ 268 ] = xx [ 135 ] * xx [ 12 ] ; xx [ 269
] = xx [ 135 ] ; xx [ 270 ] = - ( xx [ 207 ] + xx [ 12 ] * xx [ 206 ] ) ;
pm_math_quatXform ( xx + 85 , xx + 268 , xx + 336 ) ; xx [ 20 ] = xx [ 56 ] *
xx [ 113 ] ; xx [ 85 ] = xx [ 56 ] * xx [ 23 ] ; xx [ 86 ] = xx [ 157 ] - xx
[ 23 ] * xx [ 55 ] ; xx [ 268 ] = - xx [ 20 ] ; xx [ 269 ] = xx [ 85 ] ; xx [
270 ] = xx [ 86 ] ; pm_math_cross3 ( xx + 54 , xx + 268 , xx + 339 ) ; xx [
54 ] = xx [ 336 ] + xx [ 60 ] * ( xx [ 339 ] + xx [ 20 ] * xx [ 49 ] ) + xx [
23 ] ; xx [ 55 ] = xx [ 337 ] + ( xx [ 340 ] - xx [ 85 ] * xx [ 49 ] ) * xx [
60 ] + xx [ 113 ] ; xx [ 56 ] = xx [ 338 ] + ( xx [ 341 ] - xx [ 49 ] * xx [
86 ] ) * xx [ 60 ] ; pm_math_quatXform ( xx + 173 , xx + 54 , xx + 85 ) ;
pm_math_cross3 ( xx + 297 , xx + 197 , xx + 54 ) ; pm_math_quatXform ( xx +
308 , xx + 54 , xx + 268 ) ; xx [ 20 ] = xx [ 155 ] - xx [ 204 ] ; xx [ 49 ]
= xx [ 196 ] * xx [ 20 ] ; xx [ 54 ] = xx [ 196 ] * xx [ 207 ] ; xx [ 55 ] =
xx [ 194 ] * xx [ 20 ] - xx [ 195 ] * xx [ 207 ] ; xx [ 297 ] = - xx [ 49 ] ;
xx [ 298 ] = xx [ 54 ] ; xx [ 299 ] = xx [ 55 ] ; pm_math_cross3 ( xx + 194 ,
xx + 297 , xx + 336 ) ; pm_math_quatXform ( xx + 308 , xx + 127 , xx + 297 )
; pm_math_quatXform ( xx + 264 , xx + 245 , xx + 339 ) ; pm_math_quatXform (
xx + 304 , xx + 339 , xx + 264 ) ; xx [ 339 ] = xx [ 80 ] + ( xx [ 180 ] * xx
[ 6 ] + xx [ 124 ] ) * xx [ 60 ] ; xx [ 340 ] = xx [ 98 ] + ( xx [ 180 ] * xx
[ 89 ] + xx [ 192 ] ) * xx [ 60 ] ; xx [ 341 ] = xx [ 187 ] + ( xx [ 180 ] *
xx [ 114 ] + xx [ 205 ] ) * xx [ 60 ] ; xx [ 342 ] = xx [ 35 ] ; xx [ 343 ] =
xx [ 25 ] + ( xx [ 216 ] * xx [ 115 ] + xx [ 225 ] ) * xx [ 60 ] ; xx [ 344 ]
= xx [ 35 ] ; xx [ 345 ] = xx [ 35 ] ; xx [ 346 ] = xx [ 35 ] ; xx [ 347 ] =
xx [ 35 ] ; xx [ 348 ] = xx [ 35 ] ; xx [ 349 ] = xx [ 35 ] ; xx [ 350 ] = xx
[ 35 ] ; xx [ 351 ] = xx [ 35 ] ; xx [ 352 ] = xx [ 35 ] ; xx [ 353 ] = xx [
78 ] + ( xx [ 180 ] * xx [ 125 ] + xx [ 250 ] ) * xx [ 60 ] ; xx [ 354 ] = xx
[ 96 ] + ( xx [ 180 ] * xx [ 27 ] + xx [ 253 ] ) * xx [ 60 ] ; xx [ 355 ] =
xx [ 185 ] + ( xx [ 180 ] * xx [ 118 ] + xx [ 256 ] ) * xx [ 60 ] ; xx [ 356
] = xx [ 35 ] ; xx [ 357 ] = xx [ 37 ] + ( xx [ 216 ] * xx [ 117 ] + xx [ 259
] ) * xx [ 60 ] ; xx [ 358 ] = xx [ 35 ] ; xx [ 359 ] = xx [ 35 ] ; xx [ 360
] = xx [ 35 ] ; xx [ 361 ] = xx [ 35 ] ; xx [ 362 ] = xx [ 35 ] ; xx [ 363 ]
= xx [ 35 ] ; xx [ 364 ] = xx [ 35 ] ; xx [ 365 ] = xx [ 35 ] ; xx [ 366 ] =
xx [ 35 ] ; xx [ 367 ] = xx [ 79 ] + ( xx [ 180 ] * xx [ 123 ] + xx [ 260 ] )
* xx [ 60 ] ; xx [ 368 ] = xx [ 97 ] + ( xx [ 180 ] * xx [ 10 ] + xx [ 261 ]
) * xx [ 60 ] ; xx [ 369 ] = xx [ 186 ] + ( xx [ 180 ] * xx [ 106 ] + xx [
262 ] ) * xx [ 60 ] ; xx [ 370 ] = xx [ 35 ] ; xx [ 371 ] = xx [ 77 ] + ( xx
[ 216 ] * xx [ 116 ] + xx [ 263 ] ) * xx [ 60 ] ; xx [ 372 ] = xx [ 35 ] ; xx
[ 373 ] = xx [ 35 ] ; xx [ 374 ] = xx [ 35 ] ; xx [ 375 ] = xx [ 35 ] ; xx [
376 ] = xx [ 35 ] ; xx [ 377 ] = xx [ 35 ] ; xx [ 378 ] = xx [ 35 ] ; xx [
379 ] = xx [ 35 ] ; xx [ 380 ] = xx [ 35 ] ; xx [ 381 ] = pm_math_dot3 ( xx +
282 , xx + 141 ) ; xx [ 382 ] = pm_math_dot3 ( xx + 289 , xx + 141 ) ; xx [
383 ] = pm_math_dot3 ( xx + 293 , xx + 141 ) ; xx [ 384 ] = xx [ 35 ] ; xx [
385 ] = pm_math_dot3 ( xx + 300 , xx + 141 ) ; xx [ 386 ] = pm_math_dot3 ( xx
+ 315 , xx + 141 ) ; xx [ 387 ] = pm_math_dot3 ( xx + 312 , xx + 141 ) ; xx [
388 ] = xx [ 35 ] ; xx [ 389 ] = xx [ 35 ] ; xx [ 390 ] = xx [ 35 ] ; xx [
391 ] = xx [ 35 ] ; xx [ 392 ] = xx [ 35 ] ; xx [ 393 ] = xx [ 35 ] ; xx [
394 ] = xx [ 35 ] ; xx [ 395 ] = pm_math_dot3 ( xx + 282 , xx + 188 ) ; xx [
396 ] = pm_math_dot3 ( xx + 289 , xx + 188 ) ; xx [ 397 ] = pm_math_dot3 ( xx
+ 293 , xx + 188 ) ; xx [ 398 ] = xx [ 35 ] ; xx [ 399 ] = pm_math_dot3 ( xx
+ 300 , xx + 188 ) ; xx [ 400 ] = pm_math_dot3 ( xx + 315 , xx + 188 ) ; xx [
401 ] = pm_math_dot3 ( xx + 312 , xx + 188 ) ; xx [ 402 ] = xx [ 35 ] ; xx [
403 ] = xx [ 35 ] ; xx [ 404 ] = xx [ 35 ] ; xx [ 405 ] = xx [ 35 ] ; xx [
406 ] = xx [ 35 ] ; xx [ 407 ] = xx [ 35 ] ; xx [ 408 ] = xx [ 35 ] ; xx [
409 ] = xx [ 276 ] + xx [ 327 ] + xx [ 324 ] ; xx [ 410 ] = xx [ 279 ] + xx [
333 ] + xx [ 330 ] ; xx [ 411 ] = xx [ 286 ] + xx [ 321 ] + xx [ 272 ] ; xx [
412 ] = xx [ 35 ] ; xx [ 413 ] = xx [ 220 ] + xx [ 85 ] ; xx [ 414 ] = xx [
268 ] + xx [ 207 ] + xx [ 60 ] * ( xx [ 336 ] - xx [ 193 ] * xx [ 49 ] ) ; xx
[ 415 ] = xx [ 297 ] + xx [ 264 ] ; xx [ 416 ] = xx [ 35 ] ; xx [ 417 ] = xx
[ 35 ] ; xx [ 418 ] = xx [ 16 ] ; xx [ 419 ] = xx [ 24 ] ; xx [ 420 ] = xx [
100 ] ; xx [ 421 ] = xx [ 35 ] ; xx [ 422 ] = xx [ 35 ] ; xx [ 423 ] = xx [
277 ] + xx [ 328 ] + xx [ 325 ] ; xx [ 424 ] = xx [ 280 ] + xx [ 334 ] + xx [
331 ] ; xx [ 425 ] = xx [ 287 ] + xx [ 322 ] + xx [ 273 ] ; xx [ 426 ] = xx [
35 ] ; xx [ 427 ] = xx [ 221 ] + xx [ 86 ] ; xx [ 428 ] = xx [ 269 ] + xx [
20 ] + ( xx [ 193 ] * xx [ 54 ] + xx [ 337 ] ) * xx [ 60 ] ; xx [ 429 ] = xx
[ 298 ] + xx [ 265 ] ; xx [ 430 ] = xx [ 35 ] ; xx [ 431 ] = xx [ 35 ] ; xx [
432 ] = xx [ 35 ] ; xx [ 433 ] = xx [ 101 ] ; xx [ 434 ] = xx [ 104 ] ; xx [
435 ] = xx [ 35 ] ; xx [ 436 ] = xx [ 35 ] ; xx [ 437 ] = xx [ 278 ] + xx [
329 ] + xx [ 326 ] ; xx [ 438 ] = xx [ 281 ] + xx [ 335 ] + xx [ 332 ] ; xx [
439 ] = xx [ 288 ] + xx [ 323 ] + xx [ 274 ] ; xx [ 440 ] = xx [ 35 ] ; xx [
441 ] = xx [ 222 ] + xx [ 87 ] ; xx [ 442 ] = xx [ 270 ] + ( xx [ 193 ] * xx
[ 55 ] + xx [ 338 ] ) * xx [ 60 ] ; xx [ 443 ] = xx [ 299 ] + xx [ 266 ] ; xx
[ 444 ] = xx [ 35 ] ; xx [ 445 ] = xx [ 35 ] ; xx [ 446 ] = xx [ 35 ] ; xx [
447 ] = xx [ 126 ] ; xx [ 448 ] = xx [ 130 ] ; xx [ 449 ] = xx [ 35 ] ; xx [
450 ] = xx [ 35 ] ; xx [ 451 ] = xx [ 35 ] ; xx [ 452 ] = xx [ 35 ] ; xx [
453 ] = xx [ 35 ] ; xx [ 454 ] = xx [ 35 ] ; xx [ 455 ] = xx [ 35 ] ; xx [
456 ] = xx [ 35 ] ; xx [ 457 ] = xx [ 35 ] ; xx [ 458 ] = xx [ 35 ] ; xx [
459 ] = xx [ 35 ] ; xx [ 460 ] = xx [ 134 ] ; xx [ 461 ] = xx [ 35 ] ; xx [
462 ] = xx [ 35 ] ; xx [ 463 ] = xx [ 203 ] ; xx [ 464 ] = xx [ 35 ] ; xx [
465 ] = xx [ 35 ] ; xx [ 466 ] = xx [ 35 ] ; xx [ 467 ] = xx [ 35 ] ; xx [
468 ] = xx [ 35 ] ; xx [ 469 ] = xx [ 35 ] ; xx [ 470 ] = xx [ 35 ] ; xx [
471 ] = xx [ 35 ] ; xx [ 472 ] = xx [ 35 ] ; xx [ 473 ] = xx [ 35 ] ; xx [
474 ] = xx [ 211 ] ; xx [ 475 ] = xx [ 213 ] ; xx [ 476 ] = xx [ 35 ] ; xx [
477 ] = xx [ 35 ] ; xx [ 478 ] = xx [ 215 ] ; pm_math_quatCompose ( xx + 308
, xx + 41 , xx + 77 ) ; xx [ 54 ] = ( xx [ 77 ] * xx [ 79 ] + xx [ 78 ] * xx
[ 80 ] ) * xx [ 60 ] ; xx [ 55 ] = xx [ 60 ] * ( xx [ 79 ] * xx [ 80 ] - xx [
77 ] * xx [ 78 ] ) ; xx [ 56 ] = xx [ 0 ] - ( xx [ 78 ] * xx [ 78 ] + xx [ 79
] * xx [ 79 ] ) * xx [ 60 ] ; pm_math_quatXform ( xx + 308 , xx + 197 , xx +
77 ) ; xx [ 85 ] = - xx [ 155 ] ; xx [ 86 ] = - xx [ 320 ] ; xx [ 87 ] = xx [
99 ] ; pm_math_quatXform ( xx + 304 , xx + 85 , xx + 96 ) ; xx [ 6 ] = xx [
83 ] * xx [ 195 ] ; xx [ 10 ] = xx [ 83 ] * xx [ 194 ] ; xx [ 85 ] = - xx [
223 ] ; xx [ 86 ] = - xx [ 110 ] ; xx [ 87 ] = xx [ 137 ] ; pm_math_quatXform
( xx + 173 , xx + 85 , xx + 114 ) ; xx [ 25 ] = xx [ 17 ] * xx [ 175 ] + xx [
19 ] * xx [ 176 ] ; xx [ 20 ] = xx [ 17 ] * xx [ 174 ] ; xx [ 85 ] = - xx [
25 ] ; xx [ 86 ] = xx [ 20 ] ; xx [ 87 ] = xx [ 19 ] * xx [ 174 ] ;
pm_math_cross3 ( xx + 174 , xx + 85 , xx + 123 ) ; xx [ 27 ] = xx [ 50 ] + xx
[ 170 ] ; xx [ 85 ] = xx [ 27 ] * xx [ 22 ] - xx [ 28 ] ; xx [ 86 ] = xx [ 27
] * xx [ 34 ] - xx [ 36 ] ; xx [ 87 ] = xx [ 27 ] * xx [ 51 ] - xx [ 53 ] ;
pm_math_quatXform ( xx + 145 , xx + 85 , xx + 180 ) ; xx [ 37 ] = xx [ 81 ] +
xx [ 169 ] ; xx [ 85 ] = xx [ 52 ] + xx [ 37 ] * xx [ 57 ] ; xx [ 86 ] = xx [
59 ] - xx [ 37 ] * xx [ 70 ] ; xx [ 87 ] = - ( xx [ 72 ] + xx [ 37 ] * xx [
73 ] ) ; pm_math_quatXform ( xx + 149 , xx + 85 , xx + 183 ) ; xx [ 49 ] = xx
[ 82 ] + xx [ 168 ] ; xx [ 50 ] = xx [ 49 ] - xx [ 58 ] ; xx [ 80 ] = xx [
183 ] + xx [ 50 ] ; xx [ 82 ] = xx [ 184 ] + xx [ 102 ] ; xx [ 85 ] = xx [
105 ] + xx [ 171 ] ; xx [ 87 ] = xx [ 119 ] + xx [ 172 ] ; xx [ 248 ] = - (
xx [ 217 ] * xx [ 218 ] + xx [ 216 ] * xx [ 219 ] ) * xx [ 60 ] ; xx [ 249 ]
= - ( xx [ 218 ] * xx [ 219 ] + xx [ 216 ] * xx [ 217 ] ) * xx [ 60 ] ; xx [
250 ] = - ( xx [ 217 ] * xx [ 219 ] + xx [ 216 ] * xx [ 218 ] ) * xx [ 60 ] ;
xx [ 251 ] = - pm_math_dot3 ( xx + 54 , xx + 141 ) ; xx [ 252 ] = -
pm_math_dot3 ( xx + 54 , xx + 188 ) ; xx [ 253 ] = - ( xx [ 77 ] + xx [ 96 ]
+ ( xx [ 193 ] * xx [ 6 ] + xx [ 196 ] * xx [ 10 ] ) * xx [ 60 ] + xx [ 114 ]
+ state [ 0 ] - ( xx [ 123 ] - xx [ 173 ] * xx [ 25 ] ) * xx [ 60 ] - ( xx [
180 ] + xx [ 80 ] ) - xx [ 90 ] ) ; xx [ 254 ] = - ( xx [ 78 ] + xx [ 97 ] +
xx [ 60 ] * ( xx [ 196 ] * xx [ 6 ] - xx [ 193 ] * xx [ 10 ] ) + xx [ 115 ] +
state [ 1 ] - xx [ 60 ] * ( xx [ 124 ] + xx [ 173 ] * xx [ 20 ] ) - ( xx [
181 ] + xx [ 82 ] ) + xx [ 108 ] ) ; xx [ 255 ] = - ( xx [ 79 ] + xx [ 98 ] +
xx [ 116 ] + state [ 2 ] - ( xx [ 19 ] * xx [ 173 ] * xx [ 174 ] + xx [ 125 ]
) * xx [ 60 ] - ( xx [ 194 ] * xx [ 10 ] + xx [ 195 ] * xx [ 6 ] ) * xx [ 60
] - ( xx [ 182 ] + xx [ 185 ] ) - xx [ 111 ] ) ; xx [ 256 ] = ( xx [ 85 ] -
xx [ 50 ] - xx [ 120 ] ) * xx [ 134 ] + xx [ 136 ] ; xx [ 257 ] = - ( ( xx [
80 ] - xx [ 87 ] + xx [ 153 ] ) * xx [ 211 ] + ( xx [ 82 ] - xx [ 156 ] ) *
xx [ 158 ] ) ; memcpy ( xx + 479 , xx + 339 , 140 * sizeof ( double ) ) ;
factorAndSolveWide ( 10 , 14 , xx + 479 , xx + 216 , xx + 272 , ii + 0 , xx +
248 , xx [ 9 ] , xx + 258 ) ; pm_math_quatDeriv ( xx + 65 , xx + 258 , xx +
77 ) ; xx [ 6 ] = xx [ 4 ] + xx [ 77 ] ; xx [ 4 ] = xx [ 15 ] + xx [ 78 ] ;
xx [ 10 ] = xx [ 3 ] + xx [ 79 ] ; xx [ 3 ] = xx [ 21 ] + xx [ 80 ] ; xx [ 15
] = sqrt ( xx [ 6 ] * xx [ 6 ] + xx [ 4 ] * xx [ 4 ] + xx [ 10 ] * xx [ 10 ]
+ xx [ 3 ] * xx [ 3 ] ) ; if ( xx [ 5 ] > xx [ 15 ] ) xx [ 15 ] = xx [ 5 ] ;
xx [ 5 ] = xx [ 6 ] / xx [ 15 ] ; xx [ 6 ] = xx [ 4 ] / xx [ 15 ] ; xx [ 4 ]
= xx [ 10 ] / xx [ 15 ] ; xx [ 10 ] = xx [ 3 ] / xx [ 15 ] ; xx [ 3 ] = xx [
2 ] + xx [ 262 ] ; xx [ 2 ] = xx [ 121 ] + xx [ 263 ] ; xx [ 15 ] = xx [ 154
] + xx [ 264 ] ; xx [ 20 ] = xx [ 49 ] + xx [ 267 ] ; xx [ 21 ] = xx [ 37 ] +
xx [ 268 ] ; xx [ 25 ] = xx [ 27 ] + xx [ 269 ] ; xx [ 27 ] = xx [ 85 ] + xx
[ 270 ] ; xx [ 37 ] = xx [ 87 ] + xx [ 271 ] ; xx [ 267 ] = state [ 0 ] ; xx
[ 268 ] = state [ 1 ] ; xx [ 269 ] = state [ 2 ] ; xx [ 270 ] = xx [ 5 ] ; xx
[ 271 ] = xx [ 6 ] ; xx [ 272 ] = xx [ 4 ] ; xx [ 273 ] = xx [ 10 ] ; xx [
274 ] = state [ 7 ] ; xx [ 275 ] = state [ 8 ] ; xx [ 276 ] = state [ 9 ] ;
xx [ 277 ] = state [ 10 ] ; xx [ 278 ] = state [ 11 ] ; xx [ 279 ] = state [
12 ] ; xx [ 280 ] = state [ 13 ] + xx [ 233 ] + xx [ 162 ] + xx [ 261 ] ; xx
[ 281 ] = state [ 14 ] ; xx [ 282 ] = xx [ 3 ] ; xx [ 283 ] = state [ 16 ] ;
xx [ 284 ] = xx [ 2 ] ; xx [ 285 ] = state [ 18 ] ; xx [ 286 ] = xx [ 15 ] ;
xx [ 287 ] = state [ 20 ] ; xx [ 288 ] = state [ 21 ] ; xx [ 289 ] = state [
22 ] ; xx [ 290 ] = state [ 23 ] ; xx [ 291 ] = state [ 24 ] ; xx [ 292 ] =
state [ 25 ] ; xx [ 293 ] = state [ 26 ] ; xx [ 294 ] = state [ 27 ] + xx [
237 ] + xx [ 166 ] + xx [ 265 ] ; xx [ 295 ] = state [ 28 ] ; xx [ 296 ] =
state [ 29 ] + xx [ 238 ] + xx [ 167 ] + xx [ 266 ] ; xx [ 297 ] = state [ 30
] ; xx [ 298 ] = xx [ 20 ] ; xx [ 299 ] = state [ 32 ] ; xx [ 300 ] = xx [ 21
] ; xx [ 301 ] = state [ 34 ] ; xx [ 302 ] = xx [ 25 ] ; xx [ 303 ] = state [
36 ] ; xx [ 304 ] = xx [ 27 ] ; xx [ 305 ] = state [ 38 ] ; xx [ 306 ] = xx [
37 ] ; xx [ 307 ] = state [ 40 ] ; xx [ 308 ] = state [ 41 ] ; xx [ 309 ] =
state [ 42 ] ; xx [ 310 ] = state [ 43 ] ; xx [ 311 ] = state [ 44 ] ; xx [
65 ] = xx [ 5 ] ; xx [ 66 ] = xx [ 6 ] ; xx [ 67 ] = xx [ 4 ] ; xx [ 68 ] =
xx [ 10 ] ; pm_math_quatComposeInverse ( xx + 65 , xx + 45 , xx + 77 ) ; xx [
4 ] = xx [ 3 ] * xx [ 7 ] ; xx [ 3 ] = cos ( xx [ 4 ] ) ; xx [ 5 ] = sin ( xx
[ 4 ] ) ; xx [ 6 ] = xx [ 12 ] * xx [ 5 ] ; xx [ 10 ] = xx [ 1 ] * xx [ 3 ] +
xx [ 11 ] * xx [ 6 ] + xx [ 14 ] * xx [ 5 ] ; xx [ 49 ] = xx [ 1 ] * xx [ 5 ]
- xx [ 14 ] * xx [ 3 ] - xx [ 18 ] * xx [ 6 ] ; xx [ 50 ] = xx [ 11 ] * xx [
3 ] - xx [ 1 ] * xx [ 6 ] - xx [ 18 ] * xx [ 5 ] ; xx [ 4 ] = xx [ 18 ] * xx
[ 3 ] - xx [ 14 ] * xx [ 6 ] + xx [ 11 ] * xx [ 5 ] ; xx [ 65 ] = - xx [ 10 ]
; xx [ 66 ] = xx [ 49 ] ; xx [ 67 ] = xx [ 50 ] ; xx [ 68 ] = xx [ 4 ] ;
pm_math_quatCompose ( xx + 77 , xx + 65 , xx + 85 ) ; pm_math_quatCompose (
xx + 85 , xx + 30 , xx + 65 ) ; xx [ 3 ] = xx [ 2 ] * xx [ 7 ] ; xx [ 2 ] =
cos ( xx [ 3 ] ) ; xx [ 5 ] = sin ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 2 ] - xx [
71 ] * xx [ 5 ] ; xx [ 6 ] = xx [ 71 ] * xx [ 2 ] + xx [ 5 ] ; xx [ 30 ] = xx
[ 3 ] * xx [ 88 ] - xx [ 85 ] * xx [ 6 ] ; xx [ 31 ] = - ( xx [ 86 ] * xx [ 6
] + xx [ 3 ] * xx [ 87 ] ) ; xx [ 32 ] = xx [ 3 ] * xx [ 86 ] - xx [ 87 ] *
xx [ 6 ] ; xx [ 33 ] = - ( xx [ 88 ] * xx [ 6 ] + xx [ 3 ] * xx [ 85 ] ) ; xx
[ 2 ] = xx [ 15 ] * xx [ 7 ] ; xx [ 5 ] = sin ( xx [ 2 ] ) ; xx [ 114 ] = cos
( xx [ 2 ] ) ; xx [ 115 ] = - xx [ 95 ] * xx [ 5 ] ; xx [ 116 ] = - xx [ 84 ]
* xx [ 5 ] ; xx [ 117 ] = - xx [ 103 ] * xx [ 5 ] ; pm_math_quatCompose ( xx
+ 91 , xx + 114 , xx + 96 ) ; pm_math_quatCompose ( xx + 30 , xx + 96 , xx +
114 ) ; pm_math_quatCompose ( xx + 114 , xx + 41 , xx + 159 ) ; xx [ 41 ] = (
xx [ 159 ] * xx [ 161 ] + xx [ 160 ] * xx [ 162 ] ) * xx [ 60 ] ; xx [ 42 ] =
xx [ 60 ] * ( xx [ 161 ] * xx [ 162 ] - xx [ 159 ] * xx [ 160 ] ) ; xx [ 43 ]
= xx [ 0 ] - ( xx [ 160 ] * xx [ 160 ] + xx [ 161 ] * xx [ 161 ] ) * xx [ 60
] ; pm_math_quatXform ( xx + 114 , xx + 197 , xx + 54 ) ; pm_math_quatXform (
xx + 96 , xx + 200 , xx + 114 ) ; xx [ 96 ] = - ( xx [ 69 ] + xx [ 114 ] ) ;
xx [ 97 ] = - xx [ 115 ] ; xx [ 98 ] = xx [ 8 ] - xx [ 116 ] ;
pm_math_quatXform ( xx + 30 , xx + 96 , xx + 114 ) ; xx [ 2 ] = xx [ 83 ] *
xx [ 87 ] ; xx [ 5 ] = xx [ 83 ] * xx [ 86 ] ; xx [ 15 ] =
8.500014918886864e-3 ; xx [ 30 ] = xx [ 113 ] * xx [ 50 ] ; xx [ 96 ] = xx [
49 ] ; xx [ 97 ] = xx [ 50 ] ; xx [ 98 ] = xx [ 4 ] ; xx [ 32 ] = xx [ 4 ] *
xx [ 112 ] + xx [ 113 ] * xx [ 49 ] ; xx [ 4 ] = xx [ 112 ] * xx [ 50 ] ; xx
[ 117 ] = - xx [ 30 ] ; xx [ 118 ] = xx [ 32 ] ; xx [ 119 ] = - xx [ 4 ] ;
pm_math_cross3 ( xx + 96 , xx + 117 , xx + 123 ) ; xx [ 31 ] =
0.2947845222348 ; xx [ 96 ] = - ( xx [ 15 ] + ( xx [ 30 ] * xx [ 10 ] + xx [
123 ] ) * xx [ 60 ] ) ; xx [ 97 ] = - ( xx [ 122 ] + ( xx [ 124 ] - xx [ 10 ]
* xx [ 32 ] ) * xx [ 60 ] ) ; xx [ 98 ] = xx [ 31 ] - xx [ 60 ] * ( xx [ 125
] + xx [ 4 ] * xx [ 10 ] ) ; pm_math_quatXform ( xx + 77 , xx + 96 , xx + 117
) ; xx [ 4 ] = xx [ 17 ] * xx [ 79 ] + xx [ 19 ] * xx [ 80 ] ; xx [ 10 ] = xx
[ 17 ] * xx [ 78 ] ; xx [ 96 ] = - xx [ 4 ] ; xx [ 97 ] = xx [ 10 ] ; xx [ 98
] = xx [ 19 ] * xx [ 78 ] ; pm_math_cross3 ( xx + 78 , xx + 96 , xx + 123 ) ;
xx [ 79 ] = xx [ 25 ] * xx [ 22 ] - xx [ 28 ] ; xx [ 80 ] = xx [ 25 ] * xx [
34 ] - xx [ 36 ] ; xx [ 81 ] = xx [ 25 ] * xx [ 51 ] - xx [ 53 ] ;
pm_math_quatXform ( xx + 145 , xx + 79 , xx + 96 ) ; xx [ 79 ] = xx [ 52 ] +
xx [ 21 ] * xx [ 57 ] ; xx [ 80 ] = xx [ 59 ] - xx [ 21 ] * xx [ 70 ] ; xx [
81 ] = - ( xx [ 72 ] + xx [ 21 ] * xx [ 73 ] ) ; pm_math_quatXform ( xx + 149
, xx + 79 , xx + 145 ) ; xx [ 21 ] = xx [ 20 ] - xx [ 58 ] ; xx [ 20 ] = xx [
145 ] + xx [ 21 ] ; xx [ 25 ] = xx [ 146 ] + xx [ 102 ] ; xx [ 160 ] = fabs (
( xx [ 66 ] * xx [ 67 ] + xx [ 65 ] * xx [ 68 ] ) * xx [ 60 ] ) ; xx [ 161 ]
= fabs ( ( xx [ 67 ] * xx [ 68 ] + xx [ 65 ] * xx [ 66 ] ) * xx [ 60 ] ) ; xx
[ 162 ] = fabs ( ( xx [ 66 ] * xx [ 68 ] + xx [ 65 ] * xx [ 67 ] ) * xx [ 60
] ) ; xx [ 163 ] = fabs ( pm_math_dot3 ( xx + 41 , xx + 141 ) ) ; xx [ 164 ]
= fabs ( pm_math_dot3 ( xx + 41 , xx + 188 ) ) ; xx [ 165 ] = fabs ( xx [ 54
] + xx [ 114 ] + ( xx [ 85 ] * xx [ 2 ] + xx [ 88 ] * xx [ 5 ] ) * xx [ 60 ]
+ xx [ 117 ] + state [ 0 ] - ( xx [ 123 ] - xx [ 77 ] * xx [ 4 ] ) * xx [ 60
] - ( xx [ 96 ] + xx [ 20 ] ) - xx [ 90 ] ) ; xx [ 166 ] = fabs ( xx [ 55 ] +
xx [ 115 ] + xx [ 60 ] * ( xx [ 88 ] * xx [ 2 ] - xx [ 85 ] * xx [ 5 ] ) + xx
[ 118 ] + state [ 1 ] - xx [ 60 ] * ( xx [ 124 ] + xx [ 77 ] * xx [ 10 ] ) -
( xx [ 97 ] + xx [ 25 ] ) + xx [ 108 ] ) ; xx [ 167 ] = fabs ( xx [ 56 ] + xx
[ 116 ] + xx [ 119 ] + state [ 2 ] - ( xx [ 19 ] * xx [ 77 ] * xx [ 78 ] + xx
[ 125 ] ) * xx [ 60 ] - ( xx [ 86 ] * xx [ 5 ] + xx [ 87 ] * xx [ 2 ] ) * xx
[ 60 ] - ( xx [ 98 ] + xx [ 147 ] ) - xx [ 111 ] ) ; xx [ 168 ] = fabs ( - (
( xx [ 27 ] - xx [ 21 ] - xx [ 120 ] ) * xx [ 134 ] + xx [ 136 ] ) ) ; xx [
169 ] = fabs ( ( xx [ 20 ] - xx [ 37 ] + xx [ 153 ] ) * xx [ 211 ] + ( xx [
25 ] - xx [ 156 ] ) * xx [ 158 ] ) ; ii [ 0 ] = 160 ; { int ll ; for ( ll =
161 ; ll < 170 ; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; }
ii [ 0 ] -= 160 ; xx [ 2 ] = xx [ 160 + ( ii [ 0 ] ) ] ; xx [ 3 ] = 1.0e-9 ;
xx [ 5 ] = xx [ 2 ] - xx [ 3 ] ; if ( xx [ 5 ] < 0.0 ) ii [ 1 ] = - 1 ; else
if ( xx [ 5 ] > 0.0 ) ii [ 1 ] = + 1 ; else ii [ 1 ] = 0 ; ii [ 2 ] = 0 ; ii
[ 3 ] = ii [ 1 ] ; if ( ii [ 2 ] > ii [ 3 ] ) ii [ 3 ] = ii [ 2 ] ; if ( ii [
3 ] != 0 ) { switch ( ii [ 0 ] ) { case 0 : case 1 : case 2 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/simple_shin_1_RIGID/Cartesian Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 3 : case 4 : case 5 : case 6 : case 7 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'Walk_Sim4/Gait Emulator/knee /Revolute10' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 8 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'Walk_Sim4/Gait Emulator/prismatic frame/Planar Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 9 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'Walk_Sim4/Gait Emulator/prismatic frame/Prismatic4' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } } } xx [ 2 ] = xx [ 7 ] * xx [ 282 ] ; xx [ 4 ] = cos ( xx
[ 2 ] ) ; xx [ 6 ] = sin ( xx [ 2 ] ) ; xx [ 10 ] = xx [ 12 ] * xx [ 6 ] ; xx
[ 20 ] = xx [ 1 ] * xx [ 4 ] + xx [ 11 ] * xx [ 10 ] + xx [ 14 ] * xx [ 6 ] ;
xx [ 25 ] = xx [ 1 ] * xx [ 6 ] - xx [ 14 ] * xx [ 4 ] - xx [ 18 ] * xx [ 10
] ; xx [ 27 ] = xx [ 11 ] * xx [ 4 ] - xx [ 1 ] * xx [ 10 ] - xx [ 18 ] * xx
[ 6 ] ; xx [ 2 ] = xx [ 18 ] * xx [ 4 ] - xx [ 14 ] * xx [ 10 ] + xx [ 11 ] *
xx [ 6 ] ; xx [ 41 ] = - xx [ 20 ] ; xx [ 42 ] = xx [ 25 ] ; xx [ 43 ] = xx [
27 ] ; xx [ 44 ] = xx [ 2 ] ; xx [ 4 ] = xx [ 7 ] * xx [ 289 ] ; xx [ 5 ] =
cos ( xx [ 4 ] ) ; xx [ 6 ] = xx [ 7 ] * xx [ 290 ] ; xx [ 10 ] = cos ( xx [
6 ] ) ; xx [ 21 ] = xx [ 13 ] * xx [ 10 ] ; xx [ 28 ] = sin ( xx [ 6 ] ) ; xx
[ 6 ] = xx [ 26 ] * xx [ 28 ] ; xx [ 30 ] = xx [ 13 ] * xx [ 6 ] ; xx [ 32 ]
= xx [ 29 ] * xx [ 28 ] ; xx [ 36 ] = xx [ 21 ] + xx [ 30 ] + xx [ 32 ] ; xx
[ 33 ] = sin ( xx [ 4 ] ) ; xx [ 4 ] = xx [ 29 ] * xx [ 10 ] ; xx [ 10 ] = xx
[ 13 ] * xx [ 28 ] ; xx [ 13 ] = xx [ 29 ] * xx [ 6 ] ; xx [ 28 ] = xx [ 4 ]
- xx [ 10 ] + xx [ 13 ] ; xx [ 49 ] = xx [ 5 ] * xx [ 36 ] + xx [ 33 ] * xx [
28 ] ; xx [ 6 ] = xx [ 7 ] * xx [ 288 ] ; xx [ 29 ] = cos ( xx [ 6 ] ) ; xx [
37 ] = xx [ 21 ] - xx [ 30 ] - xx [ 32 ] ; xx [ 21 ] = xx [ 4 ] - xx [ 13 ] +
xx [ 10 ] ; xx [ 4 ] = xx [ 5 ] * xx [ 37 ] + xx [ 21 ] * xx [ 33 ] ; xx [ 10
] = sin ( xx [ 6 ] ) ; xx [ 6 ] = xx [ 49 ] * xx [ 29 ] + xx [ 4 ] * xx [ 10
] ; xx [ 13 ] = xx [ 4 ] * xx [ 29 ] - xx [ 49 ] * xx [ 10 ] ; xx [ 4 ] = xx
[ 5 ] * xx [ 28 ] - xx [ 33 ] * xx [ 36 ] ; xx [ 28 ] = xx [ 21 ] * xx [ 5 ]
- xx [ 33 ] * xx [ 37 ] ; xx [ 21 ] = xx [ 29 ] * xx [ 4 ] - xx [ 10 ] * xx [
28 ] ; xx [ 5 ] = xx [ 29 ] * xx [ 28 ] + xx [ 10 ] * xx [ 4 ] ; xx [ 52 ] =
xx [ 6 ] ; xx [ 53 ] = xx [ 13 ] ; xx [ 54 ] = xx [ 21 ] ; xx [ 55 ] = xx [ 5
] ; pm_math_quatCompose ( xx + 41 , xx + 52 , xx + 65 ) ;
pm_math_quatInverseXform ( xx + 65 , xx + 38 , xx + 77 ) ;
pm_math_quatComposeInverse ( xx + 270 , xx + 45 , xx + 85 ) ;
pm_math_quatCompose ( xx + 85 , xx + 65 , xx + 96 ) ; xx [ 4 ] = xx [ 97 ] *
xx [ 78 ] ; xx [ 28 ] = xx [ 98 ] * xx [ 78 ] ; xx [ 30 ] = xx [ 99 ] * xx [
79 ] ; xx [ 114 ] = - ( xx [ 28 ] + xx [ 30 ] ) ; xx [ 115 ] = xx [ 4 ] ; xx
[ 116 ] = xx [ 97 ] * xx [ 79 ] ; pm_math_cross3 ( xx + 97 , xx + 114 , xx +
117 ) ; pm_math_quatInverseXform ( xx + 65 , xx + 62 , xx + 114 ) ; xx [ 32 ]
= xx [ 97 ] * xx [ 115 ] ; xx [ 36 ] = xx [ 98 ] * xx [ 115 ] ; xx [ 37 ] =
xx [ 99 ] * xx [ 116 ] ; xx [ 119 ] = - ( xx [ 36 ] + xx [ 37 ] ) ; xx [ 120
] = xx [ 32 ] ; xx [ 121 ] = xx [ 97 ] * xx [ 116 ] ; pm_math_cross3 ( xx +
97 , xx + 119 , xx + 123 ) ; pm_math_quatInverseXform ( xx + 65 , xx + 74 ,
xx + 119 ) ; xx [ 33 ] = xx [ 97 ] * xx [ 120 ] ; xx [ 49 ] = xx [ 98 ] * xx
[ 120 ] ; xx [ 50 ] = xx [ 99 ] * xx [ 121 ] ; xx [ 135 ] = - ( xx [ 49 ] +
xx [ 50 ] ) ; xx [ 136 ] = xx [ 33 ] ; xx [ 137 ] = xx [ 97 ] * xx [ 121 ] ;
pm_math_cross3 ( xx + 97 , xx + 135 , xx + 144 ) ; xx [ 135 ] = xx [ 13 ] ;
xx [ 136 ] = xx [ 21 ] ; xx [ 137 ] = xx [ 5 ] ; xx [ 56 ] = xx [ 5 ] * xx [
12 ] ; xx [ 58 ] = xx [ 12 ] * xx [ 13 ] + xx [ 21 ] ; xx [ 146 ] = - xx [ 56
] ; xx [ 147 ] = - xx [ 5 ] ; xx [ 148 ] = xx [ 58 ] ; pm_math_cross3 ( xx +
135 , xx + 146 , xx + 153 ) ; xx [ 59 ] = xx [ 60 ] * ( xx [ 155 ] - xx [ 58
] * xx [ 6 ] ) ; pm_math_quatCompose ( xx + 85 , xx + 41 , xx + 159 ) ;
pm_math_quatCompose ( xx + 159 , xx + 52 , xx + 164 ) ; xx [ 52 ] = xx [ 5 ]
* xx [ 6 ] ; xx [ 54 ] = xx [ 12 ] + ( xx [ 52 ] + xx [ 154 ] ) * xx [ 60 ] ;
xx [ 53 ] = xx [ 54 ] * xx [ 165 ] ; xx [ 55 ] = xx [ 54 ] * xx [ 166 ] ; xx
[ 58 ] = xx [ 167 ] * xx [ 59 ] ; xx [ 146 ] = - ( xx [ 55 ] + xx [ 58 ] ) ;
xx [ 147 ] = xx [ 53 ] ; xx [ 148 ] = xx [ 165 ] * xx [ 59 ] ; pm_math_cross3
( xx + 165 , xx + 146 , xx + 169 ) ; xx [ 72 ] = xx [ 98 ] * xx [ 79 ] ; xx [
80 ] = xx [ 97 ] * xx [ 77 ] ; xx [ 146 ] = xx [ 98 ] * xx [ 77 ] ; xx [ 147
] = - ( xx [ 30 ] + xx [ 80 ] ) ; xx [ 148 ] = xx [ 72 ] ; pm_math_cross3 (
xx + 97 , xx + 146 , xx + 171 ) ; xx [ 30 ] = xx [ 98 ] * xx [ 116 ] ; xx [
81 ] = xx [ 97 ] * xx [ 114 ] ; xx [ 146 ] = xx [ 98 ] * xx [ 114 ] ; xx [
147 ] = - ( xx [ 37 ] + xx [ 81 ] ) ; xx [ 148 ] = xx [ 30 ] ; pm_math_cross3
( xx + 97 , xx + 146 , xx + 174 ) ; xx [ 37 ] = xx [ 98 ] * xx [ 121 ] ; xx [
82 ] = xx [ 97 ] * xx [ 119 ] ; xx [ 146 ] = xx [ 98 ] * xx [ 119 ] ; xx [
147 ] = - ( xx [ 50 ] + xx [ 82 ] ) ; xx [ 148 ] = xx [ 37 ] ; pm_math_cross3
( xx + 97 , xx + 146 , xx + 180 ) ; xx [ 50 ] = ( xx [ 6 ] * xx [ 56 ] + xx [
153 ] ) * xx [ 60 ] - xx [ 0 ] ; xx [ 56 ] = xx [ 166 ] * xx [ 59 ] ; xx [ 89
] = xx [ 50 ] * xx [ 165 ] ; xx [ 146 ] = xx [ 50 ] * xx [ 166 ] ; xx [ 147 ]
= - ( xx [ 58 ] + xx [ 89 ] ) ; xx [ 148 ] = xx [ 56 ] ; pm_math_cross3 ( xx
+ 165 , xx + 146 , xx + 153 ) ; xx [ 58 ] = xx [ 99 ] * xx [ 77 ] ; xx [ 146
] = xx [ 58 ] ; xx [ 147 ] = xx [ 99 ] * xx [ 78 ] ; xx [ 148 ] = - ( xx [ 80
] + xx [ 28 ] ) ; pm_math_cross3 ( xx + 97 , xx + 146 , xx + 183 ) ; xx [ 28
] = xx [ 99 ] * xx [ 114 ] ; xx [ 146 ] = xx [ 28 ] ; xx [ 147 ] = xx [ 99 ]
* xx [ 115 ] ; xx [ 148 ] = - ( xx [ 81 ] + xx [ 36 ] ) ; pm_math_cross3 ( xx
+ 97 , xx + 146 , xx + 184 ) ; xx [ 36 ] = xx [ 99 ] * xx [ 119 ] ; xx [ 146
] = xx [ 36 ] ; xx [ 147 ] = xx [ 99 ] * xx [ 120 ] ; xx [ 148 ] = - ( xx [
82 ] + xx [ 49 ] ) ; pm_math_cross3 ( xx + 97 , xx + 146 , xx + 80 ) ; xx [
49 ] = xx [ 50 ] * xx [ 167 ] ; xx [ 146 ] = xx [ 49 ] ; xx [ 147 ] = xx [ 54
] * xx [ 167 ] ; xx [ 148 ] = - ( xx [ 89 ] + xx [ 55 ] ) ; pm_math_cross3 (
xx + 165 , xx + 146 , xx + 185 ) ; xx [ 55 ] = xx [ 7 ] * xx [ 284 ] ; xx [
81 ] = cos ( xx [ 55 ] ) ; xx [ 82 ] = sin ( xx [ 55 ] ) ; xx [ 55 ] = xx [
81 ] - xx [ 71 ] * xx [ 82 ] ; xx [ 89 ] = xx [ 7 ] * xx [ 286 ] ; xx [ 102 ]
= sin ( xx [ 89 ] ) ; xx [ 191 ] = cos ( xx [ 89 ] ) ; xx [ 192 ] = - xx [ 95
] * xx [ 102 ] ; xx [ 193 ] = - xx [ 84 ] * xx [ 102 ] ; xx [ 194 ] = - xx [
103 ] * xx [ 102 ] ; pm_math_quatCompose ( xx + 91 , xx + 191 , xx + 204 ) ;
xx [ 89 ] = xx [ 71 ] * xx [ 81 ] + xx [ 82 ] ; xx [ 81 ] = xx [ 55 ] * xx [
207 ] - xx [ 204 ] * xx [ 89 ] ; xx [ 82 ] = xx [ 55 ] * xx [ 206 ] - xx [
205 ] * xx [ 89 ] ; xx [ 102 ] = xx [ 206 ] * xx [ 89 ] + xx [ 55 ] * xx [
205 ] ; xx [ 90 ] = - xx [ 102 ] ; xx [ 105 ] = xx [ 207 ] * xx [ 89 ] + xx [
55 ] * xx [ 204 ] ; xx [ 106 ] = - xx [ 105 ] ; xx [ 191 ] = xx [ 81 ] ; xx [
192 ] = xx [ 82 ] ; xx [ 193 ] = xx [ 90 ] ; xx [ 194 ] = xx [ 106 ] ;
pm_math_quatCompose ( xx + 41 , xx + 191 , xx + 216 ) ; pm_math_quatCompose (
xx + 85 , xx + 216 , xx + 220 ) ; pm_math_quatInverseXform ( xx + 216 , xx +
38 , xx + 146 ) ; pm_math_cross3 ( xx + 146 , xx + 138 , xx + 167 ) ;
pm_math_quatXform ( xx + 220 , xx + 167 , xx + 224 ) ;
pm_math_quatInverseXform ( xx + 216 , xx + 62 , xx + 167 ) ; pm_math_cross3 (
xx + 167 , xx + 138 , xx + 230 ) ; pm_math_quatXform ( xx + 220 , xx + 230 ,
xx + 233 ) ; pm_math_quatInverseXform ( xx + 216 , xx + 74 , xx + 230 ) ;
pm_math_cross3 ( xx + 230 , xx + 138 , xx + 237 ) ; pm_math_quatXform ( xx +
220 , xx + 237 , xx + 240 ) ; pm_math_quatCompose ( xx + 159 , xx + 191 , xx
+ 248 ) ; xx [ 191 ] = xx [ 82 ] ; xx [ 192 ] = xx [ 90 ] ; xx [ 193 ] = xx [
106 ] ; xx [ 90 ] = xx [ 12 ] * xx [ 105 ] ; xx [ 106 ] = xx [ 82 ] * xx [ 12
] - xx [ 102 ] ; xx [ 194 ] = xx [ 90 ] ; xx [ 195 ] = xx [ 105 ] ; xx [ 196
] = xx [ 106 ] ; pm_math_cross3 ( xx + 191 , xx + 194 , xx + 237 ) ; xx [ 194
] = ( xx [ 237 ] - xx [ 81 ] * xx [ 90 ] ) * xx [ 60 ] - xx [ 0 ] ; xx [ 195
] = xx [ 12 ] + ( xx [ 238 ] - xx [ 81 ] * xx [ 105 ] ) * xx [ 60 ] ; xx [
196 ] = xx [ 60 ] * ( xx [ 239 ] - xx [ 81 ] * xx [ 106 ] ) ; pm_math_cross3
( xx + 194 , xx + 138 , xx + 237 ) ; pm_math_quatXform ( xx + 248 , xx + 237
, xx + 252 ) ; xx [ 256 ] = xx [ 55 ] * xx [ 162 ] - xx [ 159 ] * xx [ 89 ] ;
xx [ 257 ] = - ( xx [ 160 ] * xx [ 89 ] + xx [ 55 ] * xx [ 161 ] ) ; xx [ 258
] = xx [ 55 ] * xx [ 160 ] - xx [ 161 ] * xx [ 89 ] ; xx [ 259 ] = - ( xx [
162 ] * xx [ 89 ] + xx [ 55 ] * xx [ 159 ] ) ; pm_math_quatCompose ( xx + 256
, xx + 204 , xx + 260 ) ; xx [ 237 ] = xx [ 60 ] * ( xx [ 204 ] * xx [ 206 ]
- xx [ 205 ] * xx [ 207 ] ) ; xx [ 238 ] = - ( xx [ 204 ] * xx [ 205 ] + xx [
206 ] * xx [ 207 ] ) * xx [ 60 ] ; xx [ 239 ] = ( xx [ 205 ] * xx [ 205 ] +
xx [ 206 ] * xx [ 206 ] ) * xx [ 60 ] - xx [ 0 ] ; pm_math_cross3 ( xx + 237
, xx + 138 , xx + 264 ) ; pm_math_quatXform ( xx + 260 , xx + 264 , xx + 312
) ; pm_math_quatXform ( xx + 260 , xx + 177 , xx + 264 ) ; pm_math_cross3 (
xx + 146 , xx + 197 , xx + 177 ) ; pm_math_quatXform ( xx + 220 , xx + 177 ,
xx + 146 ) ; pm_math_quatXform ( xx + 204 , xx + 200 , xx + 177 ) ; xx [ 90 ]
= xx [ 55 ] * xx [ 178 ] ; xx [ 106 ] = xx [ 69 ] + xx [ 177 ] ; xx [ 69 ] =
xx [ 55 ] * xx [ 106 ] ; xx [ 108 ] = ( xx [ 90 ] * xx [ 89 ] + xx [ 55 ] *
xx [ 69 ] ) * xx [ 60 ] ; xx [ 110 ] = xx [ 108 ] - xx [ 106 ] ; xx [ 111 ] =
xx [ 60 ] * ( xx [ 55 ] * xx [ 90 ] - xx [ 69 ] * xx [ 89 ] ) - xx [ 178 ] ;
xx [ 69 ] = xx [ 8 ] - xx [ 179 ] + xx [ 83 ] ; xx [ 179 ] = xx [ 110 ] ; xx
[ 180 ] = xx [ 111 ] ; xx [ 181 ] = xx [ 69 ] ; pm_math_quatXform ( xx + 41 ,
xx + 179 , xx + 200 ) ; xx [ 8 ] = xx [ 113 ] * xx [ 27 ] ; xx [ 179 ] = xx [
25 ] ; xx [ 180 ] = xx [ 27 ] ; xx [ 181 ] = xx [ 2 ] ; xx [ 83 ] = xx [ 113
] * xx [ 25 ] ; xx [ 25 ] = xx [ 2 ] * xx [ 112 ] + xx [ 83 ] ; xx [ 90 ] =
xx [ 112 ] * xx [ 27 ] ; xx [ 316 ] = - xx [ 8 ] ; xx [ 317 ] = xx [ 25 ] ;
xx [ 318 ] = - xx [ 90 ] ; pm_math_cross3 ( xx + 179 , xx + 316 , xx + 319 )
; xx [ 112 ] = ( xx [ 8 ] * xx [ 20 ] + xx [ 319 ] ) * xx [ 60 ] ; xx [ 8 ] =
( xx [ 320 ] - xx [ 25 ] * xx [ 20 ] ) * xx [ 60 ] ; xx [ 25 ] = xx [ 60 ] *
( xx [ 321 ] + xx [ 90 ] * xx [ 20 ] ) ; xx [ 316 ] = xx [ 200 ] - ( xx [ 15
] + xx [ 112 ] ) ; xx [ 317 ] = xx [ 201 ] - ( xx [ 122 ] + xx [ 8 ] ) ; xx [
318 ] = xx [ 202 ] + xx [ 31 ] - xx [ 25 ] ; pm_math_cross3 ( xx + 38 , xx +
316 , xx + 319 ) ; pm_math_quatXform ( xx + 85 , xx + 319 , xx + 38 ) ;
pm_math_quatXform ( xx + 85 , xx + 208 , xx + 319 ) ; pm_math_cross3 ( xx +
167 , xx + 197 , xx + 322 ) ; pm_math_quatXform ( xx + 220 , xx + 322 , xx +
167 ) ; pm_math_cross3 ( xx + 62 , xx + 316 , xx + 322 ) ; pm_math_quatXform
( xx + 85 , xx + 322 , xx + 325 ) ; pm_math_quatXform ( xx + 85 , xx + 227 ,
xx + 322 ) ; pm_math_cross3 ( xx + 230 , xx + 197 , xx + 328 ) ;
pm_math_quatXform ( xx + 220 , xx + 328 , xx + 228 ) ; pm_math_cross3 ( xx +
74 , xx + 316 , xx + 328 ) ; pm_math_quatXform ( xx + 85 , xx + 328 , xx + 74
) ; pm_math_quatXform ( xx + 85 , xx + 131 , xx + 328 ) ; pm_math_cross3 ( xx
+ 194 , xx + 197 , xx + 131 ) ; pm_math_quatXform ( xx + 248 , xx + 131 , xx
+ 194 ) ; xx [ 131 ] = xx [ 69 ] * xx [ 12 ] ; xx [ 132 ] = xx [ 69 ] ; xx [
133 ] = - ( xx [ 111 ] + xx [ 12 ] * xx [ 110 ] ) ; pm_math_quatXform ( xx +
41 , xx + 131 , xx + 248 ) ; xx [ 90 ] = xx [ 2 ] * xx [ 113 ] ; xx [ 117 ] =
xx [ 2 ] * xx [ 23 ] ; xx [ 2 ] = xx [ 83 ] - xx [ 23 ] * xx [ 27 ] ; xx [
131 ] = - xx [ 90 ] ; xx [ 132 ] = xx [ 117 ] ; xx [ 133 ] = xx [ 2 ] ;
pm_math_cross3 ( xx + 179 , xx + 131 , xx + 331 ) ; xx [ 27 ] = xx [ 60 ] * (
xx [ 331 ] + xx [ 90 ] * xx [ 20 ] ) ; xx [ 83 ] = ( xx [ 332 ] - xx [ 117 ]
* xx [ 20 ] ) * xx [ 60 ] ; xx [ 90 ] = xx [ 333 ] - xx [ 2 ] * xx [ 20 ] ;
xx [ 2 ] = xx [ 90 ] * xx [ 60 ] ; xx [ 131 ] = xx [ 248 ] + xx [ 27 ] + xx [
23 ] ; xx [ 132 ] = xx [ 249 ] + xx [ 83 ] + xx [ 113 ] ; xx [ 133 ] = xx [
250 ] + xx [ 2 ] ; pm_math_quatXform ( xx + 85 , xx + 131 , xx + 179 ) ;
pm_math_cross3 ( xx + 237 , xx + 197 , xx + 131 ) ; pm_math_quatXform ( xx +
260 , xx + 131 , xx + 237 ) ; xx [ 20 ] = xx [ 106 ] - xx [ 108 ] ; xx [ 108
] = xx [ 162 ] * xx [ 20 ] ; xx [ 117 ] = xx [ 162 ] * xx [ 111 ] ; xx [ 123
] = xx [ 160 ] * xx [ 20 ] - xx [ 161 ] * xx [ 111 ] ; xx [ 131 ] = - xx [
108 ] ; xx [ 132 ] = xx [ 117 ] ; xx [ 133 ] = xx [ 123 ] ; pm_math_cross3 (
xx + 160 , xx + 131 , xx + 248 ) ; pm_math_quatXform ( xx + 260 , xx + 127 ,
xx + 131 ) ; pm_math_quatXform ( xx + 204 , xx + 245 , xx + 127 ) ;
pm_math_quatXform ( xx + 256 , xx + 127 , xx + 161 ) ; xx [ 331 ] = xx [ 79 ]
+ ( xx [ 96 ] * xx [ 4 ] + xx [ 118 ] ) * xx [ 60 ] ; xx [ 332 ] = xx [ 116 ]
+ ( xx [ 96 ] * xx [ 32 ] + xx [ 124 ] ) * xx [ 60 ] ; xx [ 333 ] = xx [ 121
] + ( xx [ 96 ] * xx [ 33 ] + xx [ 145 ] ) * xx [ 60 ] ; xx [ 334 ] = xx [ 35
] ; xx [ 335 ] = xx [ 59 ] + ( xx [ 164 ] * xx [ 53 ] + xx [ 170 ] ) * xx [
60 ] ; xx [ 336 ] = xx [ 35 ] ; xx [ 337 ] = xx [ 35 ] ; xx [ 338 ] = xx [ 35
] ; xx [ 339 ] = xx [ 35 ] ; xx [ 340 ] = xx [ 35 ] ; xx [ 341 ] = xx [ 35 ]
; xx [ 342 ] = xx [ 35 ] ; xx [ 343 ] = xx [ 35 ] ; xx [ 344 ] = xx [ 35 ] ;
xx [ 345 ] = xx [ 77 ] + ( xx [ 96 ] * xx [ 72 ] + xx [ 173 ] ) * xx [ 60 ] ;
xx [ 346 ] = xx [ 114 ] + ( xx [ 96 ] * xx [ 30 ] + xx [ 176 ] ) * xx [ 60 ]
; xx [ 347 ] = xx [ 119 ] + ( xx [ 96 ] * xx [ 37 ] + xx [ 182 ] ) * xx [ 60
] ; xx [ 348 ] = xx [ 35 ] ; xx [ 349 ] = xx [ 50 ] + ( xx [ 164 ] * xx [ 56
] + xx [ 155 ] ) * xx [ 60 ] ; xx [ 350 ] = xx [ 35 ] ; xx [ 351 ] = xx [ 35
] ; xx [ 352 ] = xx [ 35 ] ; xx [ 353 ] = xx [ 35 ] ; xx [ 354 ] = xx [ 35 ]
; xx [ 355 ] = xx [ 35 ] ; xx [ 356 ] = xx [ 35 ] ; xx [ 357 ] = xx [ 35 ] ;
xx [ 358 ] = xx [ 35 ] ; xx [ 359 ] = xx [ 78 ] + ( xx [ 96 ] * xx [ 58 ] +
xx [ 183 ] ) * xx [ 60 ] ; xx [ 360 ] = xx [ 115 ] + ( xx [ 96 ] * xx [ 28 ]
+ xx [ 184 ] ) * xx [ 60 ] ; xx [ 361 ] = xx [ 120 ] + ( xx [ 96 ] * xx [ 36
] + xx [ 80 ] ) * xx [ 60 ] ; xx [ 362 ] = xx [ 35 ] ; xx [ 363 ] = xx [ 54 ]
+ ( xx [ 164 ] * xx [ 49 ] + xx [ 185 ] ) * xx [ 60 ] ; xx [ 364 ] = xx [ 35
] ; xx [ 365 ] = xx [ 35 ] ; xx [ 366 ] = xx [ 35 ] ; xx [ 367 ] = xx [ 35 ]
; xx [ 368 ] = xx [ 35 ] ; xx [ 369 ] = xx [ 35 ] ; xx [ 370 ] = xx [ 35 ] ;
xx [ 371 ] = xx [ 35 ] ; xx [ 372 ] = xx [ 35 ] ; xx [ 373 ] = pm_math_dot3 (
xx + 224 , xx + 141 ) ; xx [ 374 ] = pm_math_dot3 ( xx + 233 , xx + 141 ) ;
xx [ 375 ] = pm_math_dot3 ( xx + 240 , xx + 141 ) ; xx [ 376 ] = xx [ 35 ] ;
xx [ 377 ] = pm_math_dot3 ( xx + 252 , xx + 141 ) ; xx [ 378 ] = pm_math_dot3
( xx + 312 , xx + 141 ) ; xx [ 379 ] = pm_math_dot3 ( xx + 264 , xx + 141 ) ;
xx [ 380 ] = xx [ 35 ] ; xx [ 381 ] = xx [ 35 ] ; xx [ 382 ] = xx [ 35 ] ; xx
[ 383 ] = xx [ 35 ] ; xx [ 384 ] = xx [ 35 ] ; xx [ 385 ] = xx [ 35 ] ; xx [
386 ] = xx [ 35 ] ; xx [ 387 ] = pm_math_dot3 ( xx + 224 , xx + 188 ) ; xx [
388 ] = pm_math_dot3 ( xx + 233 , xx + 188 ) ; xx [ 389 ] = pm_math_dot3 ( xx
+ 240 , xx + 188 ) ; xx [ 390 ] = xx [ 35 ] ; xx [ 391 ] = pm_math_dot3 ( xx
+ 252 , xx + 188 ) ; xx [ 392 ] = pm_math_dot3 ( xx + 312 , xx + 188 ) ; xx [
393 ] = pm_math_dot3 ( xx + 264 , xx + 188 ) ; xx [ 394 ] = xx [ 35 ] ; xx [
395 ] = xx [ 35 ] ; xx [ 396 ] = xx [ 35 ] ; xx [ 397 ] = xx [ 35 ] ; xx [
398 ] = xx [ 35 ] ; xx [ 399 ] = xx [ 35 ] ; xx [ 400 ] = xx [ 35 ] ; xx [
401 ] = xx [ 146 ] + xx [ 38 ] + xx [ 319 ] ; xx [ 402 ] = xx [ 167 ] + xx [
325 ] + xx [ 322 ] ; xx [ 403 ] = xx [ 228 ] + xx [ 74 ] + xx [ 328 ] ; xx [
404 ] = xx [ 35 ] ; xx [ 405 ] = xx [ 194 ] + xx [ 179 ] ; xx [ 406 ] = xx [
237 ] + xx [ 111 ] + xx [ 60 ] * ( xx [ 248 ] - xx [ 159 ] * xx [ 108 ] ) ;
xx [ 407 ] = xx [ 131 ] + xx [ 161 ] ; xx [ 408 ] = xx [ 35 ] ; xx [ 409 ] =
xx [ 35 ] ; xx [ 410 ] = xx [ 16 ] ; xx [ 411 ] = xx [ 24 ] ; xx [ 412 ] = xx
[ 100 ] ; xx [ 413 ] = xx [ 35 ] ; xx [ 414 ] = xx [ 35 ] ; xx [ 415 ] = xx [
147 ] + xx [ 39 ] + xx [ 320 ] ; xx [ 416 ] = xx [ 168 ] + xx [ 326 ] + xx [
323 ] ; xx [ 417 ] = xx [ 229 ] + xx [ 75 ] + xx [ 329 ] ; xx [ 418 ] = xx [
35 ] ; xx [ 419 ] = xx [ 195 ] + xx [ 180 ] ; xx [ 420 ] = xx [ 238 ] + xx [
20 ] + ( xx [ 159 ] * xx [ 117 ] + xx [ 249 ] ) * xx [ 60 ] ; xx [ 421 ] = xx
[ 132 ] + xx [ 162 ] ; xx [ 422 ] = xx [ 35 ] ; xx [ 423 ] = xx [ 35 ] ; xx [
424 ] = xx [ 35 ] ; xx [ 425 ] = xx [ 101 ] ; xx [ 426 ] = xx [ 104 ] ; xx [
427 ] = xx [ 35 ] ; xx [ 428 ] = xx [ 35 ] ; xx [ 429 ] = xx [ 148 ] + xx [
40 ] + xx [ 321 ] ; xx [ 430 ] = xx [ 169 ] + xx [ 327 ] + xx [ 324 ] ; xx [
431 ] = xx [ 230 ] + xx [ 76 ] + xx [ 330 ] ; xx [ 432 ] = xx [ 35 ] ; xx [
433 ] = xx [ 196 ] + xx [ 181 ] ; xx [ 434 ] = xx [ 239 ] + ( xx [ 159 ] * xx
[ 123 ] + xx [ 250 ] ) * xx [ 60 ] ; xx [ 435 ] = xx [ 133 ] + xx [ 163 ] ;
xx [ 436 ] = xx [ 35 ] ; xx [ 437 ] = xx [ 35 ] ; xx [ 438 ] = xx [ 35 ] ; xx
[ 439 ] = xx [ 126 ] ; xx [ 440 ] = xx [ 130 ] ; xx [ 441 ] = xx [ 35 ] ; xx
[ 442 ] = xx [ 35 ] ; xx [ 443 ] = xx [ 35 ] ; xx [ 444 ] = xx [ 35 ] ; xx [
445 ] = xx [ 35 ] ; xx [ 446 ] = xx [ 35 ] ; xx [ 447 ] = xx [ 35 ] ; xx [
448 ] = xx [ 35 ] ; xx [ 449 ] = xx [ 35 ] ; xx [ 450 ] = xx [ 35 ] ; xx [
451 ] = xx [ 35 ] ; xx [ 452 ] = xx [ 134 ] ; xx [ 453 ] = xx [ 35 ] ; xx [
454 ] = xx [ 35 ] ; xx [ 455 ] = xx [ 203 ] ; xx [ 456 ] = xx [ 35 ] ; xx [
457 ] = xx [ 35 ] ; xx [ 458 ] = xx [ 35 ] ; xx [ 459 ] = xx [ 35 ] ; xx [
460 ] = xx [ 35 ] ; xx [ 461 ] = xx [ 35 ] ; xx [ 462 ] = xx [ 35 ] ; xx [
463 ] = xx [ 35 ] ; xx [ 464 ] = xx [ 35 ] ; xx [ 465 ] = xx [ 35 ] ; xx [
466 ] = xx [ 211 ] ; xx [ 467 ] = xx [ 213 ] ; xx [ 468 ] = xx [ 35 ] ; xx [
469 ] = xx [ 35 ] ; xx [ 470 ] = xx [ 215 ] ; pm_math_quatXform ( xx + 45 ,
xx + 277 , xx + 36 ) ; pm_math_quatInverseXform ( xx + 65 , xx + 36 , xx + 61
) ; xx [ 4 ] = xx [ 12 ] * xx [ 283 ] ; xx [ 16 ] = xx [ 5 ] * xx [ 4 ] ; xx
[ 20 ] = xx [ 5 ] * xx [ 283 ] ; xx [ 24 ] = xx [ 4 ] * xx [ 13 ] + xx [ 283
] * xx [ 21 ] ; xx [ 74 ] = - xx [ 16 ] ; xx [ 75 ] = - xx [ 20 ] ; xx [ 76 ]
= xx [ 24 ] ; pm_math_cross3 ( xx + 135 , xx + 74 , xx + 77 ) ; xx [ 28 ] =
xx [ 13 ] - xx [ 26 ] * xx [ 21 ] ; xx [ 30 ] = xx [ 5 ] * xx [ 26 ] ; xx [
74 ] = xx [ 5 ] ; xx [ 75 ] = - xx [ 30 ] ; xx [ 76 ] = - xx [ 28 ] ;
pm_math_cross3 ( xx + 135 , xx + 74 , xx + 114 ) ; xx [ 32 ] = xx [ 60 ] * (
xx [ 28 ] * xx [ 6 ] + xx [ 116 ] ) * xx [ 293 ] - xx [ 60 ] * xx [ 292 ] *
xx [ 29 ] * xx [ 10 ] ; xx [ 28 ] = xx [ 63 ] + xx [ 60 ] * ( xx [ 79 ] - xx
[ 24 ] * xx [ 6 ] ) + xx [ 32 ] ; xx [ 24 ] = ( xx [ 60 ] * ( xx [ 115 ] + xx
[ 6 ] * xx [ 30 ] ) - xx [ 0 ] ) * xx [ 293 ] + ( xx [ 60 ] * xx [ 10 ] * xx
[ 10 ] - xx [ 0 ] ) * xx [ 292 ] ; xx [ 0 ] = xx [ 62 ] + xx [ 4 ] + ( xx [ 6
] * xx [ 20 ] + xx [ 78 ] ) * xx [ 60 ] + xx [ 24 ] ; xx [ 10 ] = xx [ 0 ] *
xx [ 97 ] ; xx [ 20 ] = xx [ 0 ] * xx [ 98 ] ; xx [ 29 ] = xx [ 28 ] * xx [
99 ] ; xx [ 74 ] = - ( xx [ 20 ] + xx [ 29 ] ) ; xx [ 75 ] = xx [ 10 ] ; xx [
76 ] = xx [ 28 ] * xx [ 97 ] ; pm_math_cross3 ( xx + 97 , xx + 74 , xx + 117
) ; xx [ 30 ] = ( xx [ 60 ] * ( xx [ 114 ] - xx [ 52 ] ) - xx [ 26 ] ) * xx [
293 ] - xx [ 291 ] ; xx [ 26 ] = xx [ 61 ] + ( xx [ 6 ] * xx [ 16 ] + xx [ 77
] ) * xx [ 60 ] - xx [ 283 ] + xx [ 30 ] ; xx [ 16 ] = xx [ 28 ] * xx [ 98 ]
; xx [ 33 ] = xx [ 26 ] * xx [ 97 ] ; xx [ 52 ] = xx [ 26 ] * xx [ 98 ] ; xx
[ 53 ] = - ( xx [ 29 ] + xx [ 33 ] ) ; xx [ 54 ] = xx [ 16 ] ; pm_math_cross3
( xx + 97 , xx + 52 , xx + 62 ) ; xx [ 29 ] = xx [ 26 ] * xx [ 99 ] ; xx [ 52
] = xx [ 29 ] ; xx [ 53 ] = xx [ 0 ] * xx [ 99 ] ; xx [ 54 ] = - ( xx [ 33 ]
+ xx [ 20 ] ) ; pm_math_cross3 ( xx + 97 , xx + 52 , xx + 74 ) ;
pm_math_quatInverseXform ( xx + 216 , xx + 36 , xx + 52 ) ; xx [ 20 ] = xx [
4 ] * xx [ 105 ] ; xx [ 33 ] = xx [ 283 ] * xx [ 105 ] ; xx [ 40 ] = xx [ 82
] * xx [ 4 ] - xx [ 283 ] * xx [ 102 ] ; xx [ 75 ] = xx [ 20 ] ; xx [ 76 ] =
xx [ 33 ] ; xx [ 77 ] = xx [ 40 ] ; pm_math_cross3 ( xx + 191 , xx + 75 , xx
+ 78 ) ; xx [ 49 ] = xx [ 206 ] * xx [ 285 ] ; xx [ 56 ] = xx [ 205 ] * xx [
285 ] ; xx [ 75 ] = xx [ 52 ] + ( xx [ 78 ] - xx [ 81 ] * xx [ 20 ] ) * xx [
60 ] - xx [ 283 ] + xx [ 60 ] * ( xx [ 204 ] * xx [ 49 ] - xx [ 207 ] * xx [
56 ] ) - xx [ 95 ] * xx [ 287 ] ; xx [ 76 ] = xx [ 53 ] + xx [ 4 ] + ( xx [
79 ] - xx [ 81 ] * xx [ 33 ] ) * xx [ 60 ] - ( xx [ 84 ] * xx [ 287 ] + ( xx
[ 204 ] * xx [ 56 ] + xx [ 207 ] * xx [ 49 ] ) * xx [ 60 ] ) ; xx [ 77 ] = xx
[ 54 ] + xx [ 60 ] * ( xx [ 80 ] - xx [ 40 ] * xx [ 81 ] ) + ( xx [ 205 ] *
xx [ 56 ] + xx [ 206 ] * xx [ 49 ] ) * xx [ 60 ] - xx [ 285 ] - xx [ 103 ] *
xx [ 287 ] ; pm_math_cross3 ( xx + 75 , xx + 138 , xx + 52 ) ;
pm_math_quatXform ( xx + 220 , xx + 52 , xx + 78 ) ; xx [ 20 ] = xx [ 57 ] *
xx [ 301 ] ; xx [ 114 ] = - 0.8578129138137675 ; xx [ 115 ] =
0.4993355030609324 ; xx [ 116 ] = 0.04095633244143952 ; xx [ 117 ] = -
0.1146457112593715 ; xx [ 119 ] = xx [ 22 ] * xx [ 303 ] ; xx [ 120 ] = xx [
34 ] * xx [ 303 ] ; xx [ 121 ] = xx [ 51 ] * xx [ 303 ] ; pm_math_quatXform (
xx + 114 , xx + 119 , xx + 52 ) ; xx [ 33 ] = xx [ 70 ] * xx [ 301 ] ; xx [
40 ] = xx [ 73 ] * xx [ 301 ] ; xx [ 119 ] = xx [ 20 ] + xx [ 52 ] ; xx [ 120
] = xx [ 53 ] - xx [ 33 ] ; xx [ 121 ] = xx [ 54 ] - xx [ 40 ] ;
pm_math_quatXform ( xx + 149 , xx + 119 , xx + 52 ) ; pm_math_cross3 ( xx +
75 , xx + 197 , xx + 119 ) ; pm_math_quatXform ( xx + 220 , xx + 119 , xx +
75 ) ; xx [ 119 ] = xx [ 17 ] * xx [ 37 ] + xx [ 19 ] * xx [ 38 ] ; xx [ 120
] = - xx [ 17 ] * xx [ 36 ] ; xx [ 121 ] = - xx [ 19 ] * xx [ 36 ] ;
pm_math_quatXform ( xx + 85 , xx + 119 , xx + 123 ) ; xx [ 39 ] = xx [ 23 ] +
xx [ 27 ] ; xx [ 23 ] = xx [ 127 ] * xx [ 287 ] - xx [ 178 ] * xx [ 285 ] ;
xx [ 27 ] = xx [ 128 ] * xx [ 287 ] + xx [ 285 ] * xx [ 106 ] ; xx [ 49 ] =
xx [ 55 ] * xx [ 27 ] ; xx [ 56 ] = xx [ 55 ] * xx [ 23 ] ; xx [ 119 ] = xx [
23 ] - xx [ 60 ] * ( xx [ 49 ] * xx [ 89 ] + xx [ 55 ] * xx [ 56 ] ) + xx [
69 ] * xx [ 4 ] ; xx [ 120 ] = xx [ 27 ] - ( xx [ 55 ] * xx [ 49 ] - xx [ 56
] * xx [ 89 ] ) * xx [ 60 ] + xx [ 69 ] * xx [ 283 ] ; xx [ 121 ] = xx [ 129
] * xx [ 287 ] - ( xx [ 283 ] * xx [ 111 ] + xx [ 4 ] * xx [ 110 ] ) ;
pm_math_quatXform ( xx + 41 , xx + 119 , xx + 130 ) ; pm_math_cross3 ( xx +
36 , xx + 316 , xx + 119 ) ; xx [ 4 ] = xx [ 113 ] + xx [ 83 ] ; xx [ 36 ] =
xx [ 39 ] * xx [ 283 ] + xx [ 130 ] + xx [ 119 ] ; xx [ 37 ] = xx [ 4 ] * xx
[ 283 ] + xx [ 131 ] + xx [ 120 ] ; xx [ 38 ] = xx [ 60 ] * xx [ 90 ] * xx [
283 ] + xx [ 132 ] + xx [ 121 ] ; pm_math_quatXform ( xx + 85 , xx + 36 , xx
+ 119 ) ; xx [ 36 ] = xx [ 20 ] ; xx [ 37 ] = - xx [ 33 ] ; xx [ 38 ] = - xx
[ 40 ] ; pm_math_quatXform ( xx + 149 , xx + 36 , xx + 130 ) ; xx [ 160 ] = -
( xx [ 28 ] + ( xx [ 96 ] * xx [ 10 ] + xx [ 118 ] ) * xx [ 60 ] ) ; xx [ 161
] = - ( xx [ 26 ] + ( xx [ 96 ] * xx [ 16 ] + xx [ 64 ] ) * xx [ 60 ] ) ; xx
[ 162 ] = - ( xx [ 0 ] + ( xx [ 96 ] * xx [ 29 ] + xx [ 74 ] ) * xx [ 60 ] )
; xx [ 163 ] = - pm_math_dot3 ( xx + 78 , xx + 141 ) ; xx [ 164 ] = -
pm_math_dot3 ( xx + 78 , xx + 188 ) ; xx [ 165 ] = xx [ 299 ] + xx [ 52 ] - (
xx [ 75 ] + xx [ 123 ] + xx [ 274 ] + xx [ 119 ] ) ; xx [ 166 ] = xx [ 53 ] -
( xx [ 76 ] + xx [ 124 ] + xx [ 275 ] + xx [ 120 ] ) ; xx [ 167 ] = xx [ 54 ]
- ( xx [ 77 ] + xx [ 125 ] + xx [ 276 ] + xx [ 121 ] ) ; xx [ 168 ] = xx [
134 ] * ( xx [ 305 ] - xx [ 299 ] ) ; xx [ 169 ] = - ( xx [ 211 ] * ( xx [
299 ] + xx [ 130 ] - xx [ 307 ] ) + xx [ 158 ] * xx [ 131 ] ) ; memcpy ( xx +
471 , xx + 331 , 140 * sizeof ( double ) ) ; factorAndSolveWide ( 10 , 14 ,
xx + 471 , xx + 238 , xx + 248 , ii + 3 , xx + 160 , xx [ 9 ] , xx + 224 ) ;
xx [ 0 ] = xx [ 277 ] + xx [ 224 ] ; xx [ 9 ] = xx [ 278 ] + xx [ 225 ] ; xx
[ 10 ] = xx [ 279 ] + xx [ 226 ] ; xx [ 16 ] = xx [ 283 ] + xx [ 228 ] ; xx [
20 ] = xx [ 285 ] + xx [ 229 ] ; xx [ 23 ] = xx [ 287 ] + xx [ 230 ] ; xx [
26 ] = xx [ 299 ] + xx [ 233 ] ; xx [ 27 ] = xx [ 301 ] + xx [ 234 ] ; xx [
28 ] = xx [ 303 ] + xx [ 235 ] ; xx [ 29 ] = xx [ 305 ] + xx [ 236 ] ; xx [
33 ] = xx [ 307 ] + xx [ 237 ] ; xx [ 312 ] = xx [ 267 ] ; xx [ 313 ] = xx [
268 ] ; xx [ 314 ] = xx [ 269 ] ; xx [ 315 ] = xx [ 270 ] ; xx [ 316 ] = xx [
271 ] ; xx [ 317 ] = xx [ 272 ] ; xx [ 318 ] = xx [ 273 ] ; xx [ 319 ] = xx [
274 ] ; xx [ 320 ] = xx [ 275 ] ; xx [ 321 ] = xx [ 276 ] ; xx [ 322 ] = xx [
0 ] ; xx [ 323 ] = xx [ 9 ] ; xx [ 324 ] = xx [ 10 ] ; xx [ 325 ] = xx [ 280
] ; xx [ 326 ] = xx [ 281 ] + xx [ 227 ] ; xx [ 327 ] = xx [ 282 ] ; xx [ 328
] = xx [ 16 ] ; xx [ 329 ] = xx [ 284 ] ; xx [ 330 ] = xx [ 20 ] ; xx [ 331 ]
= xx [ 286 ] ; xx [ 332 ] = xx [ 23 ] ; xx [ 333 ] = xx [ 288 ] ; xx [ 334 ]
= xx [ 289 ] ; xx [ 335 ] = xx [ 290 ] ; xx [ 336 ] = xx [ 291 ] ; xx [ 337 ]
= xx [ 292 ] ; xx [ 338 ] = xx [ 293 ] ; xx [ 339 ] = xx [ 294 ] ; xx [ 340 ]
= xx [ 295 ] + xx [ 231 ] ; xx [ 341 ] = xx [ 296 ] ; xx [ 342 ] = xx [ 297 ]
+ xx [ 232 ] ; xx [ 343 ] = xx [ 298 ] ; xx [ 344 ] = xx [ 26 ] ; xx [ 345 ]
= xx [ 300 ] ; xx [ 346 ] = xx [ 27 ] ; xx [ 347 ] = xx [ 302 ] ; xx [ 348 ]
= xx [ 28 ] ; xx [ 349 ] = xx [ 304 ] ; xx [ 350 ] = xx [ 29 ] ; xx [ 351 ] =
xx [ 306 ] ; xx [ 352 ] = xx [ 33 ] ; xx [ 353 ] = xx [ 308 ] ; xx [ 354 ] =
xx [ 309 ] ; xx [ 355 ] = xx [ 310 ] ; xx [ 356 ] = xx [ 311 ] ; xx [ 36 ] =
xx [ 0 ] ; xx [ 37 ] = xx [ 9 ] ; xx [ 38 ] = xx [ 10 ] ; pm_math_quatXform (
xx + 45 , xx + 36 , xx + 52 ) ; pm_math_quatInverseXform ( xx + 65 , xx + 52
, xx + 36 ) ; xx [ 0 ] = xx [ 16 ] * xx [ 12 ] ; xx [ 9 ] = xx [ 5 ] * xx [ 0
] ; xx [ 40 ] = xx [ 16 ] * xx [ 5 ] ; xx [ 5 ] = xx [ 0 ] * xx [ 13 ] + xx [
16 ] * xx [ 21 ] ; xx [ 61 ] = - xx [ 9 ] ; xx [ 62 ] = - xx [ 40 ] ; xx [ 63
] = xx [ 5 ] ; pm_math_cross3 ( xx + 135 , xx + 61 , xx + 64 ) ; xx [ 10 ] =
xx [ 38 ] + xx [ 60 ] * ( xx [ 66 ] - xx [ 5 ] * xx [ 6 ] ) + xx [ 32 ] ; xx
[ 5 ] = xx [ 37 ] + xx [ 0 ] + ( xx [ 6 ] * xx [ 40 ] + xx [ 65 ] ) * xx [ 60
] + xx [ 24 ] ; xx [ 13 ] = xx [ 5 ] * xx [ 97 ] ; xx [ 21 ] = xx [ 5 ] * xx
[ 98 ] ; xx [ 24 ] = xx [ 10 ] * xx [ 99 ] ; xx [ 61 ] = - ( xx [ 21 ] + xx [
24 ] ) ; xx [ 62 ] = xx [ 13 ] ; xx [ 63 ] = xx [ 10 ] * xx [ 97 ] ;
pm_math_cross3 ( xx + 97 , xx + 61 , xx + 74 ) ; xx [ 32 ] = xx [ 36 ] + ( xx
[ 6 ] * xx [ 9 ] + xx [ 64 ] ) * xx [ 60 ] - xx [ 16 ] + xx [ 30 ] ; xx [ 6 ]
= xx [ 10 ] * xx [ 98 ] ; xx [ 9 ] = xx [ 32 ] * xx [ 97 ] ; xx [ 36 ] = xx [
32 ] * xx [ 98 ] ; xx [ 37 ] = - ( xx [ 24 ] + xx [ 9 ] ) ; xx [ 38 ] = xx [
6 ] ; pm_math_cross3 ( xx + 97 , xx + 36 , xx + 62 ) ; xx [ 24 ] = xx [ 32 ]
* xx [ 99 ] ; xx [ 36 ] = xx [ 24 ] ; xx [ 37 ] = xx [ 5 ] * xx [ 99 ] ; xx [
38 ] = - ( xx [ 9 ] + xx [ 21 ] ) ; pm_math_cross3 ( xx + 97 , xx + 36 , xx +
65 ) ; pm_math_quatInverseXform ( xx + 216 , xx + 52 , xx + 36 ) ; xx [ 9 ] =
xx [ 0 ] * xx [ 105 ] ; xx [ 21 ] = xx [ 16 ] * xx [ 105 ] ; xx [ 30 ] = xx [
82 ] * xx [ 0 ] - xx [ 16 ] * xx [ 102 ] ; xx [ 66 ] = xx [ 9 ] ; xx [ 67 ] =
xx [ 21 ] ; xx [ 68 ] = xx [ 30 ] ; pm_math_cross3 ( xx + 191 , xx + 66 , xx
+ 76 ) ; xx [ 40 ] = xx [ 20 ] * xx [ 206 ] ; xx [ 49 ] = xx [ 20 ] * xx [
205 ] ; xx [ 66 ] = xx [ 36 ] + ( xx [ 76 ] - xx [ 81 ] * xx [ 9 ] ) * xx [
60 ] - xx [ 16 ] + xx [ 60 ] * ( xx [ 204 ] * xx [ 40 ] - xx [ 207 ] * xx [
49 ] ) - xx [ 23 ] * xx [ 95 ] ; xx [ 67 ] = xx [ 37 ] + xx [ 0 ] + ( xx [ 77
] - xx [ 81 ] * xx [ 21 ] ) * xx [ 60 ] - ( xx [ 23 ] * xx [ 84 ] + ( xx [
204 ] * xx [ 49 ] + xx [ 207 ] * xx [ 40 ] ) * xx [ 60 ] ) ; xx [ 68 ] = xx [
38 ] + xx [ 60 ] * ( xx [ 78 ] - xx [ 81 ] * xx [ 30 ] ) + ( xx [ 205 ] * xx
[ 49 ] + xx [ 206 ] * xx [ 40 ] ) * xx [ 60 ] - xx [ 20 ] - xx [ 23 ] * xx [
103 ] ; pm_math_cross3 ( xx + 66 , xx + 138 , xx + 36 ) ; pm_math_quatXform (
xx + 220 , xx + 36 , xx + 76 ) ; pm_math_cross3 ( xx + 66 , xx + 197 , xx +
36 ) ; pm_math_quatXform ( xx + 220 , xx + 36 , xx + 66 ) ; xx [ 36 ] = xx [
17 ] * xx [ 53 ] + xx [ 19 ] * xx [ 54 ] ; xx [ 37 ] = - xx [ 17 ] * xx [ 52
] ; xx [ 38 ] = - xx [ 19 ] * xx [ 52 ] ; pm_math_quatXform ( xx + 85 , xx +
36 , xx + 80 ) ; xx [ 9 ] = xx [ 23 ] * xx [ 127 ] - xx [ 20 ] * xx [ 178 ] ;
xx [ 19 ] = xx [ 23 ] * xx [ 128 ] + xx [ 20 ] * xx [ 106 ] ; xx [ 20 ] = xx
[ 55 ] * xx [ 19 ] ; xx [ 30 ] = xx [ 55 ] * xx [ 9 ] ; xx [ 36 ] = xx [ 9 ]
- xx [ 60 ] * ( xx [ 20 ] * xx [ 89 ] + xx [ 55 ] * xx [ 30 ] ) + xx [ 69 ] *
xx [ 0 ] ; xx [ 37 ] = xx [ 19 ] - ( xx [ 55 ] * xx [ 20 ] - xx [ 30 ] * xx [
89 ] ) * xx [ 60 ] + xx [ 16 ] * xx [ 69 ] ; xx [ 38 ] = xx [ 23 ] * xx [ 129
] - ( xx [ 16 ] * xx [ 111 ] + xx [ 0 ] * xx [ 110 ] ) ; pm_math_quatXform (
xx + 41 , xx + 36 , xx + 19 ) ; xx [ 36 ] = xx [ 200 ] - xx [ 112 ] - xx [ 15
] ; xx [ 37 ] = xx [ 201 ] - xx [ 8 ] - xx [ 122 ] ; xx [ 38 ] = xx [ 202 ] -
xx [ 25 ] + xx [ 31 ] ; pm_math_cross3 ( xx + 52 , xx + 36 , xx + 40 ) ; xx [
36 ] = xx [ 39 ] * xx [ 16 ] + xx [ 19 ] + xx [ 40 ] ; xx [ 37 ] = xx [ 16 ]
* xx [ 4 ] + xx [ 20 ] + xx [ 41 ] ; xx [ 38 ] = xx [ 16 ] * xx [ 2 ] + xx [
21 ] + xx [ 42 ] ; pm_math_quatXform ( xx + 85 , xx + 36 , xx + 15 ) ; xx [ 0
] = xx [ 27 ] * xx [ 57 ] ; xx [ 19 ] = xx [ 28 ] * xx [ 22 ] ; xx [ 20 ] =
xx [ 28 ] * xx [ 34 ] ; xx [ 21 ] = xx [ 28 ] * xx [ 51 ] ; pm_math_quatXform
( xx + 114 , xx + 19 , xx + 36 ) ; xx [ 2 ] = xx [ 27 ] * xx [ 70 ] ; xx [ 4
] = xx [ 27 ] * xx [ 73 ] ; xx [ 19 ] = xx [ 0 ] + xx [ 36 ] ; xx [ 20 ] = xx
[ 37 ] - xx [ 2 ] ; xx [ 21 ] = xx [ 38 ] - xx [ 4 ] ; pm_math_quatXform ( xx
+ 149 , xx + 19 , xx + 36 ) ; xx [ 19 ] = xx [ 0 ] ; xx [ 20 ] = - xx [ 2 ] ;
xx [ 21 ] = - xx [ 4 ] ; pm_math_quatXform ( xx + 149 , xx + 19 , xx + 39 ) ;
xx [ 49 ] = fabs ( xx [ 10 ] + ( xx [ 96 ] * xx [ 13 ] + xx [ 75 ] ) * xx [
60 ] ) ; xx [ 50 ] = fabs ( xx [ 32 ] + ( xx [ 96 ] * xx [ 6 ] + xx [ 64 ] )
* xx [ 60 ] ) ; xx [ 51 ] = fabs ( xx [ 5 ] + ( xx [ 96 ] * xx [ 24 ] + xx [
65 ] ) * xx [ 60 ] ) ; xx [ 52 ] = fabs ( pm_math_dot3 ( xx + 76 , xx + 141 )
) ; xx [ 53 ] = fabs ( pm_math_dot3 ( xx + 76 , xx + 188 ) ) ; xx [ 54 ] =
fabs ( xx [ 66 ] + xx [ 80 ] + xx [ 274 ] + xx [ 15 ] - ( xx [ 26 ] + xx [ 36
] ) ) ; xx [ 55 ] = fabs ( xx [ 67 ] + xx [ 81 ] + xx [ 275 ] + xx [ 16 ] -
xx [ 37 ] ) ; xx [ 56 ] = fabs ( xx [ 68 ] + xx [ 82 ] + xx [ 276 ] + xx [ 17
] - xx [ 38 ] ) ; xx [ 57 ] = fabs ( - xx [ 134 ] * ( xx [ 29 ] - xx [ 26 ] )
) ; xx [ 58 ] = fabs ( xx [ 211 ] * ( xx [ 26 ] + xx [ 39 ] - xx [ 33 ] ) +
xx [ 158 ] * xx [ 40 ] ) ; ii [ 0 ] = 49 ; { int ll ; for ( ll = 50 ; ll < 59
; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -= 49
; xx [ 0 ] = xx [ 49 + ( ii [ 0 ] ) ] ; xx [ 2 ] = xx [ 0 ] - xx [ 3 ] ; if (
xx [ 2 ] < 0.0 ) ii [ 1 ] = - 1 ; else if ( xx [ 2 ] > 0.0 ) ii [ 1 ] = + 1 ;
else ii [ 1 ] = 0 ; ii [ 3 ] = ii [ 1 ] ; if ( ii [ 2 ] > ii [ 3 ] ) ii [ 3 ]
= ii [ 2 ] ; if ( ii [ 3 ] != 0 ) { switch ( ii [ 0 ] ) { case 0 : case 1 :
case 2 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/simple_shin_1_RIGID/Cartesian Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 3 : case 4 : case 5 : case 6 : case 7 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'Walk_Sim4/Gait Emulator/knee /Revolute10' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 8 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'Walk_Sim4/Gait Emulator/prismatic frame/Planar Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 9 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'Walk_Sim4/Gait Emulator/prismatic frame/Prismatic4' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } } } xx [ 2 ] = 0.6479061989318569 ; xx [ 3 ] =
0.283227010168069 ; xx [ 4 ] = - 0.6478327526628918 ; xx [ 5 ] =
0.2833950293744593 ; xx [ 19 ] = 0.0139948129500692 ; xx [ 20 ] = -
0.01398994455628899 ; xx [ 21 ] = 0.7070593791849739 ; xx [ 22 ] =
0.7068772601862124 ; xx [ 0 ] = xx [ 7 ] * xx [ 329 ] ; xx [ 6 ] = cos ( xx [
0 ] ) ; xx [ 8 ] = sin ( xx [ 0 ] ) ; xx [ 0 ] = xx [ 6 ] - xx [ 71 ] * xx [
8 ] ; pm_math_quatComposeInverse ( xx + 315 , xx + 45 , xx + 23 ) ; xx [ 9 ]
= xx [ 7 ] * xx [ 327 ] ; xx [ 10 ] = cos ( xx [ 9 ] ) ; xx [ 13 ] = sin ( xx
[ 9 ] ) ; xx [ 9 ] = xx [ 12 ] * xx [ 13 ] ; xx [ 27 ] = - ( xx [ 1 ] * xx [
10 ] + xx [ 11 ] * xx [ 9 ] + xx [ 14 ] * xx [ 13 ] ) ; xx [ 28 ] = xx [ 1 ]
* xx [ 13 ] - xx [ 14 ] * xx [ 10 ] - xx [ 18 ] * xx [ 9 ] ; xx [ 29 ] = xx [
11 ] * xx [ 10 ] - xx [ 1 ] * xx [ 9 ] - xx [ 18 ] * xx [ 13 ] ; xx [ 30 ] =
xx [ 18 ] * xx [ 10 ] - xx [ 14 ] * xx [ 9 ] + xx [ 11 ] * xx [ 13 ] ;
pm_math_quatCompose ( xx + 23 , xx + 27 , xx + 13 ) ; xx [ 9 ] = xx [ 71 ] *
xx [ 6 ] + xx [ 8 ] ; xx [ 23 ] = xx [ 0 ] * xx [ 16 ] - xx [ 13 ] * xx [ 9 ]
; xx [ 24 ] = - ( xx [ 14 ] * xx [ 9 ] + xx [ 0 ] * xx [ 15 ] ) ; xx [ 25 ] =
xx [ 0 ] * xx [ 14 ] - xx [ 15 ] * xx [ 9 ] ; xx [ 26 ] = - ( xx [ 16 ] * xx
[ 9 ] + xx [ 0 ] * xx [ 13 ] ) ; xx [ 1 ] = xx [ 7 ] * xx [ 331 ] ; xx [ 6 ]
= sin ( xx [ 1 ] ) ; xx [ 13 ] = cos ( xx [ 1 ] ) ; xx [ 14 ] = - xx [ 95 ] *
xx [ 6 ] ; xx [ 15 ] = - xx [ 84 ] * xx [ 6 ] ; xx [ 16 ] = - xx [ 103 ] * xx
[ 6 ] ; pm_math_quatCompose ( xx + 91 , xx + 13 , xx + 31 ) ;
pm_math_quatCompose ( xx + 23 , xx + 31 , xx + 13 ) ;
pm_math_quatInverseCompose ( xx + 19 , xx + 13 , xx + 23 ) ;
pm_math_quatInverseCompose ( xx + 2 , xx + 23 , xx + 13 ) ; xx [ 1 ] = xx [
107 ] ; xx [ 2 ] = xx [ 109 ] ; xx [ 3 ] = - 0.7067545433081799 ; xx [ 5 ] =
xx [ 60 ] * atan2 ( sqrt ( xx [ 14 ] * xx [ 14 ] + xx [ 15 ] * xx [ 15 ] + xx
[ 16 ] * xx [ 16 ] ) , fabs ( xx [ 13 ] ) ) * ( ( pm_math_dot3 ( xx + 14 , xx
+ 1 ) * xx [ 13 ] ) < 0.0 ? - 1.0 : + 1.0 ) - xx [ 353 ] ; xx [ 4 ] = ( xx [
5 ] < 0.0 ? - 1.0 : + 1.0 ) ; xx [ 6 ] = 3.141592653589793 ; xx [ 8 ] =
6.283185307179586 ; pm_math_quatXform ( xx + 45 , xx + 322 , xx + 13 ) ;
pm_math_quatInverseXform ( xx + 27 , xx + 13 , xx + 16 ) ; xx [ 10 ] = xx [
16 ] - xx [ 328 ] ; xx [ 11 ] = xx [ 0 ] * xx [ 10 ] ; xx [ 13 ] = xx [ 17 ]
+ xx [ 12 ] * xx [ 328 ] ; xx [ 14 ] = xx [ 13 ] * xx [ 0 ] ; xx [ 19 ] = xx
[ 10 ] - ( xx [ 0 ] * xx [ 11 ] - xx [ 14 ] * xx [ 9 ] ) * xx [ 60 ] ; xx [
20 ] = xx [ 13 ] - xx [ 60 ] * ( xx [ 11 ] * xx [ 9 ] + xx [ 0 ] * xx [ 14 ]
) ; xx [ 21 ] = xx [ 18 ] - xx [ 330 ] ; pm_math_quatInverseXform ( xx + 31 ,
xx + 19 , xx + 10 ) ; xx [ 13 ] = xx [ 10 ] - xx [ 95 ] * xx [ 332 ] ; xx [
14 ] = xx [ 11 ] - xx [ 84 ] * xx [ 332 ] ; xx [ 15 ] = xx [ 12 ] - xx [ 103
] * xx [ 332 ] ; xx [ 0 ] = 3.141592653589793 - xx [ 355 ] ; xx [ 10 ] = ( xx
[ 0 ] < 0.0 ? - 1.0 : + 1.0 ) ; state [ 0 ] = xx [ 312 ] ; state [ 1 ] = xx [
313 ] ; state [ 2 ] = xx [ 314 ] ; state [ 3 ] = xx [ 315 ] ; state [ 4 ] =
xx [ 316 ] ; state [ 5 ] = xx [ 317 ] ; state [ 6 ] = xx [ 318 ] ; state [ 7
] = xx [ 319 ] ; state [ 8 ] = xx [ 320 ] ; state [ 9 ] = xx [ 321 ] ; state
[ 10 ] = xx [ 322 ] ; state [ 11 ] = xx [ 323 ] ; state [ 12 ] = xx [ 324 ] ;
state [ 13 ] = xx [ 325 ] ; state [ 14 ] = xx [ 326 ] ; state [ 15 ] = xx [
327 ] ; state [ 16 ] = xx [ 328 ] ; state [ 17 ] = xx [ 329 ] ; state [ 18 ]
= xx [ 330 ] ; state [ 19 ] = xx [ 331 ] ; state [ 20 ] = xx [ 332 ] ; state
[ 21 ] = xx [ 333 ] ; state [ 22 ] = xx [ 334 ] ; state [ 23 ] = xx [ 335 ] ;
state [ 24 ] = xx [ 336 ] ; state [ 25 ] = xx [ 337 ] ; state [ 26 ] = xx [
338 ] ; state [ 27 ] = xx [ 339 ] ; state [ 28 ] = xx [ 340 ] ; state [ 29 ]
= xx [ 341 ] ; state [ 30 ] = xx [ 342 ] ; state [ 31 ] = xx [ 343 ] ; state
[ 32 ] = xx [ 344 ] ; state [ 33 ] = xx [ 345 ] ; state [ 34 ] = xx [ 346 ] ;
state [ 35 ] = xx [ 347 ] ; state [ 36 ] = xx [ 348 ] ; state [ 37 ] = xx [
349 ] ; state [ 38 ] = xx [ 350 ] ; state [ 39 ] = xx [ 351 ] ; state [ 40 ]
= xx [ 352 ] ; state [ 41 ] = xx [ 353 ] + xx [ 4 ] * ( fmod ( xx [ 6 ] + xx
[ 4 ] * xx [ 5 ] , xx [ 8 ] ) - xx [ 6 ] ) ; state [ 42 ] = pm_math_dot3 ( xx
+ 13 , xx + 1 ) ; state [ 43 ] = xx [ 355 ] + xx [ 10 ] * ( fmod ( xx [ 6 ] +
xx [ 10 ] * xx [ 0 ] , xx [ 8 ] ) - xx [ 6 ] ) ; state [ 44 ] = xx [ 35 ] ;
return NULL ; }
