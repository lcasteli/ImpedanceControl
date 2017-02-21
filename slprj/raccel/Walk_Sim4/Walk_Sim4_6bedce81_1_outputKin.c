#include "__cf_Walk_Sim4.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "sm_ssci_run_time_errors.h"
PmfMessageId Walk_Sim4_6bedce81_1_outputKin ( const double * state , const
double * input , const double * inputDot , const double * inputDdot , const
double * discreteState , double * output , NeuDiagnosticManager * neDiagMgr )
{ double xx [ 102 ] ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 0.0 ; xx [ 1 ] = - 0.2705945141749849 ; xx [ 2 ] =
0.6532902568751174 ; xx [ 3 ] = 0.6532726092418986 ; xx [ 4 ] = -
0.2706018240602396 ; xx [ 5 ] = 0.5 ; xx [ 6 ] = xx [ 5 ] * state [ 15 ] ; xx
[ 8 ] = 1.910165910595785e-5 ; xx [ 9 ] = sin ( xx [ 6 ] ) ; xx [ 7 ] =
0.7071070386876468 ; xx [ 12 ] = 0.7071065234273504 ; xx [ 14 ] = cos ( xx [
6 ] ) ; xx [ 15 ] = - xx [ 8 ] * xx [ 9 ] ; xx [ 16 ] = - xx [ 7 ] * xx [ 9 ]
; xx [ 17 ] = - xx [ 12 ] * xx [ 9 ] ; pm_math_quatCompose ( xx + 1 , xx + 14
, xx + 18 ) ; xx [ 1 ] = - 0.3826832639272861 ; xx [ 2 ] = 0.9238796021743757
; xx [ 3 ] = - 1.312118906154905e-5 ; xx [ 4 ] = 4.889913705063975e-6 ; xx [
6 ] = xx [ 5 ] * state [ 17 ] ; xx [ 9 ] = 2.375713491786503e-8 ; xx [ 10 ] =
sin ( xx [ 6 ] ) ; xx [ 13 ] = 3.743209958208291e-11 ; xx [ 22 ] = cos ( xx [
6 ] ) ; xx [ 23 ] = - xx [ 9 ] * xx [ 10 ] ; xx [ 24 ] = xx [ 13 ] * xx [ 10
] ; xx [ 25 ] = - xx [ 10 ] ; pm_math_quatCompose ( xx + 1 , xx + 22 , xx +
14 ) ; pm_math_quatCompose ( xx + 18 , xx + 14 , xx + 1 ) ; xx [ 22 ] =
4.951603876933442e-7 ; xx [ 23 ] = 0.7071067895857885 ; xx [ 24 ] = -
4.951868355639957e-7 ; xx [ 25 ] = 0.7071067727869597 ; pm_math_quatCompose (
xx + 1 , xx + 22 , xx + 26 ) ; xx [ 30 ] = state [ 0 ] ; xx [ 31 ] = state [
1 ] ; xx [ 32 ] = state [ 2 ] ; xx [ 33 ] = state [ 3 ] ; xx [ 34 ] =
0.9240143931192876 ; xx [ 35 ] = - 0.382357687652353 ; xx [ 36 ] =
4.753479711208553e-7 ; xx [ 37 ] = - 1.146448133648799e-6 ;
pm_math_quatComposeInverse ( xx + 30 , xx + 34 , xx + 38 ) ; xx [ 6 ] =
3.385655379519181e-4 ; xx [ 10 ] = xx [ 5 ] * state [ 7 ] ; xx [ 11 ] = cos (
xx [ 10 ] ) ; xx [ 30 ] = 0.9237444950219811 ; xx [ 31 ] = sin ( xx [ 10 ] )
; xx [ 10 ] = xx [ 6 ] * xx [ 11 ] - xx [ 30 ] * xx [ 31 ] ; xx [ 32 ] =
1.394282752982812e-4 ; xx [ 43 ] = 0.3830091041342462 ; xx [ 45 ] = xx [ 32 ]
* xx [ 11 ] - xx [ 43 ] * xx [ 31 ] ; xx [ 33 ] = xx [ 30 ] * xx [ 11 ] + xx
[ 6 ] * xx [ 31 ] ; xx [ 6 ] = - xx [ 33 ] ; xx [ 30 ] = xx [ 43 ] * xx [ 11
] + xx [ 32 ] * xx [ 31 ] ; xx [ 11 ] = - xx [ 30 ] ; xx [ 46 ] = xx [ 10 ] ;
xx [ 47 ] = xx [ 45 ] ; xx [ 48 ] = xx [ 6 ] ; xx [ 49 ] = xx [ 11 ] ;
pm_math_quatCompose ( xx + 38 , xx + 46 , xx + 50 ) ;
pm_math_quatInverseCompose ( xx + 26 , xx + 50 , xx + 55 ) ; xx [ 31 ] =
7.192418157028906e-4 ; xx [ 43 ] = 0.02532758322758053 ; xx [ 54 ] = xx [ 31
] * xx [ 56 ] - xx [ 43 ] * xx [ 58 ] ; xx [ 44 ] = xx [ 43 ] * xx [ 57 ] ;
xx [ 61 ] = - xx [ 31 ] * xx [ 57 ] ; xx [ 62 ] = xx [ 54 ] ; xx [ 63 ] = xx
[ 44 ] ; pm_math_cross3 ( xx + 56 , xx + 61 , xx + 64 ) ; xx [ 59 ] = 2.0 ;
xx [ 61 ] = 0.04062101508027026 ; xx [ 67 ] = xx [ 45 ] ; xx [ 68 ] = xx [ 6
] ; xx [ 69 ] = xx [ 11 ] ; xx [ 6 ] = 0.06932918701200035 ; xx [ 11 ] = xx [
6 ] * xx [ 33 ] ; xx [ 63 ] = xx [ 61 ] * xx [ 30 ] + xx [ 45 ] * xx [ 6 ] ;
xx [ 30 ] = xx [ 61 ] * xx [ 33 ] ; xx [ 70 ] = - xx [ 11 ] ; xx [ 71 ] = -
xx [ 63 ] ; xx [ 72 ] = xx [ 30 ] ; pm_math_cross3 ( xx + 67 , xx + 70 , xx +
73 ) ; xx [ 33 ] = 4.647672291017887e-12 ; xx [ 45 ] = 6.591343902079979e-9 ;
xx [ 67 ] = - ( xx [ 61 ] + ( xx [ 73 ] - xx [ 10 ] * xx [ 11 ] ) * xx [ 59 ]
) ; xx [ 68 ] = xx [ 33 ] - ( xx [ 74 ] - xx [ 10 ] * xx [ 63 ] ) * xx [ 59 ]
; xx [ 69 ] = - ( xx [ 45 ] + xx [ 6 ] + xx [ 59 ] * ( xx [ 75 ] + xx [ 10 ]
* xx [ 30 ] ) ) ; pm_math_quatXform ( xx + 38 , xx + 67 , xx + 61 ) ; xx [ 6
] = xx [ 45 ] * xx [ 40 ] + xx [ 33 ] * xx [ 41 ] ; xx [ 10 ] = xx [ 45 ] *
xx [ 39 ] ; xx [ 70 ] = - xx [ 6 ] ; xx [ 71 ] = xx [ 10 ] ; xx [ 72 ] = xx [
33 ] * xx [ 39 ] ; pm_math_cross3 ( xx + 39 , xx + 70 , xx + 73 ) ; xx [ 11 ]
= input [ 5 ] - ( xx [ 73 ] - xx [ 38 ] * xx [ 6 ] ) * xx [ 59 ] ; xx [ 6 ] =
xx [ 61 ] + xx [ 11 ] ; xx [ 70 ] = 0.01583458085085141 ; xx [ 71 ] = -
3.469188917546366e-7 ; xx [ 72 ] = - 1.472506675461308e-8 ; pm_math_quatXform
( xx + 1 , xx + 70 , xx + 76 ) ; xx [ 79 ] = - 0.08771541913364658 ; xx [ 80
] = 1.078809183824322e-5 ; xx [ 81 ] = - 3.057374240528095e-8 ;
pm_math_quatXform ( xx + 14 , xx + 79 , xx + 82 ) ; xx [ 79 ] = - xx [ 82 ] ;
xx [ 80 ] = - ( 1.848830149241486e-15 + xx [ 83 ] ) ; xx [ 81 ] = - (
5.071415708866186e-9 + xx [ 84 ] ) ; pm_math_quatXform ( xx + 18 , xx + 79 ,
xx + 82 ) ; xx [ 85 ] = 1.671395057516844e-7 ; xx [ 86 ] =
6.187186568194987e-3 ; xx [ 87 ] = 6.18717698825356e-3 ; pm_math_quatXform (
xx + 18 , xx + 85 , xx + 88 ) ; xx [ 18 ] = xx [ 76 ] + xx [ 82 ] - xx [ 88 ]
- 1.001751448546223e-8 ; xx [ 20 ] = input [ 6 ] - xx [ 59 ] * ( xx [ 74 ] +
xx [ 38 ] * xx [ 10 ] ) + 0.1516999999953523 ; xx [ 10 ] = xx [ 62 ] + xx [
20 ] ; xx [ 21 ] = xx [ 77 ] + xx [ 83 ] - xx [ 89 ] + 0.04814999999999942 ;
xx [ 30 ] = input [ 7 ] - ( xx [ 33 ] * xx [ 38 ] * xx [ 39 ] + xx [ 75 ] ) *
xx [ 59 ] + xx [ 45 ] ; xx [ 42 ] = xx [ 63 ] + xx [ 30 ] ; xx [ 61 ] = xx [
78 ] + xx [ 84 ] - xx [ 90 ] - 8.752018279986853e-3 ; xx [ 73 ] = xx [ 6 ] -
xx [ 18 ] ; xx [ 74 ] = xx [ 10 ] - xx [ 21 ] ; xx [ 75 ] = xx [ 42 ] - xx [
61 ] ; pm_math_quatInverseXform ( xx + 26 , xx + 73 , xx + 76 ) ; xx [ 26 ] =
state [ 4 ] ; xx [ 27 ] = state [ 5 ] ; xx [ 28 ] = state [ 6 ] ;
pm_math_quatXform ( xx + 34 , xx + 26 , xx + 73 ) ; pm_math_cross3 ( xx + 73
, xx + 67 , xx + 26 ) ; xx [ 34 ] = inputDot [ 5 ] ; xx [ 35 ] = inputDot [ 6
] ; xx [ 36 ] = inputDot [ 7 ] ; pm_math_quatInverseXform ( xx + 38 , xx + 34
, xx + 67 ) ; xx [ 35 ] = xx [ 26 ] + xx [ 67 ] + xx [ 45 ] * xx [ 74 ] + xx
[ 33 ] * xx [ 75 ] ; xx [ 36 ] = xx [ 27 ] + xx [ 68 ] - xx [ 45 ] * xx [ 73
] ; xx [ 37 ] = xx [ 28 ] + xx [ 69 ] - xx [ 33 ] * xx [ 73 ] ;
pm_math_quatInverseXform ( xx + 46 , xx + 35 , xx + 26 ) ; xx [ 19 ] = xx [
26 ] + 0.06932918701200033 * state [ 8 ] ; xx [ 33 ] = - xx [ 8 ] * state [
16 ] ; xx [ 34 ] = - xx [ 7 ] * state [ 16 ] ; xx [ 35 ] = - xx [ 12 ] *
state [ 16 ] ; pm_math_quatInverseXform ( xx + 14 , xx + 33 , xx + 67 ) ; xx
[ 82 ] = xx [ 67 ] - xx [ 9 ] * state [ 18 ] ; xx [ 83 ] = xx [ 68 ] + xx [
13 ] * state [ 18 ] ; xx [ 84 ] = xx [ 69 ] - state [ 18 ] ;
pm_math_quatInverseXform ( xx + 22 , xx + 82 , xx + 7 ) ; pm_math_cross3 ( xx
+ 7 , xx + 76 , xx + 67 ) ; pm_math_cross3 ( xx + 82 , xx + 70 , xx + 85 ) ;
pm_math_cross3 ( xx + 33 , xx + 79 , xx + 70 ) ; xx [ 33 ] = xx [ 70 ] -
3.586032427602137e-9 * state [ 16 ] ; xx [ 34 ] = xx [ 71 ] +
8.918159271208881e-14 * state [ 16 ] ; xx [ 35 ] = xx [ 72 ] +
7.690831401850464e-15 * state [ 16 ] ; pm_math_quatInverseXform ( xx + 14 ,
xx + 33 , xx + 70 ) ; xx [ 12 ] = xx [ 85 ] + xx [ 70 ] -
1.078809183824208e-5 * state [ 18 ] ; xx [ 13 ] = xx [ 86 ] + xx [ 71 ] -
0.08771541913364594 * state [ 18 ] ; xx [ 14 ] = xx [ 87 ] + xx [ 72 ] -
3.027078150587337e-12 * state [ 18 ] ; pm_math_quatInverseXform ( xx + 22 ,
xx + 12 , xx + 15 ) ; xx [ 12 ] = xx [ 67 ] + xx [ 15 ] ; xx [ 13 ] = xx [ 68
] + xx [ 16 ] ; xx [ 14 ] = xx [ 69 ] + xx [ 17 ] ; pm_math_quatInverseXform
( xx + 55 , xx + 12 , xx + 15 ) ; pm_math_quatInverseXform ( xx + 46 , xx +
73 , xx + 12 ) ; xx [ 22 ] = xx [ 13 ] - state [ 8 ] ;
pm_math_quatInverseXform ( xx + 55 , xx + 7 , xx + 23 ) ; xx [ 7 ] = xx [ 22
] - xx [ 24 ] ; xx [ 9 ] = xx [ 14 ] - xx [ 25 ] ; xx [ 13 ] = xx [ 12 ] - xx
[ 23 ] ; xx [ 23 ] = xx [ 28 ] - 0.04062101508027025 * state [ 8 ] ; xx [ 35
] = xx [ 19 ] - xx [ 15 ] - xx [ 31 ] * xx [ 7 ] ; xx [ 36 ] = xx [ 27 ] - xx
[ 16 ] - ( xx [ 43 ] * xx [ 9 ] - xx [ 31 ] * xx [ 13 ] ) ; xx [ 37 ] = xx [
23 ] - xx [ 17 ] + xx [ 43 ] * xx [ 7 ] ; pm_math_quatXform ( xx + 55 , xx +
35 , xx + 15 ) ; xx [ 8 ] = 0.7068472056023918 ; xx [ 24 ] =
0.7073662615166844 ; xx [ 26 ] = - ( xx [ 8 ] * xx [ 57 ] - xx [ 24 ] * xx [
55 ] ) ; xx [ 28 ] = - ( xx [ 8 ] * xx [ 58 ] - xx [ 24 ] * xx [ 56 ] ) ; xx
[ 29 ] = xx [ 8 ] * xx [ 55 ] + xx [ 24 ] * xx [ 57 ] ; xx [ 34 ] = xx [ 24 ]
* xx [ 58 ] + xx [ 8 ] * xx [ 56 ] ; xx [ 45 ] = xx [ 26 ] ; xx [ 46 ] = xx [
28 ] ; xx [ 47 ] = xx [ 29 ] ; xx [ 48 ] = xx [ 34 ] ; xx [ 25 ] = xx [ 8 ] *
xx [ 9 ] ; xx [ 35 ] = xx [ 8 ] * xx [ 13 ] ; xx [ 67 ] = xx [ 13 ] - xx [ 59
] * ( xx [ 24 ] * xx [ 25 ] + xx [ 8 ] * xx [ 35 ] ) ; xx [ 68 ] = xx [ 7 ] ;
xx [ 69 ] = xx [ 9 ] - ( xx [ 8 ] * xx [ 25 ] - xx [ 24 ] * xx [ 35 ] ) * xx
[ 59 ] ; pm_math_quatXform ( xx + 45 , xx + 67 , xx + 35 ) ; xx [ 7 ] = - xx
[ 51 ] ; xx [ 9 ] = - xx [ 52 ] ; xx [ 13 ] = - xx [ 53 ] ; xx [ 45 ] = xx [
7 ] ; xx [ 46 ] = xx [ 9 ] ; xx [ 47 ] = xx [ 13 ] ; xx [ 25 ] = xx [ 31 ] *
xx [ 52 ] ; xx [ 48 ] = xx [ 43 ] * xx [ 53 ] ; xx [ 49 ] = xx [ 31 ] * xx [
51 ] ; xx [ 58 ] = xx [ 48 ] - xx [ 49 ] ; xx [ 62 ] = xx [ 43 ] * xx [ 52 ]
; xx [ 67 ] = xx [ 25 ] ; xx [ 68 ] = xx [ 58 ] ; xx [ 69 ] = - xx [ 62 ] ;
pm_math_cross3 ( xx + 45 , xx + 67 , xx + 70 ) ; xx [ 45 ] = xx [ 31 ] * xx [
50 ] * xx [ 52 ] ; xx [ 47 ] = ( xx [ 70 ] - xx [ 45 ] ) * xx [ 59 ] - xx [
43 ] + xx [ 6 ] ; xx [ 46 ] = 1.725 ; xx [ 79 ] = - xx [ 50 ] ; xx [ 80 ] =
xx [ 7 ] ; xx [ 81 ] = xx [ 9 ] ; xx [ 82 ] = xx [ 13 ] ; xx [ 67 ] = xx [ 19
] - xx [ 31 ] * xx [ 22 ] ; xx [ 68 ] = xx [ 27 ] - ( xx [ 43 ] * xx [ 14 ] -
xx [ 31 ] * xx [ 12 ] ) ; xx [ 69 ] = xx [ 23 ] + xx [ 43 ] * xx [ 22 ] ;
pm_math_quatXform ( xx + 79 , xx + 67 , xx + 73 ) ; xx [ 7 ] = xx [ 59 ] * (
xx [ 71 ] - xx [ 50 ] * xx [ 58 ] ) + xx [ 10 ] - 0.1517 ; xx [ 9 ] =
0.7071067811865476 ; xx [ 13 ] = xx [ 50 ] * xx [ 62 ] ; xx [ 19 ] = xx [ 59
] * ( xx [ 72 ] + xx [ 13 ] ) - xx [ 31 ] + xx [ 42 ] ; xx [ 23 ] = xx [ 9 ]
* xx [ 19 ] * xx [ 9 ] ; xx [ 27 ] = xx [ 9 ] * xx [ 9 ] * xx [ 7 ] ; xx [ 58
] = xx [ 7 ] - ( xx [ 23 ] + xx [ 27 ] ) * xx [ 59 ] ; xx [ 7 ] = xx [ 9 ] *
xx [ 9 ] * xx [ 75 ] ; xx [ 63 ] = xx [ 9 ] * xx [ 9 ] * xx [ 74 ] ; xx [ 67
] = xx [ 74 ] - ( xx [ 7 ] + xx [ 63 ] ) * xx [ 59 ] ; xx [ 68 ] = xx [ 19 ]
+ xx [ 59 ] * ( xx [ 27 ] - xx [ 23 ] ) ; xx [ 19 ] = xx [ 75 ] + xx [ 59 ] *
( xx [ 63 ] - xx [ 7 ] ) ; xx [ 7 ] = xx [ 24 ] * xx [ 51 ] - xx [ 8 ] * xx [
53 ] ; xx [ 23 ] = xx [ 9 ] * xx [ 7 ] ; xx [ 27 ] = xx [ 24 ] * xx [ 50 ] -
xx [ 8 ] * xx [ 52 ] ; xx [ 63 ] = xx [ 9 ] * xx [ 27 ] ; xx [ 69 ] = xx [ 23
] - xx [ 63 ] ; xx [ 70 ] = - ( xx [ 23 ] + xx [ 63 ] ) ; xx [ 23 ] = xx [ 24
] * xx [ 53 ] + xx [ 8 ] * xx [ 51 ] ; xx [ 63 ] = xx [ 23 ] * xx [ 9 ] ; xx
[ 71 ] = xx [ 8 ] * xx [ 50 ] + xx [ 24 ] * xx [ 52 ] ; xx [ 72 ] = xx [ 71 ]
* xx [ 9 ] ; xx [ 9 ] = xx [ 63 ] - xx [ 72 ] ; xx [ 74 ] = - ( xx [ 63 ] +
xx [ 72 ] ) ; xx [ 79 ] = xx [ 69 ] ; xx [ 80 ] = xx [ 70 ] ; xx [ 81 ] = xx
[ 9 ] ; xx [ 82 ] = xx [ 74 ] ; xx [ 63 ] = xx [ 8 ] * xx [ 14 ] ; xx [ 72 ]
= xx [ 8 ] * xx [ 12 ] ; xx [ 83 ] = xx [ 12 ] - xx [ 59 ] * ( xx [ 24 ] * xx
[ 63 ] + xx [ 8 ] * xx [ 72 ] ) ; xx [ 84 ] = xx [ 22 ] ; xx [ 85 ] = xx [ 14
] - ( xx [ 8 ] * xx [ 63 ] - xx [ 24 ] * xx [ 72 ] ) * xx [ 59 ] ;
pm_math_quatXform ( xx + 79 , xx + 83 , xx + 86 ) ; xx [ 8 ] = xx [ 49 ] - xx
[ 48 ] ; xx [ 79 ] = - xx [ 25 ] ; xx [ 80 ] = xx [ 8 ] ; xx [ 81 ] = xx [ 62
] ; pm_math_cross3 ( xx + 51 , xx + 79 , xx + 82 ) ; xx [ 12 ] =
1.322560116978622e-11 ; xx [ 14 ] = 0.6531857048393208 ; xx [ 22 ] = xx [ 5 ]
* state [ 9 ] ; xx [ 5 ] = cos ( xx [ 22 ] ) ; xx [ 24 ] = 0.6531863759394836
; xx [ 25 ] = sin ( xx [ 22 ] ) ; xx [ 22 ] = 2.645128560629928e-11 * xx [ 25
] ; xx [ 49 ] = 0.2708275418267761 ; xx [ 51 ] = xx [ 14 ] * xx [ 5 ] + xx [
24 ] * xx [ 22 ] + xx [ 49 ] * xx [ 25 ] ; xx [ 53 ] = 0.2708291636228809 ;
xx [ 62 ] = xx [ 14 ] * xx [ 25 ] - xx [ 49 ] * xx [ 5 ] - xx [ 53 ] * xx [
22 ] ; xx [ 63 ] = xx [ 24 ] * xx [ 5 ] - xx [ 14 ] * xx [ 22 ] - xx [ 53 ] *
xx [ 25 ] ; xx [ 14 ] = xx [ 53 ] * xx [ 5 ] - xx [ 49 ] * xx [ 22 ] + xx [
24 ] * xx [ 25 ] ; xx [ 89 ] = - xx [ 51 ] ; xx [ 90 ] = xx [ 62 ] ; xx [ 91
] = xx [ 63 ] ; xx [ 92 ] = xx [ 14 ] ; pm_math_quatCompose ( xx + 38 , xx +
89 , xx + 93 ) ; xx [ 5 ] = 0.2887783607120545 ; xx [ 22 ] = xx [ 5 ] * xx [
63 ] ; xx [ 79 ] = xx [ 62 ] ; xx [ 80 ] = xx [ 63 ] ; xx [ 81 ] = xx [ 14 ]
; xx [ 24 ] = 8.500000000000068e-3 ; xx [ 49 ] = xx [ 14 ] * xx [ 24 ] + xx [
5 ] * xx [ 62 ] ; xx [ 5 ] = xx [ 24 ] * xx [ 63 ] ; xx [ 89 ] = - xx [ 22 ]
; xx [ 90 ] = xx [ 49 ] ; xx [ 91 ] = - xx [ 5 ] ; pm_math_cross3 ( xx + 79 ,
xx + 89 , xx + 99 ) ; xx [ 79 ] = - ( 8.500014918886864e-3 + ( xx [ 22 ] * xx
[ 51 ] + xx [ 99 ] ) * xx [ 59 ] ) ; xx [ 80 ] = - ( 6.014644173113667e-3 + (
xx [ 100 ] - xx [ 49 ] * xx [ 51 ] ) * xx [ 59 ] ) ; xx [ 81 ] =
0.2947845222348 - xx [ 59 ] * ( xx [ 101 ] + xx [ 5 ] * xx [ 51 ] ) ;
pm_math_quatXform ( xx + 38 , xx + 79 , xx + 51 ) ; xx [ 5 ] =
0.06738036071205435 ; xx [ 14 ] = xx [ 5 ] * xx [ 95 ] ; xx [ 22 ] = xx [ 5 ]
* xx [ 94 ] ; xx [ 38 ] = 0.4999996558078924 ; xx [ 39 ] = -
0.5000003560704283 ; xx [ 40 ] = - 0.499999643910625 ; xx [ 41 ] = -
0.5000003442105638 ; pm_math_quatCompose ( xx + 1 , xx + 38 , xx + 89 ) ;
output [ 0 ] = state [ 11 ] ; output [ 1 ] = state [ 9 ] ; output [ 2 ] =
state [ 10 ] ; output [ 7 ] = state [ 7 ] ; output [ 8 ] = state [ 8 ] ;
output [ 13 ] = ( xx [ 64 ] - xx [ 31 ] * xx [ 55 ] * xx [ 57 ] ) * xx [ 59 ]
+ xx [ 76 ] - xx [ 43 ] ; output [ 14 ] = xx [ 15 ] ; output [ 15 ] = ( xx [
55 ] * xx [ 54 ] + xx [ 65 ] ) * xx [ 59 ] + xx [ 77 ] ; output [ 16 ] = xx [
16 ] ; output [ 17 ] = xx [ 59 ] * ( xx [ 66 ] + xx [ 55 ] * xx [ 44 ] ) + xx
[ 78 ] - xx [ 31 ] ; output [ 18 ] = xx [ 17 ] ; output [ 19 ] = xx [ 26 ] ;
output [ 20 ] = xx [ 28 ] ; output [ 21 ] = xx [ 29 ] ; output [ 22 ] = xx [
34 ] ; output [ 23 ] = xx [ 35 ] ; output [ 24 ] = xx [ 36 ] ; output [ 25 ]
= xx [ 37 ] ; output [ 32 ] = xx [ 47 ] + xx [ 46 ] ; output [ 33 ] = xx [ 73
] ; output [ 34 ] = xx [ 58 ] ; output [ 35 ] = xx [ 67 ] ; output [ 36 ] =
xx [ 68 ] ; output [ 37 ] = xx [ 19 ] ; output [ 38 ] = xx [ 69 ] ; output [
39 ] = xx [ 70 ] ; output [ 40 ] = xx [ 9 ] ; output [ 41 ] = xx [ 74 ] ;
output [ 42 ] = xx [ 86 ] ; output [ 43 ] = xx [ 87 ] ; output [ 44 ] = xx [
88 ] ; output [ 45 ] = xx [ 47 ] - xx [ 46 ] ; output [ 46 ] = xx [ 73 ] ;
output [ 47 ] = xx [ 58 ] ; output [ 48 ] = xx [ 67 ] ; output [ 49 ] = xx [
68 ] ; output [ 50 ] = xx [ 19 ] ; output [ 51 ] = xx [ 69 ] ; output [ 52 ]
= xx [ 70 ] ; output [ 53 ] = xx [ 9 ] ; output [ 54 ] = xx [ 74 ] ; output [
55 ] = xx [ 86 ] ; output [ 56 ] = xx [ 87 ] ; output [ 57 ] = xx [ 88 ] ;
output [ 58 ] = xx [ 27 ] ; output [ 59 ] = xx [ 7 ] ; output [ 60 ] = xx [
71 ] ; output [ 61 ] = xx [ 23 ] ; output [ 62 ] = ( xx [ 82 ] - xx [ 45 ] )
* xx [ 59 ] - xx [ 43 ] + xx [ 6 ] ; output [ 63 ] = ( xx [ 50 ] * xx [ 8 ] +
xx [ 83 ] ) * xx [ 59 ] + xx [ 10 ] ; output [ 64 ] = xx [ 59 ] * ( xx [ 84 ]
+ xx [ 13 ] ) - xx [ 31 ] + xx [ 42 ] ; output [ 65 ] = - ( xx [ 12 ] * xx [
96 ] + xx [ 93 ] ) ; output [ 66 ] = - ( xx [ 94 ] - xx [ 12 ] * xx [ 95 ] )
; output [ 67 ] = - ( xx [ 12 ] * xx [ 94 ] + xx [ 95 ] ) ; output [ 68 ] = -
( xx [ 96 ] - xx [ 12 ] * xx [ 93 ] ) ; output [ 69 ] = xx [ 51 ] + xx [ 11 ]
- ( xx [ 93 ] * xx [ 14 ] + xx [ 96 ] * xx [ 22 ] ) * xx [ 59 ] ; output [ 70
] = xx [ 59 ] * ( xx [ 93 ] * xx [ 22 ] - xx [ 96 ] * xx [ 14 ] ) + xx [ 52 ]
+ xx [ 20 ] ; output [ 71 ] = xx [ 53 ] + xx [ 30 ] + ( xx [ 94 ] * xx [ 22 ]
+ xx [ 95 ] * xx [ 14 ] ) * xx [ 59 ] - xx [ 5 ] ; output [ 72 ] = - xx [ 89
] ; output [ 73 ] = - xx [ 90 ] ; output [ 74 ] = - xx [ 91 ] ; output [ 75 ]
= - xx [ 92 ] ; output [ 76 ] = xx [ 18 ] ; output [ 77 ] = xx [ 21 ] ;
output [ 78 ] = xx [ 61 ] ; return NULL ; }
