#include "__cf_Walk_Sim4.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "sm_ssci_run_time_errors.h"
PmfMessageId Walk_Sim4_6bedce81_1_deriv ( const double * state , const double
* input , const double * inputDot , const double * inputDdot , const double *
discreteState , double * deriv , double * errorResult , NeuDiagnosticManager
* neDiagMgr ) { double xx [ 966 ] ; int ii [ 16 ] ; ( void ) discreteState ;
( void ) neDiagMgr ; xx [ 0 ] = state [ 0 ] ; xx [ 1 ] = state [ 1 ] ; xx [ 2
] = state [ 2 ] ; xx [ 3 ] = state [ 3 ] ; xx [ 4 ] = state [ 4 ] ; xx [ 5 ]
= state [ 5 ] ; xx [ 6 ] = state [ 6 ] ; pm_math_quatDeriv ( xx + 0 , xx + 4
, xx + 7 ) ; xx [ 11 ] = 0.9999999999969194 ; xx [ 12 ] =
2.482175055048485e-6 ; xx [ 14 ] = 1.750219320822278e-9 ; xx [ 16 ] = xx [ 11
] ; xx [ 17 ] = - xx [ 12 ] ; xx [ 18 ] = - xx [ 14 ] ; xx [ 13 ] =
2.712923927745293e-8 ; xx [ 15 ] = 0.6531857048393208 ; xx [ 19 ] = 0.5 ; xx
[ 20 ] = xx [ 19 ] * state [ 9 ] ; xx [ 21 ] = cos ( xx [ 20 ] ) ; xx [ 23 ]
= 0.6531863759394836 ; xx [ 24 ] = 2.645128560629928e-11 ; xx [ 25 ] = sin (
xx [ 20 ] ) ; xx [ 20 ] = xx [ 24 ] * xx [ 25 ] ; xx [ 26 ] =
0.2708275418267761 ; xx [ 28 ] = xx [ 15 ] * xx [ 21 ] + xx [ 23 ] * xx [ 20
] + xx [ 26 ] * xx [ 25 ] ; xx [ 22 ] = xx [ 28 ] * xx [ 28 ] ; xx [ 29 ] =
0.2708291636228809 ; xx [ 31 ] = xx [ 15 ] * xx [ 25 ] - xx [ 26 ] * xx [ 21
] - xx [ 29 ] * xx [ 20 ] ; xx [ 27 ] = 2.0 ; xx [ 30 ] = 1.0 ; xx [ 34 ] = (
xx [ 22 ] + xx [ 31 ] * xx [ 31 ] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 32 ] = xx
[ 23 ] * xx [ 21 ] - xx [ 15 ] * xx [ 20 ] - xx [ 29 ] * xx [ 25 ] ; xx [ 15
] = xx [ 32 ] * xx [ 31 ] ; xx [ 33 ] = xx [ 29 ] * xx [ 21 ] - xx [ 26 ] *
xx [ 20 ] + xx [ 23 ] * xx [ 25 ] ; xx [ 20 ] = xx [ 33 ] * xx [ 28 ] ; xx [
21 ] = xx [ 15 ] + xx [ 20 ] ; xx [ 23 ] = xx [ 33 ] * xx [ 31 ] ; xx [ 25 ]
= xx [ 32 ] * xx [ 28 ] ; xx [ 29 ] = ( xx [ 23 ] - xx [ 25 ] ) * xx [ 27 ] ;
xx [ 26 ] = ( xx [ 15 ] - xx [ 20 ] ) * xx [ 27 ] ; xx [ 15 ] = ( xx [ 22 ] +
xx [ 32 ] * xx [ 32 ] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 20 ] = xx [ 33 ] * xx
[ 32 ] ; xx [ 35 ] = xx [ 31 ] * xx [ 28 ] ; xx [ 37 ] = xx [ 27 ] * ( xx [
20 ] + xx [ 35 ] ) ; xx [ 36 ] = xx [ 27 ] * ( xx [ 23 ] + xx [ 25 ] ) ; xx [
23 ] = xx [ 20 ] - xx [ 35 ] ; xx [ 20 ] = ( xx [ 22 ] + xx [ 33 ] * xx [ 33
] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 38 ] = xx [ 34 ] ; xx [ 39 ] = xx [ 27 ] *
xx [ 21 ] ; xx [ 40 ] = xx [ 29 ] ; xx [ 41 ] = xx [ 26 ] ; xx [ 42 ] = xx [
15 ] ; xx [ 43 ] = xx [ 37 ] ; xx [ 44 ] = xx [ 36 ] ; xx [ 45 ] = xx [ 23 ]
* xx [ 27 ] ; xx [ 46 ] = xx [ 20 ] ; xx [ 22 ] = 6.91442299849511e-3 ; xx [
25 ] = 2.91677411968163e-4 ; xx [ 47 ] = - 0.2704361801981385 ; xx [ 48 ] =
0.6533491792460329 ; xx [ 49 ] = 0.2704345588060376 ; xx [ 50 ] =
0.6533485071703761 ; xx [ 35 ] = xx [ 19 ] * state [ 13 ] ; xx [ 51 ] =
1.7551632495727e-6 ; xx [ 52 ] = sin ( xx [ 35 ] ) ; xx [ 54 ] =
0.7067545433060005 ; xx [ 56 ] = 0.7074588436886248 ; xx [ 58 ] = cos ( xx [
35 ] ) ; xx [ 59 ] = - xx [ 51 ] * xx [ 52 ] ; xx [ 60 ] = - xx [ 54 ] * xx [
52 ] ; xx [ 61 ] = - xx [ 56 ] * xx [ 52 ] ; pm_math_quatCompose ( xx + 47 ,
xx + 58 , xx + 62 ) ; xx [ 35 ] = xx [ 62 ] * xx [ 62 ] ; xx [ 47 ] = xx [ 63
] * xx [ 63 ] ; xx [ 49 ] = ( xx [ 35 ] + xx [ 47 ] ) * xx [ 27 ] - xx [ 30 ]
; xx [ 48 ] = xx [ 63 ] * xx [ 64 ] ; xx [ 50 ] = xx [ 62 ] * xx [ 65 ] ; xx
[ 52 ] = xx [ 27 ] * ( xx [ 48 ] - xx [ 50 ] ) ; xx [ 53 ] = xx [ 63 ] * xx [
65 ] ; xx [ 55 ] = xx [ 62 ] * xx [ 64 ] ; xx [ 57 ] = ( xx [ 53 ] + xx [ 55
] ) * xx [ 27 ] ; xx [ 58 ] = ( xx [ 48 ] + xx [ 50 ] ) * xx [ 27 ] ; xx [ 48
] = xx [ 64 ] * xx [ 64 ] ; xx [ 50 ] = ( xx [ 35 ] + xx [ 48 ] ) * xx [ 27 ]
- xx [ 30 ] ; xx [ 59 ] = xx [ 64 ] * xx [ 65 ] ; xx [ 60 ] = xx [ 62 ] * xx
[ 63 ] ; xx [ 66 ] = xx [ 27 ] * ( xx [ 59 ] - xx [ 60 ] ) ; xx [ 61 ] = xx [
27 ] * ( xx [ 53 ] - xx [ 55 ] ) ; xx [ 67 ] = ( xx [ 59 ] + xx [ 60 ] ) * xx
[ 27 ] ; xx [ 68 ] = ( xx [ 35 ] + xx [ 65 ] * xx [ 65 ] ) * xx [ 27 ] - xx [
30 ] ; xx [ 69 ] = xx [ 49 ] ; xx [ 70 ] = xx [ 52 ] ; xx [ 71 ] = xx [ 57 ]
; xx [ 72 ] = xx [ 58 ] ; xx [ 73 ] = xx [ 50 ] ; xx [ 74 ] = xx [ 66 ] ; xx
[ 75 ] = xx [ 61 ] ; xx [ 76 ] = xx [ 67 ] ; xx [ 77 ] = xx [ 68 ] ; xx [ 35
] = 8.681356568784947e-7 ; xx [ 78 ] = 1.523719800596789e-12 ; xx [ 79 ] =
4.700061384927757e-7 ; ii [ 0 ] = 0 ; memcpy ( ii + 3 , ii + 0 , 1 * sizeof (
int ) ) ; ii [ 2 ] = factorSymmetric ( xx + 79 , 1 , xx + 82 , xx + 81 , ii +
3 , ii + 4 ) ; if ( ii [ 4 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Walk_Sim4/Gait Emulator/knee /Revolute11' has a degenerate mass distribution on its base side."
, neDiagMgr ) ; } xx [ 80 ] = xx [ 78 ] / xx [ 79 ] ; xx [ 82 ] =
3.321789737593994e-7 ; xx [ 84 ] = - xx [ 82 ] * xx [ 80 ] ; xx [ 83 ] =
3.325099992643083e-7 ; xx [ 85 ] = - xx [ 83 ] * xx [ 80 ] ; xx [ 86 ] =
4.700061384898339e-7 ; xx [ 87 ] = xx [ 82 ] / xx [ 79 ] ; xx [ 90 ] = - xx [
83 ] * xx [ 87 ] ; xx [ 89 ] = 4.700061384922859e-7 ; xx [ 91 ] = xx [ 35 ] -
xx [ 78 ] * xx [ 80 ] ; xx [ 92 ] = xx [ 84 ] ; xx [ 93 ] = xx [ 85 ] ; xx [
94 ] = xx [ 84 ] ; xx [ 95 ] = xx [ 86 ] - xx [ 82 ] * xx [ 87 ] ; xx [ 96 ]
= xx [ 90 ] ; xx [ 97 ] = xx [ 85 ] ; xx [ 98 ] = xx [ 90 ] ; xx [ 99 ] = xx
[ 89 ] - 1.105628996107503e-13 / xx [ 79 ] ;
pm_math_matrix3x3ComposeTranspose ( xx + 91 , xx + 69 , xx + 100 ) ;
pm_math_matrix3x3Compose ( xx + 69 , xx + 100 , xx + 90 ) ; xx [ 81 ] =
5.23546588095591e-11 ; xx [ 84 ] = xx [ 81 ] / xx [ 79 ] ; xx [ 88 ] =
1.299512981677354e-16 ; xx [ 99 ] = xx [ 88 ] / xx [ 79 ] ; xx [ 101 ] =
6.686282739464984e-20 ; xx [ 102 ] = xx [ 101 ] / xx [ 79 ] ; xx [ 106 ] = -
xx [ 78 ] * xx [ 84 ] ; xx [ 107 ] = xx [ 78 ] * xx [ 99 ] ; xx [ 108 ] = xx
[ 78 ] * xx [ 102 ] ; xx [ 109 ] = - xx [ 82 ] * xx [ 84 ] ; xx [ 110 ] = xx
[ 82 ] * xx [ 99 ] ; xx [ 111 ] = xx [ 82 ] * xx [ 102 ] ; xx [ 112 ] = - xx
[ 83 ] * xx [ 84 ] ; xx [ 113 ] = xx [ 83 ] * xx [ 99 ] ; xx [ 114 ] = xx [
83 ] * xx [ 102 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 106 , xx + 69 ,
xx + 115 ) ; pm_math_matrix3x3Compose ( xx + 69 , xx + 115 , xx + 103 ) ; xx
[ 113 ] = - 3.51032649919941e-8 ; xx [ 114 ] = - 0.01413509085955482 ; xx [
115 ] = - 0.01414919005646189 ; pm_math_quatXform ( xx + 62 , xx + 113 , xx +
116 ) ; xx [ 85 ] = 0.01999999999999998 + xx [ 116 ] ; xx [ 100 ] =
0.03598789236668963 - xx [ 118 ] ; xx [ 113 ] = - xx [ 85 ] ; xx [ 114 ] = -
xx [ 117 ] ; xx [ 115 ] = xx [ 100 ] ; pm_math_matrix3x3PostCross ( xx + 103
, xx + 113 , xx + 118 ) ; xx [ 112 ] = 5.616506396641759e-3 ; xx [ 116 ] = xx
[ 88 ] * xx [ 84 ] ; xx [ 127 ] = xx [ 101 ] * xx [ 84 ] ; xx [ 128 ] = - xx
[ 101 ] * xx [ 99 ] ; xx [ 129 ] = xx [ 112 ] - xx [ 81 ] * xx [ 84 ] ; xx [
130 ] = xx [ 116 ] ; xx [ 131 ] = xx [ 127 ] ; xx [ 132 ] = xx [ 116 ] ; xx [
133 ] = xx [ 112 ] - xx [ 88 ] * xx [ 99 ] ; xx [ 134 ] = xx [ 128 ] ; xx [
135 ] = xx [ 127 ] ; xx [ 136 ] = xx [ 128 ] ; xx [ 137 ] = xx [ 112 ] - xx [
101 ] * xx [ 102 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 129 , xx + 69 ,
xx + 138 ) ; pm_math_matrix3x3Compose ( xx + 69 , xx + 138 , xx + 127 ) ;
pm_math_matrix3x3PostCross ( xx + 127 , xx + 113 , xx + 69 ) ;
pm_math_matrix3x3PreCross ( xx + 69 , xx + 113 , xx + 136 ) ; xx [ 116 ] = xx
[ 25 ] + xx [ 90 ] - xx [ 118 ] - xx [ 118 ] - xx [ 136 ] ; xx [ 145 ] = xx [
92 ] - xx [ 120 ] - xx [ 124 ] - xx [ 138 ] ; xx [ 146 ] =
5.739805426870663e-4 ; xx [ 147 ] = xx [ 146 ] + xx [ 98 ] - xx [ 126 ] - xx
[ 126 ] - xx [ 144 ] ; memcpy ( xx + 149 , xx + 147 , 1 * sizeof ( double ) )
; memcpy ( ii + 3 , ii + 0 , 1 * sizeof ( int ) ) ; ii [ 2 ] =
factorSymmetric ( xx + 149 , 1 , xx + 151 , xx + 150 , ii + 3 , ii + 4 ) ; if
( ii [ 4 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/Revolute5' has a degenerate mass distribution on its base side."
, neDiagMgr ) ; } xx [ 148 ] = xx [ 145 ] / xx [ 149 ] ; xx [ 150 ] = xx [
116 ] - xx [ 148 ] * xx [ 145 ] ; xx [ 151 ] = 1.322560116978622e-11 ; xx [
152 ] = xx [ 19 ] * state [ 11 ] ; xx [ 153 ] = cos ( xx [ 152 ] ) ; xx [ 155
] = sin ( xx [ 152 ] ) ; xx [ 156 ] = xx [ 151 ] * xx [ 153 ] + xx [ 155 ] ;
xx [ 152 ] = xx [ 156 ] * xx [ 156 ] ; xx [ 154 ] = xx [ 27 ] * xx [ 152 ] -
xx [ 30 ] ; xx [ 157 ] = xx [ 153 ] - xx [ 151 ] * xx [ 155 ] ; xx [ 153 ] =
xx [ 157 ] * xx [ 156 ] ; xx [ 158 ] = xx [ 27 ] * xx [ 153 ] ; xx [ 159 ] =
xx [ 91 ] - xx [ 119 ] - xx [ 121 ] - xx [ 137 ] ; xx [ 160 ] = xx [ 95 ] -
xx [ 123 ] - xx [ 125 ] - xx [ 141 ] ; xx [ 161 ] = xx [ 148 ] * xx [ 160 ] ;
xx [ 162 ] = xx [ 159 ] - xx [ 161 ] ; xx [ 164 ] = xx [ 150 ] * xx [ 154 ] -
xx [ 158 ] * xx [ 162 ] ; xx [ 151 ] = xx [ 93 ] - xx [ 121 ] - xx [ 119 ] -
xx [ 139 ] ; xx [ 163 ] = xx [ 151 ] - xx [ 161 ] ; xx [ 161 ] =
2.928804022221755e-4 ; xx [ 118 ] = xx [ 161 ] + xx [ 94 ] - xx [ 122 ] - xx
[ 122 ] - xx [ 140 ] ; xx [ 119 ] = xx [ 160 ] / xx [ 149 ] ; xx [ 121 ] = xx
[ 118 ] - xx [ 119 ] * xx [ 160 ] ; xx [ 126 ] = xx [ 163 ] * xx [ 154 ] - xx
[ 158 ] * xx [ 121 ] ; xx [ 122 ] = xx [ 104 ] - xx [ 72 ] ; xx [ 72 ] = xx [
110 ] - xx [ 74 ] ; xx [ 74 ] = xx [ 72 ] / xx [ 149 ] ; xx [ 104 ] = xx [
122 ] - xx [ 74 ] * xx [ 145 ] ; xx [ 110 ] = xx [ 103 ] - xx [ 69 ] ; xx [
69 ] = xx [ 109 ] - xx [ 71 ] ; xx [ 71 ] = xx [ 69 ] / xx [ 149 ] ; xx [ 103
] = xx [ 110 ] - xx [ 71 ] * xx [ 145 ] ; xx [ 109 ] = xx [ 104 ] * xx [ 154
] + xx [ 158 ] * xx [ 103 ] ; xx [ 166 ] = xx [ 107 ] - xx [ 73 ] ; xx [ 73 ]
= xx [ 166 ] - xx [ 74 ] * xx [ 160 ] ; xx [ 107 ] = xx [ 106 ] - xx [ 70 ] ;
xx [ 70 ] = xx [ 107 ] - xx [ 71 ] * xx [ 160 ] ; xx [ 106 ] = xx [ 73 ] * xx
[ 154 ] + xx [ 158 ] * xx [ 70 ] ; xx [ 167 ] = xx [ 109 ] * xx [ 154 ] - xx
[ 158 ] * xx [ 106 ] ; xx [ 168 ] = 0.09863174692125608 ; xx [ 169 ] = xx [
167 ] * xx [ 168 ] ; xx [ 171 ] = 0.1643079617607313 ; xx [ 172 ] = xx [ 131
] - xx [ 74 ] * xx [ 72 ] + xx [ 171 ] ; xx [ 174 ] = xx [ 71 ] * xx [ 72 ] ;
xx [ 175 ] = xx [ 130 ] - xx [ 174 ] ; xx [ 177 ] = xx [ 172 ] * xx [ 154 ] +
xx [ 158 ] * xx [ 175 ] ; xx [ 173 ] = xx [ 128 ] - xx [ 174 ] ; xx [ 176 ] =
xx [ 127 ] - xx [ 71 ] * xx [ 69 ] + xx [ 171 ] ; xx [ 179 ] = xx [ 173 ] *
xx [ 154 ] + xx [ 176 ] * xx [ 158 ] ; xx [ 174 ] = xx [ 177 ] * xx [ 154 ] +
xx [ 158 ] * xx [ 179 ] ; xx [ 178 ] = xx [ 168 ] * xx [ 174 ] ; xx [ 180 ] =
xx [ 22 ] + xx [ 164 ] * xx [ 154 ] - xx [ 126 ] * xx [ 158 ] - xx [ 169 ] -
xx [ 169 ] + xx [ 168 ] * xx [ 178 ] ; xx [ 165 ] = xx [ 162 ] * xx [ 154 ] +
xx [ 158 ] * xx [ 150 ] ; xx [ 150 ] = xx [ 121 ] * xx [ 154 ] + xx [ 158 ] *
xx [ 163 ] ; xx [ 121 ] = xx [ 103 ] * xx [ 154 ] - xx [ 158 ] * xx [ 104 ] ;
xx [ 103 ] = xx [ 70 ] * xx [ 154 ] - xx [ 158 ] * xx [ 73 ] ; xx [ 70 ] = xx
[ 121 ] * xx [ 154 ] - xx [ 103 ] * xx [ 158 ] ; xx [ 73 ] = xx [ 70 ] * xx [
168 ] ; xx [ 104 ] = xx [ 106 ] * xx [ 154 ] + xx [ 158 ] * xx [ 109 ] ; xx [
106 ] = xx [ 168 ] * xx [ 104 ] ; xx [ 109 ] = xx [ 175 ] * xx [ 154 ] - xx [
172 ] * xx [ 158 ] ; xx [ 162 ] = xx [ 176 ] * xx [ 154 ] - xx [ 158 ] * xx [
173 ] ; xx [ 169 ] = xx [ 109 ] * xx [ 154 ] + xx [ 162 ] * xx [ 158 ] ; xx [
163 ] = xx [ 168 ] * xx [ 169 ] ; xx [ 170 ] = xx [ 165 ] * xx [ 154 ] - xx [
158 ] * xx [ 150 ] + xx [ 73 ] - xx [ 106 ] - xx [ 168 ] * xx [ 163 ] ; xx [
155 ] = 7.638558896113468e-12 ; xx [ 172 ] = xx [ 179 ] * xx [ 154 ] - xx [
158 ] * xx [ 177 ] ; xx [ 173 ] = xx [ 172 ] * xx [ 168 ] ; xx [ 175 ] = xx [
70 ] - xx [ 173 ] ; xx [ 70 ] = 0.2887783607120545 ; xx [ 177 ] = xx [ 167 ]
- xx [ 178 ] ; xx [ 167 ] = xx [ 24 ] * xx [ 170 ] - xx [ 180 ] + xx [ 155 ]
* xx [ 175 ] + xx [ 70 ] * xx [ 177 ] ; xx [ 176 ] = 6.914460591940554e-3 ;
xx [ 178 ] = xx [ 103 ] * xx [ 154 ] + xx [ 121 ] * xx [ 158 ] ; xx [ 103 ] =
xx [ 168 ] * xx [ 178 ] ; xx [ 121 ] = xx [ 162 ] * xx [ 154 ] - xx [ 109 ] *
xx [ 158 ] ; xx [ 109 ] = xx [ 121 ] * xx [ 168 ] ; xx [ 162 ] = xx [ 176 ] +
xx [ 150 ] * xx [ 154 ] + xx [ 158 ] * xx [ 165 ] + xx [ 103 ] + xx [ 103 ] +
xx [ 168 ] * xx [ 109 ] ; xx [ 103 ] = xx [ 126 ] * xx [ 154 ] + xx [ 164 ] *
xx [ 158 ] - xx [ 106 ] + xx [ 73 ] - xx [ 168 ] * xx [ 173 ] ; xx [ 73 ] =
xx [ 178 ] + xx [ 109 ] ; xx [ 106 ] = xx [ 104 ] + xx [ 163 ] ; xx [ 109 ] =
xx [ 162 ] * xx [ 24 ] - xx [ 103 ] + xx [ 73 ] * xx [ 155 ] + xx [ 106 ] *
xx [ 70 ] ; xx [ 104 ] = 1.019168397480933 ; xx [ 126 ] = xx [ 104 ] + xx [
121 ] ; xx [ 121 ] = xx [ 73 ] * xx [ 24 ] - xx [ 175 ] + xx [ 126 ] * xx [
155 ] + xx [ 172 ] * xx [ 70 ] ; xx [ 150 ] = xx [ 104 ] + xx [ 174 ] ; xx [
163 ] = xx [ 106 ] * xx [ 24 ] - xx [ 177 ] + xx [ 155 ] * xx [ 169 ] + xx [
150 ] * xx [ 70 ] ; xx [ 165 ] = xx [ 109 ] * xx [ 24 ] - xx [ 167 ] + xx [
121 ] * xx [ 155 ] + xx [ 163 ] * xx [ 70 ] ; memcpy ( ii + 3 , ii + 0 , 1 *
sizeof ( int ) ) ; ii [ 2 ] = factorSymmetric ( xx + 165 , 1 , xx + 173 , xx
+ 164 , ii + 3 , ii + 4 ) ; if ( ii [ 4 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/Revolute8' has a degenerate mass distribution on its base side."
, neDiagMgr ) ; } xx [ 164 ] = xx [ 167 ] / xx [ 165 ] ; xx [ 173 ] = xx [
109 ] * xx [ 164 ] ; xx [ 178 ] = xx [ 147 ] * xx [ 148 ] ; xx [ 182 ] = ( xx
[ 152 ] + xx [ 157 ] * xx [ 157 ] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 152 ] = (
xx [ 145 ] - xx [ 178 ] ) * xx [ 182 ] ; xx [ 179 ] = xx [ 147 ] * xx [ 119 ]
; xx [ 183 ] = ( xx [ 160 ] - xx [ 179 ] ) * xx [ 182 ] ; xx [ 185 ] = xx [
72 ] - xx [ 147 ] * xx [ 74 ] ; xx [ 187 ] = xx [ 69 ] - xx [ 147 ] * xx [ 71
] ; xx [ 189 ] = ( xx [ 185 ] * xx [ 154 ] + xx [ 158 ] * xx [ 187 ] ) * xx [
182 ] ; xx [ 186 ] = xx [ 168 ] * xx [ 189 ] ; xx [ 188 ] = xx [ 152 ] * xx [
154 ] - xx [ 183 ] * xx [ 158 ] - xx [ 186 ] ; xx [ 184 ] = xx [ 97 ] - xx [
125 ] - xx [ 123 ] - xx [ 143 ] ; xx [ 123 ] = xx [ 184 ] - xx [ 179 ] ; xx [
90 ] = xx [ 96 ] - xx [ 124 ] - xx [ 120 ] - xx [ 142 ] ; xx [ 91 ] = xx [ 90
] - xx [ 178 ] ; xx [ 93 ] = ( xx [ 187 ] * xx [ 154 ] - xx [ 158 ] * xx [
185 ] ) * xx [ 182 ] ; xx [ 94 ] = xx [ 168 ] * xx [ 93 ] ; xx [ 95 ] = xx [
182 ] * ( xx [ 123 ] * xx [ 154 ] + xx [ 158 ] * xx [ 91 ] ) + xx [ 94 ] ; xx
[ 92 ] = ( xx [ 91 ] * xx [ 154 ] - xx [ 158 ] * xx [ 123 ] ) * xx [ 182 ] -
xx [ 186 ] ; xx [ 91 ] = xx [ 95 ] * xx [ 24 ] - xx [ 92 ] + xx [ 155 ] * xx
[ 93 ] + xx [ 70 ] * xx [ 189 ] ; xx [ 96 ] = xx [ 91 ] * xx [ 164 ] ; xx [
98 ] = xx [ 109 ] / xx [ 165 ] ; xx [ 120 ] = xx [ 183 ] * xx [ 154 ] + xx [
152 ] * xx [ 158 ] + xx [ 94 ] ; xx [ 94 ] = xx [ 91 ] * xx [ 98 ] ; xx [ 123
] = xx [ 147 ] / xx [ 149 ] ; xx [ 125 ] = ( xx [ 147 ] - xx [ 147 ] * xx [
123 ] ) * xx [ 182 ] * xx [ 182 ] ; xx [ 124 ] = xx [ 91 ] / xx [ 165 ] ; xx
[ 136 ] = 1.007661317996925e-3 ; xx [ 190 ] = xx [ 180 ] - xx [ 167 ] * xx [
164 ] ; xx [ 191 ] = xx [ 170 ] - xx [ 173 ] ; xx [ 192 ] = xx [ 188 ] - xx [
96 ] ; xx [ 193 ] = xx [ 103 ] - xx [ 173 ] ; xx [ 194 ] = xx [ 162 ] - xx [
109 ] * xx [ 98 ] ; xx [ 195 ] = xx [ 120 ] - xx [ 94 ] ; xx [ 196 ] = xx [
92 ] - xx [ 96 ] ; xx [ 197 ] = xx [ 95 ] - xx [ 94 ] ; xx [ 198 ] = xx [ 125
] - xx [ 91 ] * xx [ 124 ] + xx [ 136 ] ; pm_math_matrix3x3ComposeTranspose (
xx + 190 , xx + 38 , xx + 199 ) ; pm_math_matrix3x3Compose ( xx + 38 , xx +
199 , xx + 190 ) ; xx [ 94 ] = xx [ 121 ] / xx [ 165 ] ; xx [ 96 ] = xx [ 163
] / xx [ 165 ] ; xx [ 137 ] = xx [ 105 ] - xx [ 75 ] ; xx [ 75 ] = xx [ 111 ]
- xx [ 77 ] ; xx [ 77 ] = xx [ 75 ] / xx [ 149 ] ; xx [ 105 ] = ( xx [ 137 ]
- xx [ 77 ] * xx [ 145 ] ) * xx [ 182 ] ; xx [ 111 ] = xx [ 108 ] - xx [ 76 ]
; xx [ 76 ] = ( xx [ 111 ] - xx [ 77 ] * xx [ 160 ] ) * xx [ 182 ] ; xx [ 108
] = xx [ 74 ] * xx [ 75 ] ; xx [ 138 ] = xx [ 134 ] - xx [ 108 ] ; xx [ 140 ]
= xx [ 71 ] * xx [ 75 ] ; xx [ 141 ] = xx [ 133 ] - xx [ 140 ] ; xx [ 143 ] =
( xx [ 138 ] * xx [ 154 ] + xx [ 158 ] * xx [ 141 ] ) * xx [ 182 ] ; xx [ 139
] = xx [ 105 ] * xx [ 154 ] - xx [ 76 ] * xx [ 158 ] - xx [ 168 ] * xx [ 143
] ; xx [ 142 ] = ( xx [ 141 ] * xx [ 154 ] - xx [ 158 ] * xx [ 138 ] ) * xx [
182 ] ; xx [ 138 ] = xx [ 76 ] * xx [ 154 ] + xx [ 105 ] * xx [ 158 ] + xx [
168 ] * xx [ 142 ] ; xx [ 76 ] = xx [ 138 ] * xx [ 24 ] - xx [ 139 ] + xx [
155 ] * xx [ 142 ] + xx [ 70 ] * xx [ 143 ] ; xx [ 105 ] = xx [ 76 ] / xx [
165 ] ; xx [ 141 ] = ( xx [ 75 ] - xx [ 147 ] * xx [ 77 ] ) * xx [ 182 ] * xx
[ 182 ] ; xx [ 199 ] = xx [ 175 ] - xx [ 167 ] * xx [ 94 ] ; xx [ 200 ] = xx
[ 177 ] - xx [ 167 ] * xx [ 96 ] ; xx [ 201 ] = xx [ 139 ] - xx [ 167 ] * xx
[ 105 ] ; xx [ 202 ] = xx [ 73 ] - xx [ 109 ] * xx [ 94 ] ; xx [ 203 ] = xx [
106 ] - xx [ 109 ] * xx [ 96 ] ; xx [ 204 ] = xx [ 138 ] - xx [ 109 ] * xx [
105 ] ; xx [ 205 ] = xx [ 93 ] - xx [ 91 ] * xx [ 94 ] ; xx [ 206 ] = xx [
189 ] - xx [ 91 ] * xx [ 96 ] ; xx [ 207 ] = xx [ 141 ] - xx [ 91 ] * xx [
105 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 199 , xx + 38 , xx + 208 ) ;
pm_math_matrix3x3Compose ( xx + 38 , xx + 208 , xx + 199 ) ; xx [ 97 ] =
8.500000000000068e-3 ; xx [ 144 ] = xx [ 70 ] * xx [ 32 ] ; xx [ 152 ] = xx [
144 ] * xx [ 28 ] ; xx [ 173 ] = xx [ 70 ] * xx [ 31 ] ; xx [ 174 ] = xx [ 33
] * xx [ 97 ] + xx [ 173 ] ; xx [ 178 ] = xx [ 97 ] * xx [ 32 ] ; xx [ 185 ]
= - xx [ 144 ] ; xx [ 186 ] = xx [ 174 ] ; xx [ 187 ] = - xx [ 178 ] ;
pm_math_cross3 ( xx + 31 , xx + 185 , xx + 209 ) ; xx [ 179 ] =
1.491888679546362e-8 + xx [ 97 ] + ( xx [ 152 ] + xx [ 209 ] ) * xx [ 27 ] ;
xx [ 97 ] = 6.014644173113667e-3 + ( xx [ 210 ] - xx [ 174 ] * xx [ 28 ] ) *
xx [ 27 ] ; xx [ 174 ] = 6.006161522745479e-3 - ( xx [ 27 ] * ( xx [ 211 ] +
xx [ 178 ] * xx [ 28 ] ) - xx [ 70 ] ) ; xx [ 185 ] = - xx [ 179 ] ; xx [ 186
] = - xx [ 97 ] ; xx [ 187 ] = xx [ 174 ] ; pm_math_matrix3x3PostCross ( xx +
199 , xx + 185 , xx + 209 ) ; xx [ 178 ] = xx [ 163 ] * xx [ 94 ] ; xx [ 181
] = ( xx [ 129 ] - xx [ 140 ] ) * xx [ 182 ] ; xx [ 140 ] = ( xx [ 132 ] - xx
[ 108 ] ) * xx [ 182 ] ; xx [ 108 ] = xx [ 181 ] * xx [ 154 ] - xx [ 140 ] *
xx [ 158 ] ; xx [ 183 ] = xx [ 76 ] * xx [ 94 ] ; xx [ 208 ] = xx [ 140 ] *
xx [ 154 ] + xx [ 181 ] * xx [ 158 ] ; xx [ 140 ] = xx [ 76 ] * xx [ 96 ] ;
xx [ 158 ] = ( xx [ 135 ] - xx [ 77 ] * xx [ 75 ] + xx [ 171 ] ) * xx [ 182 ]
* xx [ 182 ] ; xx [ 218 ] = xx [ 126 ] - xx [ 121 ] * xx [ 94 ] ; xx [ 219 ]
= xx [ 172 ] - xx [ 178 ] ; xx [ 220 ] = xx [ 108 ] - xx [ 183 ] ; xx [ 221 ]
= xx [ 169 ] - xx [ 178 ] ; xx [ 222 ] = xx [ 150 ] - xx [ 163 ] * xx [ 96 ]
; xx [ 223 ] = xx [ 208 ] - xx [ 140 ] ; xx [ 224 ] = xx [ 142 ] - xx [ 183 ]
; xx [ 225 ] = xx [ 143 ] - xx [ 140 ] ; xx [ 226 ] = xx [ 158 ] - xx [ 76 ]
* xx [ 105 ] + xx [ 104 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 218 , xx
+ 38 , xx + 227 ) ; pm_math_matrix3x3Compose ( xx + 38 , xx + 227 , xx + 218
) ; pm_math_matrix3x3PostCross ( xx + 218 , xx + 185 , xx + 228 ) ;
pm_math_matrix3x3PreCross ( xx + 228 , xx + 185 , xx + 238 ) ; xx [ 140 ] =
3.385655379519181e-4 ; xx [ 178 ] = xx [ 19 ] * state [ 7 ] ; xx [ 181 ] =
cos ( xx [ 178 ] ) ; xx [ 183 ] = 0.9237444950219811 ; xx [ 227 ] = sin ( xx
[ 178 ] ) ; xx [ 178 ] = xx [ 140 ] * xx [ 181 ] - xx [ 183 ] * xx [ 227 ] ;
xx [ 182 ] = xx [ 178 ] * xx [ 178 ] ; xx [ 237 ] = 1.394282752982812e-4 ; xx
[ 247 ] = 0.3830091041342462 ; xx [ 249 ] = xx [ 237 ] * xx [ 181 ] - xx [
247 ] * xx [ 227 ] ; xx [ 248 ] = ( xx [ 182 ] + xx [ 249 ] * xx [ 249 ] ) *
xx [ 27 ] - xx [ 30 ] ; xx [ 250 ] = xx [ 247 ] * xx [ 181 ] + xx [ 237 ] *
xx [ 227 ] ; xx [ 237 ] = xx [ 178 ] * xx [ 250 ] ; xx [ 247 ] = xx [ 183 ] *
xx [ 181 ] + xx [ 140 ] * xx [ 227 ] ; xx [ 140 ] = xx [ 249 ] * xx [ 247 ] ;
xx [ 181 ] = xx [ 27 ] * ( xx [ 237 ] - xx [ 140 ] ) ; xx [ 183 ] = xx [ 249
] * xx [ 250 ] ; xx [ 227 ] = xx [ 178 ] * xx [ 247 ] ; xx [ 251 ] = ( xx [
183 ] + xx [ 227 ] ) * xx [ 27 ] ; xx [ 253 ] = ( xx [ 140 ] + xx [ 237 ] ) *
xx [ 27 ] ; xx [ 140 ] = ( xx [ 182 ] + xx [ 247 ] * xx [ 247 ] ) * xx [ 27 ]
- xx [ 30 ] ; xx [ 237 ] = xx [ 250 ] * xx [ 247 ] ; xx [ 255 ] = xx [ 249 ]
* xx [ 178 ] ; xx [ 257 ] = xx [ 27 ] * ( xx [ 237 ] - xx [ 255 ] ) ; xx [
256 ] = xx [ 27 ] * ( xx [ 227 ] - xx [ 183 ] ) ; xx [ 183 ] = ( xx [ 237 ] +
xx [ 255 ] ) * xx [ 27 ] ; xx [ 227 ] = ( xx [ 182 ] + xx [ 250 ] * xx [ 250
] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 258 ] = xx [ 248 ] ; xx [ 259 ] = xx [ 181
] ; xx [ 260 ] = - xx [ 251 ] ; xx [ 261 ] = - xx [ 253 ] ; xx [ 262 ] = xx [
140 ] ; xx [ 263 ] = xx [ 257 ] ; xx [ 264 ] = xx [ 256 ] ; xx [ 265 ] = xx [
183 ] ; xx [ 266 ] = xx [ 227 ] ; xx [ 182 ] = 4.171638582022011e-3 ; xx [
237 ] = 3.547683786503185e-3 ; xx [ 252 ] = 4.199872026499053e-3 ; memcpy (
ii + 3 , ii + 0 , 1 * sizeof ( int ) ) ; ii [ 2 ] = factorSymmetric ( xx +
252 , 1 , xx + 267 , xx + 255 , ii + 3 , ii + 4 ) ; if ( ii [ 4 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/Revolute9' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 255 ] = xx [ 237 ] / xx [ 252 ] ; xx [ 267 ] = xx [
237 ] - xx [ 237 ] * xx [ 255 ] ; xx [ 270 ] = 1.042815145693102e-3 ; xx [
274 ] = xx [ 182 ] * xx [ 248 ] ; xx [ 275 ] = - xx [ 182 ] * xx [ 253 ] ; xx
[ 276 ] = xx [ 182 ] * xx [ 256 ] ; xx [ 277 ] = xx [ 181 ] * xx [ 267 ] ; xx
[ 278 ] = xx [ 140 ] * xx [ 267 ] ; xx [ 279 ] = xx [ 183 ] * xx [ 267 ] ; xx
[ 280 ] = - xx [ 270 ] * xx [ 251 ] ; xx [ 281 ] = xx [ 270 ] * xx [ 257 ] ;
xx [ 282 ] = xx [ 270 ] * xx [ 227 ] ; pm_math_matrix3x3Compose ( xx + 258 ,
xx + 274 , xx + 283 ) ; xx [ 254 ] = 7.003013843705662e-3 ; xx [ 267 ] = xx [
254 ] / xx [ 252 ] ; xx [ 268 ] = xx [ 237 ] * xx [ 267 ] ; xx [ 271 ] =
4.103171307969754e-3 ; xx [ 272 ] = xx [ 271 ] / xx [ 252 ] ; xx [ 273 ] = xx
[ 237 ] * xx [ 272 ] ; xx [ 275 ] = xx [ 268 ] * xx [ 248 ] + xx [ 251 ] * xx
[ 273 ] ; xx [ 269 ] = xx [ 275 ] * xx [ 181 ] ; xx [ 276 ] = xx [ 253 ] * xx
[ 268 ] + xx [ 273 ] * xx [ 257 ] ; xx [ 274 ] = xx [ 276 ] * xx [ 181 ] ; xx
[ 277 ] = xx [ 273 ] * xx [ 227 ] - xx [ 268 ] * xx [ 256 ] ; xx [ 268 ] = xx
[ 277 ] * xx [ 181 ] ; xx [ 273 ] = xx [ 275 ] * xx [ 140 ] ; xx [ 278 ] = xx
[ 276 ] * xx [ 140 ] ; xx [ 280 ] = xx [ 277 ] * xx [ 140 ] ; xx [ 282 ] = xx
[ 275 ] * xx [ 183 ] ; xx [ 292 ] = xx [ 276 ] * xx [ 183 ] ; xx [ 276 ] = xx
[ 277 ] * xx [ 183 ] ; xx [ 294 ] = xx [ 269 ] ; xx [ 295 ] = - xx [ 274 ] ;
xx [ 296 ] = - xx [ 268 ] ; xx [ 297 ] = xx [ 273 ] ; xx [ 298 ] = - xx [ 278
] ; xx [ 299 ] = - xx [ 280 ] ; xx [ 300 ] = xx [ 282 ] ; xx [ 301 ] = - xx [
292 ] ; xx [ 302 ] = - xx [ 276 ] ; xx [ 275 ] = 0.04062101508027026 ; xx [
277 ] = - xx [ 247 ] ; xx [ 279 ] = - xx [ 250 ] ; xx [ 303 ] = xx [ 249 ] ;
xx [ 304 ] = xx [ 277 ] ; xx [ 305 ] = xx [ 279 ] ; xx [ 281 ] =
0.06932918701200035 ; xx [ 293 ] = xx [ 281 ] * xx [ 247 ] ; xx [ 306 ] = xx
[ 275 ] * xx [ 250 ] + xx [ 249 ] * xx [ 281 ] ; xx [ 250 ] = xx [ 275 ] * xx
[ 247 ] ; xx [ 308 ] = - xx [ 293 ] ; xx [ 309 ] = - xx [ 306 ] ; xx [ 310 ]
= xx [ 250 ] ; pm_math_cross3 ( xx + 303 , xx + 308 , xx + 311 ) ; xx [ 247 ]
= 4.647672291017887e-12 ; xx [ 303 ] = 6.591343902079979e-9 ; xx [ 307 ] = -
( xx [ 275 ] + ( xx [ 311 ] - xx [ 178 ] * xx [ 293 ] ) * xx [ 27 ] ) ; xx [
308 ] = xx [ 247 ] - ( xx [ 312 ] - xx [ 178 ] * xx [ 306 ] ) * xx [ 27 ] ;
xx [ 309 ] = - ( xx [ 303 ] + xx [ 281 ] + xx [ 27 ] * ( xx [ 313 ] + xx [
178 ] * xx [ 250 ] ) ) ; pm_math_matrix3x3PostCross ( xx + 294 , xx + 307 ,
xx + 310 ) ; xx [ 250 ] = 0.1010110480957104 ; xx [ 275 ] = xx [ 250 ] - xx [
254 ] * xx [ 267 ] ; xx [ 281 ] = xx [ 271 ] * xx [ 267 ] ; xx [ 293 ] = xx [
250 ] - xx [ 271 ] * xx [ 272 ] ; xx [ 319 ] = xx [ 248 ] * xx [ 275 ] - xx [
251 ] * xx [ 281 ] ; xx [ 320 ] = xx [ 281 ] * xx [ 257 ] - xx [ 253 ] * xx [
275 ] ; xx [ 321 ] = xx [ 256 ] * xx [ 275 ] + xx [ 281 ] * xx [ 227 ] ; xx [
322 ] = xx [ 250 ] * xx [ 181 ] ; xx [ 323 ] = xx [ 250 ] * xx [ 140 ] ; xx [
324 ] = xx [ 250 ] * xx [ 183 ] ; xx [ 325 ] = xx [ 281 ] * xx [ 248 ] - xx [
251 ] * xx [ 293 ] ; xx [ 326 ] = xx [ 257 ] * xx [ 293 ] - xx [ 253 ] * xx [
281 ] ; xx [ 327 ] = xx [ 227 ] * xx [ 293 ] + xx [ 281 ] * xx [ 256 ] ;
pm_math_matrix3x3Compose ( xx + 258 , xx + 319 , xx + 293 ) ;
pm_math_matrix3x3PostCross ( xx + 293 , xx + 307 , xx + 256 ) ;
pm_math_matrix3x3PreCross ( xx + 256 , xx + 307 , xx + 319 ) ; xx [ 140 ] =
1.468769182780734e-8 ; xx [ 181 ] = 1.468769182788388e-8 ; xx [ 328 ] = xx [
13 ] + xx [ 190 ] - xx [ 209 ] - xx [ 209 ] - xx [ 238 ] + xx [ 283 ] - xx [
310 ] - xx [ 310 ] - xx [ 319 ] ; xx [ 329 ] = xx [ 191 ] - xx [ 210 ] - xx [
212 ] - xx [ 239 ] + xx [ 284 ] - xx [ 311 ] - xx [ 313 ] - xx [ 320 ] ; xx [
330 ] = xx [ 192 ] - xx [ 211 ] - xx [ 215 ] - xx [ 240 ] + xx [ 285 ] - xx [
312 ] - xx [ 316 ] - xx [ 321 ] ; xx [ 331 ] = xx [ 193 ] - xx [ 212 ] - xx [
210 ] - xx [ 241 ] + xx [ 286 ] - xx [ 313 ] - xx [ 311 ] - xx [ 322 ] ; xx [
332 ] = xx [ 140 ] + xx [ 194 ] - xx [ 213 ] - xx [ 213 ] - xx [ 242 ] + xx [
287 ] - xx [ 314 ] - xx [ 314 ] - xx [ 323 ] ; xx [ 333 ] = xx [ 195 ] - xx [
214 ] - xx [ 216 ] - xx [ 243 ] + xx [ 288 ] - xx [ 315 ] - xx [ 317 ] - xx [
324 ] ; xx [ 334 ] = xx [ 196 ] - xx [ 215 ] - xx [ 211 ] - xx [ 244 ] + xx [
289 ] - xx [ 316 ] - xx [ 312 ] - xx [ 325 ] ; xx [ 335 ] = xx [ 197 ] - xx [
216 ] - xx [ 214 ] - xx [ 245 ] + xx [ 290 ] - xx [ 317 ] - xx [ 315 ] - xx [
326 ] ; xx [ 336 ] = xx [ 181 ] + xx [ 198 ] - xx [ 217 ] - xx [ 217 ] - xx [
246 ] + xx [ 291 ] - xx [ 318 ] - xx [ 318 ] - xx [ 327 ] ;
pm_math_matrix3x3Xform ( xx + 328 , xx + 16 , xx + 190 ) ; xx [ 209 ] = xx [
199 ] - xx [ 228 ] - ( xx [ 256 ] - xx [ 269 ] ) ; xx [ 210 ] = xx [ 200 ] -
xx [ 231 ] - ( xx [ 274 ] + xx [ 259 ] ) ; xx [ 211 ] = xx [ 201 ] - xx [ 234
] - ( xx [ 268 ] + xx [ 262 ] ) ; xx [ 212 ] = xx [ 202 ] - xx [ 229 ] - ( xx
[ 257 ] - xx [ 273 ] ) ; xx [ 213 ] = xx [ 203 ] - xx [ 232 ] - ( xx [ 278 ]
+ xx [ 260 ] ) ; xx [ 214 ] = xx [ 204 ] - xx [ 235 ] - ( xx [ 280 ] + xx [
263 ] ) ; xx [ 215 ] = xx [ 205 ] - xx [ 230 ] - ( xx [ 258 ] - xx [ 282 ] )
; xx [ 216 ] = xx [ 206 ] - xx [ 233 ] - ( xx [ 292 ] + xx [ 261 ] ) ; xx [
217 ] = xx [ 207 ] - xx [ 236 ] - ( xx [ 276 ] + xx [ 264 ] ) ; xx [ 183 ] =
1.636087754743471e-14 ; xx [ 193 ] = 6.591343902059674e-9 ; xx [ 195 ] =
4.647672291003569e-12 ; xx [ 197 ] = - xx [ 183 ] ; xx [ 198 ] = - xx [ 193 ]
; xx [ 199 ] = - xx [ 195 ] ; pm_math_matrix3x3Xform ( xx + 209 , xx + 197 ,
xx + 200 ) ; xx [ 194 ] = xx [ 190 ] + xx [ 200 ] ; xx [ 196 ] = xx [ 191 ] +
xx [ 201 ] ; xx [ 190 ] = xx [ 192 ] + xx [ 202 ] ; xx [ 200 ] = xx [ 194 ] ;
xx [ 201 ] = xx [ 196 ] ; xx [ 202 ] = xx [ 190 ] ;
pm_math_matrix3x3TransposeXform ( xx + 209 , xx + 16 , xx + 203 ) ; xx [ 191
] = 7.020632995802199e-4 ; xx [ 227 ] = xx [ 191 ] + xx [ 218 ] + xx [ 293 ]
; xx [ 228 ] = xx [ 219 ] + xx [ 294 ] ; xx [ 229 ] = xx [ 220 ] + xx [ 295 ]
; xx [ 230 ] = xx [ 221 ] + xx [ 296 ] ; xx [ 231 ] = xx [ 191 ] + xx [ 222 ]
+ xx [ 297 ] ; xx [ 232 ] = xx [ 223 ] + xx [ 298 ] ; xx [ 233 ] = xx [ 224 ]
+ xx [ 299 ] ; xx [ 234 ] = xx [ 225 ] + xx [ 300 ] ; xx [ 235 ] = xx [ 191 ]
+ xx [ 226 ] + xx [ 301 ] ; pm_math_matrix3x3Xform ( xx + 227 , xx + 197 , xx
+ 218 ) ; xx [ 191 ] = xx [ 203 ] + xx [ 218 ] ; xx [ 192 ] = xx [ 204 ] + xx
[ 219 ] ; xx [ 203 ] = xx [ 205 ] + xx [ 220 ] ; xx [ 204 ] = xx [ 191 ] ; xx
[ 205 ] = xx [ 192 ] ; xx [ 206 ] = xx [ 203 ] ; xx [ 207 ] =
1.755163250776454e-6 ; xx [ 218 ] = 0.7076051973836626 ; xx [ 219 ] =
0.7066080134222561 ; xx [ 221 ] = xx [ 207 ] ; xx [ 222 ] = xx [ 218 ] ; xx [
223 ] = - xx [ 219 ] ; pm_math_matrix3x3Xform ( xx + 328 , xx + 221 , xx +
224 ) ; xx [ 220 ] = 4.66078512037031e-9 ; xx [ 236 ] = 1.156888459016026e-14
; xx [ 238 ] = 8.157423606846605e-18 ; xx [ 240 ] = xx [ 220 ] ; xx [ 241 ] =
- xx [ 236 ] ; xx [ 242 ] = - xx [ 238 ] ; pm_math_matrix3x3Xform ( xx + 209
, xx + 240 , xx + 243 ) ; xx [ 239 ] = xx [ 224 ] + xx [ 243 ] ; xx [ 246 ] =
xx [ 225 ] + xx [ 244 ] ; xx [ 224 ] = xx [ 226 ] + xx [ 245 ] ; xx [ 243 ] =
xx [ 239 ] ; xx [ 244 ] = xx [ 246 ] ; xx [ 245 ] = xx [ 224 ] ;
pm_math_matrix3x3TransposeXform ( xx + 209 , xx + 221 , xx + 256 ) ;
pm_math_matrix3x3Xform ( xx + 227 , xx + 240 , xx + 259 ) ; xx [ 225 ] = xx [
256 ] + xx [ 259 ] ; xx [ 226 ] = xx [ 257 ] + xx [ 260 ] ; xx [ 248 ] = xx [
258 ] + xx [ 261 ] ; xx [ 256 ] = xx [ 225 ] ; xx [ 257 ] = xx [ 226 ] ; xx [
258 ] = xx [ 248 ] ; xx [ 251 ] = pm_math_dot3 ( xx + 16 , xx + 243 ) +
pm_math_dot3 ( xx + 197 , xx + 256 ) ; xx [ 253 ] = 1.755163248902065e-6 ; xx
[ 259 ] = 0.7066080134200763 ; xx [ 260 ] = 0.7076051973858394 ; xx [ 261 ] =
xx [ 253 ] ; xx [ 262 ] = xx [ 259 ] ; xx [ 263 ] = xx [ 260 ] ;
pm_math_matrix3x3Xform ( xx + 328 , xx + 261 , xx + 264 ) ; xx [ 268 ] =
4.660785137486138e-9 ; xx [ 269 ] = 1.156888457780551e-14 ; xx [ 273 ] =
8.157423598135056e-18 ; xx [ 280 ] = xx [ 268 ] ; xx [ 281 ] = - xx [ 269 ] ;
xx [ 282 ] = - xx [ 273 ] ; pm_math_matrix3x3Xform ( xx + 209 , xx + 280 , xx
+ 274 ) ; xx [ 278 ] = xx [ 264 ] + xx [ 274 ] ; xx [ 283 ] = xx [ 265 ] + xx
[ 275 ] ; xx [ 264 ] = xx [ 266 ] + xx [ 276 ] ; xx [ 274 ] = xx [ 278 ] ; xx
[ 275 ] = xx [ 283 ] ; xx [ 276 ] = xx [ 264 ] ;
pm_math_matrix3x3TransposeXform ( xx + 209 , xx + 261 , xx + 284 ) ;
pm_math_matrix3x3Xform ( xx + 227 , xx + 280 , xx + 287 ) ; xx [ 265 ] = xx [
284 ] + xx [ 287 ] ; xx [ 266 ] = xx [ 285 ] + xx [ 288 ] ; xx [ 284 ] = xx [
286 ] + xx [ 289 ] ; xx [ 285 ] = xx [ 265 ] ; xx [ 286 ] = xx [ 266 ] ; xx [
287 ] = xx [ 284 ] ; xx [ 289 ] = pm_math_dot3 ( xx + 16 , xx + 274 ) +
pm_math_dot3 ( xx + 197 , xx + 285 ) ; xx [ 290 ] = pm_math_dot3 ( xx + 221 ,
xx + 274 ) + pm_math_dot3 ( xx + 240 , xx + 285 ) ; xx [ 291 ] = pm_math_dot3
( xx + 16 , xx + 200 ) + pm_math_dot3 ( xx + 197 , xx + 204 ) ; xx [ 292 ] =
xx [ 251 ] ; xx [ 293 ] = xx [ 289 ] ; xx [ 294 ] = xx [ 251 ] ; xx [ 295 ] =
pm_math_dot3 ( xx + 221 , xx + 243 ) + pm_math_dot3 ( xx + 240 , xx + 256 ) ;
xx [ 296 ] = xx [ 290 ] ; xx [ 297 ] = xx [ 289 ] ; xx [ 298 ] = xx [ 290 ] ;
xx [ 299 ] = pm_math_dot3 ( xx + 261 , xx + 274 ) + pm_math_dot3 ( xx + 280 ,
xx + 285 ) ; ii [ 5 ] = factorSymmetric ( xx + 291 , 3 , xx + 310 , xx + 200
, ii + 2 , ii + 6 ) ; xx [ 310 ] = xx [ 291 ] ; xx [ 311 ] = xx [ 292 ] ; xx
[ 312 ] = xx [ 293 ] ; xx [ 313 ] = xx [ 294 ] ; xx [ 314 ] = xx [ 295 ] ; xx
[ 315 ] = xx [ 296 ] ; xx [ 316 ] = xx [ 297 ] ; xx [ 317 ] = xx [ 298 ] ; xx
[ 318 ] = xx [ 299 ] ; if ( ii [ 6 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/simple_shin_1_RIGID/6-DOF Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 285 ] = - xx [ 28 ] ; xx [ 286 ] = xx [ 31 ] ; xx [
287 ] = xx [ 32 ] ; xx [ 288 ] = xx [ 33 ] ; xx [ 204 ] = xx [ 19 ] * input [
3 ] ; xx [ 205 ] = cos ( xx [ 204 ] ) ; xx [ 206 ] = 9.351995539151417e-12 ;
xx [ 243 ] = xx [ 19 ] * input [ 4 ] ; xx [ 244 ] = cos ( xx [ 243 ] ) ; xx [
245 ] = xx [ 206 ] * xx [ 244 ] ; xx [ 251 ] = 2.645143785344124e-11 ; xx [
256 ] = sin ( xx [ 243 ] ) ; xx [ 243 ] = xx [ 251 ] * xx [ 256 ] ; xx [ 257
] = xx [ 206 ] * xx [ 243 ] ; xx [ 258 ] = 0.7071067811865476 ; xx [ 274 ] =
xx [ 258 ] * xx [ 256 ] ; xx [ 276 ] = xx [ 245 ] + xx [ 257 ] + xx [ 274 ] ;
xx [ 275 ] = sin ( xx [ 204 ] ) ; xx [ 204 ] = xx [ 258 ] * xx [ 244 ] ; xx [
244 ] = xx [ 206 ] * xx [ 256 ] ; xx [ 256 ] = xx [ 258 ] * xx [ 243 ] ; xx [
243 ] = xx [ 204 ] - xx [ 244 ] + xx [ 256 ] ; xx [ 289 ] = xx [ 205 ] * xx [
276 ] + xx [ 275 ] * xx [ 243 ] ; xx [ 206 ] = xx [ 19 ] * input [ 2 ] ; xx [
290 ] = cos ( xx [ 206 ] ) ; xx [ 300 ] = xx [ 245 ] - xx [ 257 ] - xx [ 274
] ; xx [ 245 ] = xx [ 204 ] - xx [ 256 ] + xx [ 244 ] ; xx [ 204 ] = xx [ 205
] * xx [ 300 ] + xx [ 245 ] * xx [ 275 ] ; xx [ 244 ] = sin ( xx [ 206 ] ) ;
xx [ 206 ] = xx [ 289 ] * xx [ 290 ] + xx [ 204 ] * xx [ 244 ] ; xx [ 256 ] =
xx [ 204 ] * xx [ 290 ] - xx [ 289 ] * xx [ 244 ] ; xx [ 204 ] = xx [ 205 ] *
xx [ 243 ] - xx [ 275 ] * xx [ 276 ] ; xx [ 243 ] = xx [ 245 ] * xx [ 205 ] -
xx [ 275 ] * xx [ 300 ] ; xx [ 257 ] = xx [ 290 ] * xx [ 204 ] - xx [ 244 ] *
xx [ 243 ] ; xx [ 205 ] = xx [ 290 ] * xx [ 243 ] + xx [ 244 ] * xx [ 204 ] ;
xx [ 319 ] = xx [ 206 ] ; xx [ 320 ] = xx [ 256 ] ; xx [ 321 ] = xx [ 257 ] ;
xx [ 322 ] = xx [ 205 ] ; pm_math_quatCompose ( xx + 285 , xx + 319 , xx +
323 ) ; pm_math_quatInverseXform ( xx + 323 , xx + 16 , xx + 274 ) ; xx [ 328
] = 0.9240143931192876 ; xx [ 329 ] = - 0.382357687652353 ; xx [ 330 ] =
4.753479711208553e-7 ; xx [ 331 ] = - 1.146448133648799e-6 ;
pm_math_quatComposeInverse ( xx + 0 , xx + 328 , xx + 332 ) ;
pm_math_quatCompose ( xx + 332 , xx + 323 , xx + 0 ) ; xx [ 204 ] = xx [ 1 ]
* xx [ 275 ] ; xx [ 243 ] = xx [ 2 ] * xx [ 275 ] ; xx [ 245 ] = xx [ 3 ] *
xx [ 276 ] ; xx [ 300 ] = - ( xx [ 243 ] + xx [ 245 ] ) ; xx [ 301 ] = xx [
204 ] ; xx [ 302 ] = xx [ 1 ] * xx [ 276 ] ; pm_math_cross3 ( xx + 1 , xx +
300 , xx + 304 ) ; xx [ 289 ] = xx [ 276 ] + ( xx [ 0 ] * xx [ 204 ] + xx [
305 ] ) * xx [ 27 ] ; xx [ 300 ] = xx [ 256 ] ; xx [ 301 ] = xx [ 257 ] ; xx
[ 302 ] = xx [ 205 ] ; xx [ 204 ] = xx [ 205 ] * xx [ 24 ] ; xx [ 304 ] = xx
[ 24 ] * xx [ 256 ] + xx [ 257 ] ; xx [ 337 ] = - xx [ 204 ] ; xx [ 338 ] = -
xx [ 205 ] ; xx [ 339 ] = xx [ 304 ] ; pm_math_cross3 ( xx + 300 , xx + 337 ,
xx + 340 ) ; xx [ 305 ] = xx [ 27 ] * ( xx [ 342 ] - xx [ 206 ] * xx [ 304 ]
) ; pm_math_quatCompose ( xx + 332 , xx + 285 , xx + 343 ) ;
pm_math_quatCompose ( xx + 343 , xx + 319 , xx + 348 ) ; xx [ 304 ] = xx [
206 ] * xx [ 205 ] ; xx [ 306 ] = xx [ 24 ] + ( xx [ 304 ] + xx [ 341 ] ) *
xx [ 27 ] ; xx [ 319 ] = xx [ 306 ] * xx [ 349 ] ; xx [ 321 ] = xx [ 306 ] *
xx [ 350 ] ; xx [ 322 ] = xx [ 351 ] * xx [ 305 ] ; xx [ 337 ] = - ( xx [ 321
] + xx [ 322 ] ) ; xx [ 338 ] = xx [ 319 ] ; xx [ 339 ] = xx [ 349 ] * xx [
305 ] ; pm_math_cross3 ( xx + 349 , xx + 337 , xx + 353 ) ; xx [ 320 ] = xx [
305 ] + ( xx [ 348 ] * xx [ 319 ] + xx [ 354 ] ) * xx [ 27 ] ; xx [ 319 ] =
xx [ 320 ] / xx [ 165 ] ; xx [ 337 ] = xx [ 167 ] * xx [ 319 ] ; xx [ 338 ] =
xx [ 109 ] * xx [ 319 ] ; xx [ 339 ] = xx [ 91 ] * xx [ 319 ] ;
pm_math_quatXform ( xx + 285 , xx + 337 , xx + 353 ) ; xx [ 337 ] = xx [ 121
] * xx [ 319 ] ; xx [ 338 ] = xx [ 163 ] * xx [ 319 ] ; xx [ 339 ] = xx [ 76
] * xx [ 319 ] ; pm_math_quatXform ( xx + 285 , xx + 337 , xx + 356 ) ;
pm_math_cross3 ( xx + 185 , xx + 356 , xx + 337 ) ; xx [ 359 ] = xx [ 353 ] +
xx [ 337 ] ; xx [ 360 ] = xx [ 354 ] + xx [ 338 ] ; xx [ 361 ] = xx [ 355 ] +
xx [ 339 ] ; pm_math_quatInverseXform ( xx + 323 , xx + 221 , xx + 337 ) ; xx
[ 353 ] = xx [ 1 ] * xx [ 338 ] ; xx [ 355 ] = xx [ 2 ] * xx [ 338 ] ; xx [
363 ] = xx [ 3 ] * xx [ 339 ] ; xx [ 365 ] = - ( xx [ 355 ] + xx [ 363 ] ) ;
xx [ 366 ] = xx [ 353 ] ; xx [ 367 ] = xx [ 1 ] * xx [ 339 ] ; pm_math_cross3
( xx + 1 , xx + 365 , xx + 368 ) ; xx [ 354 ] = xx [ 339 ] + ( xx [ 0 ] * xx
[ 353 ] + xx [ 369 ] ) * xx [ 27 ] ; pm_math_quatInverseXform ( xx + 323 , xx
+ 261 , xx + 364 ) ; xx [ 353 ] = xx [ 1 ] * xx [ 365 ] ; xx [ 368 ] = xx [ 2
] * xx [ 365 ] ; xx [ 369 ] = xx [ 3 ] * xx [ 366 ] ; xx [ 371 ] = - ( xx [
368 ] + xx [ 369 ] ) ; xx [ 372 ] = xx [ 353 ] ; xx [ 373 ] = xx [ 1 ] * xx [
366 ] ; pm_math_cross3 ( xx + 1 , xx + 371 , xx + 374 ) ; xx [ 370 ] = xx [
366 ] + ( xx [ 0 ] * xx [ 353 ] + xx [ 375 ] ) * xx [ 27 ] ; xx [ 372 ] = xx
[ 289 ] - ( pm_math_dot3 ( xx + 16 , xx + 359 ) + pm_math_dot3 ( xx + 197 ,
xx + 356 ) ) ; xx [ 373 ] = xx [ 354 ] - ( pm_math_dot3 ( xx + 221 , xx + 359
) + pm_math_dot3 ( xx + 240 , xx + 356 ) ) ; xx [ 374 ] = xx [ 370 ] - (
pm_math_dot3 ( xx + 261 , xx + 359 ) + pm_math_dot3 ( xx + 280 , xx + 356 ) )
; solveSymmetric ( xx + 310 , xx + 200 , ii + 2 , xx + 372 , 3 , 1 , ii [ 5 ]
, xx + 291 , xx + 294 ) ; xx [ 295 ] = xx [ 164 ] ; xx [ 296 ] = xx [ 98 ] ;
xx [ 297 ] = xx [ 124 ] ; xx [ 356 ] = xx [ 11 ] * xx [ 291 ] + xx [ 207 ] *
xx [ 292 ] + xx [ 253 ] * xx [ 293 ] ; xx [ 357 ] = xx [ 218 ] * xx [ 292 ] -
xx [ 12 ] * xx [ 291 ] + xx [ 259 ] * xx [ 293 ] ; xx [ 358 ] = xx [ 260 ] *
xx [ 293 ] - ( xx [ 14 ] * xx [ 291 ] + xx [ 219 ] * xx [ 292 ] ) ;
pm_math_quatInverseXform ( xx + 285 , xx + 356 , xx + 359 ) ; xx [ 372 ] = xx
[ 94 ] ; xx [ 373 ] = xx [ 96 ] ; xx [ 374 ] = xx [ 105 ] ; pm_math_cross3 (
xx + 356 , xx + 185 , xx + 375 ) ; xx [ 356 ] = xx [ 220 ] * xx [ 292 ] - xx
[ 183 ] * xx [ 291 ] + xx [ 268 ] * xx [ 293 ] + xx [ 375 ] ; xx [ 357 ] = xx
[ 376 ] - ( xx [ 193 ] * xx [ 291 ] + xx [ 236 ] * xx [ 292 ] + xx [ 269 ] *
xx [ 293 ] ) ; xx [ 358 ] = xx [ 377 ] - ( xx [ 195 ] * xx [ 291 ] + xx [ 238
] * xx [ 292 ] + xx [ 273 ] * xx [ 293 ] ) ; pm_math_quatInverseXform ( xx +
285 , xx + 356 , xx + 375 ) ; xx [ 94 ] = xx [ 2 ] * xx [ 276 ] ; xx [ 96 ] =
xx [ 1 ] * xx [ 274 ] ; xx [ 356 ] = xx [ 2 ] * xx [ 274 ] ; xx [ 357 ] = - (
xx [ 245 ] + xx [ 96 ] ) ; xx [ 358 ] = xx [ 94 ] ; pm_math_cross3 ( xx + 1 ,
xx + 356 , xx + 378 ) ; xx [ 98 ] = xx [ 274 ] + ( xx [ 0 ] * xx [ 94 ] + xx
[ 380 ] ) * xx [ 27 ] ; xx [ 94 ] = ( xx [ 206 ] * xx [ 204 ] + xx [ 340 ] )
* xx [ 27 ] - xx [ 30 ] ; xx [ 105 ] = xx [ 350 ] * xx [ 305 ] ; xx [ 124 ] =
xx [ 94 ] * xx [ 349 ] ; xx [ 356 ] = xx [ 94 ] * xx [ 350 ] ; xx [ 357 ] = -
( xx [ 322 ] + xx [ 124 ] ) ; xx [ 358 ] = xx [ 105 ] ; pm_math_cross3 ( xx +
349 , xx + 356 , xx + 378 ) ; xx [ 164 ] = xx [ 94 ] + ( xx [ 348 ] * xx [
105 ] + xx [ 380 ] ) * xx [ 27 ] ; xx [ 105 ] = xx [ 164 ] / xx [ 165 ] ; xx
[ 356 ] = xx [ 167 ] * xx [ 105 ] ; xx [ 357 ] = xx [ 109 ] * xx [ 105 ] ; xx
[ 358 ] = xx [ 91 ] * xx [ 105 ] ; pm_math_quatXform ( xx + 285 , xx + 356 ,
xx + 378 ) ; xx [ 356 ] = xx [ 121 ] * xx [ 105 ] ; xx [ 357 ] = xx [ 163 ] *
xx [ 105 ] ; xx [ 358 ] = xx [ 76 ] * xx [ 105 ] ; pm_math_quatXform ( xx +
285 , xx + 356 , xx + 381 ) ; pm_math_cross3 ( xx + 185 , xx + 381 , xx + 356
) ; xx [ 384 ] = xx [ 378 ] + xx [ 356 ] ; xx [ 385 ] = xx [ 379 ] + xx [ 357
] ; xx [ 386 ] = xx [ 380 ] + xx [ 358 ] ; xx [ 204 ] = xx [ 2 ] * xx [ 339 ]
; xx [ 245 ] = xx [ 1 ] * xx [ 337 ] ; xx [ 339 ] = xx [ 2 ] * xx [ 337 ] ;
xx [ 340 ] = - ( xx [ 363 ] + xx [ 245 ] ) ; xx [ 341 ] = xx [ 204 ] ;
pm_math_cross3 ( xx + 1 , xx + 339 , xx + 356 ) ; xx [ 276 ] = xx [ 337 ] + (
xx [ 0 ] * xx [ 204 ] + xx [ 358 ] ) * xx [ 27 ] ; xx [ 204 ] = xx [ 2 ] * xx
[ 366 ] ; xx [ 294 ] = xx [ 1 ] * xx [ 364 ] ; xx [ 339 ] = xx [ 2 ] * xx [
364 ] ; xx [ 340 ] = - ( xx [ 369 ] + xx [ 294 ] ) ; xx [ 341 ] = xx [ 204 ]
; pm_math_cross3 ( xx + 1 , xx + 339 , xx + 356 ) ; xx [ 299 ] = xx [ 364 ] +
( xx [ 0 ] * xx [ 204 ] + xx [ 358 ] ) * xx [ 27 ] ; xx [ 339 ] = xx [ 98 ] -
( pm_math_dot3 ( xx + 16 , xx + 384 ) + pm_math_dot3 ( xx + 197 , xx + 381 )
) ; xx [ 340 ] = xx [ 276 ] - ( pm_math_dot3 ( xx + 221 , xx + 384 ) +
pm_math_dot3 ( xx + 240 , xx + 381 ) ) ; xx [ 341 ] = xx [ 299 ] - (
pm_math_dot3 ( xx + 261 , xx + 384 ) + pm_math_dot3 ( xx + 280 , xx + 381 ) )
; solveSymmetric ( xx + 310 , xx + 200 , ii + 2 , xx + 339 , 3 , 1 , ii [ 5 ]
, xx + 356 , xx + 378 ) ; xx [ 339 ] = xx [ 11 ] * xx [ 356 ] + xx [ 207 ] *
xx [ 357 ] + xx [ 253 ] * xx [ 358 ] ; xx [ 340 ] = xx [ 218 ] * xx [ 357 ] -
xx [ 12 ] * xx [ 356 ] + xx [ 259 ] * xx [ 358 ] ; xx [ 341 ] = xx [ 260 ] *
xx [ 358 ] - ( xx [ 14 ] * xx [ 356 ] + xx [ 219 ] * xx [ 357 ] ) ;
pm_math_quatInverseXform ( xx + 285 , xx + 339 , xx + 378 ) ; pm_math_cross3
( xx + 339 , xx + 185 , xx + 381 ) ; xx [ 339 ] = xx [ 220 ] * xx [ 357 ] -
xx [ 183 ] * xx [ 356 ] + xx [ 268 ] * xx [ 358 ] + xx [ 381 ] ; xx [ 340 ] =
xx [ 382 ] - ( xx [ 193 ] * xx [ 356 ] + xx [ 236 ] * xx [ 357 ] + xx [ 269 ]
* xx [ 358 ] ) ; xx [ 341 ] = xx [ 383 ] - ( xx [ 195 ] * xx [ 356 ] + xx [
238 ] * xx [ 357 ] + xx [ 273 ] * xx [ 358 ] ) ; pm_math_quatInverseXform (
xx + 285 , xx + 339 , xx + 381 ) ; xx [ 204 ] = xx [ 105 ] - ( pm_math_dot3 (
xx + 295 , xx + 378 ) + pm_math_dot3 ( xx + 372 , xx + 381 ) ) ; xx [ 105 ] =
xx [ 289 ] * xx [ 356 ] + xx [ 354 ] * xx [ 357 ] + xx [ 370 ] * xx [ 358 ] +
xx [ 320 ] * xx [ 204 ] ; xx [ 305 ] = xx [ 3 ] * xx [ 274 ] ; xx [ 339 ] =
xx [ 305 ] ; xx [ 340 ] = xx [ 3 ] * xx [ 275 ] ; xx [ 341 ] = - ( xx [ 96 ]
+ xx [ 243 ] ) ; pm_math_cross3 ( xx + 1 , xx + 339 , xx + 378 ) ; xx [ 96 ]
= xx [ 275 ] + ( xx [ 0 ] * xx [ 305 ] + xx [ 378 ] ) * xx [ 27 ] ; xx [ 243
] = xx [ 94 ] * xx [ 351 ] ; xx [ 339 ] = xx [ 243 ] ; xx [ 340 ] = xx [ 306
] * xx [ 351 ] ; xx [ 341 ] = - ( xx [ 124 ] + xx [ 321 ] ) ; pm_math_cross3
( xx + 349 , xx + 339 , xx + 378 ) ; xx [ 94 ] = xx [ 306 ] + ( xx [ 348 ] *
xx [ 243 ] + xx [ 378 ] ) * xx [ 27 ] ; xx [ 124 ] = xx [ 94 ] / xx [ 165 ] ;
xx [ 339 ] = xx [ 167 ] * xx [ 124 ] ; xx [ 340 ] = xx [ 109 ] * xx [ 124 ] ;
xx [ 341 ] = xx [ 91 ] * xx [ 124 ] ; pm_math_quatXform ( xx + 285 , xx + 339
, xx + 378 ) ; xx [ 339 ] = xx [ 121 ] * xx [ 124 ] ; xx [ 340 ] = xx [ 163 ]
* xx [ 124 ] ; xx [ 341 ] = xx [ 76 ] * xx [ 124 ] ; pm_math_quatXform ( xx +
285 , xx + 339 , xx + 381 ) ; pm_math_cross3 ( xx + 185 , xx + 381 , xx + 339
) ; xx [ 384 ] = xx [ 378 ] + xx [ 339 ] ; xx [ 385 ] = xx [ 379 ] + xx [ 340
] ; xx [ 386 ] = xx [ 380 ] + xx [ 341 ] ; xx [ 243 ] = xx [ 3 ] * xx [ 337 ]
; xx [ 340 ] = xx [ 243 ] ; xx [ 341 ] = xx [ 3 ] * xx [ 338 ] ; xx [ 342 ] =
- ( xx [ 245 ] + xx [ 355 ] ) ; pm_math_cross3 ( xx + 1 , xx + 340 , xx + 378
) ; xx [ 245 ] = xx [ 338 ] + ( xx [ 0 ] * xx [ 243 ] + xx [ 378 ] ) * xx [
27 ] ; xx [ 274 ] = xx [ 3 ] * xx [ 364 ] ; xx [ 337 ] = xx [ 274 ] ; xx [
338 ] = xx [ 3 ] * xx [ 365 ] ; xx [ 339 ] = - ( xx [ 294 ] + xx [ 368 ] ) ;
pm_math_cross3 ( xx + 1 , xx + 337 , xx + 340 ) ; xx [ 275 ] = xx [ 365 ] + (
xx [ 0 ] * xx [ 274 ] + xx [ 340 ] ) * xx [ 27 ] ; xx [ 337 ] = xx [ 96 ] - (
pm_math_dot3 ( xx + 16 , xx + 384 ) + pm_math_dot3 ( xx + 197 , xx + 381 ) )
; xx [ 338 ] = xx [ 245 ] - ( pm_math_dot3 ( xx + 221 , xx + 384 ) +
pm_math_dot3 ( xx + 240 , xx + 381 ) ) ; xx [ 339 ] = xx [ 275 ] - (
pm_math_dot3 ( xx + 261 , xx + 384 ) + pm_math_dot3 ( xx + 280 , xx + 381 ) )
; solveSymmetric ( xx + 310 , xx + 200 , ii + 2 , xx + 337 , 3 , 1 , ii [ 5 ]
, xx + 340 , xx + 362 ) ; xx [ 337 ] = xx [ 11 ] * xx [ 340 ] + xx [ 207 ] *
xx [ 341 ] + xx [ 253 ] * xx [ 342 ] ; xx [ 338 ] = xx [ 218 ] * xx [ 341 ] -
xx [ 12 ] * xx [ 340 ] + xx [ 259 ] * xx [ 342 ] ; xx [ 339 ] = xx [ 260 ] *
xx [ 342 ] - ( xx [ 14 ] * xx [ 340 ] + xx [ 219 ] * xx [ 341 ] ) ;
pm_math_quatInverseXform ( xx + 285 , xx + 337 , xx + 362 ) ; pm_math_cross3
( xx + 337 , xx + 185 , xx + 365 ) ; xx [ 337 ] = xx [ 220 ] * xx [ 341 ] -
xx [ 183 ] * xx [ 340 ] + xx [ 268 ] * xx [ 342 ] + xx [ 365 ] ; xx [ 338 ] =
xx [ 366 ] - ( xx [ 193 ] * xx [ 340 ] + xx [ 236 ] * xx [ 341 ] + xx [ 269 ]
* xx [ 342 ] ) ; xx [ 339 ] = xx [ 367 ] - ( xx [ 195 ] * xx [ 340 ] + xx [
238 ] * xx [ 341 ] + xx [ 273 ] * xx [ 342 ] ) ; pm_math_quatInverseXform (
xx + 285 , xx + 337 , xx + 365 ) ; xx [ 243 ] = xx [ 124 ] - ( pm_math_dot3 (
xx + 295 , xx + 362 ) + pm_math_dot3 ( xx + 372 , xx + 365 ) ) ; xx [ 124 ] =
xx [ 289 ] * xx [ 340 ] + xx [ 354 ] * xx [ 341 ] + xx [ 370 ] * xx [ 342 ] +
xx [ 320 ] * xx [ 243 ] ; xx [ 274 ] = xx [ 157 ] * xx [ 65 ] - xx [ 62 ] *
xx [ 156 ] ; xx [ 294 ] = xx [ 157 ] * xx [ 64 ] - xx [ 63 ] * xx [ 156 ] ;
xx [ 305 ] = xx [ 64 ] * xx [ 156 ] + xx [ 157 ] * xx [ 63 ] ; xx [ 306 ] = -
xx [ 305 ] ; xx [ 322 ] = xx [ 65 ] * xx [ 156 ] + xx [ 157 ] * xx [ 62 ] ;
xx [ 337 ] = - xx [ 322 ] ; xx [ 362 ] = xx [ 274 ] ; xx [ 363 ] = xx [ 294 ]
; xx [ 364 ] = xx [ 306 ] ; xx [ 365 ] = xx [ 337 ] ; pm_math_quatCompose (
xx + 285 , xx + 362 , xx + 366 ) ; pm_math_quatCompose ( xx + 332 , xx + 366
, xx + 378 ) ; pm_math_quatInverseXform ( xx + 366 , xx + 16 , xx + 383 ) ;
xx [ 338 ] = 1.755163249739233e-6 ; xx [ 339 ] = 0.7074588436864477 ; xx [
386 ] = xx [ 338 ] ; xx [ 387 ] = xx [ 339 ] ; xx [ 388 ] = -
0.7067545433081797 ; pm_math_cross3 ( xx + 383 , xx + 386 , xx + 389 ) ;
pm_math_quatXform ( xx + 378 , xx + 389 , xx + 392 ) ; xx [ 353 ] = -
1.000000000000005 ; xx [ 389 ] = 4.753142324176457e-16 ; xx [ 395 ] = xx [
353 ] ; xx [ 396 ] = - xx [ 389 ] ; xx [ 397 ] = 2.532696274926141e-16 ; xx [
390 ] = pm_math_dot3 ( xx + 392 , xx + 395 ) ; xx [ 391 ] = xx [ 157 ] * xx [
346 ] - xx [ 343 ] * xx [ 156 ] ; xx [ 398 ] = xx [ 344 ] * xx [ 156 ] + xx [
157 ] * xx [ 345 ] ; xx [ 400 ] = xx [ 157 ] * xx [ 344 ] - xx [ 345 ] * xx [
156 ] ; xx [ 401 ] = xx [ 346 ] * xx [ 156 ] + xx [ 157 ] * xx [ 343 ] ; xx [
403 ] = xx [ 391 ] ; xx [ 404 ] = - xx [ 398 ] ; xx [ 405 ] = xx [ 400 ] ; xx
[ 406 ] = - xx [ 401 ] ; pm_math_quatCompose ( xx + 403 , xx + 62 , xx + 407
) ; xx [ 411 ] = xx [ 11 ] ; xx [ 412 ] = - 2.482175364028341e-6 ; xx [ 413 ]
= - 1.236162026722808e-9 ; pm_math_quatXform ( xx + 407 , xx + 411 , xx + 414
) ; xx [ 399 ] = pm_math_dot3 ( xx + 414 , xx + 395 ) ; xx [ 402 ] = xx [ 399
] / xx [ 79 ] ; xx [ 411 ] = - xx [ 78 ] * xx [ 402 ] ; xx [ 412 ] = - xx [
82 ] * xx [ 402 ] ; xx [ 413 ] = - xx [ 83 ] * xx [ 402 ] ; pm_math_quatXform
( xx + 62 , xx + 411 , xx + 417 ) ; xx [ 411 ] = - xx [ 81 ] * xx [ 402 ] ;
xx [ 412 ] = xx [ 88 ] * xx [ 402 ] ; xx [ 413 ] = xx [ 101 ] * xx [ 402 ] ;
pm_math_quatXform ( xx + 62 , xx + 411 , xx + 420 ) ; pm_math_cross3 ( xx +
113 , xx + 420 , xx + 411 ) ; xx [ 423 ] = xx [ 419 ] + xx [ 413 ] ; xx [ 424
] = xx [ 27 ] * ( xx [ 55 ] - xx [ 53 ] ) ; xx [ 425 ] = - ( xx [ 60 ] + xx [
59 ] ) * xx [ 27 ] ; xx [ 426 ] = ( xx [ 47 ] + xx [ 48 ] ) * xx [ 27 ] - xx
[ 30 ] ; pm_math_cross3 ( xx + 424 , xx + 386 , xx + 427 ) ;
pm_math_quatXform ( xx + 407 , xx + 427 , xx + 430 ) ; xx [ 47 ] =
pm_math_dot3 ( xx + 430 , xx + 395 ) ; xx [ 53 ] = ( xx [ 423 ] + xx [ 47 ] )
/ xx [ 149 ] ; xx [ 48 ] = xx [ 417 ] + xx [ 411 ] - xx [ 53 ] * xx [ 145 ] ;
xx [ 55 ] = xx [ 418 ] + xx [ 412 ] - xx [ 53 ] * xx [ 160 ] ; xx [ 59 ] = xx
[ 157 ] * xx [ 55 ] ; xx [ 411 ] = xx [ 157 ] * xx [ 48 ] ; xx [ 413 ] = xx [
421 ] - xx [ 53 ] * xx [ 72 ] ; xx [ 417 ] = xx [ 157 ] * xx [ 413 ] ; xx [
419 ] = xx [ 420 ] - xx [ 53 ] * xx [ 69 ] ; xx [ 420 ] = xx [ 157 ] * xx [
419 ] ; xx [ 427 ] = xx [ 413 ] - ( xx [ 157 ] * xx [ 417 ] - xx [ 420 ] * xx
[ 156 ] ) * xx [ 27 ] ; xx [ 413 ] = xx [ 48 ] - xx [ 27 ] * ( xx [ 59 ] * xx
[ 156 ] + xx [ 157 ] * xx [ 411 ] ) - xx [ 168 ] * xx [ 427 ] ;
pm_math_quatCompose ( xx + 343 , xx + 362 , xx + 433 ) ; xx [ 362 ] = xx [
294 ] ; xx [ 363 ] = xx [ 306 ] ; xx [ 364 ] = xx [ 337 ] ; xx [ 48 ] = xx [
24 ] * xx [ 322 ] ; xx [ 60 ] = xx [ 294 ] * xx [ 24 ] - xx [ 305 ] ; xx [
437 ] = xx [ 48 ] ; xx [ 438 ] = xx [ 322 ] ; xx [ 439 ] = xx [ 60 ] ;
pm_math_cross3 ( xx + 362 , xx + 437 , xx + 440 ) ; xx [ 306 ] = xx [ 274 ] *
xx [ 322 ] ; xx [ 437 ] = ( xx [ 440 ] - xx [ 274 ] * xx [ 48 ] ) * xx [ 27 ]
- xx [ 30 ] ; xx [ 438 ] = xx [ 24 ] + ( xx [ 441 ] - xx [ 306 ] ) * xx [ 27
] ; xx [ 439 ] = xx [ 27 ] * ( xx [ 442 ] - xx [ 60 ] * xx [ 274 ] ) ;
pm_math_cross3 ( xx + 437 , xx + 386 , xx + 440 ) ; pm_math_quatXform ( xx +
433 , xx + 440 , xx + 443 ) ; xx [ 48 ] = pm_math_dot3 ( xx + 443 , xx + 395
) ; xx [ 60 ] = xx [ 419 ] - xx [ 27 ] * ( xx [ 417 ] * xx [ 156 ] + xx [ 157
] * xx [ 420 ] ) ; xx [ 337 ] = xx [ 55 ] - ( xx [ 157 ] * xx [ 59 ] - xx [
411 ] * xx [ 156 ] ) * xx [ 27 ] + xx [ 60 ] * xx [ 168 ] ; xx [ 55 ] = ( xx
[ 48 ] - ( xx [ 337 ] * xx [ 24 ] - xx [ 413 ] + xx [ 60 ] * xx [ 155 ] + xx
[ 70 ] * xx [ 427 ] ) ) / xx [ 165 ] ; xx [ 417 ] = xx [ 413 ] + xx [ 167 ] *
xx [ 55 ] ; xx [ 418 ] = xx [ 337 ] + xx [ 109 ] * xx [ 55 ] ; xx [ 419 ] =
xx [ 423 ] - xx [ 147 ] * xx [ 53 ] + xx [ 91 ] * xx [ 55 ] ;
pm_math_quatXform ( xx + 285 , xx + 417 , xx + 411 ) ; xx [ 417 ] = xx [ 60 ]
+ xx [ 121 ] * xx [ 55 ] ; xx [ 418 ] = xx [ 427 ] + xx [ 163 ] * xx [ 55 ] ;
xx [ 419 ] = xx [ 422 ] - xx [ 53 ] * xx [ 75 ] + xx [ 76 ] * xx [ 55 ] ;
pm_math_quatXform ( xx + 285 , xx + 417 , xx + 420 ) ; pm_math_cross3 ( xx +
185 , xx + 420 , xx + 417 ) ; xx [ 427 ] = xx [ 411 ] + xx [ 417 ] ; xx [ 428
] = xx [ 412 ] + xx [ 418 ] ; xx [ 429 ] = xx [ 413 ] + xx [ 419 ] ;
pm_math_quatInverseXform ( xx + 366 , xx + 221 , xx + 411 ) ; pm_math_cross3
( xx + 411 , xx + 386 , xx + 417 ) ; pm_math_quatXform ( xx + 378 , xx + 417
, xx + 440 ) ; xx [ 59 ] = pm_math_dot3 ( xx + 440 , xx + 395 ) ;
pm_math_quatInverseXform ( xx + 366 , xx + 261 , xx + 417 ) ; pm_math_cross3
( xx + 417 , xx + 386 , xx + 446 ) ; pm_math_quatXform ( xx + 378 , xx + 446
, xx + 449 ) ; xx [ 337 ] = pm_math_dot3 ( xx + 449 , xx + 395 ) ; xx [ 446 ]
= xx [ 390 ] - ( pm_math_dot3 ( xx + 16 , xx + 427 ) + pm_math_dot3 ( xx +
197 , xx + 420 ) ) ; xx [ 447 ] = xx [ 59 ] - ( pm_math_dot3 ( xx + 221 , xx
+ 427 ) + pm_math_dot3 ( xx + 240 , xx + 420 ) ) ; xx [ 448 ] = xx [ 337 ] -
( pm_math_dot3 ( xx + 261 , xx + 427 ) + pm_math_dot3 ( xx + 280 , xx + 420 )
) ; solveSymmetric ( xx + 310 , xx + 200 , ii + 2 , xx + 446 , 3 , 1 , ii [ 5
] , xx + 420 , xx + 427 ) ; xx [ 427 ] = xx [ 11 ] * xx [ 420 ] + xx [ 207 ]
* xx [ 421 ] + xx [ 253 ] * xx [ 422 ] ; xx [ 428 ] = xx [ 218 ] * xx [ 421 ]
- xx [ 12 ] * xx [ 420 ] + xx [ 259 ] * xx [ 422 ] ; xx [ 429 ] = xx [ 260 ]
* xx [ 422 ] - ( xx [ 14 ] * xx [ 420 ] + xx [ 219 ] * xx [ 421 ] ) ;
pm_math_quatInverseXform ( xx + 285 , xx + 427 , xx + 446 ) ; pm_math_cross3
( xx + 427 , xx + 185 , xx + 452 ) ; xx [ 427 ] = xx [ 220 ] * xx [ 421 ] -
xx [ 183 ] * xx [ 420 ] + xx [ 268 ] * xx [ 422 ] + xx [ 452 ] ; xx [ 428 ] =
xx [ 453 ] - ( xx [ 193 ] * xx [ 420 ] + xx [ 236 ] * xx [ 421 ] + xx [ 269 ]
* xx [ 422 ] ) ; xx [ 429 ] = xx [ 454 ] - ( xx [ 195 ] * xx [ 420 ] + xx [
238 ] * xx [ 421 ] + xx [ 273 ] * xx [ 422 ] ) ; pm_math_quatInverseXform (
xx + 285 , xx + 427 , xx + 452 ) ; xx [ 60 ] = xx [ 55 ] - ( pm_math_dot3 (
xx + 295 , xx + 446 ) + pm_math_dot3 ( xx + 372 , xx + 452 ) ) ; xx [ 55 ] =
xx [ 289 ] * xx [ 420 ] + xx [ 354 ] * xx [ 421 ] + xx [ 370 ] * xx [ 422 ] +
xx [ 320 ] * xx [ 60 ] ; xx [ 427 ] = xx [ 389 ] ; xx [ 428 ] = xx [ 353 ] ;
xx [ 429 ] = - 3.622861559360319e-16 ; xx [ 347 ] = pm_math_dot3 ( xx + 392 ,
xx + 427 ) ; xx [ 353 ] = pm_math_dot3 ( xx + 414 , xx + 427 ) ; xx [ 365 ] =
xx [ 353 ] / xx [ 79 ] ; xx [ 392 ] = - xx [ 78 ] * xx [ 365 ] ; xx [ 393 ] =
- xx [ 82 ] * xx [ 365 ] ; xx [ 394 ] = - xx [ 83 ] * xx [ 365 ] ;
pm_math_quatXform ( xx + 62 , xx + 392 , xx + 414 ) ; xx [ 392 ] = - xx [ 81
] * xx [ 365 ] ; xx [ 393 ] = xx [ 88 ] * xx [ 365 ] ; xx [ 394 ] = xx [ 101
] * xx [ 365 ] ; pm_math_quatXform ( xx + 62 , xx + 392 , xx + 455 ) ;
pm_math_cross3 ( xx + 113 , xx + 455 , xx + 392 ) ; xx [ 389 ] = xx [ 416 ] +
xx [ 394 ] ; xx [ 423 ] = pm_math_dot3 ( xx + 430 , xx + 427 ) ; xx [ 430 ] =
( xx [ 389 ] + xx [ 423 ] ) / xx [ 149 ] ; xx [ 432 ] = xx [ 414 ] + xx [ 392
] - xx [ 430 ] * xx [ 145 ] ; xx [ 392 ] = xx [ 415 ] + xx [ 393 ] - xx [ 430
] * xx [ 160 ] ; xx [ 393 ] = xx [ 157 ] * xx [ 392 ] ; xx [ 414 ] = xx [ 157
] * xx [ 432 ] ; xx [ 416 ] = xx [ 456 ] - xx [ 430 ] * xx [ 72 ] ; xx [ 431
] = xx [ 157 ] * xx [ 416 ] ; xx [ 456 ] = xx [ 455 ] - xx [ 430 ] * xx [ 69
] ; xx [ 455 ] = xx [ 157 ] * xx [ 456 ] ; xx [ 458 ] = xx [ 416 ] - ( xx [
157 ] * xx [ 431 ] - xx [ 455 ] * xx [ 156 ] ) * xx [ 27 ] ; xx [ 416 ] = xx
[ 432 ] - xx [ 27 ] * ( xx [ 393 ] * xx [ 156 ] + xx [ 157 ] * xx [ 414 ] ) -
xx [ 168 ] * xx [ 458 ] ; xx [ 394 ] = pm_math_dot3 ( xx + 443 , xx + 427 ) ;
xx [ 415 ] = xx [ 456 ] - xx [ 27 ] * ( xx [ 431 ] * xx [ 156 ] + xx [ 157 ]
* xx [ 455 ] ) ; xx [ 431 ] = xx [ 392 ] - ( xx [ 157 ] * xx [ 393 ] - xx [
414 ] * xx [ 156 ] ) * xx [ 27 ] + xx [ 415 ] * xx [ 168 ] ; xx [ 392 ] = (
xx [ 394 ] - ( xx [ 431 ] * xx [ 24 ] - xx [ 416 ] + xx [ 415 ] * xx [ 155 ]
+ xx [ 70 ] * xx [ 458 ] ) ) / xx [ 165 ] ; xx [ 443 ] = xx [ 416 ] + xx [
167 ] * xx [ 392 ] ; xx [ 444 ] = xx [ 431 ] + xx [ 109 ] * xx [ 392 ] ; xx [
445 ] = xx [ 389 ] - xx [ 147 ] * xx [ 430 ] + xx [ 91 ] * xx [ 392 ] ;
pm_math_quatXform ( xx + 285 , xx + 443 , xx + 459 ) ; xx [ 443 ] = xx [ 415
] + xx [ 121 ] * xx [ 392 ] ; xx [ 444 ] = xx [ 458 ] + xx [ 163 ] * xx [ 392
] ; xx [ 445 ] = xx [ 457 ] - xx [ 430 ] * xx [ 75 ] + xx [ 76 ] * xx [ 392 ]
; pm_math_quatXform ( xx + 285 , xx + 443 , xx + 414 ) ; pm_math_cross3 ( xx
+ 185 , xx + 414 , xx + 443 ) ; xx [ 455 ] = xx [ 459 ] + xx [ 443 ] ; xx [
456 ] = xx [ 460 ] + xx [ 444 ] ; xx [ 457 ] = xx [ 461 ] + xx [ 445 ] ; xx [
389 ] = pm_math_dot3 ( xx + 440 , xx + 427 ) ; xx [ 393 ] = pm_math_dot3 ( xx
+ 449 , xx + 427 ) ; xx [ 440 ] = xx [ 347 ] - ( pm_math_dot3 ( xx + 16 , xx
+ 455 ) + pm_math_dot3 ( xx + 197 , xx + 414 ) ) ; xx [ 441 ] = xx [ 389 ] -
( pm_math_dot3 ( xx + 221 , xx + 455 ) + pm_math_dot3 ( xx + 240 , xx + 414 )
) ; xx [ 442 ] = xx [ 393 ] - ( pm_math_dot3 ( xx + 261 , xx + 455 ) +
pm_math_dot3 ( xx + 280 , xx + 414 ) ) ; solveSymmetric ( xx + 310 , xx + 200
, ii + 2 , xx + 440 , 3 , 1 , ii [ 5 ] , xx + 414 , xx + 443 ) ; xx [ 440 ] =
xx [ 11 ] * xx [ 414 ] + xx [ 207 ] * xx [ 415 ] + xx [ 253 ] * xx [ 416 ] ;
xx [ 441 ] = xx [ 218 ] * xx [ 415 ] - xx [ 12 ] * xx [ 414 ] + xx [ 259 ] *
xx [ 416 ] ; xx [ 442 ] = xx [ 260 ] * xx [ 416 ] - ( xx [ 14 ] * xx [ 414 ]
+ xx [ 219 ] * xx [ 415 ] ) ; pm_math_quatInverseXform ( xx + 285 , xx + 440
, xx + 443 ) ; pm_math_cross3 ( xx + 440 , xx + 185 , xx + 449 ) ; xx [ 440 ]
= xx [ 220 ] * xx [ 415 ] - xx [ 183 ] * xx [ 414 ] + xx [ 268 ] * xx [ 416 ]
+ xx [ 449 ] ; xx [ 441 ] = xx [ 450 ] - ( xx [ 193 ] * xx [ 414 ] + xx [ 236
] * xx [ 415 ] + xx [ 269 ] * xx [ 416 ] ) ; xx [ 442 ] = xx [ 451 ] - ( xx [
195 ] * xx [ 414 ] + xx [ 238 ] * xx [ 415 ] + xx [ 273 ] * xx [ 416 ] ) ;
pm_math_quatInverseXform ( xx + 285 , xx + 440 , xx + 449 ) ; xx [ 431 ] = xx
[ 392 ] - ( pm_math_dot3 ( xx + 295 , xx + 443 ) + pm_math_dot3 ( xx + 372 ,
xx + 449 ) ) ; xx [ 392 ] = xx [ 289 ] * xx [ 414 ] + xx [ 354 ] * xx [ 415 ]
+ xx [ 370 ] * xx [ 416 ] + xx [ 320 ] * xx [ 431 ] ; xx [ 440 ] =
2.983777524123075e-8 ; xx [ 441 ] = 0.01202680034923488 ; xx [ 442 ] = -
0.01201484041892856 ; pm_math_cross3 ( xx + 383 , xx + 440 , xx + 455 ) ;
pm_math_quatXform ( xx + 378 , xx + 455 , xx + 383 ) ; xx [ 432 ] = xx [ 157
] * xx [ 117 ] ; xx [ 455 ] = xx [ 157 ] * xx [ 85 ] ; xx [ 457 ] = ( xx [
432 ] * xx [ 156 ] + xx [ 157 ] * xx [ 455 ] ) * xx [ 27 ] ; xx [ 456 ] = xx
[ 457 ] - xx [ 85 ] ; xx [ 458 ] = xx [ 27 ] * ( xx [ 157 ] * xx [ 432 ] - xx
[ 455 ] * xx [ 156 ] ) - xx [ 117 ] ; xx [ 432 ] = xx [ 100 ] + xx [ 168 ] ;
xx [ 459 ] = xx [ 456 ] ; xx [ 460 ] = xx [ 458 ] ; xx [ 461 ] = xx [ 432 ] ;
pm_math_quatXform ( xx + 285 , xx + 459 , xx + 462 ) ; xx [ 465 ] = xx [ 462
] - xx [ 179 ] ; xx [ 466 ] = xx [ 463 ] - xx [ 97 ] ; xx [ 467 ] = xx [ 464
] + xx [ 174 ] ; pm_math_cross3 ( xx + 16 , xx + 465 , xx + 462 ) ;
pm_math_quatXform ( xx + 332 , xx + 462 , xx + 468 ) ; pm_math_quatXform ( xx
+ 332 , xx + 197 , xx + 462 ) ; xx [ 97 ] = xx [ 383 ] + xx [ 468 ] + xx [
462 ] ; xx [ 471 ] = 0.01700000932151799 ; xx [ 472 ] = -
4.219700432318626e-8 ; xx [ 473 ] = - 2.101476904204633e-11 ;
pm_math_quatXform ( xx + 407 , xx + 471 , xx + 474 ) ; xx [ 100 ] =
9.321570227510678e-9 ; xx [ 174 ] = 2.313738986310713e-14 ; xx [ 179 ] =
1.190470065780192e-17 ; xx [ 471 ] = - xx [ 100 ] ; xx [ 472 ] = xx [ 174 ] ;
xx [ 473 ] = xx [ 179 ] ; pm_math_quatXform ( xx + 62 , xx + 471 , xx + 477 )
; pm_math_quatXform ( xx + 403 , xx + 477 , xx + 481 ) ; xx [ 455 ] = xx [
474 ] + xx [ 481 ] ; xx [ 480 ] = xx [ 455 ] / xx [ 79 ] ; xx [ 484 ] = - xx
[ 78 ] * xx [ 480 ] ; xx [ 485 ] = - xx [ 82 ] * xx [ 480 ] ; xx [ 486 ] = -
xx [ 83 ] * xx [ 480 ] ; pm_math_quatXform ( xx + 62 , xx + 484 , xx + 487 )
; xx [ 484 ] = - xx [ 81 ] * xx [ 480 ] ; xx [ 485 ] = xx [ 88 ] * xx [ 480 ]
; xx [ 486 ] = xx [ 101 ] * xx [ 480 ] ; pm_math_quatXform ( xx + 62 , xx +
484 , xx + 490 ) ; pm_math_cross3 ( xx + 113 , xx + 490 , xx + 484 ) ; xx [
493 ] = xx [ 489 ] + xx [ 486 ] ; pm_math_cross3 ( xx + 424 , xx + 440 , xx +
494 ) ; pm_math_quatXform ( xx + 407 , xx + 494 , xx + 424 ) ; xx [ 407 ] =
xx [ 85 ] - xx [ 457 ] ; xx [ 408 ] = xx [ 346 ] * xx [ 407 ] ; xx [ 410 ] =
xx [ 346 ] * xx [ 458 ] ; xx [ 457 ] = xx [ 344 ] * xx [ 407 ] - xx [ 345 ] *
xx [ 458 ] ; xx [ 494 ] = - xx [ 408 ] ; xx [ 495 ] = xx [ 410 ] ; xx [ 496 ]
= xx [ 457 ] ; pm_math_cross3 ( xx + 344 , xx + 494 , xx + 497 ) ; xx [ 409 ]
= xx [ 424 ] + xx [ 458 ] + xx [ 27 ] * ( xx [ 497 ] - xx [ 343 ] * xx [ 408
] ) ; xx [ 408 ] = ( xx [ 493 ] + xx [ 409 ] ) / xx [ 149 ] ; xx [ 494 ] = xx
[ 487 ] + xx [ 484 ] - xx [ 408 ] * xx [ 145 ] ; xx [ 484 ] = xx [ 488 ] + xx
[ 485 ] - xx [ 408 ] * xx [ 160 ] ; xx [ 485 ] = xx [ 157 ] * xx [ 484 ] ; xx
[ 487 ] = xx [ 157 ] * xx [ 494 ] ; xx [ 489 ] = xx [ 491 ] - xx [ 408 ] * xx
[ 72 ] ; xx [ 491 ] = xx [ 157 ] * xx [ 489 ] ; xx [ 495 ] = xx [ 490 ] - xx
[ 408 ] * xx [ 69 ] ; xx [ 490 ] = xx [ 157 ] * xx [ 495 ] ; xx [ 496 ] = xx
[ 489 ] - ( xx [ 157 ] * xx [ 491 ] - xx [ 490 ] * xx [ 156 ] ) * xx [ 27 ] ;
xx [ 489 ] = xx [ 494 ] - xx [ 27 ] * ( xx [ 485 ] * xx [ 156 ] + xx [ 157 ]
* xx [ 487 ] ) - xx [ 168 ] * xx [ 496 ] ; pm_math_cross3 ( xx + 437 , xx +
440 , xx + 500 ) ; pm_math_quatXform ( xx + 433 , xx + 500 , xx + 437 ) ; xx
[ 434 ] = xx [ 432 ] * xx [ 24 ] ; xx [ 435 ] = xx [ 432 ] ; xx [ 436 ] = - (
xx [ 458 ] + xx [ 24 ] * xx [ 456 ] ) ; pm_math_quatXform ( xx + 285 , xx +
434 , xx + 500 ) ; xx [ 433 ] = xx [ 33 ] * xx [ 70 ] ; xx [ 435 ] = xx [ 33
] * xx [ 155 ] ; xx [ 436 ] = xx [ 173 ] - xx [ 155 ] * xx [ 32 ] ; xx [ 503
] = - xx [ 433 ] ; xx [ 504 ] = xx [ 435 ] ; xx [ 505 ] = xx [ 436 ] ;
pm_math_cross3 ( xx + 31 , xx + 503 , xx + 506 ) ; xx [ 434 ] = xx [ 27 ] * (
xx [ 506 ] + xx [ 433 ] * xx [ 28 ] ) ; xx [ 433 ] = ( xx [ 507 ] - xx [ 435
] * xx [ 28 ] ) * xx [ 27 ] ; xx [ 486 ] = xx [ 508 ] - xx [ 436 ] * xx [ 28
] ; xx [ 503 ] = xx [ 500 ] + xx [ 434 ] + xx [ 155 ] ; xx [ 504 ] = xx [ 501
] + xx [ 433 ] + xx [ 70 ] ; xx [ 505 ] = xx [ 502 ] + xx [ 486 ] * xx [ 27 ]
; pm_math_quatXform ( xx + 332 , xx + 503 , xx + 500 ) ; xx [ 435 ] = xx [
437 ] + xx [ 500 ] ; xx [ 436 ] = xx [ 495 ] - xx [ 27 ] * ( xx [ 491 ] * xx
[ 156 ] + xx [ 157 ] * xx [ 490 ] ) ; xx [ 488 ] = xx [ 484 ] - ( xx [ 157 ]
* xx [ 485 ] - xx [ 487 ] * xx [ 156 ] ) * xx [ 27 ] + xx [ 436 ] * xx [ 168
] ; xx [ 484 ] = ( xx [ 435 ] - ( xx [ 488 ] * xx [ 24 ] - xx [ 489 ] + xx [
436 ] * xx [ 155 ] + xx [ 70 ] * xx [ 496 ] ) ) / xx [ 165 ] ; xx [ 503 ] =
xx [ 489 ] + xx [ 167 ] * xx [ 484 ] ; xx [ 504 ] = xx [ 488 ] + xx [ 109 ] *
xx [ 484 ] ; xx [ 505 ] = xx [ 493 ] - xx [ 147 ] * xx [ 408 ] + xx [ 91 ] *
xx [ 484 ] ; pm_math_quatXform ( xx + 285 , xx + 503 , xx + 487 ) ; xx [ 493
] = xx [ 436 ] + xx [ 121 ] * xx [ 484 ] ; xx [ 494 ] = xx [ 496 ] + xx [ 163
] * xx [ 484 ] ; xx [ 495 ] = xx [ 492 ] - xx [ 408 ] * xx [ 75 ] + xx [ 76 ]
* xx [ 484 ] ; pm_math_quatXform ( xx + 285 , xx + 493 , xx + 490 ) ;
pm_math_cross3 ( xx + 185 , xx + 490 , xx + 493 ) ; xx [ 503 ] = xx [ 487 ] +
xx [ 493 ] ; xx [ 504 ] = xx [ 488 ] + xx [ 494 ] ; xx [ 505 ] = xx [ 489 ] +
xx [ 495 ] ; pm_math_cross3 ( xx + 411 , xx + 440 , xx + 487 ) ;
pm_math_quatXform ( xx + 378 , xx + 487 , xx + 411 ) ; pm_math_cross3 ( xx +
221 , xx + 465 , xx + 487 ) ; pm_math_quatXform ( xx + 332 , xx + 487 , xx +
494 ) ; pm_math_quatXform ( xx + 332 , xx + 240 , xx + 487 ) ; xx [ 436 ] =
xx [ 411 ] + xx [ 494 ] + xx [ 487 ] ; pm_math_cross3 ( xx + 417 , xx + 440 ,
xx + 508 ) ; pm_math_quatXform ( xx + 378 , xx + 508 , xx + 417 ) ;
pm_math_cross3 ( xx + 261 , xx + 465 , xx + 508 ) ; pm_math_quatXform ( xx +
332 , xx + 508 , xx + 511 ) ; pm_math_quatXform ( xx + 332 , xx + 280 , xx +
508 ) ; xx [ 382 ] = xx [ 417 ] + xx [ 511 ] + xx [ 508 ] ; xx [ 514 ] = xx [
97 ] - ( pm_math_dot3 ( xx + 16 , xx + 503 ) + pm_math_dot3 ( xx + 197 , xx +
490 ) ) ; xx [ 515 ] = xx [ 436 ] - ( pm_math_dot3 ( xx + 221 , xx + 503 ) +
pm_math_dot3 ( xx + 240 , xx + 490 ) ) ; xx [ 516 ] = xx [ 382 ] - (
pm_math_dot3 ( xx + 261 , xx + 503 ) + pm_math_dot3 ( xx + 280 , xx + 490 ) )
; solveSymmetric ( xx + 310 , xx + 200 , ii + 2 , xx + 514 , 3 , 1 , ii [ 5 ]
, xx + 490 , xx + 503 ) ; xx [ 503 ] = xx [ 11 ] * xx [ 490 ] + xx [ 207 ] *
xx [ 491 ] + xx [ 253 ] * xx [ 492 ] ; xx [ 504 ] = xx [ 218 ] * xx [ 491 ] -
xx [ 12 ] * xx [ 490 ] + xx [ 259 ] * xx [ 492 ] ; xx [ 505 ] = xx [ 260 ] *
xx [ 492 ] - ( xx [ 14 ] * xx [ 490 ] + xx [ 219 ] * xx [ 491 ] ) ;
pm_math_quatInverseXform ( xx + 285 , xx + 503 , xx + 514 ) ; pm_math_cross3
( xx + 503 , xx + 185 , xx + 518 ) ; xx [ 503 ] = xx [ 220 ] * xx [ 491 ] -
xx [ 183 ] * xx [ 490 ] + xx [ 268 ] * xx [ 492 ] + xx [ 518 ] ; xx [ 504 ] =
xx [ 519 ] - ( xx [ 193 ] * xx [ 490 ] + xx [ 236 ] * xx [ 491 ] + xx [ 269 ]
* xx [ 492 ] ) ; xx [ 505 ] = xx [ 520 ] - ( xx [ 195 ] * xx [ 490 ] + xx [
238 ] * xx [ 491 ] + xx [ 273 ] * xx [ 492 ] ) ; pm_math_quatInverseXform (
xx + 285 , xx + 503 , xx + 518 ) ; xx [ 485 ] = xx [ 484 ] - ( pm_math_dot3 (
xx + 295 , xx + 514 ) + pm_math_dot3 ( xx + 372 , xx + 518 ) ) ; xx [ 484 ] =
xx [ 289 ] * xx [ 490 ] + xx [ 354 ] * xx [ 491 ] + xx [ 370 ] * xx [ 492 ] +
xx [ 320 ] * xx [ 485 ] ; xx [ 493 ] = xx [ 384 ] + xx [ 469 ] + xx [ 463 ] ;
xx [ 503 ] = xx [ 475 ] + xx [ 482 ] ; xx [ 504 ] = xx [ 503 ] / xx [ 79 ] ;
xx [ 521 ] = - xx [ 78 ] * xx [ 504 ] ; xx [ 522 ] = - xx [ 82 ] * xx [ 504 ]
; xx [ 523 ] = - xx [ 83 ] * xx [ 504 ] ; pm_math_quatXform ( xx + 62 , xx +
521 , xx + 505 ) ; xx [ 521 ] = - xx [ 81 ] * xx [ 504 ] ; xx [ 522 ] = xx [
88 ] * xx [ 504 ] ; xx [ 523 ] = xx [ 101 ] * xx [ 504 ] ; pm_math_quatXform
( xx + 62 , xx + 521 , xx + 524 ) ; pm_math_cross3 ( xx + 113 , xx + 524 , xx
+ 521 ) ; xx [ 517 ] = xx [ 507 ] + xx [ 523 ] ; xx [ 527 ] = xx [ 425 ] + xx
[ 407 ] + ( xx [ 343 ] * xx [ 410 ] + xx [ 498 ] ) * xx [ 27 ] ; xx [ 407 ] =
( xx [ 517 ] + xx [ 527 ] ) / xx [ 149 ] ; xx [ 410 ] = xx [ 505 ] + xx [ 521
] - xx [ 407 ] * xx [ 145 ] ; xx [ 505 ] = xx [ 506 ] + xx [ 522 ] - xx [ 407
] * xx [ 160 ] ; xx [ 506 ] = xx [ 157 ] * xx [ 505 ] ; xx [ 521 ] = xx [ 157
] * xx [ 410 ] ; xx [ 523 ] = xx [ 525 ] - xx [ 407 ] * xx [ 72 ] ; xx [ 525
] = xx [ 157 ] * xx [ 523 ] ; xx [ 528 ] = xx [ 524 ] - xx [ 407 ] * xx [ 69
] ; xx [ 524 ] = xx [ 157 ] * xx [ 528 ] ; xx [ 529 ] = xx [ 523 ] - ( xx [
157 ] * xx [ 525 ] - xx [ 524 ] * xx [ 156 ] ) * xx [ 27 ] ; xx [ 523 ] = xx
[ 410 ] - xx [ 27 ] * ( xx [ 506 ] * xx [ 156 ] + xx [ 157 ] * xx [ 521 ] ) -
xx [ 168 ] * xx [ 529 ] ; xx [ 410 ] = xx [ 438 ] + xx [ 501 ] ; xx [ 507 ] =
xx [ 528 ] - xx [ 27 ] * ( xx [ 525 ] * xx [ 156 ] + xx [ 157 ] * xx [ 524 ]
) ; xx [ 522 ] = xx [ 505 ] - ( xx [ 157 ] * xx [ 506 ] - xx [ 521 ] * xx [
156 ] ) * xx [ 27 ] + xx [ 507 ] * xx [ 168 ] ; xx [ 505 ] = ( xx [ 410 ] - (
xx [ 522 ] * xx [ 24 ] - xx [ 523 ] + xx [ 507 ] * xx [ 155 ] + xx [ 70 ] *
xx [ 529 ] ) ) / xx [ 165 ] ; xx [ 530 ] = xx [ 523 ] + xx [ 167 ] * xx [ 505
] ; xx [ 531 ] = xx [ 522 ] + xx [ 109 ] * xx [ 505 ] ; xx [ 532 ] = xx [ 517
] - xx [ 147 ] * xx [ 407 ] + xx [ 91 ] * xx [ 505 ] ; pm_math_quatXform ( xx
+ 285 , xx + 530 , xx + 521 ) ; xx [ 530 ] = xx [ 507 ] + xx [ 121 ] * xx [
505 ] ; xx [ 531 ] = xx [ 529 ] + xx [ 163 ] * xx [ 505 ] ; xx [ 532 ] = xx [
526 ] - xx [ 407 ] * xx [ 75 ] + xx [ 76 ] * xx [ 505 ] ; pm_math_quatXform (
xx + 285 , xx + 530 , xx + 524 ) ; pm_math_cross3 ( xx + 185 , xx + 524 , xx
+ 528 ) ; xx [ 531 ] = xx [ 521 ] + xx [ 528 ] ; xx [ 532 ] = xx [ 522 ] + xx
[ 529 ] ; xx [ 533 ] = xx [ 523 ] + xx [ 530 ] ; xx [ 506 ] = xx [ 412 ] + xx
[ 495 ] + xx [ 488 ] ; xx [ 517 ] = xx [ 418 ] + xx [ 512 ] + xx [ 509 ] ; xx
[ 521 ] = xx [ 493 ] - ( pm_math_dot3 ( xx + 16 , xx + 531 ) + pm_math_dot3 (
xx + 197 , xx + 524 ) ) ; xx [ 522 ] = xx [ 506 ] - ( pm_math_dot3 ( xx + 221
, xx + 531 ) + pm_math_dot3 ( xx + 240 , xx + 524 ) ) ; xx [ 523 ] = xx [ 517
] - ( pm_math_dot3 ( xx + 261 , xx + 531 ) + pm_math_dot3 ( xx + 280 , xx +
524 ) ) ; solveSymmetric ( xx + 310 , xx + 200 , ii + 2 , xx + 521 , 3 , 1 ,
ii [ 5 ] , xx + 524 , xx + 528 ) ; xx [ 521 ] = xx [ 11 ] * xx [ 524 ] + xx [
207 ] * xx [ 525 ] + xx [ 253 ] * xx [ 526 ] ; xx [ 522 ] = xx [ 218 ] * xx [
525 ] - xx [ 12 ] * xx [ 524 ] + xx [ 259 ] * xx [ 526 ] ; xx [ 523 ] = xx [
260 ] * xx [ 526 ] - ( xx [ 14 ] * xx [ 524 ] + xx [ 219 ] * xx [ 525 ] ) ;
pm_math_quatInverseXform ( xx + 285 , xx + 521 , xx + 528 ) ; pm_math_cross3
( xx + 521 , xx + 185 , xx + 532 ) ; xx [ 521 ] = xx [ 220 ] * xx [ 525 ] -
xx [ 183 ] * xx [ 524 ] + xx [ 268 ] * xx [ 526 ] + xx [ 532 ] ; xx [ 522 ] =
xx [ 533 ] - ( xx [ 193 ] * xx [ 524 ] + xx [ 236 ] * xx [ 525 ] + xx [ 269 ]
* xx [ 526 ] ) ; xx [ 523 ] = xx [ 534 ] - ( xx [ 195 ] * xx [ 524 ] + xx [
238 ] * xx [ 525 ] + xx [ 273 ] * xx [ 526 ] ) ; pm_math_quatInverseXform (
xx + 285 , xx + 521 , xx + 532 ) ; xx [ 507 ] = xx [ 505 ] - ( pm_math_dot3 (
xx + 295 , xx + 528 ) + pm_math_dot3 ( xx + 372 , xx + 532 ) ) ; xx [ 505 ] =
xx [ 289 ] * xx [ 524 ] + xx [ 354 ] * xx [ 525 ] + xx [ 370 ] * xx [ 526 ] +
xx [ 320 ] * xx [ 507 ] ; xx [ 383 ] = xx [ 385 ] + xx [ 470 ] + xx [ 464 ] ;
xx [ 384 ] = xx [ 476 ] + xx [ 483 ] ; xx [ 385 ] = xx [ 384 ] / xx [ 79 ] ;
xx [ 462 ] = - xx [ 78 ] * xx [ 385 ] ; xx [ 463 ] = - xx [ 82 ] * xx [ 385 ]
; xx [ 464 ] = - xx [ 83 ] * xx [ 385 ] ; pm_math_quatXform ( xx + 62 , xx +
462 , xx + 468 ) ; xx [ 462 ] = - xx [ 81 ] * xx [ 385 ] ; xx [ 463 ] = xx [
88 ] * xx [ 385 ] ; xx [ 464 ] = xx [ 101 ] * xx [ 385 ] ; pm_math_quatXform
( xx + 62 , xx + 462 , xx + 474 ) ; pm_math_cross3 ( xx + 113 , xx + 474 , xx
+ 462 ) ; xx [ 481 ] = xx [ 470 ] + xx [ 464 ] ; xx [ 424 ] = xx [ 426 ] + (
xx [ 343 ] * xx [ 457 ] + xx [ 499 ] ) * xx [ 27 ] ; xx [ 426 ] = ( xx [ 481
] + xx [ 424 ] ) / xx [ 149 ] ; xx [ 425 ] = xx [ 468 ] + xx [ 462 ] - xx [
426 ] * xx [ 145 ] ; xx [ 457 ] = xx [ 469 ] + xx [ 463 ] - xx [ 426 ] * xx [
160 ] ; xx [ 462 ] = xx [ 157 ] * xx [ 457 ] ; xx [ 464 ] = xx [ 157 ] * xx [
425 ] ; xx [ 468 ] = xx [ 475 ] - xx [ 426 ] * xx [ 72 ] ; xx [ 469 ] = xx [
157 ] * xx [ 468 ] ; xx [ 475 ] = xx [ 474 ] - xx [ 426 ] * xx [ 69 ] ; xx [
474 ] = xx [ 157 ] * xx [ 475 ] ; xx [ 482 ] = xx [ 468 ] - ( xx [ 157 ] * xx
[ 469 ] - xx [ 474 ] * xx [ 156 ] ) * xx [ 27 ] ; xx [ 468 ] = xx [ 425 ] -
xx [ 27 ] * ( xx [ 462 ] * xx [ 156 ] + xx [ 157 ] * xx [ 464 ] ) - xx [ 168
] * xx [ 482 ] ; xx [ 425 ] = xx [ 439 ] + xx [ 502 ] ; xx [ 437 ] = xx [ 475
] - xx [ 27 ] * ( xx [ 469 ] * xx [ 156 ] + xx [ 157 ] * xx [ 474 ] ) ; xx [
439 ] = xx [ 457 ] - ( xx [ 157 ] * xx [ 462 ] - xx [ 464 ] * xx [ 156 ] ) *
xx [ 27 ] + xx [ 437 ] * xx [ 168 ] ; xx [ 457 ] = ( xx [ 425 ] - ( xx [ 439
] * xx [ 24 ] - xx [ 468 ] + xx [ 437 ] * xx [ 155 ] + xx [ 70 ] * xx [ 482 ]
) ) / xx [ 165 ] ; xx [ 462 ] = xx [ 468 ] + xx [ 167 ] * xx [ 457 ] ; xx [
463 ] = xx [ 439 ] + xx [ 109 ] * xx [ 457 ] ; xx [ 464 ] = xx [ 481 ] - xx [
147 ] * xx [ 426 ] + xx [ 91 ] * xx [ 457 ] ; pm_math_quatXform ( xx + 285 ,
xx + 462 , xx + 468 ) ; xx [ 462 ] = xx [ 437 ] + xx [ 121 ] * xx [ 457 ] ;
xx [ 463 ] = xx [ 482 ] + xx [ 163 ] * xx [ 457 ] ; xx [ 464 ] = xx [ 476 ] -
xx [ 426 ] * xx [ 75 ] + xx [ 76 ] * xx [ 457 ] ; pm_math_quatXform ( xx +
285 , xx + 462 , xx + 437 ) ; pm_math_cross3 ( xx + 185 , xx + 437 , xx + 462
) ; xx [ 474 ] = xx [ 468 ] + xx [ 462 ] ; xx [ 475 ] = xx [ 469 ] + xx [ 463
] ; xx [ 476 ] = xx [ 470 ] + xx [ 464 ] ; xx [ 411 ] = xx [ 413 ] + xx [ 496
] + xx [ 489 ] ; xx [ 413 ] = xx [ 419 ] + xx [ 513 ] + xx [ 510 ] ; xx [ 417
] = xx [ 383 ] - ( pm_math_dot3 ( xx + 16 , xx + 474 ) + pm_math_dot3 ( xx +
197 , xx + 437 ) ) ; xx [ 418 ] = xx [ 411 ] - ( pm_math_dot3 ( xx + 221 , xx
+ 474 ) + pm_math_dot3 ( xx + 240 , xx + 437 ) ) ; xx [ 419 ] = xx [ 413 ] -
( pm_math_dot3 ( xx + 261 , xx + 474 ) + pm_math_dot3 ( xx + 280 , xx + 437 )
) ; solveSymmetric ( xx + 310 , xx + 200 , ii + 2 , xx + 417 , 3 , 1 , ii [ 5
] , xx + 437 , xx + 462 ) ; xx [ 417 ] = xx [ 11 ] * xx [ 437 ] + xx [ 207 ]
* xx [ 438 ] + xx [ 253 ] * xx [ 439 ] ; xx [ 418 ] = xx [ 218 ] * xx [ 438 ]
- xx [ 12 ] * xx [ 437 ] + xx [ 259 ] * xx [ 439 ] ; xx [ 419 ] = xx [ 260 ]
* xx [ 439 ] - ( xx [ 14 ] * xx [ 437 ] + xx [ 219 ] * xx [ 438 ] ) ;
pm_math_quatInverseXform ( xx + 285 , xx + 417 , xx + 462 ) ; pm_math_cross3
( xx + 417 , xx + 185 , xx + 468 ) ; xx [ 417 ] = xx [ 220 ] * xx [ 438 ] -
xx [ 183 ] * xx [ 437 ] + xx [ 268 ] * xx [ 439 ] + xx [ 468 ] ; xx [ 418 ] =
xx [ 469 ] - ( xx [ 193 ] * xx [ 437 ] + xx [ 236 ] * xx [ 438 ] + xx [ 269 ]
* xx [ 439 ] ) ; xx [ 419 ] = xx [ 470 ] - ( xx [ 195 ] * xx [ 437 ] + xx [
238 ] * xx [ 438 ] + xx [ 273 ] * xx [ 439 ] ) ; pm_math_quatInverseXform (
xx + 285 , xx + 417 , xx + 468 ) ; xx [ 412 ] = xx [ 457 ] - ( pm_math_dot3 (
xx + 295 , xx + 462 ) + pm_math_dot3 ( xx + 372 , xx + 468 ) ) ; xx [ 417 ] =
xx [ 289 ] * xx [ 437 ] + xx [ 354 ] * xx [ 438 ] + xx [ 370 ] * xx [ 439 ] +
xx [ 320 ] * xx [ 412 ] ; xx [ 418 ] = 0.0 ; xx [ 419 ] = xx [ 98 ] * xx [
340 ] + xx [ 276 ] * xx [ 341 ] + xx [ 299 ] * xx [ 342 ] + xx [ 164 ] * xx [
243 ] ; xx [ 457 ] = xx [ 98 ] * xx [ 420 ] + xx [ 276 ] * xx [ 421 ] + xx [
299 ] * xx [ 422 ] + xx [ 164 ] * xx [ 60 ] ; xx [ 474 ] = xx [ 98 ] * xx [
414 ] + xx [ 276 ] * xx [ 415 ] + xx [ 299 ] * xx [ 416 ] + xx [ 164 ] * xx [
431 ] ; xx [ 475 ] = xx [ 98 ] * xx [ 490 ] + xx [ 276 ] * xx [ 491 ] + xx [
299 ] * xx [ 492 ] + xx [ 164 ] * xx [ 485 ] ; xx [ 476 ] = xx [ 98 ] * xx [
524 ] + xx [ 276 ] * xx [ 525 ] + xx [ 299 ] * xx [ 526 ] + xx [ 164 ] * xx [
507 ] ; xx [ 481 ] = xx [ 98 ] * xx [ 437 ] + xx [ 276 ] * xx [ 438 ] + xx [
299 ] * xx [ 439 ] + xx [ 164 ] * xx [ 412 ] ; xx [ 482 ] = xx [ 96 ] * xx [
420 ] + xx [ 245 ] * xx [ 421 ] + xx [ 275 ] * xx [ 422 ] + xx [ 94 ] * xx [
60 ] ; xx [ 483 ] = xx [ 96 ] * xx [ 414 ] + xx [ 245 ] * xx [ 415 ] + xx [
275 ] * xx [ 416 ] + xx [ 94 ] * xx [ 431 ] ; xx [ 487 ] = xx [ 96 ] * xx [
490 ] + xx [ 245 ] * xx [ 491 ] + xx [ 275 ] * xx [ 492 ] + xx [ 94 ] * xx [
485 ] ; xx [ 488 ] = xx [ 96 ] * xx [ 524 ] + xx [ 245 ] * xx [ 525 ] + xx [
275 ] * xx [ 526 ] + xx [ 94 ] * xx [ 507 ] ; xx [ 489 ] = xx [ 96 ] * xx [
437 ] + xx [ 245 ] * xx [ 438 ] + xx [ 275 ] * xx [ 439 ] + xx [ 94 ] * xx [
412 ] ; xx [ 494 ] = - xx [ 148 ] ; xx [ 495 ] = - xx [ 119 ] ; xx [ 496 ] =
- xx [ 123 ] ; xx [ 119 ] = xx [ 446 ] - xx [ 60 ] ; xx [ 123 ] = xx [ 157 ]
* xx [ 119 ] ; xx [ 148 ] = xx [ 447 ] + xx [ 24 ] * xx [ 60 ] ; xx [ 446 ] =
xx [ 157 ] * xx [ 148 ] ; xx [ 497 ] = xx [ 119 ] - ( xx [ 157 ] * xx [ 123 ]
- xx [ 446 ] * xx [ 156 ] ) * xx [ 27 ] ; xx [ 447 ] = xx [ 148 ] - xx [ 27 ]
* ( xx [ 123 ] * xx [ 156 ] + xx [ 157 ] * xx [ 446 ] ) ; xx [ 498 ] = xx [
497 ] ; xx [ 499 ] = xx [ 447 ] ; xx [ 500 ] = xx [ 448 ] ; xx [ 508 ] = - xx
[ 71 ] ; xx [ 509 ] = - xx [ 74 ] ; xx [ 510 ] = - xx [ 77 ] ; xx [ 71 ] = xx
[ 452 ] + xx [ 155 ] * xx [ 60 ] + xx [ 148 ] * xx [ 168 ] ; xx [ 74 ] = xx [
157 ] * xx [ 71 ] ; xx [ 77 ] = xx [ 453 ] + xx [ 70 ] * xx [ 60 ] - xx [ 168
] * xx [ 119 ] ; xx [ 119 ] = xx [ 157 ] * xx [ 77 ] ; xx [ 123 ] = xx [ 71 ]
- ( xx [ 157 ] * xx [ 74 ] - xx [ 119 ] * xx [ 156 ] ) * xx [ 27 ] ; xx [ 71
] = xx [ 77 ] - xx [ 27 ] * ( xx [ 74 ] * xx [ 156 ] + xx [ 157 ] * xx [ 119
] ) ; xx [ 511 ] = xx [ 123 ] ; xx [ 512 ] = xx [ 71 ] ; xx [ 513 ] = xx [
454 ] ; xx [ 74 ] = xx [ 53 ] - ( pm_math_dot3 ( xx + 494 , xx + 498 ) +
pm_math_dot3 ( xx + 508 , xx + 511 ) ) ; xx [ 498 ] = - xx [ 80 ] ; xx [ 499
] = - xx [ 87 ] ; xx [ 500 ] = - xx [ 83 ] / xx [ 79 ] ; xx [ 511 ] = xx [
497 ] ; xx [ 512 ] = xx [ 447 ] ; xx [ 513 ] = xx [ 448 ] - xx [ 74 ] ;
pm_math_quatInverseXform ( xx + 62 , xx + 511 , xx + 446 ) ; xx [ 521 ] = -
xx [ 84 ] ; xx [ 522 ] = xx [ 99 ] ; xx [ 523 ] = xx [ 102 ] ; pm_math_cross3
( xx + 511 , xx + 113 , xx + 535 ) ; xx [ 511 ] = xx [ 123 ] + xx [ 535 ] ;
xx [ 512 ] = xx [ 71 ] + xx [ 536 ] ; xx [ 513 ] = xx [ 454 ] + xx [ 537 ] ;
pm_math_quatInverseXform ( xx + 62 , xx + 511 , xx + 452 ) ; xx [ 53 ] = xx [
443 ] - xx [ 431 ] ; xx [ 71 ] = xx [ 157 ] * xx [ 53 ] ; xx [ 77 ] = xx [
444 ] + xx [ 24 ] * xx [ 431 ] ; xx [ 80 ] = xx [ 157 ] * xx [ 77 ] ; xx [ 84
] = xx [ 53 ] - ( xx [ 157 ] * xx [ 71 ] - xx [ 80 ] * xx [ 156 ] ) * xx [ 27
] ; xx [ 87 ] = xx [ 77 ] - xx [ 27 ] * ( xx [ 71 ] * xx [ 156 ] + xx [ 157 ]
* xx [ 80 ] ) ; xx [ 511 ] = xx [ 84 ] ; xx [ 512 ] = xx [ 87 ] ; xx [ 513 ]
= xx [ 445 ] ; xx [ 71 ] = xx [ 449 ] + xx [ 155 ] * xx [ 431 ] + xx [ 77 ] *
xx [ 168 ] ; xx [ 77 ] = xx [ 157 ] * xx [ 71 ] ; xx [ 80 ] = xx [ 450 ] + xx
[ 70 ] * xx [ 431 ] - xx [ 168 ] * xx [ 53 ] ; xx [ 53 ] = xx [ 157 ] * xx [
80 ] ; xx [ 102 ] = xx [ 71 ] - ( xx [ 157 ] * xx [ 77 ] - xx [ 53 ] * xx [
156 ] ) * xx [ 27 ] ; xx [ 71 ] = xx [ 80 ] - xx [ 27 ] * ( xx [ 77 ] * xx [
156 ] + xx [ 157 ] * xx [ 53 ] ) ; xx [ 535 ] = xx [ 102 ] ; xx [ 536 ] = xx
[ 71 ] ; xx [ 537 ] = xx [ 451 ] ; xx [ 53 ] = xx [ 430 ] - ( pm_math_dot3 (
xx + 494 , xx + 511 ) + pm_math_dot3 ( xx + 508 , xx + 535 ) ) ; xx [ 511 ] =
xx [ 84 ] ; xx [ 512 ] = xx [ 87 ] ; xx [ 513 ] = xx [ 445 ] - xx [ 53 ] ;
pm_math_quatInverseXform ( xx + 62 , xx + 511 , xx + 443 ) ; pm_math_cross3 (
xx + 511 , xx + 113 , xx + 535 ) ; xx [ 511 ] = xx [ 102 ] + xx [ 535 ] ; xx
[ 512 ] = xx [ 71 ] + xx [ 536 ] ; xx [ 513 ] = xx [ 451 ] + xx [ 537 ] ;
pm_math_quatInverseXform ( xx + 62 , xx + 511 , xx + 449 ) ; xx [ 71 ] = xx [
365 ] - ( pm_math_dot3 ( xx + 498 , xx + 443 ) + pm_math_dot3 ( xx + 521 , xx
+ 449 ) ) ; xx [ 77 ] = xx [ 390 ] * xx [ 414 ] + xx [ 59 ] * xx [ 415 ] + xx
[ 337 ] * xx [ 416 ] + xx [ 48 ] * xx [ 431 ] + xx [ 47 ] * xx [ 53 ] + xx [
399 ] * xx [ 71 ] ; xx [ 80 ] = xx [ 514 ] - xx [ 485 ] ; xx [ 84 ] = xx [
157 ] * xx [ 80 ] ; xx [ 87 ] = xx [ 515 ] + xx [ 24 ] * xx [ 485 ] ; xx [
102 ] = xx [ 157 ] * xx [ 87 ] ; xx [ 119 ] = xx [ 80 ] - ( xx [ 157 ] * xx [
84 ] - xx [ 102 ] * xx [ 156 ] ) * xx [ 27 ] ; xx [ 123 ] = xx [ 87 ] - xx [
27 ] * ( xx [ 84 ] * xx [ 156 ] + xx [ 157 ] * xx [ 102 ] ) ; xx [ 443 ] = xx
[ 119 ] ; xx [ 444 ] = xx [ 123 ] ; xx [ 445 ] = xx [ 516 ] ; xx [ 84 ] = xx
[ 518 ] + xx [ 155 ] * xx [ 485 ] + xx [ 87 ] * xx [ 168 ] ; xx [ 87 ] = xx [
157 ] * xx [ 84 ] ; xx [ 102 ] = xx [ 519 ] + xx [ 70 ] * xx [ 485 ] - xx [
168 ] * xx [ 80 ] ; xx [ 80 ] = xx [ 157 ] * xx [ 102 ] ; xx [ 148 ] = xx [
84 ] - ( xx [ 157 ] * xx [ 87 ] - xx [ 80 ] * xx [ 156 ] ) * xx [ 27 ] ; xx [
84 ] = xx [ 102 ] - xx [ 27 ] * ( xx [ 87 ] * xx [ 156 ] + xx [ 157 ] * xx [
80 ] ) ; xx [ 449 ] = xx [ 148 ] ; xx [ 450 ] = xx [ 84 ] ; xx [ 451 ] = xx [
520 ] ; xx [ 80 ] = xx [ 408 ] - ( pm_math_dot3 ( xx + 494 , xx + 443 ) +
pm_math_dot3 ( xx + 508 , xx + 449 ) ) ; xx [ 443 ] = xx [ 119 ] ; xx [ 444 ]
= xx [ 123 ] ; xx [ 445 ] = xx [ 516 ] - xx [ 80 ] ; pm_math_quatInverseXform
( xx + 62 , xx + 443 , xx + 449 ) ; pm_math_cross3 ( xx + 443 , xx + 113 , xx
+ 511 ) ; xx [ 443 ] = xx [ 148 ] + xx [ 511 ] ; xx [ 444 ] = xx [ 84 ] + xx
[ 512 ] ; xx [ 445 ] = xx [ 520 ] + xx [ 513 ] ; pm_math_quatInverseXform (
xx + 62 , xx + 443 , xx + 511 ) ; xx [ 84 ] = xx [ 480 ] - ( pm_math_dot3 (
xx + 498 , xx + 449 ) + pm_math_dot3 ( xx + 521 , xx + 511 ) ) ; xx [ 87 ] =
xx [ 390 ] * xx [ 490 ] + xx [ 59 ] * xx [ 491 ] + xx [ 337 ] * xx [ 492 ] +
xx [ 48 ] * xx [ 485 ] + xx [ 47 ] * xx [ 80 ] + xx [ 399 ] * xx [ 84 ] ; xx
[ 102 ] = xx [ 528 ] - xx [ 507 ] ; xx [ 119 ] = xx [ 157 ] * xx [ 102 ] ; xx
[ 123 ] = xx [ 529 ] + xx [ 24 ] * xx [ 507 ] ; xx [ 148 ] = xx [ 157 ] * xx
[ 123 ] ; xx [ 365 ] = xx [ 102 ] - ( xx [ 157 ] * xx [ 119 ] - xx [ 148 ] *
xx [ 156 ] ) * xx [ 27 ] ; xx [ 408 ] = xx [ 123 ] - xx [ 27 ] * ( xx [ 119 ]
* xx [ 156 ] + xx [ 157 ] * xx [ 148 ] ) ; xx [ 443 ] = xx [ 365 ] ; xx [ 444
] = xx [ 408 ] ; xx [ 445 ] = xx [ 530 ] ; xx [ 119 ] = xx [ 532 ] + xx [ 155
] * xx [ 507 ] + xx [ 123 ] * xx [ 168 ] ; xx [ 123 ] = xx [ 157 ] * xx [ 119
] ; xx [ 148 ] = xx [ 533 ] + xx [ 70 ] * xx [ 507 ] - xx [ 168 ] * xx [ 102
] ; xx [ 102 ] = xx [ 157 ] * xx [ 148 ] ; xx [ 430 ] = xx [ 119 ] - ( xx [
157 ] * xx [ 123 ] - xx [ 102 ] * xx [ 156 ] ) * xx [ 27 ] ; xx [ 119 ] = xx
[ 148 ] - xx [ 27 ] * ( xx [ 123 ] * xx [ 156 ] + xx [ 157 ] * xx [ 102 ] ) ;
xx [ 449 ] = xx [ 430 ] ; xx [ 450 ] = xx [ 119 ] ; xx [ 451 ] = xx [ 534 ] ;
xx [ 102 ] = xx [ 407 ] - ( pm_math_dot3 ( xx + 494 , xx + 443 ) +
pm_math_dot3 ( xx + 508 , xx + 449 ) ) ; xx [ 443 ] = xx [ 365 ] ; xx [ 444 ]
= xx [ 408 ] ; xx [ 445 ] = xx [ 530 ] - xx [ 102 ] ;
pm_math_quatInverseXform ( xx + 62 , xx + 443 , xx + 449 ) ; pm_math_cross3 (
xx + 443 , xx + 113 , xx + 511 ) ; xx [ 443 ] = xx [ 430 ] + xx [ 511 ] ; xx
[ 444 ] = xx [ 119 ] + xx [ 512 ] ; xx [ 445 ] = xx [ 534 ] + xx [ 513 ] ;
pm_math_quatInverseXform ( xx + 62 , xx + 443 , xx + 511 ) ; xx [ 119 ] = xx
[ 504 ] - ( pm_math_dot3 ( xx + 498 , xx + 449 ) + pm_math_dot3 ( xx + 521 ,
xx + 511 ) ) ; xx [ 123 ] = xx [ 390 ] * xx [ 524 ] + xx [ 59 ] * xx [ 525 ]
+ xx [ 337 ] * xx [ 526 ] + xx [ 48 ] * xx [ 507 ] + xx [ 47 ] * xx [ 102 ] +
xx [ 399 ] * xx [ 119 ] ; xx [ 148 ] = xx [ 462 ] - xx [ 412 ] ; xx [ 365 ] =
xx [ 157 ] * xx [ 148 ] ; xx [ 407 ] = xx [ 463 ] + xx [ 24 ] * xx [ 412 ] ;
xx [ 408 ] = xx [ 157 ] * xx [ 407 ] ; xx [ 430 ] = xx [ 148 ] - ( xx [ 157 ]
* xx [ 365 ] - xx [ 408 ] * xx [ 156 ] ) * xx [ 27 ] ; xx [ 443 ] = xx [ 407
] - xx [ 27 ] * ( xx [ 365 ] * xx [ 156 ] + xx [ 157 ] * xx [ 408 ] ) ; xx [
449 ] = xx [ 430 ] ; xx [ 450 ] = xx [ 443 ] ; xx [ 451 ] = xx [ 464 ] ; xx [
365 ] = xx [ 468 ] + xx [ 155 ] * xx [ 412 ] + xx [ 407 ] * xx [ 168 ] ; xx [
407 ] = xx [ 157 ] * xx [ 365 ] ; xx [ 444 ] = xx [ 469 ] + xx [ 70 ] * xx [
412 ] - xx [ 168 ] * xx [ 148 ] ; xx [ 148 ] = xx [ 157 ] * xx [ 444 ] ; xx [
445 ] = xx [ 365 ] - ( xx [ 157 ] * xx [ 407 ] - xx [ 148 ] * xx [ 156 ] ) *
xx [ 27 ] ; xx [ 365 ] = xx [ 444 ] - xx [ 27 ] * ( xx [ 407 ] * xx [ 156 ] +
xx [ 157 ] * xx [ 148 ] ) ; xx [ 511 ] = xx [ 445 ] ; xx [ 512 ] = xx [ 365 ]
; xx [ 513 ] = xx [ 470 ] ; xx [ 148 ] = xx [ 426 ] - ( pm_math_dot3 ( xx +
494 , xx + 449 ) + pm_math_dot3 ( xx + 508 , xx + 511 ) ) ; xx [ 449 ] = xx [
430 ] ; xx [ 450 ] = xx [ 443 ] ; xx [ 451 ] = xx [ 464 ] - xx [ 148 ] ;
pm_math_quatInverseXform ( xx + 62 , xx + 449 , xx + 462 ) ; pm_math_cross3 (
xx + 449 , xx + 113 , xx + 511 ) ; xx [ 449 ] = xx [ 445 ] + xx [ 511 ] ; xx
[ 450 ] = xx [ 365 ] + xx [ 512 ] ; xx [ 451 ] = xx [ 470 ] + xx [ 513 ] ;
pm_math_quatInverseXform ( xx + 62 , xx + 449 , xx + 443 ) ; xx [ 365 ] = xx
[ 385 ] - ( pm_math_dot3 ( xx + 498 , xx + 462 ) + pm_math_dot3 ( xx + 521 ,
xx + 443 ) ) ; xx [ 385 ] = xx [ 390 ] * xx [ 437 ] + xx [ 59 ] * xx [ 438 ]
+ xx [ 337 ] * xx [ 439 ] + xx [ 48 ] * xx [ 412 ] + xx [ 47 ] * xx [ 148 ] +
xx [ 399 ] * xx [ 365 ] ; xx [ 407 ] = xx [ 347 ] * xx [ 490 ] + xx [ 389 ] *
xx [ 491 ] + xx [ 393 ] * xx [ 492 ] + xx [ 394 ] * xx [ 485 ] + xx [ 423 ] *
xx [ 80 ] + xx [ 353 ] * xx [ 84 ] ; xx [ 408 ] = xx [ 347 ] * xx [ 524 ] +
xx [ 389 ] * xx [ 525 ] + xx [ 393 ] * xx [ 526 ] + xx [ 394 ] * xx [ 507 ] +
xx [ 423 ] * xx [ 102 ] + xx [ 353 ] * xx [ 119 ] ; xx [ 426 ] = xx [ 347 ] *
xx [ 437 ] + xx [ 389 ] * xx [ 438 ] + xx [ 393 ] * xx [ 439 ] + xx [ 394 ] *
xx [ 412 ] + xx [ 423 ] * xx [ 148 ] + xx [ 353 ] * xx [ 365 ] ; xx [ 430 ] =
0.9876509805168177 ; xx [ 443 ] = 0.0917641913397837 ; xx [ 444 ] =
0.126983754362221 ; xx [ 449 ] = xx [ 430 ] ; xx [ 450 ] = xx [ 443 ] ; xx [
451 ] = - xx [ 444 ] ; xx [ 511 ] = - 0.8578129138137675 ; xx [ 512 ] =
0.4993355030609324 ; xx [ 513 ] = 0.04095633244143952 ; xx [ 514 ] = -
0.1146457112593715 ; xx [ 528 ] = 0.07457704069673625 ; xx [ 529 ] =
0.07243809651312444 ; xx [ 530 ] = - 0.7180962801339385 ; xx [ 531 ] =
0.6881342308243889 ; xx [ 445 ] = 1.191471374020015e-4 ; xx [ 462 ] =
2.038300084272748e-16 ; xx [ 463 ] = 66.67273769035506 ; memcpy ( ii + 6 , ii
+ 0 , 1 * sizeof ( int ) ) ; ii [ 1 ] = factorSymmetric ( xx + 463 , 1 , xx +
469 , xx + 468 , ii + 6 , ii + 7 ) ; if ( ii [ 7 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Walk_Sim4/Gait Emulator/prismatic frame/Prismatic' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 464 ] = xx [ 462 ] / xx [ 463 ] ; xx [ 468 ] =
0.01717762853734802 ; xx [ 470 ] = 66.67273547741819 ; xx [ 518 ] = xx [ 445
] * xx [ 464 ] ; xx [ 519 ] = xx [ 468 ] * xx [ 464 ] ; xx [ 520 ] = xx [ 470
] * xx [ 464 ] ; pm_math_quatXform ( xx + 528 , xx + 518 , xx + 532 ) ; xx [
469 ] = 1.387778780781446e-17 ; xx [ 480 ] = 0.1677960361352457 ; xx [ 497 ]
= 0.04272717539859654 ; xx [ 502 ] = 0.9848953643609866 ; xx [ 518 ] = - xx [
480 ] ; xx [ 519 ] = xx [ 497 ] ; xx [ 520 ] = - xx [ 502 ] ; xx [ 504 ] =
1.848357020187904 ; xx [ 536 ] = - 0.9783819743489453 ; xx [ 537 ] = -
0.2066730843661312 ; xx [ 538 ] = - 7.412723362563822e-3 ; xx [ 539 ] = -
1.39702621810027e-3 ; xx [ 540 ] = 0.04244800508256486 ; xx [ 541 ] = -
0.999097700518952 ; xx [ 542 ] = 0.2068012586683307 ; xx [ 543 ] = -
0.9774888250323385 ; xx [ 544 ] = - 0.04181909073728818 ; xx [ 515 ] =
66.67273769035511 ; xx [ 516 ] = xx [ 445 ] / xx [ 463 ] ; xx [ 545 ] = - xx
[ 468 ] * xx [ 516 ] ; xx [ 546 ] = - xx [ 470 ] * xx [ 516 ] ; xx [ 547 ] =
xx [ 468 ] / xx [ 463 ] ; xx [ 550 ] = - xx [ 470 ] * xx [ 547 ] ; xx [ 551 ]
= xx [ 515 ] - xx [ 445 ] * xx [ 516 ] ; xx [ 552 ] = xx [ 545 ] ; xx [ 553 ]
= xx [ 546 ] ; xx [ 554 ] = xx [ 545 ] ; xx [ 555 ] = xx [ 515 ] - xx [ 468 ]
* xx [ 547 ] ; xx [ 556 ] = xx [ 550 ] ; xx [ 557 ] = xx [ 546 ] ; xx [ 558 ]
= xx [ 550 ] ; xx [ 559 ] = xx [ 515 ] - 4445.253656041778 / xx [ 463 ] ;
pm_math_matrix3x3ComposeTranspose ( xx + 551 , xx + 536 , xx + 560 ) ;
pm_math_matrix3x3Compose ( xx + 536 , xx + 560 , xx + 548 ) ; xx [ 536 ] = xx
[ 504 ] + xx [ 548 ] ; xx [ 537 ] = xx [ 549 ] ; xx [ 538 ] = xx [ 550 ] ; xx
[ 539 ] = xx [ 551 ] ; xx [ 540 ] = xx [ 504 ] + xx [ 552 ] ; xx [ 541 ] = xx
[ 553 ] ; xx [ 542 ] = xx [ 554 ] ; xx [ 543 ] = xx [ 555 ] ; xx [ 544 ] = xx
[ 504 ] + xx [ 556 ] ; pm_math_matrix3x3Xform ( xx + 536 , xx + 518 , xx +
557 ) ; xx [ 515 ] = pm_math_dot3 ( xx + 518 , xx + 557 ) ; memcpy ( ii + 6 ,
ii + 0 , 1 * sizeof ( int ) ) ; ii [ 1 ] = factorSymmetric ( xx + 515 , 1 ,
xx + 537 , xx + 536 , ii + 6 , ii + 7 ) ; if ( ii [ 7 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Walk_Sim4/Gait Emulator/prismatic frame/Prismatic2' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 536 ] = ( xx [ 469 ] + pm_math_dot3 ( xx + 518 , xx +
532 ) ) / xx [ 515 ] ; xx [ 540 ] = xx [ 532 ] - xx [ 536 ] * xx [ 557 ] ; xx
[ 541 ] = xx [ 533 ] - xx [ 536 ] * xx [ 558 ] ; xx [ 542 ] = xx [ 534 ] - xx
[ 536 ] * xx [ 559 ] ; pm_math_quatXform ( xx + 511 , xx + 540 , xx + 532 ) ;
xx [ 535 ] = 4.434895228749948 ; xx [ 537 ] = 0.970357879445561 ; xx [ 538 ]
= - 0.1557872415369527 ; xx [ 539 ] = - 0.1847590895523865 ; xx [ 540 ] =
0.2375910449896606 ; xx [ 541 ] = 0.4750408325454394 ; xx [ 542 ] =
0.8472819499760755 ; xx [ 543 ] = - 0.04422760606952021 ; xx [ 544 ] = -
0.8660638214293719 ; xx [ 545 ] = 0.4979732684316662 ; xx [ 546 ] = xx [ 557
] / xx [ 515 ] ; xx [ 560 ] = xx [ 546 ] * xx [ 558 ] ; xx [ 562 ] = xx [ 546
] * xx [ 559 ] ; xx [ 564 ] = xx [ 558 ] / xx [ 515 ] ; xx [ 566 ] = xx [ 564
] * xx [ 559 ] ; xx [ 568 ] = xx [ 559 ] / xx [ 515 ] ; xx [ 570 ] = xx [ 548
] - xx [ 546 ] * xx [ 557 ] + xx [ 504 ] ; xx [ 571 ] = xx [ 549 ] - xx [ 560
] ; xx [ 572 ] = xx [ 550 ] - xx [ 562 ] ; xx [ 573 ] = xx [ 551 ] - xx [ 560
] ; xx [ 574 ] = xx [ 552 ] - xx [ 564 ] * xx [ 558 ] + xx [ 504 ] ; xx [ 575
] = xx [ 553 ] - xx [ 566 ] ; xx [ 576 ] = xx [ 554 ] - xx [ 562 ] ; xx [ 577
] = xx [ 555 ] - xx [ 566 ] ; xx [ 578 ] = xx [ 556 ] - xx [ 568 ] * xx [ 559
] + xx [ 504 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 570 , xx + 537 , xx
+ 548 ) ; pm_math_matrix3x3Compose ( xx + 537 , xx + 548 , xx + 569 ) ; xx [
537 ] = xx [ 535 ] + xx [ 569 ] ; xx [ 538 ] = xx [ 570 ] ; xx [ 539 ] = xx [
571 ] ; xx [ 540 ] = xx [ 572 ] ; xx [ 541 ] = xx [ 535 ] + xx [ 573 ] ; xx [
542 ] = xx [ 574 ] ; xx [ 543 ] = xx [ 575 ] ; xx [ 544 ] = xx [ 576 ] ; xx [
545 ] = xx [ 535 ] + xx [ 577 ] ; pm_math_matrix3x3Xform ( xx + 537 , xx +
449 , xx + 548 ) ; xx [ 504 ] = pm_math_dot3 ( xx + 449 , xx + 548 ) ; memcpy
( ii + 6 , ii + 0 , 1 * sizeof ( int ) ) ; ii [ 1 ] = factorSymmetric ( xx +
504 , 1 , xx + 537 , xx + 535 , ii + 6 , ii + 7 ) ; if ( ii [ 7 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Walk_Sim4/Gait Emulator/prismatic frame/Prismatic1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 535 ] = ( xx [ 30 ] + pm_math_dot3 ( xx + 449 , xx +
532 ) ) / xx [ 504 ] ; xx [ 532 ] = xx [ 546 ] ; xx [ 533 ] = xx [ 564 ] ; xx
[ 534 ] = xx [ 568 ] ; xx [ 537 ] = - xx [ 430 ] * xx [ 535 ] ; xx [ 538 ] =
- xx [ 443 ] * xx [ 535 ] ; xx [ 539 ] = xx [ 444 ] * xx [ 535 ] ;
pm_math_quatInverseXform ( xx + 511 , xx + 537 , xx + 540 ) ; xx [ 537 ] = xx
[ 536 ] + pm_math_dot3 ( xx + 532 , xx + 540 ) ; xx [ 543 ] = - xx [ 516 ] ;
xx [ 544 ] = - xx [ 547 ] ; xx [ 545 ] = - xx [ 470 ] / xx [ 463 ] ; xx [ 551
] = xx [ 540 ] + xx [ 480 ] * xx [ 537 ] ; xx [ 552 ] = xx [ 541 ] - xx [ 497
] * xx [ 537 ] ; xx [ 553 ] = xx [ 542 ] + xx [ 502 ] * xx [ 537 ] ;
pm_math_quatInverseXform ( xx + 528 , xx + 551 , xx + 538 ) ; xx [ 516 ] =
1.000000000000004 ; xx [ 536 ] = xx [ 516 ] / xx [ 463 ] ; xx [ 551 ] = - xx
[ 445 ] * xx [ 536 ] ; xx [ 552 ] = - xx [ 468 ] * xx [ 536 ] ; xx [ 553 ] =
- xx [ 470 ] * xx [ 536 ] ; pm_math_quatXform ( xx + 528 , xx + 551 , xx +
554 ) ; xx [ 541 ] = 5.551115123125783e-16 ; xx [ 547 ] = ( xx [ 541 ] -
pm_math_dot3 ( xx + 518 , xx + 554 ) ) / xx [ 515 ] ; xx [ 551 ] = xx [ 554 ]
+ xx [ 547 ] * xx [ 557 ] ; xx [ 552 ] = xx [ 555 ] + xx [ 547 ] * xx [ 558 ]
; xx [ 553 ] = xx [ 556 ] + xx [ 547 ] * xx [ 559 ] ; pm_math_quatXform ( xx
+ 511 , xx + 551 , xx + 554 ) ; xx [ 542 ] = pm_math_dot3 ( xx + 449 , xx +
554 ) / xx [ 504 ] ; xx [ 551 ] = - xx [ 430 ] * xx [ 542 ] ; xx [ 552 ] = -
xx [ 443 ] * xx [ 542 ] ; xx [ 553 ] = xx [ 444 ] * xx [ 542 ] ;
pm_math_quatInverseXform ( xx + 511 , xx + 551 , xx + 554 ) ; xx [ 551 ] = xx
[ 547 ] - pm_math_dot3 ( xx + 532 , xx + 554 ) ; xx [ 560 ] = xx [ 554 ] - xx
[ 480 ] * xx [ 551 ] ; xx [ 561 ] = xx [ 555 ] + xx [ 497 ] * xx [ 551 ] ; xx
[ 562 ] = xx [ 556 ] - xx [ 502 ] * xx [ 551 ] ; pm_math_quatInverseXform (
xx + 528 , xx + 560 , xx + 553 ) ; xx [ 556 ] = xx [ 536 ] - pm_math_dot3 (
xx + 543 , xx + 553 ) ; xx [ 536 ] = xx [ 97 ] * xx [ 524 ] + xx [ 436 ] * xx
[ 525 ] + xx [ 382 ] * xx [ 526 ] + xx [ 435 ] * xx [ 507 ] + xx [ 409 ] * xx
[ 102 ] + xx [ 455 ] * xx [ 119 ] + xx [ 542 ] - xx [ 469 ] * xx [ 551 ] - xx
[ 462 ] * xx [ 556 ] ; xx [ 542 ] = 3.538835890992687e-16 ; xx [ 547 ] = xx [
542 ] / xx [ 463 ] ; xx [ 552 ] = xx [ 445 ] * xx [ 547 ] ; xx [ 553 ] = xx [
468 ] * xx [ 547 ] ; xx [ 554 ] = xx [ 470 ] * xx [ 547 ] ; pm_math_quatXform
( xx + 528 , xx + 552 , xx + 560 ) ; xx [ 552 ] = 1.000000000000001 ; xx [
554 ] = ( xx [ 552 ] + pm_math_dot3 ( xx + 518 , xx + 560 ) ) / xx [ 515 ] ;
xx [ 563 ] = xx [ 560 ] - xx [ 554 ] * xx [ 557 ] ; xx [ 564 ] = xx [ 561 ] -
xx [ 554 ] * xx [ 558 ] ; xx [ 565 ] = xx [ 562 ] - xx [ 554 ] * xx [ 559 ] ;
pm_math_quatXform ( xx + 511 , xx + 563 , xx + 560 ) ; xx [ 553 ] =
pm_math_dot3 ( xx + 449 , xx + 560 ) / xx [ 504 ] ; xx [ 560 ] = - xx [ 430 ]
* xx [ 553 ] ; xx [ 561 ] = - xx [ 443 ] * xx [ 553 ] ; xx [ 562 ] = xx [ 444
] * xx [ 553 ] ; pm_math_quatInverseXform ( xx + 511 , xx + 560 , xx + 563 )
; xx [ 555 ] = xx [ 554 ] + pm_math_dot3 ( xx + 532 , xx + 563 ) ; xx [ 560 ]
= xx [ 563 ] + xx [ 480 ] * xx [ 555 ] ; xx [ 561 ] = xx [ 564 ] - xx [ 497 ]
* xx [ 555 ] ; xx [ 562 ] = xx [ 565 ] + xx [ 502 ] * xx [ 555 ] ;
pm_math_quatInverseXform ( xx + 528 , xx + 560 , xx + 563 ) ; xx [ 554 ] = xx
[ 547 ] + pm_math_dot3 ( xx + 543 , xx + 563 ) ; xx [ 547 ] = xx [ 97 ] * xx
[ 437 ] + xx [ 436 ] * xx [ 438 ] + xx [ 382 ] * xx [ 439 ] + xx [ 435 ] * xx
[ 412 ] + xx [ 409 ] * xx [ 148 ] + xx [ 455 ] * xx [ 365 ] + xx [ 553 ] + xx
[ 469 ] * xx [ 555 ] + xx [ 462 ] * xx [ 554 ] ; xx [ 553 ] = 1.0 ; xx [ 560
] = xx [ 553 ] / xx [ 504 ] ; xx [ 564 ] = xx [ 430 ] * xx [ 560 ] ; xx [ 565
] = xx [ 443 ] * xx [ 560 ] ; xx [ 566 ] = - xx [ 444 ] * xx [ 560 ] ;
pm_math_quatInverseXform ( xx + 511 , xx + 564 , xx + 561 ) ; xx [ 565 ] =
pm_math_dot3 ( xx + 532 , xx + 561 ) ; xx [ 570 ] = xx [ 561 ] + xx [ 565 ] *
xx [ 480 ] ; xx [ 571 ] = xx [ 562 ] - xx [ 565 ] * xx [ 497 ] ; xx [ 572 ] =
xx [ 563 ] + xx [ 565 ] * xx [ 502 ] ; pm_math_quatInverseXform ( xx + 528 ,
xx + 570 , xx + 562 ) ; xx [ 567 ] = pm_math_dot3 ( xx + 543 , xx + 562 ) ;
xx [ 562 ] = - ( xx [ 560 ] - xx [ 565 ] * xx [ 469 ] - xx [ 567 ] * xx [ 462
] ) ; xx [ 561 ] = 1.0 ; xx [ 563 ] = 1.387778780781434e-17 ; xx [ 564 ] = xx
[ 563 ] / xx [ 515 ] ; xx [ 568 ] = xx [ 564 ] * xx [ 557 ] ; xx [ 569 ] = xx
[ 564 ] * xx [ 558 ] ; xx [ 570 ] = xx [ 564 ] * xx [ 559 ] ;
pm_math_quatXform ( xx + 511 , xx + 568 , xx + 571 ) ; xx [ 566 ] = ( xx [
561 ] - pm_math_dot3 ( xx + 449 , xx + 571 ) ) / xx [ 504 ] ; xx [ 568 ] = xx
[ 430 ] * xx [ 566 ] ; xx [ 569 ] = xx [ 443 ] * xx [ 566 ] ; xx [ 570 ] = -
xx [ 444 ] * xx [ 566 ] ; pm_math_quatInverseXform ( xx + 511 , xx + 568 , xx
+ 571 ) ; xx [ 568 ] = xx [ 564 ] - pm_math_dot3 ( xx + 532 , xx + 571 ) ; xx
[ 574 ] = xx [ 571 ] - xx [ 480 ] * xx [ 568 ] ; xx [ 575 ] = xx [ 572 ] + xx
[ 497 ] * xx [ 568 ] ; xx [ 576 ] = xx [ 573 ] - xx [ 502 ] * xx [ 568 ] ;
pm_math_quatInverseXform ( xx + 528 , xx + 574 , xx + 569 ) ; xx [ 564 ] =
pm_math_dot3 ( xx + 543 , xx + 569 ) ; xx [ 570 ] = xx [ 564 ] * xx [ 462 ] -
( xx [ 469 ] * xx [ 568 ] + xx [ 566 ] ) ; xx [ 569 ] = xx [ 493 ] * xx [ 437
] + xx [ 506 ] * xx [ 438 ] + xx [ 517 ] * xx [ 439 ] + xx [ 410 ] * xx [ 412
] + xx [ 527 ] * xx [ 148 ] + xx [ 503 ] * xx [ 365 ] - xx [ 541 ] * xx [ 555
] - xx [ 516 ] * xx [ 554 ] ; xx [ 571 ] = - ( xx [ 565 ] * xx [ 541 ] + xx [
567 ] * xx [ 516 ] ) ; xx [ 572 ] = xx [ 541 ] * xx [ 568 ] - xx [ 564 ] * xx
[ 516 ] ; xx [ 573 ] = xx [ 565 ] * xx [ 552 ] + xx [ 567 ] * xx [ 542 ] ; xx
[ 565 ] = xx [ 564 ] * xx [ 542 ] - xx [ 552 ] * xx [ 568 ] ; xx [ 564 ] =
7.923384185550507 ; memcpy ( ii + 6 , ii + 0 , 1 * sizeof ( int ) ) ; ii [ 1
] = factorSymmetric ( xx + 564 , 1 , xx + 574 , xx + 567 , ii + 6 , ii + 7 )
; if ( ii [ 7 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Walk_Sim4/Gait Emulator/prismatic frame/Prismatic6' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 567 ] = xx [ 553 ] * xx [ 566 ] ; xx [ 574 ] =
3.488488956800559 ; memcpy ( ii + 6 , ii + 0 , 1 * sizeof ( int ) ) ; ii [ 1
] = factorSymmetric ( xx + 574 , 1 , xx + 577 , xx + 576 , ii + 6 , ii + 7 )
; if ( ii [ 7 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Walk_Sim4/Gait Emulator/prismatic frame/Prismatic Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 576 ] = xx [ 289 ] * xx [ 291 ] + xx [ 354 ] * xx [
292 ] + xx [ 370 ] * xx [ 293 ] + xx [ 320 ] * ( xx [ 319 ] - ( pm_math_dot3
( xx + 295 , xx + 359 ) + pm_math_dot3 ( xx + 372 , xx + 375 ) ) ) ; xx [ 577
] = xx [ 105 ] ; xx [ 578 ] = xx [ 124 ] ; xx [ 579 ] = xx [ 55 ] ; xx [ 580
] = xx [ 392 ] ; xx [ 581 ] = xx [ 484 ] ; xx [ 582 ] = xx [ 505 ] ; xx [ 583
] = xx [ 417 ] ; xx [ 584 ] = xx [ 418 ] ; xx [ 585 ] = xx [ 418 ] ; xx [ 586
] = xx [ 105 ] ; xx [ 587 ] = xx [ 98 ] * xx [ 356 ] + xx [ 276 ] * xx [ 357
] + xx [ 299 ] * xx [ 358 ] + xx [ 164 ] * xx [ 204 ] ; xx [ 588 ] = xx [ 419
] ; xx [ 589 ] = xx [ 457 ] ; xx [ 590 ] = xx [ 474 ] ; xx [ 591 ] = xx [ 475
] ; xx [ 592 ] = xx [ 476 ] ; xx [ 593 ] = xx [ 481 ] ; xx [ 594 ] = xx [ 418
] ; xx [ 595 ] = xx [ 418 ] ; xx [ 596 ] = xx [ 124 ] ; xx [ 597 ] = xx [ 419
] ; xx [ 598 ] = xx [ 96 ] * xx [ 340 ] + xx [ 245 ] * xx [ 341 ] + xx [ 275
] * xx [ 342 ] + xx [ 94 ] * xx [ 243 ] ; xx [ 599 ] = xx [ 482 ] ; xx [ 600
] = xx [ 483 ] ; xx [ 601 ] = xx [ 487 ] ; xx [ 602 ] = xx [ 488 ] ; xx [ 603
] = xx [ 489 ] ; xx [ 604 ] = xx [ 418 ] ; xx [ 605 ] = xx [ 418 ] ; xx [ 606
] = xx [ 55 ] ; xx [ 607 ] = xx [ 457 ] ; xx [ 608 ] = xx [ 482 ] ; xx [ 609
] = xx [ 390 ] * xx [ 420 ] + xx [ 59 ] * xx [ 421 ] + xx [ 337 ] * xx [ 422
] + xx [ 48 ] * xx [ 60 ] + xx [ 47 ] * xx [ 74 ] + xx [ 399 ] * ( xx [ 402 ]
- ( pm_math_dot3 ( xx + 498 , xx + 446 ) + pm_math_dot3 ( xx + 521 , xx + 452
) ) ) ; xx [ 610 ] = xx [ 77 ] ; xx [ 611 ] = xx [ 87 ] ; xx [ 612 ] = xx [
123 ] ; xx [ 613 ] = xx [ 385 ] ; xx [ 614 ] = xx [ 418 ] ; xx [ 615 ] = xx [
418 ] ; xx [ 616 ] = xx [ 392 ] ; xx [ 617 ] = xx [ 474 ] ; xx [ 618 ] = xx [
483 ] ; xx [ 619 ] = xx [ 77 ] ; xx [ 620 ] = xx [ 347 ] * xx [ 414 ] + xx [
389 ] * xx [ 415 ] + xx [ 393 ] * xx [ 416 ] + xx [ 394 ] * xx [ 431 ] + xx [
423 ] * xx [ 53 ] + xx [ 353 ] * xx [ 71 ] ; xx [ 621 ] = xx [ 407 ] ; xx [
622 ] = xx [ 408 ] ; xx [ 623 ] = xx [ 426 ] ; xx [ 624 ] = xx [ 418 ] ; xx [
625 ] = xx [ 418 ] ; xx [ 626 ] = xx [ 484 ] ; xx [ 627 ] = xx [ 475 ] ; xx [
628 ] = xx [ 487 ] ; xx [ 629 ] = xx [ 87 ] ; xx [ 630 ] = xx [ 407 ] ; xx [
631 ] = xx [ 97 ] * xx [ 490 ] + xx [ 436 ] * xx [ 491 ] + xx [ 382 ] * xx [
492 ] + xx [ 435 ] * xx [ 485 ] + xx [ 409 ] * xx [ 80 ] + xx [ 455 ] * xx [
84 ] + xx [ 535 ] + xx [ 469 ] * xx [ 537 ] + xx [ 462 ] * ( xx [ 464 ] +
pm_math_dot3 ( xx + 543 , xx + 538 ) ) ; xx [ 632 ] = xx [ 536 ] ; xx [ 633 ]
= xx [ 547 ] ; xx [ 634 ] = xx [ 562 ] ; xx [ 635 ] = xx [ 570 ] ; xx [ 636 ]
= xx [ 505 ] ; xx [ 637 ] = xx [ 476 ] ; xx [ 638 ] = xx [ 488 ] ; xx [ 639 ]
= xx [ 123 ] ; xx [ 640 ] = xx [ 408 ] ; xx [ 641 ] = xx [ 536 ] ; xx [ 642 ]
= xx [ 493 ] * xx [ 524 ] + xx [ 506 ] * xx [ 525 ] + xx [ 517 ] * xx [ 526 ]
+ xx [ 410 ] * xx [ 507 ] + xx [ 527 ] * xx [ 102 ] + xx [ 503 ] * xx [ 119 ]
+ xx [ 541 ] * xx [ 551 ] + xx [ 516 ] * xx [ 556 ] ; xx [ 643 ] = xx [ 569 ]
; xx [ 644 ] = xx [ 571 ] ; xx [ 645 ] = xx [ 572 ] ; xx [ 646 ] = xx [ 417 ]
; xx [ 647 ] = xx [ 481 ] ; xx [ 648 ] = xx [ 489 ] ; xx [ 649 ] = xx [ 385 ]
; xx [ 650 ] = xx [ 426 ] ; xx [ 651 ] = xx [ 547 ] ; xx [ 652 ] = xx [ 569 ]
; xx [ 653 ] = xx [ 383 ] * xx [ 437 ] + xx [ 411 ] * xx [ 438 ] + xx [ 413 ]
* xx [ 439 ] + xx [ 425 ] * xx [ 412 ] + xx [ 424 ] * xx [ 148 ] + xx [ 384 ]
* xx [ 365 ] + xx [ 552 ] * xx [ 555 ] + xx [ 542 ] * xx [ 554 ] ; xx [ 654 ]
= xx [ 573 ] ; xx [ 655 ] = xx [ 565 ] ; xx [ 656 ] = xx [ 418 ] ; xx [ 657 ]
= xx [ 418 ] ; xx [ 658 ] = xx [ 418 ] ; xx [ 659 ] = xx [ 418 ] ; xx [ 660 ]
= xx [ 418 ] ; xx [ 661 ] = xx [ 562 ] ; xx [ 662 ] = xx [ 571 ] ; xx [ 663 ]
= xx [ 573 ] ; xx [ 664 ] = xx [ 553 ] * xx [ 560 ] + 1.000000000000001 / xx
[ 564 ] ; xx [ 665 ] = xx [ 567 ] ; xx [ 666 ] = xx [ 418 ] ; xx [ 667 ] = xx
[ 418 ] ; xx [ 668 ] = xx [ 418 ] ; xx [ 669 ] = xx [ 418 ] ; xx [ 670 ] = xx
[ 418 ] ; xx [ 671 ] = xx [ 570 ] ; xx [ 672 ] = xx [ 572 ] ; xx [ 673 ] = xx
[ 565 ] ; xx [ 674 ] = xx [ 567 ] ; xx [ 675 ] = xx [ 561 ] * xx [ 566 ] + xx
[ 563 ] * xx [ 568 ] + xx [ 553 ] / xx [ 574 ] ; xx [ 53 ] = xx [ 343 ] * xx
[ 343 ] ; xx [ 55 ] = ( xx [ 53 ] + xx [ 344 ] * xx [ 344 ] ) * xx [ 27 ] -
xx [ 30 ] ; xx [ 60 ] = xx [ 344 ] * xx [ 345 ] ; xx [ 71 ] = xx [ 343 ] * xx
[ 346 ] ; xx [ 74 ] = xx [ 27 ] * ( xx [ 60 ] - xx [ 71 ] ) ; xx [ 77 ] = xx
[ 344 ] * xx [ 346 ] ; xx [ 80 ] = xx [ 343 ] * xx [ 345 ] ; xx [ 84 ] = ( xx
[ 60 ] + xx [ 71 ] ) * xx [ 27 ] ; xx [ 60 ] = ( xx [ 53 ] + xx [ 345 ] * xx
[ 345 ] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 71 ] = xx [ 345 ] * xx [ 346 ] ; xx
[ 87 ] = xx [ 343 ] * xx [ 344 ] ; xx [ 99 ] = xx [ 27 ] * ( xx [ 77 ] - xx [
80 ] ) ; xx [ 102 ] = ( xx [ 71 ] + xx [ 87 ] ) * xx [ 27 ] ; xx [ 565 ] = xx
[ 55 ] ; xx [ 566 ] = xx [ 74 ] ; xx [ 567 ] = ( xx [ 77 ] + xx [ 80 ] ) * xx
[ 27 ] ; xx [ 568 ] = xx [ 84 ] ; xx [ 569 ] = xx [ 60 ] ; xx [ 570 ] = xx [
27 ] * ( xx [ 71 ] - xx [ 87 ] ) ; xx [ 571 ] = xx [ 99 ] ; xx [ 572 ] = xx [
102 ] ; xx [ 573 ] = ( xx [ 53 ] + xx [ 346 ] * xx [ 346 ] ) * xx [ 27 ] - xx
[ 30 ] ; xx [ 53 ] = xx [ 206 ] * xx [ 206 ] ; xx [ 71 ] = xx [ 257 ] * xx [
256 ] ; xx [ 77 ] = xx [ 205 ] * xx [ 256 ] ; xx [ 80 ] = xx [ 206 ] * xx [
257 ] ; xx [ 87 ] = xx [ 205 ] * xx [ 257 ] ; xx [ 105 ] = xx [ 206 ] * xx [
256 ] ; xx [ 676 ] = ( xx [ 53 ] + xx [ 256 ] * xx [ 256 ] ) * xx [ 27 ] - xx
[ 30 ] ; xx [ 677 ] = xx [ 27 ] * ( xx [ 71 ] - xx [ 304 ] ) ; xx [ 678 ] = (
xx [ 77 ] + xx [ 80 ] ) * xx [ 27 ] ; xx [ 679 ] = ( xx [ 71 ] + xx [ 304 ] )
* xx [ 27 ] ; xx [ 680 ] = ( xx [ 53 ] + xx [ 257 ] * xx [ 257 ] ) * xx [ 27
] - xx [ 30 ] ; xx [ 681 ] = xx [ 27 ] * ( xx [ 87 ] - xx [ 105 ] ) ; xx [
682 ] = xx [ 27 ] * ( xx [ 77 ] - xx [ 80 ] ) ; xx [ 683 ] = ( xx [ 87 ] + xx
[ 105 ] ) * xx [ 27 ] ; xx [ 684 ] = ( xx [ 53 ] + xx [ 205 ] * xx [ 205 ] )
* xx [ 27 ] - xx [ 30 ] ; xx [ 53 ] = xx [ 205 ] * xx [ 251 ] ; xx [ 71 ] =
xx [ 256 ] - xx [ 251 ] * xx [ 257 ] ; xx [ 291 ] = xx [ 205 ] ; xx [ 292 ] =
- xx [ 53 ] ; xx [ 293 ] = - xx [ 71 ] ; pm_math_cross3 ( xx + 300 , xx + 291
, xx + 340 ) ; xx [ 77 ] = xx [ 27 ] * ( xx [ 340 ] - xx [ 304 ] ) - xx [ 251
] ; xx [ 80 ] = xx [ 77 ] * inputDot [ 4 ] ; xx [ 87 ] = xx [ 80 ] - inputDot
[ 2 ] ; xx [ 105 ] = xx [ 27 ] * ( xx [ 341 ] + xx [ 206 ] * xx [ 53 ] ) - xx
[ 30 ] ; xx [ 53 ] = xx [ 105 ] * inputDot [ 4 ] ; xx [ 119 ] = xx [ 27 ] *
xx [ 244 ] * xx [ 244 ] - xx [ 30 ] ; xx [ 123 ] = xx [ 119 ] * inputDot [ 3
] ; xx [ 124 ] = xx [ 53 ] + xx [ 123 ] ; xx [ 148 ] = xx [ 206 ] * xx [ 71 ]
+ xx [ 342 ] ; xx [ 71 ] = xx [ 148 ] * xx [ 27 ] ; xx [ 204 ] = xx [ 71 ] *
inputDot [ 4 ] ; xx [ 243 ] = xx [ 290 ] * xx [ 244 ] ; xx [ 251 ] = xx [ 27
] * xx [ 243 ] * inputDot [ 3 ] ; xx [ 290 ] = xx [ 87 ] ; xx [ 291 ] = xx [
124 ] ; xx [ 292 ] = xx [ 204 ] - xx [ 251 ] ; pm_math_matrix3x3PostCross (
xx + 676 , xx + 290 , xx + 685 ) ; pm_math_matrix3x3PostCross ( xx + 685 , xx
+ 290 , xx + 694 ) ; xx [ 340 ] = xx [ 80 ] ; xx [ 341 ] = xx [ 53 ] ; xx [
342 ] = xx [ 204 ] ; pm_math_cross3 ( xx + 290 , xx + 340 , xx + 355 ) ; xx [
290 ] = - xx [ 355 ] ; xx [ 291 ] = xx [ 251 ] * inputDot [ 2 ] - xx [ 356 ]
; xx [ 292 ] = xx [ 123 ] * inputDot [ 2 ] - xx [ 357 ] ;
pm_math_matrix3x3PostCross ( xx + 676 , xx + 290 , xx + 685 ) ; xx [ 703 ] =
xx [ 694 ] + xx [ 685 ] ; xx [ 704 ] = xx [ 695 ] + xx [ 686 ] ; xx [ 705 ] =
xx [ 696 ] + xx [ 687 ] ; xx [ 706 ] = xx [ 697 ] + xx [ 688 ] ; xx [ 707 ] =
xx [ 698 ] + xx [ 689 ] ; xx [ 708 ] = xx [ 699 ] + xx [ 690 ] ; xx [ 709 ] =
xx [ 700 ] + xx [ 691 ] ; xx [ 710 ] = xx [ 701 ] + xx [ 692 ] ; xx [ 711 ] =
xx [ 702 ] + xx [ 693 ] ; pm_math_matrix3x3Compose ( xx + 565 , xx + 703 , xx
+ 685 ) ; xx [ 53 ] = xx [ 332 ] * xx [ 332 ] ; xx [ 80 ] = xx [ 333 ] * xx [
333 ] ; xx [ 123 ] = ( xx [ 53 ] + xx [ 80 ] ) * xx [ 27 ] - xx [ 30 ] ; xx [
204 ] = xx [ 333 ] * xx [ 334 ] ; xx [ 244 ] = xx [ 332 ] * xx [ 335 ] ; xx [
290 ] = xx [ 27 ] * ( xx [ 204 ] - xx [ 244 ] ) ; xx [ 291 ] = xx [ 333 ] *
xx [ 335 ] ; xx [ 292 ] = xx [ 332 ] * xx [ 334 ] ; xx [ 298 ] = ( xx [ 291 ]
+ xx [ 292 ] ) * xx [ 27 ] ; xx [ 293 ] = ( xx [ 204 ] + xx [ 244 ] ) * xx [
27 ] ; xx [ 304 ] = xx [ 334 ] * xx [ 334 ] ; xx [ 319 ] = ( xx [ 53 ] + xx [
304 ] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 321 ] = xx [ 334 ] * xx [ 335 ] ; xx [
340 ] = xx [ 332 ] * xx [ 333 ] ; xx [ 342 ] = xx [ 27 ] * ( xx [ 321 ] - xx
[ 340 ] ) ; xx [ 341 ] = xx [ 27 ] * ( xx [ 291 ] - xx [ 292 ] ) ; xx [ 355 ]
= ( xx [ 321 ] + xx [ 340 ] ) * xx [ 27 ] ; xx [ 356 ] = xx [ 335 ] * xx [
335 ] ; xx [ 358 ] = ( xx [ 53 ] + xx [ 356 ] ) * xx [ 27 ] - xx [ 30 ] ; xx
[ 565 ] = xx [ 123 ] ; xx [ 566 ] = xx [ 290 ] ; xx [ 567 ] = xx [ 298 ] ; xx
[ 568 ] = xx [ 293 ] ; xx [ 569 ] = xx [ 319 ] ; xx [ 570 ] = xx [ 342 ] ; xx
[ 571 ] = xx [ 341 ] ; xx [ 572 ] = xx [ 355 ] ; xx [ 573 ] = xx [ 358 ] ; xx
[ 53 ] = xx [ 24 ] * state [ 10 ] ; xx [ 357 ] = xx [ 53 ] * xx [ 34 ] + xx [
27 ] * xx [ 21 ] * state [ 10 ] ; xx [ 21 ] = xx [ 26 ] * xx [ 53 ] + xx [ 15
] * state [ 10 ] ; xx [ 15 ] = xx [ 53 ] * xx [ 36 ] + xx [ 27 ] * xx [ 23 ]
* state [ 10 ] ; xx [ 694 ] = - xx [ 357 ] * xx [ 53 ] ; xx [ 695 ] = - xx [
357 ] * state [ 10 ] ; xx [ 696 ] = - ( xx [ 29 ] * xx [ 53 ] * xx [ 53 ] +
xx [ 29 ] * state [ 10 ] * state [ 10 ] ) ; xx [ 697 ] = - xx [ 21 ] * xx [
53 ] ; xx [ 698 ] = - xx [ 21 ] * state [ 10 ] ; xx [ 699 ] = - ( xx [ 53 ] *
xx [ 37 ] * xx [ 53 ] + xx [ 37 ] * state [ 10 ] * state [ 10 ] ) ; xx [ 700
] = - xx [ 15 ] * xx [ 53 ] ; xx [ 701 ] = - xx [ 15 ] * state [ 10 ] ; xx [
702 ] = - ( xx [ 53 ] * xx [ 20 ] * xx [ 53 ] + xx [ 20 ] * state [ 10 ] *
state [ 10 ] ) ; pm_math_matrix3x3Compose ( xx + 565 , xx + 694 , xx + 703 )
; pm_math_matrix3x3Compose ( xx + 703 , xx + 676 , xx + 712 ) ;
pm_math_quatXform ( xx + 328 , xx + 4 , xx + 359 ) ; xx [ 4 ] = xx [ 359 ] *
xx [ 298 ] - xx [ 361 ] * xx [ 123 ] ; xx [ 6 ] = xx [ 360 ] * xx [ 123 ] -
xx [ 359 ] * xx [ 290 ] ; xx [ 15 ] = xx [ 361 ] * xx [ 290 ] - xx [ 360 ] *
xx [ 298 ] ; xx [ 20 ] = xx [ 359 ] * xx [ 6 ] - xx [ 361 ] * xx [ 15 ] ; xx
[ 21 ] = xx [ 360 ] * xx [ 15 ] - xx [ 359 ] * xx [ 4 ] ; xx [ 5 ] = xx [ 359
] * xx [ 342 ] - xx [ 361 ] * xx [ 293 ] ; xx [ 15 ] = xx [ 360 ] * xx [ 293
] - xx [ 359 ] * xx [ 319 ] ; xx [ 23 ] = xx [ 361 ] * xx [ 319 ] - xx [ 360
] * xx [ 342 ] ; xx [ 26 ] = xx [ 359 ] * xx [ 15 ] - xx [ 361 ] * xx [ 23 ]
; xx [ 29 ] = xx [ 360 ] * xx [ 23 ] - xx [ 359 ] * xx [ 5 ] ; xx [ 23 ] = xx
[ 359 ] * xx [ 358 ] - xx [ 361 ] * xx [ 341 ] ; xx [ 36 ] = xx [ 360 ] * xx
[ 341 ] - xx [ 359 ] * xx [ 355 ] ; xx [ 123 ] = xx [ 361 ] * xx [ 355 ] - xx
[ 360 ] * xx [ 358 ] ; xx [ 293 ] = xx [ 359 ] * xx [ 36 ] - xx [ 361 ] * xx
[ 123 ] ; xx [ 37 ] = xx [ 360 ] * xx [ 123 ] - xx [ 359 ] * xx [ 23 ] ; xx [
676 ] = xx [ 361 ] * xx [ 4 ] - xx [ 360 ] * xx [ 6 ] ; xx [ 677 ] = xx [ 20
] ; xx [ 678 ] = xx [ 21 ] ; xx [ 679 ] = xx [ 361 ] * xx [ 5 ] - xx [ 360 ]
* xx [ 15 ] ; xx [ 680 ] = xx [ 26 ] ; xx [ 681 ] = xx [ 29 ] ; xx [ 682 ] =
xx [ 361 ] * xx [ 23 ] - xx [ 360 ] * xx [ 36 ] ; xx [ 683 ] = xx [ 293 ] ;
xx [ 684 ] = xx [ 37 ] ; xx [ 4 ] = xx [ 323 ] * xx [ 323 ] ; xx [ 6 ] = xx [
324 ] * xx [ 325 ] ; xx [ 15 ] = xx [ 323 ] * xx [ 326 ] ; xx [ 23 ] = xx [
324 ] * xx [ 326 ] ; xx [ 36 ] = xx [ 323 ] * xx [ 325 ] ; xx [ 123 ] = xx [
325 ] * xx [ 326 ] ; xx [ 298 ] = xx [ 323 ] * xx [ 324 ] ; xx [ 721 ] = ( xx
[ 4 ] + xx [ 324 ] * xx [ 324 ] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 722 ] = xx [
27 ] * ( xx [ 6 ] - xx [ 15 ] ) ; xx [ 723 ] = ( xx [ 23 ] + xx [ 36 ] ) * xx
[ 27 ] ; xx [ 724 ] = ( xx [ 6 ] + xx [ 15 ] ) * xx [ 27 ] ; xx [ 725 ] = (
xx [ 4 ] + xx [ 325 ] * xx [ 325 ] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 726 ] =
xx [ 27 ] * ( xx [ 123 ] - xx [ 298 ] ) ; xx [ 727 ] = xx [ 27 ] * ( xx [ 23
] - xx [ 36 ] ) ; xx [ 728 ] = ( xx [ 123 ] + xx [ 298 ] ) * xx [ 27 ] ; xx [
729 ] = ( xx [ 4 ] + xx [ 326 ] * xx [ 326 ] ) * xx [ 27 ] - xx [ 30 ] ;
pm_math_matrix3x3Compose ( xx + 676 , xx + 721 , xx + 730 ) ; xx [ 4 ] = xx [
0 ] * xx [ 0 ] ; xx [ 6 ] = xx [ 1 ] * xx [ 2 ] ; xx [ 15 ] = xx [ 0 ] * xx [
3 ] ; xx [ 23 ] = xx [ 1 ] * xx [ 3 ] ; xx [ 36 ] = xx [ 0 ] * xx [ 2 ] ; xx
[ 123 ] = xx [ 2 ] * xx [ 3 ] ; xx [ 298 ] = xx [ 0 ] * xx [ 1 ] ; xx [ 739 ]
= ( xx [ 4 ] + xx [ 1 ] * xx [ 1 ] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 740 ] =
xx [ 27 ] * ( xx [ 6 ] - xx [ 15 ] ) ; xx [ 741 ] = ( xx [ 23 ] + xx [ 36 ] )
* xx [ 27 ] ; xx [ 742 ] = ( xx [ 6 ] + xx [ 15 ] ) * xx [ 27 ] ; xx [ 743 ]
= ( xx [ 4 ] + xx [ 2 ] * xx [ 2 ] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 744 ] =
xx [ 27 ] * ( xx [ 123 ] - xx [ 298 ] ) ; xx [ 745 ] = xx [ 27 ] * ( xx [ 23
] - xx [ 36 ] ) ; xx [ 746 ] = ( xx [ 123 ] + xx [ 298 ] ) * xx [ 27 ] ; xx [
747 ] = ( xx [ 4 ] + xx [ 3 ] * xx [ 3 ] ) * xx [ 27 ] - xx [ 30 ] ;
pm_math_quatInverseXform ( xx + 323 , xx + 359 , xx + 0 ) ;
pm_math_matrix3x3PostCross ( xx + 739 , xx + 0 , xx + 323 ) ; xx [ 0 ] = xx [
205 ] * xx [ 53 ] ; xx [ 2 ] = xx [ 205 ] * state [ 10 ] ; xx [ 4 ] = xx [ 53
] * xx [ 256 ] + xx [ 257 ] * state [ 10 ] ; xx [ 375 ] = - xx [ 0 ] ; xx [
376 ] = - xx [ 2 ] ; xx [ 377 ] = xx [ 4 ] ; pm_math_cross3 ( xx + 300 , xx +
375 , xx + 414 ) ; xx [ 1 ] = ( xx [ 206 ] * xx [ 0 ] + xx [ 414 ] ) * xx [
27 ] - state [ 10 ] ; xx [ 0 ] = xx [ 53 ] + ( xx [ 206 ] * xx [ 2 ] + xx [
415 ] ) * xx [ 27 ] ; xx [ 3 ] = xx [ 27 ] * ( xx [ 416 ] - xx [ 4 ] * xx [
206 ] ) ; xx [ 4 ] = xx [ 27 ] * xx [ 148 ] * inputDot [ 4 ] - xx [ 251 ] ;
xx [ 300 ] = xx [ 1 ] + xx [ 87 ] ; xx [ 301 ] = xx [ 0 ] + xx [ 124 ] ; xx [
302 ] = xx [ 3 ] + xx [ 4 ] ; pm_math_matrix3x3PostCross ( xx + 323 , xx +
300 , xx + 739 ) ; xx [ 300 ] = xx [ 1 ] ; xx [ 301 ] = xx [ 0 ] ; xx [ 302 ]
= xx [ 3 ] ; pm_math_matrix3x3PostCross ( xx + 721 , xx + 300 , xx + 323 ) ;
xx [ 0 ] = xx [ 87 ] ; xx [ 1 ] = xx [ 124 ] ; xx [ 2 ] = xx [ 4 ] ;
pm_math_matrix3x3PostCross ( xx + 323 , xx + 0 , xx + 721 ) ;
pm_math_matrix3x3Compose ( xx + 565 , xx + 721 , xx + 323 ) ; xx [ 0 ] = xx [
13 ] * xx [ 359 ] ; xx [ 1 ] = xx [ 140 ] * xx [ 360 ] ; xx [ 2 ] = xx [ 181
] * xx [ 361 ] ; pm_math_cross3 ( xx + 359 , xx + 0 , xx + 3 ) ;
pm_math_quatInverseXform ( xx + 285 , xx + 359 , xx + 0 ) ; xx [ 6 ] = xx [ 0
] - state [ 10 ] ; xx [ 13 ] = xx [ 1 ] + xx [ 53 ] ; xx [ 300 ] = xx [ 6 ] ;
xx [ 301 ] = xx [ 13 ] ; xx [ 302 ] = xx [ 2 ] ; xx [ 375 ] = xx [ 22 ] * xx
[ 6 ] ; xx [ 376 ] = xx [ 13 ] * xx [ 176 ] ; xx [ 377 ] = xx [ 136 ] * xx [
2 ] ; pm_math_cross3 ( xx + 300 , xx + 375 , xx + 414 ) ; xx [ 15 ] = xx [
157 ] * xx [ 6 ] ; xx [ 22 ] = xx [ 13 ] * xx [ 157 ] ; xx [ 36 ] = xx [ 6 ]
- ( xx [ 157 ] * xx [ 15 ] - xx [ 22 ] * xx [ 156 ] ) * xx [ 27 ] ; xx [ 23 ]
= xx [ 13 ] - xx [ 27 ] * ( xx [ 15 ] * xx [ 156 ] + xx [ 157 ] * xx [ 22 ] )
; xx [ 15 ] = xx [ 2 ] - state [ 12 ] ; xx [ 300 ] = xx [ 36 ] ; xx [ 301 ] =
xx [ 23 ] ; xx [ 302 ] = xx [ 15 ] ; xx [ 375 ] = xx [ 25 ] * xx [ 36 ] ; xx
[ 376 ] = xx [ 23 ] * xx [ 161 ] ; xx [ 377 ] = xx [ 146 ] * xx [ 15 ] ;
pm_math_cross3 ( xx + 300 , xx + 375 , xx + 419 ) ; pm_math_quatInverseXform
( xx + 62 , xx + 300 , xx + 375 ) ; xx [ 15 ] = xx [ 51 ] * state [ 14 ] ; xx
[ 22 ] = xx [ 375 ] - xx [ 15 ] ; xx [ 25 ] = xx [ 54 ] * state [ 14 ] ; xx [
87 ] = xx [ 376 ] - xx [ 25 ] ; xx [ 123 ] = xx [ 56 ] * state [ 14 ] ; xx [
124 ] = xx [ 377 ] - xx [ 123 ] ; xx [ 437 ] = xx [ 22 ] ; xx [ 438 ] = xx [
87 ] ; xx [ 439 ] = xx [ 124 ] ; xx [ 446 ] = xx [ 22 ] * xx [ 35 ] ; xx [
447 ] = xx [ 87 ] * xx [ 86 ] ; xx [ 448 ] = xx [ 124 ] * xx [ 89 ] ;
pm_math_cross3 ( xx + 437 , xx + 446 , xx + 452 ) ; xx [ 437 ] = - xx [ 15 ]
; xx [ 438 ] = - xx [ 25 ] ; xx [ 439 ] = - xx [ 123 ] ; pm_math_cross3 ( xx
+ 375 , xx + 437 , xx + 446 ) ; xx [ 140 ] = xx [ 452 ] + xx [ 35 ] * xx [
446 ] ; xx [ 474 ] = - xx [ 51 ] ; xx [ 475 ] = - xx [ 54 ] ; xx [ 476 ] = -
xx [ 56 ] ; xx [ 35 ] = xx [ 453 ] + xx [ 86 ] * xx [ 447 ] ; xx [ 86 ] = xx
[ 454 ] + xx [ 89 ] * xx [ 448 ] ; xx [ 452 ] = xx [ 140 ] ; xx [ 453 ] = xx
[ 35 ] ; xx [ 454 ] = xx [ 86 ] ; xx [ 481 ] = xx [ 375 ] + xx [ 22 ] ; xx [
482 ] = xx [ 376 ] + xx [ 87 ] ; xx [ 483 ] = xx [ 377 ] + xx [ 124 ] ; xx [
375 ] = - xx [ 100 ] * state [ 14 ] ; xx [ 376 ] = xx [ 174 ] * state [ 14 ]
; xx [ 377 ] = xx [ 179 ] * state [ 14 ] ; pm_math_cross3 ( xx + 481 , xx +
375 , xx + 487 ) ; pm_math_cross3 ( xx + 300 , xx + 113 , xx + 375 ) ;
pm_math_cross3 ( xx + 300 , xx + 375 , xx + 481 ) ; pm_math_quatInverseXform
( xx + 62 , xx + 481 , xx + 300 ) ; xx [ 22 ] = ( xx [ 487 ] + xx [ 300 ] ) *
xx [ 112 ] ; xx [ 87 ] = ( xx [ 488 ] + xx [ 301 ] ) * xx [ 112 ] ; xx [ 89 ]
= ( xx [ 489 ] + xx [ 302 ] ) * xx [ 112 ] ; xx [ 300 ] = xx [ 22 ] ; xx [
301 ] = xx [ 87 ] ; xx [ 302 ] = xx [ 89 ] ; xx [ 100 ] = pm_math_dot3 ( xx +
474 , xx + 452 ) + pm_math_dot3 ( xx + 471 , xx + 300 ) ; xx [ 112 ] = xx [
100 ] / xx [ 79 ] ; xx [ 300 ] = xx [ 140 ] + xx [ 78 ] * xx [ 112 ] ; xx [
301 ] = xx [ 35 ] + xx [ 82 ] * xx [ 112 ] ; xx [ 302 ] = xx [ 86 ] + xx [ 83
] * xx [ 112 ] ; pm_math_quatXform ( xx + 62 , xx + 300 , xx + 375 ) ; xx [
300 ] = xx [ 22 ] + xx [ 81 ] * xx [ 112 ] ; xx [ 301 ] = xx [ 87 ] - xx [ 88
] * xx [ 112 ] ; xx [ 302 ] = xx [ 89 ] - xx [ 101 ] * xx [ 112 ] ;
pm_math_quatXform ( xx + 62 , xx + 300 , xx + 452 ) ; pm_math_cross3 ( xx +
113 , xx + 452 , xx + 300 ) ; xx [ 124 ] = xx [ 36 ] * state [ 12 ] ; xx [ 36
] = xx [ 23 ] * state [ 12 ] ; xx [ 721 ] = xx [ 110 ] ; xx [ 722 ] = xx [
122 ] ; xx [ 723 ] = xx [ 137 ] ; xx [ 724 ] = xx [ 107 ] ; xx [ 725 ] = xx [
166 ] ; xx [ 726 ] = xx [ 111 ] ; xx [ 727 ] = xx [ 69 ] ; xx [ 728 ] = xx [
72 ] ; xx [ 729 ] = xx [ 75 ] ; xx [ 23 ] = xx [ 168 ] * xx [ 6 ] ; xx [ 146
] = xx [ 2 ] * xx [ 23 ] ; xx [ 148 ] = xx [ 157 ] * xx [ 146 ] ; xx [ 161 ]
= xx [ 13 ] * xx [ 168 ] ; xx [ 174 ] = xx [ 2 ] * xx [ 161 ] ; xx [ 176 ] =
xx [ 157 ] * xx [ 174 ] ; xx [ 179 ] = xx [ 146 ] - ( xx [ 157 ] * xx [ 148 ]
- xx [ 176 ] * xx [ 156 ] ) * xx [ 27 ] ; xx [ 146 ] = xx [ 174 ] - xx [ 27 ]
* ( xx [ 148 ] * xx [ 156 ] + xx [ 157 ] * xx [ 176 ] ) ; xx [ 148 ] = xx [
23 ] * xx [ 6 ] + xx [ 13 ] * xx [ 161 ] ; xx [ 471 ] = xx [ 179 ] ; xx [ 472
] = xx [ 146 ] ; xx [ 473 ] = - xx [ 148 ] ; pm_math_matrix3x3Xform ( xx +
721 , xx + 471 , xx + 474 ) ; xx [ 23 ] = xx [ 124 ] * xx [ 159 ] - xx [ 116
] * xx [ 36 ] + xx [ 474 ] ; xx [ 116 ] = xx [ 124 ] * xx [ 184 ] - xx [ 36 ]
* xx [ 90 ] + xx [ 476 ] ; xx [ 90 ] = xx [ 421 ] + xx [ 377 ] + xx [ 302 ] +
xx [ 116 ] ; xx [ 159 ] = xx [ 90 ] / xx [ 149 ] ; xx [ 161 ] = xx [ 419 ] +
xx [ 375 ] + xx [ 300 ] + xx [ 23 ] - xx [ 159 ] * xx [ 145 ] ; xx [ 174 ] =
xx [ 118 ] * xx [ 124 ] - xx [ 36 ] * xx [ 151 ] + xx [ 475 ] ; xx [ 118 ] =
xx [ 420 ] + xx [ 376 ] + xx [ 301 ] + xx [ 174 ] - xx [ 159 ] * xx [ 160 ] ;
xx [ 151 ] = xx [ 157 ] * xx [ 118 ] ; xx [ 176 ] = xx [ 157 ] * xx [ 161 ] ;
xx [ 721 ] = xx [ 171 ] + xx [ 127 ] ; xx [ 722 ] = xx [ 128 ] ; xx [ 723 ] =
xx [ 129 ] ; xx [ 724 ] = xx [ 130 ] ; xx [ 725 ] = xx [ 171 ] + xx [ 131 ] ;
xx [ 726 ] = xx [ 132 ] ; xx [ 727 ] = xx [ 133 ] ; xx [ 728 ] = xx [ 134 ] ;
xx [ 729 ] = xx [ 171 ] + xx [ 135 ] ; pm_math_matrix3x3Xform ( xx + 721 , xx
+ 471 , xx + 127 ) ; xx [ 130 ] = xx [ 124 ] * xx [ 166 ] - xx [ 36 ] * xx [
122 ] + xx [ 128 ] ; xx [ 122 ] = xx [ 453 ] + xx [ 130 ] - xx [ 159 ] * xx [
72 ] ; xx [ 131 ] = xx [ 157 ] * xx [ 122 ] ; xx [ 133 ] = xx [ 124 ] * xx [
107 ] - xx [ 36 ] * xx [ 110 ] + xx [ 127 ] ; xx [ 107 ] = xx [ 452 ] + xx [
133 ] - xx [ 159 ] * xx [ 69 ] ; xx [ 110 ] = xx [ 157 ] * xx [ 107 ] ; xx [
134 ] = xx [ 122 ] - ( xx [ 157 ] * xx [ 131 ] - xx [ 110 ] * xx [ 156 ] ) *
xx [ 27 ] ; xx [ 721 ] = xx [ 180 ] ; xx [ 722 ] = xx [ 170 ] ; xx [ 723 ] =
xx [ 188 ] ; xx [ 724 ] = xx [ 103 ] ; xx [ 725 ] = xx [ 162 ] ; xx [ 726 ] =
xx [ 120 ] ; xx [ 727 ] = xx [ 92 ] ; xx [ 728 ] = xx [ 95 ] ; xx [ 729 ] =
xx [ 136 ] + xx [ 125 ] ; xx [ 92 ] = xx [ 2 ] * xx [ 53 ] ; xx [ 95 ] = xx [
2 ] * state [ 10 ] ; xx [ 103 ] = xx [ 0 ] * xx [ 53 ] + xx [ 1 ] * state [
10 ] ; xx [ 300 ] = - xx [ 92 ] ; xx [ 301 ] = - xx [ 95 ] ; xx [ 302 ] = xx
[ 103 ] ; pm_math_matrix3x3Xform ( xx + 721 , xx + 300 , xx + 375 ) ; xx [
721 ] = xx [ 175 ] ; xx [ 722 ] = xx [ 177 ] ; xx [ 723 ] = xx [ 139 ] ; xx [
724 ] = xx [ 73 ] ; xx [ 725 ] = xx [ 106 ] ; xx [ 726 ] = xx [ 138 ] ; xx [
727 ] = xx [ 93 ] ; xx [ 728 ] = xx [ 189 ] ; xx [ 729 ] = xx [ 141 ] ;
pm_math_cross3 ( xx + 359 , xx + 185 , xx + 471 ) ; pm_math_cross3 ( xx + 359
, xx + 471 , xx + 474 ) ; pm_math_quatInverseXform ( xx + 285 , xx + 474 , xx
+ 471 ) ; xx [ 73 ] = xx [ 2 ] + xx [ 2 ] ; xx [ 2 ] = xx [ 70 ] * state [ 10
] ; xx [ 93 ] = xx [ 471 ] - xx [ 73 ] * xx [ 2 ] ; xx [ 106 ] = xx [ 155 ] *
state [ 10 ] ; xx [ 120 ] = xx [ 73 ] * xx [ 106 ] + xx [ 472 ] ; xx [ 73 ] =
( xx [ 0 ] + xx [ 6 ] ) * xx [ 2 ] - ( xx [ 1 ] + xx [ 13 ] ) * xx [ 106 ] +
xx [ 473 ] ; xx [ 0 ] = xx [ 93 ] ; xx [ 1 ] = xx [ 120 ] ; xx [ 2 ] = xx [
73 ] ; pm_math_matrix3x3Xform ( xx + 721 , xx + 0 , xx + 471 ) ; xx [ 6 ] =
xx [ 375 ] + xx [ 471 ] ; xx [ 13 ] = xx [ 414 ] + xx [ 161 ] - xx [ 27 ] * (
xx [ 151 ] * xx [ 156 ] + xx [ 157 ] * xx [ 176 ] ) - xx [ 168 ] * xx [ 134 ]
+ xx [ 6 ] ; xx [ 106 ] = 100.0 ; xx [ 122 ] = 0.1 ; xx [ 125 ] = input [ 0 ]
- xx [ 106 ] * state [ 9 ] - xx [ 122 ] * state [ 10 ] ; xx [ 132 ] = xx [
107 ] - xx [ 27 ] * ( xx [ 131 ] * xx [ 156 ] + xx [ 157 ] * xx [ 110 ] ) ;
xx [ 107 ] = xx [ 376 ] + xx [ 472 ] ; xx [ 110 ] = xx [ 415 ] + xx [ 118 ] -
( xx [ 157 ] * xx [ 151 ] - xx [ 176 ] * xx [ 156 ] ) * xx [ 27 ] + xx [ 132
] * xx [ 168 ] + xx [ 107 ] ; pm_math_matrix3x3TransposeXform ( xx + 721 , xx
+ 300 , xx + 175 ) ; xx [ 721 ] = xx [ 126 ] ; xx [ 722 ] = xx [ 172 ] ; xx [
723 ] = xx [ 108 ] ; xx [ 724 ] = xx [ 169 ] ; xx [ 725 ] = xx [ 150 ] ; xx [
726 ] = xx [ 208 ] ; xx [ 727 ] = xx [ 142 ] ; xx [ 728 ] = xx [ 143 ] ; xx [
729 ] = xx [ 104 ] + xx [ 158 ] ; pm_math_matrix3x3Xform ( xx + 721 , xx + 0
, xx + 141 ) ; xx [ 0 ] = xx [ 175 ] + xx [ 141 ] ; xx [ 1 ] = xx [ 132 ] +
xx [ 0 ] ; xx [ 104 ] = xx [ 176 ] + xx [ 142 ] ; xx [ 108 ] = xx [ 134 ] +
xx [ 104 ] ; xx [ 118 ] = ( xx [ 125 ] - ( xx [ 110 ] * xx [ 24 ] - xx [ 13 ]
+ xx [ 1 ] * xx [ 155 ] + xx [ 108 ] * xx [ 70 ] ) ) / xx [ 165 ] ; xx [ 2 ]
= xx [ 377 ] + xx [ 473 ] ; xx [ 134 ] = xx [ 13 ] + xx [ 167 ] * xx [ 118 ]
; xx [ 135 ] = xx [ 110 ] + xx [ 109 ] * xx [ 118 ] ; xx [ 136 ] = xx [ 416 ]
+ xx [ 90 ] - xx [ 147 ] * xx [ 159 ] + xx [ 2 ] + xx [ 91 ] * xx [ 118 ] ;
pm_math_quatXform ( xx + 285 , xx + 134 , xx + 169 ) ; xx [ 13 ] = xx [ 124 ]
* xx [ 111 ] - xx [ 36 ] * xx [ 137 ] + xx [ 129 ] ; xx [ 90 ] = xx [ 177 ] +
xx [ 143 ] ; xx [ 126 ] = xx [ 1 ] + xx [ 121 ] * xx [ 118 ] ; xx [ 127 ] =
xx [ 108 ] + xx [ 163 ] * xx [ 118 ] ; xx [ 128 ] = xx [ 454 ] + xx [ 13 ] -
xx [ 159 ] * xx [ 75 ] + xx [ 90 ] + xx [ 76 ] * xx [ 118 ] ;
pm_math_quatXform ( xx + 285 , xx + 126 , xx + 134 ) ; pm_math_cross3 ( xx +
185 , xx + 134 , xx + 126 ) ; xx [ 471 ] = xx [ 178 ] ; xx [ 472 ] = xx [ 249
] ; xx [ 473 ] = xx [ 277 ] ; xx [ 474 ] = xx [ 279 ] ;
pm_math_quatInverseXform ( xx + 471 , xx + 359 , xx + 137 ) ; xx [ 1 ] = xx [
138 ] - state [ 8 ] ; xx [ 141 ] = xx [ 137 ] ; xx [ 142 ] = xx [ 1 ] ; xx [
143 ] = xx [ 139 ] ; xx [ 175 ] = xx [ 182 ] * xx [ 137 ] ; xx [ 176 ] = xx [
237 ] * xx [ 1 ] ; xx [ 177 ] = xx [ 270 ] * xx [ 139 ] ; pm_math_cross3 ( xx
+ 141 , xx + 175 , xx + 300 ) ; xx [ 108 ] = 0.7073662615166844 ;
pm_math_quatCompose ( xx + 332 , xx + 471 , xx + 175 ) ; xx [ 110 ] =
0.7068472056023918 ; xx [ 129 ] = xx [ 258 ] * ( xx [ 108 ] * xx [ 176 ] - xx
[ 110 ] * xx [ 178 ] ) ; xx [ 131 ] = xx [ 258 ] * ( xx [ 108 ] * xx [ 175 ]
- xx [ 110 ] * xx [ 177 ] ) ; xx [ 141 ] = ( xx [ 108 ] * xx [ 178 ] + xx [
110 ] * xx [ 176 ] ) * xx [ 258 ] ; xx [ 142 ] = ( xx [ 110 ] * xx [ 175 ] +
xx [ 108 ] * xx [ 177 ] ) * xx [ 258 ] ; xx [ 481 ] = xx [ 129 ] - xx [ 131 ]
; xx [ 482 ] = - ( xx [ 129 ] + xx [ 131 ] ) ; xx [ 483 ] = xx [ 141 ] - xx [
142 ] ; xx [ 484 ] = - ( xx [ 141 ] + xx [ 142 ] ) ; xx [ 141 ] = input [ 19
] ; xx [ 142 ] = input [ 20 ] ; xx [ 143 ] = input [ 21 ] ;
pm_math_quatInverseXform ( xx + 481 , xx + 141 , xx + 256 ) ; xx [ 111 ] = xx
[ 110 ] * xx [ 258 ] ; xx [ 129 ] = xx [ 110 ] * xx [ 256 ] ; xx [ 131 ] =
7.192418157028906e-4 ; xx [ 141 ] = input [ 16 ] ; xx [ 142 ] = input [ 17 ]
; xx [ 143 ] = input [ 18 ] ; pm_math_quatInverseXform ( xx + 481 , xx + 141
, xx + 375 ) ; xx [ 141 ] = input [ 25 ] ; xx [ 142 ] = input [ 26 ] ; xx [
143 ] = input [ 27 ] ; pm_math_quatInverseXform ( xx + 481 , xx + 141 , xx +
452 ) ; xx [ 141 ] = xx [ 110 ] * xx [ 454 ] ; xx [ 143 ] = xx [ 110 ] * xx [
452 ] ; xx [ 487 ] = input [ 22 ] ; xx [ 488 ] = input [ 23 ] ; xx [ 489 ] =
input [ 24 ] ; pm_math_quatInverseXform ( xx + 481 , xx + 487 , xx + 490 ) ;
xx [ 481 ] = - 0.2705945141749849 ; xx [ 482 ] = 0.6532902568751174 ; xx [
483 ] = 0.6532726092418986 ; xx [ 484 ] = - 0.2706018240602396 ; xx [ 150 ] =
xx [ 19 ] * state [ 15 ] ; xx [ 158 ] = 1.910165910595785e-5 ; xx [ 161 ] =
sin ( xx [ 150 ] ) ; xx [ 151 ] = 0.7071070386876468 ; xx [ 166 ] =
0.7071065234273504 ; xx [ 535 ] = cos ( xx [ 150 ] ) ; xx [ 536 ] = - xx [
158 ] * xx [ 161 ] ; xx [ 537 ] = - xx [ 151 ] * xx [ 161 ] ; xx [ 538 ] = -
xx [ 166 ] * xx [ 161 ] ; pm_math_quatCompose ( xx + 481 , xx + 535 , xx +
721 ) ; xx [ 481 ] = - 0.3826832639272861 ; xx [ 482 ] = 0.9238796021743757 ;
xx [ 483 ] = - 1.312118906154905e-5 ; xx [ 484 ] = 4.889913705063975e-6 ; xx
[ 150 ] = xx [ 19 ] * state [ 17 ] ; xx [ 19 ] = 2.375713491786503e-8 ; xx [
161 ] = sin ( xx [ 150 ] ) ; xx [ 172 ] = 3.743209958208291e-11 ; xx [ 535 ]
= cos ( xx [ 150 ] ) ; xx [ 536 ] = - xx [ 19 ] * xx [ 161 ] ; xx [ 537 ] =
xx [ 172 ] * xx [ 161 ] ; xx [ 538 ] = - xx [ 161 ] ; pm_math_quatCompose (
xx + 481 , xx + 535 , xx + 726 ) ; pm_math_quatCompose ( xx + 721 , xx + 726
, xx + 481 ) ; xx [ 535 ] = 4.951603876933442e-7 ; xx [ 536 ] =
0.7071067895857885 ; xx [ 537 ] = - 4.951868355639957e-7 ; xx [ 538 ] =
0.7071067727869597 ; pm_math_quatCompose ( xx + 481 , xx + 535 , xx + 748 ) ;
pm_math_quatInverseCompose ( xx + 748 , xx + 175 , xx + 752 ) ; xx [ 175 ] =
- ( xx [ 110 ] * xx [ 754 ] - xx [ 108 ] * xx [ 752 ] ) ; xx [ 176 ] = - ( xx
[ 110 ] * xx [ 755 ] - xx [ 108 ] * xx [ 753 ] ) ; xx [ 177 ] = xx [ 110 ] *
xx [ 752 ] + xx [ 108 ] * xx [ 754 ] ; xx [ 178 ] = xx [ 108 ] * xx [ 755 ] +
xx [ 110 ] * xx [ 753 ] ; xx [ 487 ] = input [ 11 ] ; xx [ 488 ] = input [ 12
] ; xx [ 489 ] = input [ 13 ] ; pm_math_quatInverseXform ( xx + 175 , xx +
487 , xx + 524 ) ; xx [ 150 ] = xx [ 110 ] * xx [ 526 ] ; xx [ 161 ] = xx [
110 ] * xx [ 524 ] ; xx [ 487 ] = input [ 8 ] ; xx [ 488 ] = input [ 9 ] ; xx
[ 489 ] = input [ 10 ] ; pm_math_quatInverseXform ( xx + 175 , xx + 487 , xx
+ 554 ) ; xx [ 180 ] = 0.02532758322758053 ; xx [ 181 ] = xx [ 110 ] * xx [
375 ] ; xx [ 184 ] = xx [ 110 ] * xx [ 377 ] ; xx [ 188 ] = xx [ 377 ] - ( xx
[ 108 ] * xx [ 181 ] + xx [ 110 ] * xx [ 184 ] ) * xx [ 27 ] ; xx [ 205 ] =
xx [ 375 ] + xx [ 27 ] * ( xx [ 108 ] * xx [ 184 ] - xx [ 110 ] * xx [ 181 ]
) ; xx [ 184 ] = xx [ 110 ] * xx [ 490 ] ; xx [ 208 ] = xx [ 110 ] * xx [ 492
] ; xx [ 249 ] = xx [ 492 ] - ( xx [ 108 ] * xx [ 184 ] + xx [ 110 ] * xx [
208 ] ) * xx [ 27 ] ; xx [ 251 ] = xx [ 490 ] + xx [ 27 ] * ( xx [ 108 ] * xx
[ 208 ] - xx [ 110 ] * xx [ 184 ] ) ; xx [ 184 ] = xx [ 110 ] * xx [ 554 ] ;
xx [ 208 ] = xx [ 110 ] * xx [ 556 ] ; xx [ 277 ] = xx [ 556 ] - ( xx [ 108 ]
* xx [ 184 ] + xx [ 110 ] * xx [ 208 ] ) * xx [ 27 ] ; xx [ 279 ] = xx [ 554
] + xx [ 27 ] * ( xx [ 108 ] * xx [ 208 ] - xx [ 110 ] * xx [ 184 ] ) ; xx [
184 ] = xx [ 301 ] - ( xx [ 257 ] + xx [ 180 ] * xx [ 188 ] - xx [ 205 ] * xx
[ 131 ] ) - ( xx [ 453 ] + xx [ 180 ] * xx [ 249 ] - xx [ 251 ] * xx [ 131 ]
) - ( xx [ 525 ] + xx [ 180 ] * xx [ 277 ] - xx [ 279 ] * xx [ 131 ] ) ; xx [
181 ] = 0.06932918701200033 ; pm_math_cross3 ( xx + 359 , xx + 307 , xx + 756
) ; pm_math_cross3 ( xx + 359 , xx + 756 , xx + 759 ) ;
pm_math_quatInverseXform ( xx + 471 , xx + 759 , xx + 756 ) ; xx [ 189 ] = xx
[ 138 ] + xx [ 1 ] ; xx [ 1 ] = 0.04062101508027025 ; xx [ 138 ] = xx [ 1 ] *
state [ 8 ] ; xx [ 206 ] = ( xx [ 756 ] - xx [ 189 ] * xx [ 138 ] ) * xx [
250 ] - ( xx [ 205 ] + xx [ 251 ] + xx [ 279 ] ) ; xx [ 205 ] = xx [ 181 ] *
state [ 8 ] ; xx [ 208 ] = xx [ 250 ] * ( xx [ 758 ] - xx [ 189 ] * xx [ 205
] ) - ( xx [ 188 ] + xx [ 249 ] + xx [ 277 ] ) ; xx [ 188 ] = ( input [ 1 ] -
xx [ 106 ] * state [ 7 ] - xx [ 122 ] * state [ 8 ] - ( xx [ 181 ] * xx [ 206
] - xx [ 1 ] * xx [ 208 ] - xx [ 184 ] ) ) / xx [ 252 ] ; xx [ 759 ] = xx [
300 ] - ( xx [ 256 ] + xx [ 27 ] * ( xx [ 108 ] * xx [ 111 ] - xx [ 110 ] *
xx [ 129 ] ) + xx [ 131 ] * xx [ 376 ] ) - ( xx [ 452 ] + xx [ 27 ] * ( xx [
108 ] * xx [ 141 ] - xx [ 110 ] * xx [ 143 ] ) + xx [ 131 ] * xx [ 491 ] ) -
( xx [ 524 ] + xx [ 27 ] * ( xx [ 108 ] * xx [ 150 ] - xx [ 110 ] * xx [ 161
] ) + xx [ 131 ] * xx [ 555 ] ) + xx [ 182 ] * xx [ 139 ] * state [ 8 ] ; xx
[ 760 ] = xx [ 184 ] - xx [ 237 ] * xx [ 188 ] ; xx [ 761 ] = xx [ 302 ] - (
xx [ 258 ] - ( xx [ 108 ] * xx [ 129 ] + xx [ 110 ] * xx [ 111 ] ) * xx [ 27
] - xx [ 180 ] * xx [ 376 ] ) - ( xx [ 454 ] - ( xx [ 108 ] * xx [ 143 ] + xx
[ 110 ] * xx [ 141 ] ) * xx [ 27 ] - xx [ 180 ] * xx [ 491 ] ) - ( xx [ 526 ]
- ( xx [ 108 ] * xx [ 161 ] + xx [ 110 ] * xx [ 150 ] ) * xx [ 27 ] - xx [
180 ] * xx [ 555 ] ) - xx [ 270 ] * xx [ 137 ] * state [ 8 ] ;
pm_math_quatXform ( xx + 471 , xx + 759 , xx + 141 ) ; xx [ 256 ] = xx [ 206
] + xx [ 254 ] * xx [ 188 ] ; xx [ 257 ] = ( ( xx [ 139 ] + xx [ 139 ] ) * xx
[ 205 ] + ( xx [ 137 ] + xx [ 137 ] ) * xx [ 138 ] + xx [ 757 ] ) * xx [ 250
] - ( xx [ 376 ] + xx [ 491 ] + xx [ 555 ] ) ; xx [ 258 ] = xx [ 208 ] - xx [
271 ] * xx [ 188 ] ; pm_math_quatXform ( xx + 471 , xx + 256 , xx + 137 ) ;
pm_math_cross3 ( xx + 307 , xx + 137 , xx + 249 ) ; xx [ 1 ] = xx [ 141 ] +
xx [ 249 ] ; xx [ 256 ] = inputDot [ 5 ] ; xx [ 257 ] = inputDot [ 6 ] ; xx [
258 ] = inputDot [ 7 ] ; pm_math_quatInverseXform ( xx + 332 , xx + 256 , xx
+ 300 ) ; xx [ 256 ] = xx [ 300 ] + xx [ 303 ] * xx [ 360 ] + xx [ 247 ] * xx
[ 361 ] ; xx [ 257 ] = xx [ 301 ] - xx [ 303 ] * xx [ 359 ] ; xx [ 258 ] = xx
[ 302 ] - xx [ 247 ] * xx [ 359 ] ; pm_math_cross3 ( xx + 359 , xx + 256 , xx
+ 375 ) ; xx [ 256 ] = - xx [ 300 ] ; xx [ 257 ] = - xx [ 301 ] ; xx [ 258 ]
= - xx [ 302 ] ; pm_math_cross3 ( xx + 359 , xx + 256 , xx + 300 ) ; xx [ 108
] = xx [ 375 ] + xx [ 300 ] + ( xx [ 30 ] - ( xx [ 304 ] + xx [ 356 ] ) * xx
[ 27 ] ) * inputDdot [ 5 ] + ( xx [ 244 ] + xx [ 204 ] ) * xx [ 27 ] *
inputDdot [ 6 ] + xx [ 341 ] * inputDdot [ 7 ] ; xx [ 110 ] = xx [ 376 ] + xx
[ 301 ] + xx [ 290 ] * inputDdot [ 5 ] + ( xx [ 30 ] - ( xx [ 356 ] + xx [ 80
] ) * xx [ 27 ] ) * inputDdot [ 6 ] + ( xx [ 340 ] + xx [ 321 ] ) * xx [ 27 ]
* inputDdot [ 7 ] ; xx [ 111 ] = xx [ 377 ] + xx [ 302 ] + ( xx [ 292 ] + xx
[ 291 ] ) * xx [ 27 ] * inputDdot [ 5 ] + xx [ 342 ] * inputDdot [ 6 ] + ( xx
[ 30 ] - ( xx [ 80 ] + xx [ 304 ] ) * xx [ 27 ] ) * inputDdot [ 7 ] ; xx [
204 ] = xx [ 108 ] ; xx [ 205 ] = xx [ 110 ] ; xx [ 206 ] = xx [ 111 ] ;
pm_math_matrix3x3Xform ( xx + 209 , xx + 204 , xx + 256 ) ; xx [ 80 ] = xx [
142 ] + xx [ 250 ] ; xx [ 122 ] = xx [ 143 ] + xx [ 251 ] ; xx [ 141 ] = xx [
3 ] + xx [ 169 ] + xx [ 126 ] + xx [ 1 ] + xx [ 256 ] ; xx [ 142 ] = xx [ 4 ]
+ xx [ 170 ] + xx [ 127 ] + xx [ 80 ] + xx [ 257 ] ; xx [ 143 ] = xx [ 5 ] +
xx [ 171 ] + xx [ 128 ] + xx [ 122 ] + xx [ 258 ] ; pm_math_matrix3x3Xform (
xx + 227 , xx + 204 , xx + 126 ) ; xx [ 169 ] = xx [ 134 ] + xx [ 137 ] + xx
[ 126 ] ; xx [ 170 ] = xx [ 135 ] + xx [ 138 ] + xx [ 127 ] ; xx [ 171 ] = xx
[ 136 ] + xx [ 139 ] + xx [ 128 ] ; xx [ 134 ] = - ( pm_math_dot3 ( xx + 16 ,
xx + 141 ) + pm_math_dot3 ( xx + 197 , xx + 169 ) ) ; xx [ 135 ] = - (
pm_math_dot3 ( xx + 221 , xx + 141 ) + pm_math_dot3 ( xx + 240 , xx + 169 ) )
; xx [ 136 ] = - ( pm_math_dot3 ( xx + 261 , xx + 141 ) + pm_math_dot3 ( xx +
280 , xx + 169 ) ) ; solveSymmetric ( xx + 310 , xx + 200 , ii + 2 , xx + 134
, 3 , 1 , ii [ 5 ] , xx + 141 , xx + 169 ) ; xx [ 756 ] = xx [ 194 ] ; xx [
757 ] = xx [ 239 ] ; xx [ 758 ] = xx [ 278 ] ; xx [ 759 ] = xx [ 196 ] ; xx [
760 ] = xx [ 246 ] ; xx [ 761 ] = xx [ 283 ] ; xx [ 762 ] = xx [ 190 ] ; xx [
763 ] = xx [ 224 ] ; xx [ 764 ] = xx [ 264 ] ; xx [ 765 ] = xx [ 191 ] ; xx [
766 ] = xx [ 225 ] ; xx [ 767 ] = xx [ 265 ] ; xx [ 768 ] = xx [ 192 ] ; xx [
769 ] = xx [ 226 ] ; xx [ 770 ] = xx [ 266 ] ; xx [ 771 ] = xx [ 203 ] ; xx [
772 ] = xx [ 248 ] ; xx [ 773 ] = xx [ 284 ] ; solveSymmetric ( xx + 310 , xx
+ 200 , ii + 2 , xx + 756 , 3 , 6 , ii [ 5 ] , xx + 774 , xx + 134 ) ; xx [
134 ] = xx [ 783 ] ; xx [ 135 ] = xx [ 786 ] ; xx [ 136 ] = xx [ 789 ] ; xx [
129 ] = 9.810000000000001 ; xx [ 132 ] = xx [ 129 ] * xx [ 335 ] ; xx [ 150 ]
= xx [ 129 ] * xx [ 333 ] ; xx [ 161 ] = ( xx [ 332 ] * xx [ 132 ] + xx [ 334
] * xx [ 150 ] ) * xx [ 27 ] ; xx [ 162 ] = ( xx [ 335 ] * xx [ 132 ] + xx [
333 ] * xx [ 150 ] ) * xx [ 27 ] ; xx [ 169 ] = xx [ 27 ] * ( xx [ 334 ] * xx
[ 132 ] - xx [ 332 ] * xx [ 150 ] ) ; xx [ 189 ] = xx [ 161 ] ; xx [ 190 ] =
xx [ 129 ] - xx [ 162 ] ; xx [ 191 ] = xx [ 169 ] ; xx [ 132 ] = pm_math_dot3
( xx + 134 , xx + 189 ) ; xx [ 134 ] = xx [ 141 ] - xx [ 132 ] ; xx [ 203 ] =
xx [ 784 ] ; xx [ 204 ] = xx [ 787 ] ; xx [ 205 ] = xx [ 790 ] ; xx [ 136 ] =
pm_math_dot3 ( xx + 203 , xx + 189 ) ; xx [ 150 ] = xx [ 142 ] - xx [ 136 ] ;
xx [ 203 ] = xx [ 785 ] ; xx [ 204 ] = xx [ 788 ] ; xx [ 205 ] = xx [ 791 ] ;
xx [ 141 ] = pm_math_dot3 ( xx + 203 , xx + 189 ) ; xx [ 142 ] = xx [ 143 ] -
xx [ 141 ] ; xx [ 189 ] = xx [ 11 ] * xx [ 134 ] + xx [ 207 ] * xx [ 150 ] +
xx [ 253 ] * xx [ 142 ] ; xx [ 190 ] = xx [ 218 ] * xx [ 150 ] - xx [ 12 ] *
xx [ 134 ] + xx [ 259 ] * xx [ 142 ] ; xx [ 191 ] = xx [ 260 ] * xx [ 142 ] -
( xx [ 14 ] * xx [ 134 ] + xx [ 219 ] * xx [ 150 ] ) ;
pm_math_quatInverseXform ( xx + 285 , xx + 189 , xx + 203 ) ; xx [ 170 ] = xx
[ 161 ] + xx [ 108 ] ; pm_math_cross3 ( xx + 189 , xx + 185 , xx + 208 ) ; xx
[ 108 ] = xx [ 110 ] - xx [ 162 ] ; xx [ 110 ] = xx [ 169 ] + xx [ 111 ] ; xx
[ 189 ] = xx [ 170 ] - xx [ 183 ] * xx [ 134 ] + xx [ 220 ] * xx [ 150 ] + xx
[ 268 ] * xx [ 142 ] + xx [ 208 ] ; xx [ 190 ] = xx [ 108 ] - xx [ 193 ] * xx
[ 134 ] - xx [ 236 ] * xx [ 150 ] - xx [ 269 ] * xx [ 142 ] + xx [ 209 ] + xx
[ 129 ] ; xx [ 191 ] = xx [ 110 ] - xx [ 195 ] * xx [ 134 ] - xx [ 238 ] * xx
[ 150 ] - xx [ 273 ] * xx [ 142 ] + xx [ 210 ] ; pm_math_quatInverseXform (
xx + 285 , xx + 189 , xx + 208 ) ; xx [ 111 ] = xx [ 118 ] - ( pm_math_dot3 (
xx + 295 , xx + 203 ) + pm_math_dot3 ( xx + 372 , xx + 208 ) ) ; xx [ 118 ] =
xx [ 119 ] * xx [ 349 ] ; xx [ 161 ] = xx [ 27 ] * xx [ 243 ] ; xx [ 162 ] =
xx [ 351 ] * xx [ 161 ] ; xx [ 169 ] = xx [ 119 ] * xx [ 350 ] ; xx [ 189 ] =
xx [ 162 ] - xx [ 169 ] ; xx [ 190 ] = xx [ 118 ] ; xx [ 191 ] = - xx [ 349 ]
* xx [ 161 ] ; pm_math_cross3 ( xx + 349 , xx + 189 , xx + 211 ) ; xx [ 171 ]
= xx [ 105 ] * xx [ 349 ] ; xx [ 181 ] = xx [ 105 ] * xx [ 350 ] ; xx [ 182 ]
= xx [ 351 ] * xx [ 71 ] ; xx [ 189 ] = - ( xx [ 181 ] + xx [ 182 ] ) ; xx [
190 ] = xx [ 171 ] ; xx [ 191 ] = xx [ 349 ] * xx [ 71 ] ; pm_math_cross3 (
xx + 349 , xx + 189 , xx + 213 ) ; xx [ 184 ] = xx [ 350 ] * xx [ 71 ] ; xx [
189 ] = xx [ 77 ] * xx [ 349 ] ; xx [ 215 ] = xx [ 77 ] * xx [ 350 ] ; xx [
216 ] = - ( xx [ 182 ] + xx [ 189 ] ) ; xx [ 217 ] = xx [ 184 ] ;
pm_math_cross3 ( xx + 349 , xx + 215 , xx + 190 ) ; xx [ 182 ] = xx [ 77 ] *
xx [ 351 ] ; xx [ 215 ] = xx [ 182 ] ; xx [ 216 ] = xx [ 105 ] * xx [ 351 ] ;
xx [ 217 ] = - ( xx [ 189 ] + xx [ 181 ] ) ; pm_math_cross3 ( xx + 349 , xx +
215 , xx + 189 ) ; xx [ 181 ] = xx [ 203 ] - xx [ 92 ] - xx [ 111 ] ; xx [
190 ] = xx [ 157 ] * xx [ 181 ] ; xx [ 194 ] = xx [ 204 ] - xx [ 95 ] + xx [
24 ] * xx [ 111 ] ; xx [ 196 ] = xx [ 194 ] * xx [ 157 ] ; xx [ 203 ] = xx [
181 ] - ( xx [ 157 ] * xx [ 190 ] - xx [ 196 ] * xx [ 156 ] ) * xx [ 27 ] ;
xx [ 191 ] = xx [ 194 ] - xx [ 27 ] * ( xx [ 190 ] * xx [ 156 ] + xx [ 157 ]
* xx [ 196 ] ) ; xx [ 190 ] = xx [ 205 ] + xx [ 103 ] ; xx [ 215 ] = xx [ 203
] ; xx [ 216 ] = xx [ 191 ] ; xx [ 217 ] = xx [ 190 ] ; xx [ 196 ] = xx [ 208
] + xx [ 93 ] + xx [ 155 ] * xx [ 111 ] + xx [ 194 ] * xx [ 168 ] ; xx [ 194
] = xx [ 196 ] * xx [ 157 ] ; xx [ 204 ] = xx [ 209 ] + xx [ 120 ] + xx [ 70
] * xx [ 111 ] - xx [ 168 ] * xx [ 181 ] ; xx [ 181 ] = xx [ 157 ] * xx [ 204
] ; xx [ 205 ] = xx [ 196 ] - ( xx [ 157 ] * xx [ 194 ] - xx [ 181 ] * xx [
156 ] ) * xx [ 27 ] ; xx [ 196 ] = xx [ 204 ] - xx [ 27 ] * ( xx [ 194 ] * xx
[ 156 ] + xx [ 157 ] * xx [ 181 ] ) ; xx [ 181 ] = xx [ 210 ] + xx [ 73 ] ;
xx [ 208 ] = xx [ 205 ] ; xx [ 209 ] = xx [ 196 ] ; xx [ 210 ] = xx [ 181 ] ;
xx [ 194 ] = xx [ 159 ] - ( pm_math_dot3 ( xx + 494 , xx + 215 ) +
pm_math_dot3 ( xx + 508 , xx + 208 ) ) ; xx [ 208 ] = xx [ 203 ] - xx [ 36 ]
; xx [ 209 ] = xx [ 191 ] + xx [ 124 ] ; xx [ 210 ] = xx [ 190 ] - xx [ 194 ]
; pm_math_quatInverseXform ( xx + 62 , xx + 208 , xx + 215 ) ; pm_math_cross3
( xx + 208 , xx + 113 , xx + 224 ) ; xx [ 208 ] = xx [ 205 ] + xx [ 179 ] +
xx [ 224 ] ; xx [ 209 ] = xx [ 196 ] + xx [ 146 ] + xx [ 225 ] ; xx [ 210 ] =
xx [ 181 ] - xx [ 148 ] + xx [ 226 ] ; pm_math_quatInverseXform ( xx + 62 ,
xx + 208 , xx + 203 ) ; xx [ 159 ] = xx [ 112 ] + pm_math_dot3 ( xx + 498 ,
xx + 215 ) + pm_math_dot3 ( xx + 521 , xx + 203 ) ; xx [ 181 ] = xx [ 391 ] *
xx [ 391 ] ; xx [ 190 ] = xx [ 391 ] * xx [ 401 ] ; xx [ 191 ] = xx [ 400 ] *
xx [ 398 ] ; xx [ 196 ] = xx [ 401 ] * xx [ 398 ] ; xx [ 203 ] = xx [ 400 ] *
xx [ 391 ] ; xx [ 205 ] = xx [ 391 ] * xx [ 398 ] ; xx [ 206 ] = xx [ 400 ] *
xx [ 401 ] ; xx [ 224 ] = ( xx [ 181 ] + xx [ 398 ] * xx [ 398 ] ) * xx [ 27
] - xx [ 30 ] ; xx [ 225 ] = xx [ 27 ] * ( xx [ 190 ] - xx [ 191 ] ) ; xx [
226 ] = ( xx [ 196 ] + xx [ 203 ] ) * xx [ 27 ] ; xx [ 227 ] = - ( xx [ 191 ]
+ xx [ 190 ] ) * xx [ 27 ] ; xx [ 228 ] = ( xx [ 181 ] + xx [ 400 ] * xx [
400 ] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 229 ] = xx [ 27 ] * ( xx [ 205 ] - xx
[ 206 ] ) ; xx [ 230 ] = xx [ 27 ] * ( xx [ 196 ] - xx [ 203 ] ) ; xx [ 231 ]
= - ( xx [ 206 ] + xx [ 205 ] ) * xx [ 27 ] ; xx [ 232 ] = ( xx [ 181 ] + xx
[ 401 ] * xx [ 401 ] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 181 ] = xx [ 15 ] * xx
[ 52 ] - xx [ 25 ] * xx [ 49 ] ; xx [ 190 ] = xx [ 123 ] * xx [ 49 ] - xx [
15 ] * xx [ 57 ] ; xx [ 196 ] = xx [ 25 ] * xx [ 57 ] - xx [ 123 ] * xx [ 52
] ; xx [ 203 ] = xx [ 15 ] * xx [ 50 ] - xx [ 25 ] * xx [ 58 ] ; xx [ 205 ] =
xx [ 123 ] * xx [ 58 ] - xx [ 15 ] * xx [ 66 ] ; xx [ 208 ] = xx [ 25 ] * xx
[ 66 ] - xx [ 123 ] * xx [ 50 ] ; xx [ 210 ] = xx [ 15 ] * xx [ 67 ] - xx [
25 ] * xx [ 61 ] ; xx [ 213 ] = xx [ 123 ] * xx [ 61 ] - xx [ 15 ] * xx [ 68
] ; xx [ 61 ] = xx [ 25 ] * xx [ 68 ] - xx [ 123 ] * xx [ 67 ] ; xx [ 756 ] =
xx [ 25 ] * xx [ 181 ] - xx [ 123 ] * xx [ 190 ] ; xx [ 757 ] = xx [ 123 ] *
xx [ 196 ] - xx [ 15 ] * xx [ 181 ] ; xx [ 758 ] = xx [ 15 ] * xx [ 190 ] -
xx [ 25 ] * xx [ 196 ] ; xx [ 759 ] = xx [ 25 ] * xx [ 203 ] - xx [ 123 ] *
xx [ 205 ] ; xx [ 760 ] = xx [ 123 ] * xx [ 208 ] - xx [ 15 ] * xx [ 203 ] ;
xx [ 761 ] = xx [ 15 ] * xx [ 205 ] - xx [ 25 ] * xx [ 208 ] ; xx [ 762 ] =
xx [ 25 ] * xx [ 210 ] - xx [ 123 ] * xx [ 213 ] ; xx [ 763 ] = xx [ 123 ] *
xx [ 61 ] - xx [ 15 ] * xx [ 210 ] ; xx [ 764 ] = xx [ 15 ] * xx [ 213 ] - xx
[ 25 ] * xx [ 61 ] ; pm_math_matrix3x3Compose ( xx + 224 , xx + 756 , xx +
765 ) ; xx [ 61 ] = xx [ 27 ] * xx [ 153 ] * state [ 12 ] * state [ 12 ] ; xx
[ 67 ] = xx [ 154 ] * state [ 12 ] * state [ 12 ] ; xx [ 153 ] = xx [ 61 ] *
xx [ 74 ] + xx [ 67 ] * xx [ 55 ] ; xx [ 181 ] = xx [ 67 ] * xx [ 74 ] - xx [
61 ] * xx [ 55 ] ; xx [ 55 ] = xx [ 274 ] * xx [ 274 ] ; xx [ 68 ] = xx [ 294
] * xx [ 305 ] ; xx [ 74 ] = xx [ 294 ] * xx [ 322 ] ; xx [ 190 ] = xx [ 274
] * xx [ 305 ] ; xx [ 196 ] = xx [ 322 ] * xx [ 305 ] ; xx [ 203 ] = xx [ 294
] * xx [ 274 ] ; xx [ 224 ] = ( xx [ 55 ] + xx [ 294 ] * xx [ 294 ] ) * xx [
27 ] - xx [ 30 ] ; xx [ 225 ] = xx [ 27 ] * ( xx [ 306 ] - xx [ 68 ] ) ; xx [
226 ] = - ( xx [ 74 ] + xx [ 190 ] ) * xx [ 27 ] ; xx [ 227 ] = - ( xx [ 68 ]
+ xx [ 306 ] ) * xx [ 27 ] ; xx [ 228 ] = ( xx [ 55 ] + xx [ 305 ] * xx [ 305
] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 229 ] = xx [ 27 ] * ( xx [ 196 ] - xx [
203 ] ) ; xx [ 230 ] = xx [ 27 ] * ( xx [ 190 ] - xx [ 74 ] ) ; xx [ 231 ] =
( xx [ 196 ] + xx [ 203 ] ) * xx [ 27 ] ; xx [ 232 ] = ( xx [ 55 ] + xx [ 322
] * xx [ 322 ] ) * xx [ 27 ] - xx [ 30 ] ; pm_math_matrix3x3Compose ( xx +
703 , xx + 224 , xx + 756 ) ; xx [ 55 ] = xx [ 366 ] * xx [ 366 ] ; xx [ 68 ]
= xx [ 367 ] * xx [ 368 ] ; xx [ 74 ] = xx [ 366 ] * xx [ 369 ] ; xx [ 190 ]
= xx [ 367 ] * xx [ 369 ] ; xx [ 191 ] = xx [ 366 ] * xx [ 368 ] ; xx [ 196 ]
= xx [ 368 ] * xx [ 369 ] ; xx [ 203 ] = xx [ 366 ] * xx [ 367 ] ; xx [ 703 ]
= ( xx [ 55 ] + xx [ 367 ] * xx [ 367 ] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 704
] = xx [ 27 ] * ( xx [ 68 ] - xx [ 74 ] ) ; xx [ 705 ] = ( xx [ 190 ] + xx [
191 ] ) * xx [ 27 ] ; xx [ 706 ] = ( xx [ 68 ] + xx [ 74 ] ) * xx [ 27 ] ; xx
[ 707 ] = ( xx [ 55 ] + xx [ 368 ] * xx [ 368 ] ) * xx [ 27 ] - xx [ 30 ] ;
xx [ 708 ] = xx [ 27 ] * ( xx [ 196 ] - xx [ 203 ] ) ; xx [ 709 ] = xx [ 27 ]
* ( xx [ 190 ] - xx [ 191 ] ) ; xx [ 710 ] = ( xx [ 196 ] + xx [ 203 ] ) * xx
[ 27 ] ; xx [ 711 ] = ( xx [ 55 ] + xx [ 369 ] * xx [ 369 ] ) * xx [ 27 ] -
xx [ 30 ] ; pm_math_matrix3x3Compose ( xx + 676 , xx + 703 , xx + 774 ) ; xx
[ 55 ] = xx [ 378 ] * xx [ 378 ] ; xx [ 68 ] = xx [ 379 ] * xx [ 380 ] ; xx [
74 ] = xx [ 378 ] * xx [ 381 ] ; xx [ 190 ] = xx [ 379 ] * xx [ 381 ] ; xx [
191 ] = xx [ 378 ] * xx [ 380 ] ; xx [ 196 ] = xx [ 380 ] * xx [ 381 ] ; xx [
203 ] = xx [ 378 ] * xx [ 379 ] ; xx [ 783 ] = ( xx [ 55 ] + xx [ 379 ] * xx
[ 379 ] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 784 ] = xx [ 27 ] * ( xx [ 68 ] - xx
[ 74 ] ) ; xx [ 785 ] = ( xx [ 190 ] + xx [ 191 ] ) * xx [ 27 ] ; xx [ 786 ]
= ( xx [ 68 ] + xx [ 74 ] ) * xx [ 27 ] ; xx [ 787 ] = ( xx [ 55 ] + xx [ 380
] * xx [ 380 ] ) * xx [ 27 ] - xx [ 30 ] ; xx [ 788 ] = xx [ 27 ] * ( xx [
196 ] - xx [ 203 ] ) ; xx [ 789 ] = xx [ 27 ] * ( xx [ 190 ] - xx [ 191 ] ) ;
xx [ 790 ] = ( xx [ 196 ] + xx [ 203 ] ) * xx [ 27 ] ; xx [ 791 ] = ( xx [ 55
] + xx [ 381 ] * xx [ 381 ] ) * xx [ 27 ] - xx [ 30 ] ;
pm_math_quatInverseXform ( xx + 366 , xx + 359 , xx + 203 ) ;
pm_math_matrix3x3PostCross ( xx + 783 , xx + 203 , xx + 792 ) ; xx [ 55 ] =
xx [ 53 ] * xx [ 322 ] ; xx [ 68 ] = xx [ 322 ] * state [ 10 ] ; xx [ 74 ] =
xx [ 294 ] * xx [ 53 ] - xx [ 305 ] * state [ 10 ] ; xx [ 203 ] = xx [ 55 ] ;
xx [ 204 ] = xx [ 68 ] ; xx [ 205 ] = xx [ 74 ] ; pm_math_cross3 ( xx + 362 ,
xx + 203 , xx + 208 ) ; xx [ 190 ] = ( xx [ 208 ] - xx [ 274 ] * xx [ 55 ] )
* xx [ 27 ] - state [ 10 ] ; xx [ 55 ] = xx [ 64 ] * state [ 12 ] ; xx [ 191
] = xx [ 63 ] * state [ 12 ] ; xx [ 196 ] = xx [ 27 ] * ( xx [ 62 ] * xx [ 55
] - xx [ 65 ] * xx [ 191 ] ) ; xx [ 203 ] = xx [ 196 ] - xx [ 15 ] ; xx [ 15
] = xx [ 53 ] + ( xx [ 209 ] - xx [ 274 ] * xx [ 68 ] ) * xx [ 27 ] ; xx [ 68
] = ( xx [ 62 ] * xx [ 191 ] + xx [ 65 ] * xx [ 55 ] ) * xx [ 27 ] ; xx [ 205
] = xx [ 25 ] + xx [ 68 ] ; xx [ 25 ] = xx [ 27 ] * ( xx [ 210 ] - xx [ 74 ]
* xx [ 274 ] ) ; xx [ 74 ] = ( xx [ 63 ] * xx [ 191 ] + xx [ 64 ] * xx [ 55 ]
) * xx [ 27 ] - state [ 12 ] ; xx [ 55 ] = xx [ 74 ] - xx [ 123 ] ; xx [ 208
] = xx [ 190 ] + xx [ 203 ] ; xx [ 209 ] = xx [ 15 ] - xx [ 205 ] ; xx [ 210
] = xx [ 25 ] + xx [ 55 ] ; pm_math_matrix3x3PostCross ( xx + 792 , xx + 208
, xx + 783 ) ; xx [ 208 ] = xx [ 190 ] ; xx [ 209 ] = xx [ 15 ] ; xx [ 210 ]
= xx [ 25 ] ; pm_math_matrix3x3PostCross ( xx + 703 , xx + 208 , xx + 792 ) ;
xx [ 208 ] = xx [ 203 ] ; xx [ 209 ] = - xx [ 205 ] ; xx [ 210 ] = xx [ 55 ]
; pm_math_matrix3x3PostCross ( xx + 792 , xx + 208 , xx + 703 ) ; xx [ 203 ]
= xx [ 196 ] ; xx [ 204 ] = - xx [ 68 ] ; xx [ 205 ] = xx [ 74 ] ;
pm_math_matrix3x3PostCross ( xx + 224 , xx + 203 , xx + 792 ) ;
pm_math_matrix3x3PostCross ( xx + 792 , xx + 437 , xx + 224 ) ;
pm_math_matrix3x3Compose ( xx + 38 , xx + 224 , xx + 792 ) ; xx [ 38 ] = xx [
703 ] + xx [ 792 ] ; xx [ 39 ] = xx [ 704 ] + xx [ 793 ] ; xx [ 40 ] = xx [
705 ] + xx [ 794 ] ; xx [ 41 ] = xx [ 706 ] + xx [ 795 ] ; xx [ 42 ] = xx [
707 ] + xx [ 796 ] ; xx [ 43 ] = xx [ 708 ] + xx [ 797 ] ; xx [ 44 ] = xx [
709 ] + xx [ 798 ] ; xx [ 45 ] = xx [ 710 ] + xx [ 799 ] ; xx [ 46 ] = xx [
711 ] + xx [ 800 ] ; pm_math_matrix3x3Compose ( xx + 565 , xx + 38 , xx + 224
) ; xx [ 15 ] = xx [ 61 ] * xx [ 60 ] + xx [ 67 ] * xx [ 84 ] ; xx [ 25 ] =
xx [ 67 ] * xx [ 60 ] - xx [ 84 ] * xx [ 61 ] ; xx [ 38 ] = xx [ 102 ] * xx [
61 ] + xx [ 67 ] * xx [ 99 ] ; xx [ 40 ] = xx [ 67 ] * xx [ 102 ] - xx [ 61 ]
* xx [ 99 ] ; xx [ 565 ] = xx [ 765 ] - ( xx [ 153 ] * xx [ 49 ] + xx [ 181 ]
* xx [ 58 ] ) + xx [ 756 ] + xx [ 774 ] + ( xx [ 783 ] + xx [ 224 ] ) * xx [
27 ] ; xx [ 566 ] = xx [ 766 ] - ( xx [ 52 ] * xx [ 153 ] + xx [ 181 ] * xx [
50 ] ) + xx [ 757 ] + xx [ 775 ] + ( xx [ 784 ] + xx [ 225 ] ) * xx [ 27 ] ;
xx [ 567 ] = xx [ 767 ] - ( xx [ 57 ] * xx [ 153 ] + xx [ 181 ] * xx [ 66 ] )
+ xx [ 758 ] + xx [ 776 ] + ( xx [ 785 ] + xx [ 226 ] ) * xx [ 27 ] ; xx [
568 ] = xx [ 768 ] - ( xx [ 15 ] * xx [ 49 ] + xx [ 25 ] * xx [ 58 ] ) + xx [
759 ] + xx [ 777 ] + ( xx [ 786 ] + xx [ 227 ] ) * xx [ 27 ] ; xx [ 569 ] =
xx [ 769 ] - ( xx [ 52 ] * xx [ 15 ] + xx [ 25 ] * xx [ 50 ] ) + xx [ 760 ] +
xx [ 778 ] + ( xx [ 787 ] + xx [ 228 ] ) * xx [ 27 ] ; xx [ 570 ] = xx [ 770
] - ( xx [ 57 ] * xx [ 15 ] + xx [ 25 ] * xx [ 66 ] ) + xx [ 761 ] + xx [ 779
] + ( xx [ 788 ] + xx [ 229 ] ) * xx [ 27 ] ; xx [ 571 ] = xx [ 771 ] - ( xx
[ 38 ] * xx [ 49 ] + xx [ 40 ] * xx [ 58 ] ) + xx [ 762 ] + xx [ 780 ] + ( xx
[ 789 ] + xx [ 230 ] ) * xx [ 27 ] ; xx [ 572 ] = xx [ 772 ] - ( xx [ 52 ] *
xx [ 38 ] + xx [ 40 ] * xx [ 50 ] ) + xx [ 763 ] + xx [ 781 ] + ( xx [ 790 ]
+ xx [ 231 ] ) * xx [ 27 ] ; xx [ 573 ] = xx [ 773 ] - ( xx [ 57 ] * xx [ 38
] + xx [ 40 ] * xx [ 66 ] ) + xx [ 764 ] + xx [ 782 ] + ( xx [ 791 ] + xx [
232 ] ) * xx [ 27 ] ; pm_math_matrix3x3Xform ( xx + 565 , xx + 386 , xx + 38
) ; pm_math_matrix3x3Xform ( xx + 565 , xx + 440 , xx + 42 ) ; xx [ 203 ] =
1.636033737725008e-14 ; xx [ 204 ] = 6.594627294517036e-9 ; xx [ 205 ] = -
6.58806210907973e-9 ; pm_math_quatXform ( xx + 62 , xx + 203 , xx + 208 ) ;
xx [ 15 ] = state [ 14 ] * state [ 14 ] ; xx [ 203 ] = xx [ 208 ] * xx [ 15 ]
; xx [ 204 ] = xx [ 209 ] * xx [ 15 ] ; xx [ 205 ] = xx [ 210 ] * xx [ 15 ] ;
pm_math_quatXform ( xx + 403 , xx + 203 , xx + 208 ) ; xx [ 15 ] = xx [ 67 ]
* xx [ 85 ] - xx [ 117 ] * xx [ 61 ] ; xx [ 25 ] = xx [ 61 ] * xx [ 85 ] + xx
[ 117 ] * xx [ 67 ] ; xx [ 45 ] = xx [ 25 ] * xx [ 346 ] ; xx [ 50 ] = xx [
346 ] * xx [ 15 ] ; xx [ 52 ] = xx [ 25 ] * xx [ 344 ] - xx [ 345 ] * xx [ 15
] ; xx [ 66 ] = - xx [ 45 ] ; xx [ 67 ] = xx [ 50 ] ; xx [ 68 ] = xx [ 52 ] ;
pm_math_cross3 ( xx + 344 , xx + 66 , xx + 203 ) ; pm_math_matrix3x3Xform (
xx + 694 , xx + 459 , xx + 66 ) ; xx [ 46 ] = state [ 10 ] * state [ 10 ] ;
xx [ 215 ] = xx [ 66 ] + ( xx [ 152 ] - xx [ 33 ] * xx [ 173 ] ) * xx [ 27 ]
* xx [ 46 ] ; xx [ 216 ] = xx [ 67 ] - xx [ 27 ] * ( xx [ 33 ] * xx [ 144 ] +
xx [ 173 ] * xx [ 28 ] ) * xx [ 46 ] ; xx [ 217 ] = xx [ 68 ] + xx [ 46 ] * (
( xx [ 173 ] * xx [ 31 ] + xx [ 144 ] * xx [ 32 ] ) * xx [ 27 ] - xx [ 70 ] )
; pm_math_quatXform ( xx + 332 , xx + 215 , xx + 66 ) ;
pm_math_matrix3x3Xform ( xx + 676 , xx + 465 , xx + 152 ) ; xx [ 46 ] = xx [
477 ] * state [ 14 ] ; xx [ 55 ] = xx [ 46 ] - xx [ 117 ] * state [ 12 ] ; xx
[ 57 ] = xx [ 478 ] * state [ 14 ] ; xx [ 58 ] = xx [ 57 ] + xx [ 85 ] *
state [ 12 ] ; xx [ 61 ] = xx [ 157 ] * xx [ 58 ] ; xx [ 74 ] = xx [ 157 ] *
xx [ 55 ] ; xx [ 84 ] = xx [ 55 ] - xx [ 27 ] * ( xx [ 61 ] * xx [ 156 ] + xx
[ 157 ] * xx [ 74 ] ) ; xx [ 55 ] = xx [ 58 ] - ( xx [ 157 ] * xx [ 61 ] - xx
[ 74 ] * xx [ 156 ] ) * xx [ 27 ] ; xx [ 58 ] = xx [ 479 ] * state [ 14 ] ;
xx [ 215 ] = xx [ 84 ] + xx [ 432 ] * xx [ 53 ] ; xx [ 216 ] = xx [ 55 ] + xx
[ 432 ] * state [ 10 ] ; xx [ 217 ] = xx [ 58 ] - ( xx [ 458 ] * state [ 10 ]
+ xx [ 53 ] * xx [ 456 ] ) ; pm_math_quatXform ( xx + 285 , xx + 215 , xx +
224 ) ; xx [ 215 ] = ( xx [ 155 ] + xx [ 434 ] ) * state [ 10 ] + xx [ 224 ]
; xx [ 216 ] = ( xx [ 70 ] + xx [ 433 ] ) * state [ 10 ] + xx [ 225 ] ; xx [
217 ] = xx [ 27 ] * xx [ 486 ] * state [ 10 ] + xx [ 226 ] ; pm_math_cross3 (
xx + 359 , xx + 215 , xx + 224 ) ; pm_math_quatXform ( xx + 332 , xx + 224 ,
xx + 215 ) ; xx [ 224 ] = xx [ 58 ] * xx [ 53 ] ; xx [ 225 ] = xx [ 58 ] *
state [ 10 ] ; xx [ 226 ] = - ( xx [ 55 ] * state [ 10 ] + xx [ 84 ] * xx [
53 ] ) ; pm_math_quatXform ( xx + 285 , xx + 224 , xx + 227 ) ; xx [ 53 ] =
xx [ 57 ] * state [ 12 ] ; xx [ 55 ] = xx [ 157 ] * xx [ 53 ] ; xx [ 57 ] =
xx [ 46 ] * state [ 12 ] ; xx [ 46 ] = xx [ 157 ] * xx [ 57 ] ; xx [ 58 ] =
xx [ 53 ] - ( xx [ 157 ] * xx [ 55 ] - xx [ 46 ] * xx [ 156 ] ) * xx [ 27 ] ;
xx [ 53 ] = xx [ 27 ] * ( xx [ 157 ] * xx [ 46 ] + xx [ 55 ] * xx [ 156 ] ) -
xx [ 57 ] ; xx [ 46 ] = xx [ 33 ] * xx [ 53 ] ; xx [ 55 ] = xx [ 33 ] * xx [
58 ] ; xx [ 34 ] = xx [ 53 ] * xx [ 31 ] - xx [ 58 ] * xx [ 32 ] ; xx [ 224 ]
= - xx [ 46 ] ; xx [ 225 ] = xx [ 55 ] ; xx [ 226 ] = xx [ 34 ] ;
pm_math_cross3 ( xx + 31 , xx + 224 , xx + 230 ) ; xx [ 224 ] = xx [ 227 ] +
xx [ 58 ] + xx [ 27 ] * ( xx [ 230 ] + xx [ 46 ] * xx [ 28 ] ) ; xx [ 225 ] =
xx [ 228 ] + xx [ 53 ] + ( xx [ 231 ] - xx [ 55 ] * xx [ 28 ] ) * xx [ 27 ] ;
xx [ 226 ] = xx [ 229 ] + ( xx [ 232 ] - xx [ 34 ] * xx [ 28 ] ) * xx [ 27 ]
; pm_math_quatXform ( xx + 332 , xx + 224 , xx + 32 ) ; xx [ 224 ] = xx [ 548
] / xx [ 504 ] ; xx [ 225 ] = xx [ 549 ] / xx [ 504 ] ; xx [ 226 ] = xx [ 550
] / xx [ 504 ] ; xx [ 46 ] = 1.532042658804658 ; xx [ 53 ] =
5.022983729561137 ; xx [ 55 ] = 8.286047293140857 ; xx [ 227 ] = xx [ 46 ] ;
xx [ 228 ] = - xx [ 53 ] ; xx [ 229 ] = xx [ 55 ] ; xx [ 57 ] = pm_math_dot3
( xx + 224 , xx + 227 ) ; xx [ 224 ] = xx [ 46 ] - xx [ 57 ] * xx [ 430 ] ;
xx [ 225 ] = - ( xx [ 53 ] + xx [ 57 ] * xx [ 443 ] ) ; xx [ 226 ] = xx [ 55
] + xx [ 57 ] * xx [ 444 ] ; pm_math_quatInverseXform ( xx + 511 , xx + 224 ,
xx + 227 ) ; xx [ 61 ] = pm_math_dot3 ( xx + 532 , xx + 227 ) ; xx [ 224 ] =
xx [ 227 ] + xx [ 61 ] * xx [ 480 ] ; xx [ 225 ] = xx [ 228 ] - xx [ 61 ] *
xx [ 497 ] ; xx [ 226 ] = xx [ 229 ] + xx [ 61 ] * xx [ 502 ] ;
pm_math_quatInverseXform ( xx + 528 , xx + 224 , xx + 227 ) ; xx [ 74 ] =
pm_math_dot3 ( xx + 543 , xx + 227 ) ; xx [ 224 ] = - 0.9681353222671593 / xx
[ 564 ] ; xx [ 225 ] = - 1.918176678478551 / xx [ 564 ] ; xx [ 226 ] =
7.626488653354932 / xx [ 564 ] ; xx [ 227 ] = 8.369037681095952 ; xx [ 228 ]
= - 5.113245940393524 ; xx [ 229 ] = - 0.2236610056429811 ; xx [ 84 ] =
pm_math_dot3 ( xx + 224 , xx + 227 ) ; xx [ 224 ] = - ( xx [ 688 ] + xx [ 715
] + xx [ 733 ] + ( xx [ 742 ] + xx [ 326 ] ) * xx [ 27 ] + xx [ 289 ] * xx [
134 ] + xx [ 354 ] * xx [ 150 ] + xx [ 370 ] * xx [ 142 ] + xx [ 320 ] * xx [
111 ] + ( ( xx [ 348 ] * xx [ 118 ] + xx [ 212 ] ) * xx [ 27 ] - xx [ 161 ] )
* inputDdot [ 3 ] + ( xx [ 71 ] + ( xx [ 348 ] * xx [ 171 ] + xx [ 214 ] ) *
xx [ 27 ] ) * inputDdot [ 4 ] ) ; xx [ 225 ] = - ( xx [ 692 ] + xx [ 719 ] +
xx [ 737 ] + ( xx [ 746 ] + xx [ 330 ] ) * xx [ 27 ] + xx [ 98 ] * xx [ 134 ]
+ xx [ 276 ] * xx [ 150 ] + xx [ 299 ] * xx [ 142 ] + xx [ 164 ] * xx [ 111 ]
+ ( ( xx [ 349 ] * xx [ 349 ] + xx [ 350 ] * xx [ 350 ] ) * xx [ 27 ] - xx [
30 ] ) * inputDdot [ 2 ] + xx [ 27 ] * ( xx [ 349 ] * xx [ 162 ] - xx [ 348 ]
* xx [ 350 ] * xx [ 161 ] ) * inputDdot [ 3 ] + ( xx [ 77 ] + ( xx [ 348 ] *
xx [ 184 ] + xx [ 192 ] ) * xx [ 27 ] ) * inputDdot [ 4 ] ) ; xx [ 226 ] = -
( xx [ 687 ] + xx [ 714 ] + xx [ 732 ] + ( xx [ 741 ] + xx [ 325 ] ) * xx [
27 ] + xx [ 96 ] * xx [ 134 ] + xx [ 245 ] * xx [ 150 ] + xx [ 275 ] * xx [
142 ] + xx [ 94 ] * xx [ 111 ] + xx [ 27 ] * ( xx [ 349 ] * xx [ 350 ] - xx [
348 ] * xx [ 351 ] ) * inputDdot [ 2 ] + ( xx [ 119 ] - ( xx [ 350 ] * xx [
169 ] + xx [ 351 ] * xx [ 119 ] * xx [ 351 ] ) * xx [ 27 ] ) * inputDdot [ 3
] + ( xx [ 105 ] + ( xx [ 348 ] * xx [ 182 ] + xx [ 189 ] ) * xx [ 27 ] ) *
inputDdot [ 4 ] ) ; xx [ 227 ] = xx [ 399 ] * xx [ 159 ] - ( pm_math_dot3 (
xx + 38 , xx + 395 ) + xx [ 390 ] * xx [ 134 ] + xx [ 59 ] * xx [ 150 ] + xx
[ 337 ] * xx [ 142 ] + xx [ 48 ] * xx [ 111 ] + xx [ 47 ] * xx [ 194 ] ) ; xx
[ 228 ] = xx [ 353 ] * xx [ 159 ] - ( pm_math_dot3 ( xx + 38 , xx + 427 ) +
xx [ 347 ] * xx [ 134 ] + xx [ 389 ] * xx [ 150 ] + xx [ 393 ] * xx [ 142 ] +
xx [ 394 ] * xx [ 111 ] + xx [ 423 ] * xx [ 194 ] ) ; xx [ 229 ] = xx [ 159 ]
* xx [ 455 ] - ( xx [ 42 ] + xx [ 208 ] + xx [ 15 ] + xx [ 27 ] * ( xx [ 203
] - xx [ 343 ] * xx [ 45 ] ) + xx [ 66 ] + xx [ 152 ] + xx [ 303 ] * xx [ 21
] - xx [ 247 ] * xx [ 20 ] + ( xx [ 215 ] + xx [ 32 ] ) * xx [ 27 ] +
inputDdot [ 5 ] + xx [ 97 ] * xx [ 134 ] + xx [ 436 ] * xx [ 150 ] + xx [ 382
] * xx [ 142 ] + xx [ 435 ] * xx [ 111 ] + xx [ 409 ] * xx [ 194 ] ) - xx [
57 ] - xx [ 61 ] * xx [ 469 ] - xx [ 74 ] * xx [ 462 ] ; xx [ 230 ] = xx [
159 ] * xx [ 503 ] - ( xx [ 43 ] + xx [ 209 ] + xx [ 25 ] + ( xx [ 343 ] * xx
[ 50 ] + xx [ 204 ] ) * xx [ 27 ] + xx [ 67 ] + xx [ 153 ] + xx [ 303 ] * xx
[ 29 ] - xx [ 247 ] * xx [ 26 ] + ( xx [ 216 ] + xx [ 33 ] ) * xx [ 27 ] +
inputDdot [ 6 ] + xx [ 493 ] * xx [ 134 ] + xx [ 506 ] * xx [ 150 ] + xx [
517 ] * xx [ 142 ] + xx [ 410 ] * xx [ 111 ] + xx [ 527 ] * xx [ 194 ] ) + xx
[ 61 ] * xx [ 541 ] + xx [ 74 ] * xx [ 516 ] ; xx [ 231 ] = xx [ 159 ] * xx [
384 ] - ( xx [ 44 ] + xx [ 210 ] + ( xx [ 343 ] * xx [ 52 ] + xx [ 205 ] ) *
xx [ 27 ] + xx [ 68 ] + xx [ 154 ] + xx [ 303 ] * xx [ 37 ] - xx [ 247 ] * xx
[ 293 ] + ( xx [ 217 ] + xx [ 34 ] ) * xx [ 27 ] + inputDdot [ 7 ] + xx [ 383
] * xx [ 134 ] + xx [ 411 ] * xx [ 150 ] + xx [ 413 ] * xx [ 142 ] + xx [ 425
] * xx [ 111 ] + xx [ 424 ] * xx [ 194 ] ) - xx [ 61 ] * xx [ 552 ] - xx [ 74
] * xx [ 542 ] ; xx [ 232 ] = xx [ 57 ] * xx [ 553 ] - xx [ 84 ] * xx [ 553 ]
; xx [ 233 ] = xx [ 57 ] * xx [ 561 ] + xx [ 61 ] * xx [ 563 ] ; memcpy ( xx
+ 756 , xx + 576 , 100 * sizeof ( double ) ) ; factorAndSolveSymmetric ( xx +
756 , 10 , xx + 321 , ii + 6 , xx + 224 , xx + 208 , xx + 856 ) ; xx [ 15 ] =
( xx [ 399 ] * xx [ 211 ] + xx [ 353 ] * xx [ 212 ] + xx [ 455 ] * xx [ 213 ]
+ xx [ 503 ] * xx [ 214 ] + xx [ 384 ] * xx [ 215 ] - xx [ 100 ] ) / xx [ 79
] ; xx [ 31 ] = xx [ 140 ] - xx [ 78 ] * xx [ 15 ] ; xx [ 32 ] = xx [ 35 ] -
xx [ 82 ] * xx [ 15 ] ; xx [ 33 ] = xx [ 86 ] - xx [ 83 ] * xx [ 15 ] ;
pm_math_quatXform ( xx + 62 , xx + 31 , xx + 37 ) ; xx [ 31 ] = xx [ 22 ] -
xx [ 81 ] * xx [ 15 ] ; xx [ 32 ] = xx [ 87 ] + xx [ 88 ] * xx [ 15 ] ; xx [
33 ] = xx [ 89 ] + xx [ 101 ] * xx [ 15 ] ; pm_math_quatXform ( xx + 62 , xx
+ 31 , xx + 20 ) ; pm_math_cross3 ( xx + 113 , xx + 20 , xx + 31 ) ; xx [ 25
] = xx [ 421 ] + xx [ 39 ] + xx [ 33 ] + xx [ 116 ] ; xx [ 28 ] = ( xx [ 25 ]
+ xx [ 47 ] * xx [ 211 ] + xx [ 423 ] * xx [ 212 ] + xx [ 409 ] * xx [ 213 ]
+ xx [ 527 ] * xx [ 214 ] + xx [ 424 ] * xx [ 215 ] ) / xx [ 149 ] ; xx [ 26
] = xx [ 419 ] + xx [ 37 ] + xx [ 31 ] + xx [ 23 ] - xx [ 28 ] * xx [ 145 ] ;
xx [ 23 ] = xx [ 420 ] + xx [ 38 ] + xx [ 32 ] + xx [ 174 ] - xx [ 28 ] * xx
[ 160 ] ; xx [ 29 ] = xx [ 157 ] * xx [ 23 ] ; xx [ 31 ] = xx [ 157 ] * xx [
26 ] ; xx [ 33 ] = xx [ 21 ] + xx [ 130 ] - xx [ 28 ] * xx [ 72 ] ; xx [ 21 ]
= xx [ 157 ] * xx [ 33 ] ; xx [ 34 ] = xx [ 20 ] + xx [ 133 ] - xx [ 28 ] *
xx [ 69 ] ; xx [ 20 ] = xx [ 157 ] * xx [ 34 ] ; xx [ 35 ] = xx [ 33 ] - ( xx
[ 157 ] * xx [ 21 ] - xx [ 20 ] * xx [ 156 ] ) * xx [ 27 ] ; xx [ 33 ] = xx [
414 ] + xx [ 26 ] - xx [ 27 ] * ( xx [ 29 ] * xx [ 156 ] + xx [ 157 ] * xx [
31 ] ) - xx [ 168 ] * xx [ 35 ] + xx [ 6 ] ; xx [ 6 ] = xx [ 34 ] - xx [ 27 ]
* ( xx [ 21 ] * xx [ 156 ] + xx [ 157 ] * xx [ 20 ] ) ; xx [ 20 ] = xx [ 415
] + xx [ 23 ] - ( xx [ 157 ] * xx [ 29 ] - xx [ 31 ] * xx [ 156 ] ) * xx [ 27
] + xx [ 6 ] * xx [ 168 ] + xx [ 107 ] ; xx [ 23 ] = xx [ 6 ] + xx [ 0 ] ; xx
[ 0 ] = xx [ 35 ] + xx [ 104 ] ; xx [ 6 ] = ( xx [ 125 ] - ( xx [ 20 ] * xx [
24 ] - xx [ 33 ] + xx [ 23 ] * xx [ 155 ] + xx [ 0 ] * xx [ 70 ] ) + xx [ 320
] * xx [ 208 ] + xx [ 164 ] * xx [ 209 ] + xx [ 94 ] * xx [ 210 ] + xx [ 48 ]
* xx [ 211 ] + xx [ 394 ] * xx [ 212 ] + xx [ 435 ] * xx [ 213 ] + xx [ 410 ]
* xx [ 214 ] + xx [ 425 ] * xx [ 215 ] ) / xx [ 165 ] ; xx [ 37 ] = xx [ 33 ]
+ xx [ 167 ] * xx [ 6 ] ; xx [ 38 ] = xx [ 20 ] + xx [ 109 ] * xx [ 6 ] ; xx
[ 39 ] = xx [ 416 ] + xx [ 25 ] - xx [ 147 ] * xx [ 28 ] + xx [ 2 ] + xx [ 91
] * xx [ 6 ] ; pm_math_quatXform ( xx + 285 , xx + 37 , xx + 31 ) ; xx [ 37 ]
= xx [ 23 ] + xx [ 121 ] * xx [ 6 ] ; xx [ 38 ] = xx [ 0 ] + xx [ 163 ] * xx
[ 6 ] ; xx [ 39 ] = xx [ 22 ] + xx [ 13 ] - xx [ 28 ] * xx [ 75 ] + xx [ 90 ]
+ xx [ 76 ] * xx [ 6 ] ; pm_math_quatXform ( xx + 285 , xx + 37 , xx + 20 ) ;
pm_math_cross3 ( xx + 185 , xx + 20 , xx + 37 ) ; xx [ 40 ] = xx [ 3 ] + xx [
31 ] + xx [ 37 ] + xx [ 1 ] + xx [ 256 ] ; xx [ 41 ] = xx [ 4 ] + xx [ 32 ] +
xx [ 38 ] + xx [ 80 ] + xx [ 257 ] ; xx [ 42 ] = xx [ 5 ] + xx [ 33 ] + xx [
39 ] + xx [ 122 ] + xx [ 258 ] ; xx [ 0 ] = xx [ 20 ] + xx [ 137 ] + xx [ 126
] ; xx [ 1 ] = xx [ 21 ] + xx [ 138 ] + xx [ 127 ] ; xx [ 2 ] = xx [ 22 ] +
xx [ 139 ] + xx [ 128 ] ; xx [ 20 ] = xx [ 289 ] * xx [ 208 ] + xx [ 98 ] *
xx [ 209 ] + xx [ 96 ] * xx [ 210 ] + xx [ 390 ] * xx [ 211 ] + xx [ 347 ] *
xx [ 212 ] + xx [ 97 ] * xx [ 213 ] + xx [ 493 ] * xx [ 214 ] + xx [ 383 ] *
xx [ 215 ] - ( pm_math_dot3 ( xx + 16 , xx + 40 ) + pm_math_dot3 ( xx + 197 ,
xx + 0 ) ) ; xx [ 21 ] = xx [ 354 ] * xx [ 208 ] + xx [ 276 ] * xx [ 209 ] +
xx [ 245 ] * xx [ 210 ] + xx [ 59 ] * xx [ 211 ] + xx [ 389 ] * xx [ 212 ] +
xx [ 436 ] * xx [ 213 ] + xx [ 506 ] * xx [ 214 ] + xx [ 411 ] * xx [ 215 ] -
( pm_math_dot3 ( xx + 221 , xx + 40 ) + pm_math_dot3 ( xx + 240 , xx + 0 ) )
; xx [ 22 ] = xx [ 370 ] * xx [ 208 ] + xx [ 299 ] * xx [ 209 ] + xx [ 275 ]
* xx [ 210 ] + xx [ 337 ] * xx [ 211 ] + xx [ 393 ] * xx [ 212 ] + xx [ 382 ]
* xx [ 213 ] + xx [ 517 ] * xx [ 214 ] + xx [ 413 ] * xx [ 215 ] - (
pm_math_dot3 ( xx + 261 , xx + 40 ) + pm_math_dot3 ( xx + 280 , xx + 0 ) ) ;
solveSymmetric ( xx + 310 , xx + 200 , ii + 2 , xx + 20 , 3 , 1 , ii [ 5 ] ,
xx + 0 , xx + 3 ) ; xx [ 3 ] = xx [ 0 ] - xx [ 132 ] ; xx [ 4 ] = xx [ 1 ] -
xx [ 136 ] ; xx [ 0 ] = xx [ 2 ] - xx [ 141 ] ; xx [ 2 ] = xx [ 170 ] - xx [
183 ] * xx [ 3 ] + xx [ 220 ] * xx [ 4 ] + xx [ 268 ] * xx [ 0 ] ; xx [ 16 ]
= xx [ 11 ] * xx [ 3 ] + xx [ 207 ] * xx [ 4 ] + xx [ 253 ] * xx [ 0 ] ; xx [
17 ] = xx [ 218 ] * xx [ 4 ] - xx [ 12 ] * xx [ 3 ] + xx [ 259 ] * xx [ 0 ] ;
xx [ 18 ] = xx [ 260 ] * xx [ 0 ] - ( xx [ 14 ] * xx [ 3 ] + xx [ 219 ] * xx
[ 4 ] ) ; pm_math_cross3 ( xx + 16 , xx + 307 , xx + 11 ) ; xx [ 14 ] = xx [
108 ] - xx [ 193 ] * xx [ 3 ] - xx [ 236 ] * xx [ 4 ] - xx [ 269 ] * xx [ 0 ]
+ xx [ 129 ] ; xx [ 20 ] = xx [ 110 ] - xx [ 195 ] * xx [ 3 ] - xx [ 238 ] *
xx [ 4 ] - xx [ 273 ] * xx [ 0 ] ; xx [ 31 ] = xx [ 2 ] + xx [ 11 ] ; xx [ 32
] = xx [ 14 ] + xx [ 12 ] ; xx [ 33 ] = xx [ 20 ] + xx [ 13 ] ;
pm_math_quatInverseXform ( xx + 471 , xx + 31 , xx + 11 ) ;
pm_math_quatInverseXform ( xx + 471 , xx + 16 , xx + 21 ) ;
pm_math_quatInverseXform ( xx + 285 , xx + 16 , xx + 31 ) ; pm_math_cross3 (
xx + 16 , xx + 185 , xx + 37 ) ; xx [ 16 ] = xx [ 2 ] + xx [ 37 ] ; xx [ 17 ]
= xx [ 14 ] + xx [ 38 ] ; xx [ 18 ] = xx [ 20 ] + xx [ 39 ] ;
pm_math_quatInverseXform ( xx + 285 , xx + 16 , xx + 37 ) ; xx [ 1 ] = xx [ 6
] - ( pm_math_dot3 ( xx + 295 , xx + 31 ) + pm_math_dot3 ( xx + 372 , xx + 37
) ) ; xx [ 2 ] = xx [ 31 ] - xx [ 92 ] - xx [ 1 ] ; xx [ 5 ] = xx [ 157 ] *
xx [ 2 ] ; xx [ 12 ] = xx [ 32 ] - xx [ 95 ] + xx [ 24 ] * xx [ 1 ] ; xx [ 14
] = xx [ 157 ] * xx [ 12 ] ; xx [ 16 ] = xx [ 2 ] - ( xx [ 157 ] * xx [ 5 ] -
xx [ 14 ] * xx [ 156 ] ) * xx [ 27 ] ; xx [ 6 ] = xx [ 12 ] - xx [ 27 ] * (
xx [ 5 ] * xx [ 156 ] + xx [ 157 ] * xx [ 14 ] ) ; xx [ 5 ] = xx [ 33 ] + xx
[ 103 ] ; xx [ 23 ] = xx [ 16 ] ; xx [ 24 ] = xx [ 6 ] ; xx [ 25 ] = xx [ 5 ]
; xx [ 14 ] = xx [ 37 ] + xx [ 93 ] + xx [ 155 ] * xx [ 1 ] + xx [ 12 ] * xx
[ 168 ] ; xx [ 12 ] = xx [ 157 ] * xx [ 14 ] ; xx [ 17 ] = xx [ 38 ] + xx [
120 ] + xx [ 70 ] * xx [ 1 ] - xx [ 168 ] * xx [ 2 ] ; xx [ 2 ] = xx [ 157 ]
* xx [ 17 ] ; xx [ 18 ] = xx [ 14 ] - ( xx [ 157 ] * xx [ 12 ] - xx [ 2 ] *
xx [ 156 ] ) * xx [ 27 ] ; xx [ 14 ] = xx [ 17 ] - xx [ 27 ] * ( xx [ 12 ] *
xx [ 156 ] + xx [ 157 ] * xx [ 2 ] ) ; xx [ 2 ] = xx [ 39 ] + xx [ 73 ] ; xx
[ 31 ] = xx [ 18 ] ; xx [ 32 ] = xx [ 14 ] ; xx [ 33 ] = xx [ 2 ] ; xx [ 12 ]
= xx [ 28 ] - ( pm_math_dot3 ( xx + 494 , xx + 23 ) + pm_math_dot3 ( xx + 508
, xx + 31 ) ) ; xx [ 23 ] = xx [ 16 ] - xx [ 36 ] ; xx [ 24 ] = xx [ 6 ] + xx
[ 124 ] ; xx [ 25 ] = xx [ 5 ] - xx [ 12 ] ; pm_math_quatInverseXform ( xx +
62 , xx + 23 , xx + 31 ) ; pm_math_cross3 ( xx + 23 , xx + 113 , xx + 35 ) ;
xx [ 23 ] = xx [ 18 ] + xx [ 179 ] + xx [ 35 ] ; xx [ 24 ] = xx [ 14 ] + xx [
146 ] + xx [ 36 ] ; xx [ 25 ] = xx [ 2 ] - xx [ 148 ] + xx [ 37 ] ;
pm_math_quatInverseXform ( xx + 62 , xx + 23 , xx + 16 ) ; xx [ 2 ] = xx [ 15
] - ( pm_math_dot3 ( xx + 498 , xx + 31 ) + pm_math_dot3 ( xx + 521 , xx + 16
) ) ; xx [ 14 ] = - xx [ 158 ] ; xx [ 15 ] = - xx [ 151 ] ; xx [ 16 ] = - xx
[ 166 ] ; xx [ 23 ] = - xx [ 158 ] * state [ 16 ] ; xx [ 24 ] = - xx [ 151 ]
* state [ 16 ] ; xx [ 25 ] = - xx [ 166 ] * state [ 16 ] ; xx [ 34 ] = -
3.673518662854545e-12 * state [ 16 ] ; xx [ 35 ] = - 9.873091221177267e-8 *
state [ 16 ] ; xx [ 36 ] = - 9.873084029494534e-8 * state [ 16 ] ;
pm_math_cross3 ( xx + 23 , xx + 34 , xx + 37 ) ; pm_math_quatInverseXform (
xx + 726 , xx + 23 , xx + 34 ) ; xx [ 5 ] = xx [ 19 ] * state [ 18 ] ; xx [ 6
] = xx [ 34 ] - xx [ 5 ] ; xx [ 17 ] = xx [ 172 ] * state [ 18 ] ; xx [ 18 ]
= xx [ 35 ] + xx [ 17 ] ; xx [ 20 ] = xx [ 36 ] - state [ 18 ] ; xx [ 40 ] =
xx [ 6 ] ; xx [ 41 ] = xx [ 18 ] ; xx [ 42 ] = xx [ 20 ] ; xx [ 21 ] =
1.025768558137025 ; xx [ 26 ] = 0.7562959708254411 ; xx [ 28 ] =
0.2770525606581644 ; xx [ 43 ] = xx [ 6 ] * xx [ 21 ] ; xx [ 44 ] = xx [ 18 ]
* xx [ 26 ] ; xx [ 45 ] = xx [ 28 ] * xx [ 20 ] ; pm_math_cross3 ( xx + 40 ,
xx + 43 , xx + 47 ) ; xx [ 43 ] = - 0.0395652553937987 ; xx [ 44 ] =
0.1206627306804083 ; xx [ 45 ] = - 0.2205980134044125 ; pm_math_quatXform (
xx + 481 , xx + 43 , xx + 58 ) ; xx [ 61 ] = - 0.08771541913364658 ; xx [ 62
] = 1.078809183824322e-5 ; xx [ 63 ] = - 3.057374240528095e-8 ;
pm_math_quatXform ( xx + 726 , xx + 61 , xx + 64 ) ; xx [ 61 ] = - xx [ 64 ]
; xx [ 62 ] = - ( 1.848830149241486e-15 + xx [ 65 ] ) ; xx [ 63 ] = - (
5.071415708866186e-9 + xx [ 66 ] ) ; pm_math_quatXform ( xx + 721 , xx + 61 ,
xx + 64 ) ; xx [ 67 ] = 1.671395057516844e-7 ; xx [ 68 ] =
6.187186568194987e-3 ; xx [ 69 ] = 6.18717698825356e-3 ; pm_math_quatXform (
xx + 721 , xx + 67 , xx + 70 ) ; xx [ 29 ] = xx [ 64 ] - xx [ 70 ] -
1.001751448546223e-8 ; xx [ 50 ] = xx [ 58 ] + xx [ 29 ] + 0.220599 ; xx [ 52
] = xx [ 65 ] - xx [ 71 ] + 0.04814999999999942 ; xx [ 67 ] =
0.02539999999999929 ; xx [ 68 ] = xx [ 59 ] + xx [ 52 ] - xx [ 67 ] ; xx [ 58
] = xx [ 66 ] - xx [ 72 ] - 8.752018279986853e-3 ; xx [ 64 ] = 0.12065 ; xx [
65 ] = xx [ 60 ] + xx [ 58 ] - xx [ 64 ] ; xx [ 59 ] = sqrt ( xx [ 50 ] * xx
[ 50 ] + xx [ 68 ] * xx [ 68 ] + xx [ 65 ] * xx [ 65 ] ) ; if ( xx [ 59 ] ==
0.0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ForceUndefined" ,
 "'Walk_Sim4/Gait Emulator/Walkway & force plate/Force Plate/Spring1' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 60 ] = xx [ 30 ] / xx [ 59 ] ; xx [ 66 ] = 1.2e4 ; xx
[ 69 ] = 0.095 ; xx [ 71 ] = - 0.4999996439106214 ; xx [ 72 ] = -
0.5000003442105691 ; xx [ 73 ] = - 0.4999996558078935 ; xx [ 74 ] =
0.5000003560704259 ; pm_math_quatCompose ( xx + 481 , xx + 71 , xx + 75 ) ;
pm_math_cross3 ( xx + 23 , xx + 61 , xx + 79 ) ; xx [ 82 ] =
3.586032427602137e-9 ; xx [ 83 ] = xx [ 82 ] * state [ 16 ] ; xx [ 85 ] =
8.918159271208881e-14 ; xx [ 86 ] = xx [ 85 ] * state [ 16 ] ; xx [ 88 ] =
7.690831401850464e-15 ; xx [ 89 ] = xx [ 88 ] * state [ 16 ] ; xx [ 91 ] = xx
[ 79 ] - xx [ 83 ] ; xx [ 92 ] = xx [ 80 ] + xx [ 86 ] ; xx [ 93 ] = xx [ 81
] + xx [ 89 ] ; pm_math_quatInverseXform ( xx + 726 , xx + 91 , xx + 94 ) ;
xx [ 87 ] = 1.078809183824208e-5 ; xx [ 90 ] = xx [ 87 ] * state [ 18 ] ; xx
[ 91 ] = xx [ 94 ] - xx [ 90 ] ; pm_math_cross3 ( xx + 40 , xx + 43 , xx + 97
) ; xx [ 93 ] = 0.08771541913364594 ; xx [ 100 ] = xx [ 93 ] * state [ 18 ] ;
xx [ 101 ] = xx [ 95 ] - xx [ 100 ] ; xx [ 94 ] = 3.027078150587337e-12 ; xx
[ 95 ] = xx [ 94 ] * state [ 18 ] ; xx [ 103 ] = xx [ 96 ] - xx [ 95 ] ; xx [
107 ] = xx [ 91 ] + xx [ 97 ] ; xx [ 108 ] = xx [ 101 ] + xx [ 98 ] ; xx [
109 ] = xx [ 103 ] + xx [ 99 ] ; pm_math_quatInverseXform ( xx + 71 , xx +
107 , xx + 96 ) ; pm_math_quatXform ( xx + 75 , xx + 96 , xx + 107 ) ; xx [
96 ] = xx [ 50 ] ; xx [ 97 ] = xx [ 68 ] ; xx [ 98 ] = xx [ 65 ] ; xx [ 92 ]
= xx [ 66 ] * ( xx [ 59 ] - xx [ 69 ] ) + xx [ 106 ] * pm_math_dot3 ( xx +
107 , xx + 96 ) / xx [ 59 ] ; xx [ 96 ] = - xx [ 60 ] * xx [ 50 ] * xx [ 92 ]
; xx [ 97 ] = - xx [ 60 ] * xx [ 68 ] * xx [ 92 ] ; xx [ 98 ] = - xx [ 60 ] *
xx [ 65 ] * xx [ 92 ] ; pm_math_quatInverseXform ( xx + 481 , xx + 96 , xx +
107 ) ; pm_math_cross3 ( xx + 43 , xx + 107 , xx + 96 ) ; xx [ 43 ] = -
0.03956559334952518 ; xx [ 44 ] = - 0.1206372693193551 ; xx [ 45 ] = -
0.2205980134134368 ; pm_math_quatXform ( xx + 481 , xx + 43 , xx + 110 ) ; xx
[ 50 ] = xx [ 110 ] + xx [ 29 ] + 0.220599 ; xx [ 59 ] = xx [ 111 ] + xx [ 52
] - xx [ 67 ] ; xx [ 65 ] = 0.12065 ; xx [ 68 ] = xx [ 112 ] + xx [ 58 ] + xx
[ 65 ] ; xx [ 70 ] = sqrt ( xx [ 50 ] * xx [ 50 ] + xx [ 59 ] * xx [ 59 ] +
xx [ 68 ] * xx [ 68 ] ) ; if ( xx [ 70 ] == 0.0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ForceUndefined" ,
 "'Walk_Sim4/Gait Emulator/Walkway & force plate/Force Plate/Spring2' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 92 ] = xx [ 30 ] / xx [ 70 ] ; pm_math_cross3 ( xx +
40 , xx + 43 , xx + 110 ) ; xx [ 113 ] = xx [ 91 ] + xx [ 110 ] ; xx [ 114 ]
= xx [ 101 ] + xx [ 111 ] ; xx [ 115 ] = xx [ 103 ] + xx [ 112 ] ;
pm_math_quatInverseXform ( xx + 71 , xx + 113 , xx + 110 ) ;
pm_math_quatXform ( xx + 75 , xx + 110 , xx + 113 ) ; xx [ 110 ] = xx [ 50 ]
; xx [ 111 ] = xx [ 59 ] ; xx [ 112 ] = xx [ 68 ] ; xx [ 99 ] = xx [ 66 ] * (
xx [ 70 ] - xx [ 69 ] ) + xx [ 106 ] * pm_math_dot3 ( xx + 113 , xx + 110 ) /
xx [ 70 ] ; xx [ 110 ] = - xx [ 92 ] * xx [ 50 ] * xx [ 99 ] ; xx [ 111 ] = -
xx [ 92 ] * xx [ 59 ] * xx [ 99 ] ; xx [ 112 ] = - xx [ 92 ] * xx [ 68 ] * xx
[ 99 ] ; pm_math_quatInverseXform ( xx + 481 , xx + 110 , xx + 113 ) ;
pm_math_cross3 ( xx + 43 , xx + 113 , xx + 110 ) ; xx [ 43 ] = -
0.03956558286792611 ; xx [ 44 ] = - 0.1206372693358699 ; xx [ 45 ] =
0.2205999865865631 ; pm_math_quatXform ( xx + 481 , xx + 43 , xx + 116 ) ; xx
[ 50 ] = xx [ 116 ] + xx [ 29 ] - 0.220599 ; xx [ 59 ] = xx [ 117 ] + xx [ 52
] - xx [ 67 ] ; xx [ 68 ] = xx [ 118 ] + xx [ 58 ] + xx [ 65 ] ; xx [ 65 ] =
sqrt ( xx [ 50 ] * xx [ 50 ] + xx [ 59 ] * xx [ 59 ] + xx [ 68 ] * xx [ 68 ]
) ; if ( xx [ 65 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ForceUndefined" ,
 "'Walk_Sim4/Gait Emulator/Walkway & force plate/Force Plate/Spring3' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 70 ] = xx [ 30 ] / xx [ 65 ] ; pm_math_cross3 ( xx +
40 , xx + 43 , xx + 116 ) ; xx [ 119 ] = xx [ 91 ] + xx [ 116 ] ; xx [ 120 ]
= xx [ 101 ] + xx [ 117 ] ; xx [ 121 ] = xx [ 103 ] + xx [ 118 ] ;
pm_math_quatInverseXform ( xx + 71 , xx + 119 , xx + 116 ) ;
pm_math_quatXform ( xx + 75 , xx + 116 , xx + 119 ) ; xx [ 116 ] = xx [ 50 ]
; xx [ 117 ] = xx [ 59 ] ; xx [ 118 ] = xx [ 68 ] ; xx [ 99 ] = xx [ 66 ] * (
xx [ 65 ] - xx [ 69 ] ) + xx [ 106 ] * pm_math_dot3 ( xx + 119 , xx + 116 ) /
xx [ 65 ] ; xx [ 116 ] = - xx [ 70 ] * xx [ 50 ] * xx [ 99 ] ; xx [ 117 ] = -
xx [ 70 ] * xx [ 59 ] * xx [ 99 ] ; xx [ 118 ] = - xx [ 70 ] * xx [ 68 ] * xx
[ 99 ] ; pm_math_quatInverseXform ( xx + 481 , xx + 116 , xx + 119 ) ;
pm_math_cross3 ( xx + 43 , xx + 119 , xx + 116 ) ; xx [ 43 ] = -
0.03956524491219966 ; xx [ 44 ] = 0.1206627306638935 ; xx [ 45 ] =
0.2205999865955874 ; pm_math_quatXform ( xx + 481 , xx + 43 , xx + 122 ) ; xx
[ 50 ] = xx [ 122 ] + xx [ 29 ] - 0.2205990000000001 ; xx [ 59 ] = xx [ 123 ]
+ xx [ 52 ] - xx [ 67 ] ; xx [ 65 ] = xx [ 124 ] + xx [ 58 ] - xx [ 64 ] ; xx
[ 64 ] = sqrt ( xx [ 50 ] * xx [ 50 ] + xx [ 59 ] * xx [ 59 ] + xx [ 65 ] *
xx [ 65 ] ) ; if ( xx [ 64 ] == 0.0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ForceUndefined" ,
 "'Walk_Sim4/Gait Emulator/Walkway & force plate/Force Plate/Spring4' force is undefined since base and follower origins are coincident."
, neDiagMgr ) ; } xx [ 67 ] = xx [ 30 ] / xx [ 64 ] ; pm_math_cross3 ( xx +
40 , xx + 43 , xx + 122 ) ; xx [ 40 ] = xx [ 91 ] + xx [ 122 ] ; xx [ 41 ] =
xx [ 101 ] + xx [ 123 ] ; xx [ 42 ] = xx [ 103 ] + xx [ 124 ] ;
pm_math_quatInverseXform ( xx + 71 , xx + 40 , xx + 101 ) ; pm_math_quatXform
( xx + 75 , xx + 101 , xx + 40 ) ; xx [ 71 ] = xx [ 50 ] ; xx [ 72 ] = xx [
59 ] ; xx [ 73 ] = xx [ 65 ] ; xx [ 74 ] = xx [ 66 ] * ( xx [ 64 ] - xx [ 69
] ) + xx [ 106 ] * pm_math_dot3 ( xx + 40 , xx + 71 ) / xx [ 64 ] ; xx [ 40 ]
= - xx [ 67 ] * xx [ 50 ] * xx [ 74 ] ; xx [ 41 ] = - xx [ 67 ] * xx [ 59 ] *
xx [ 74 ] ; xx [ 42 ] = - xx [ 67 ] * xx [ 65 ] * xx [ 74 ] ;
pm_math_quatInverseXform ( xx + 481 , xx + 40 , xx + 64 ) ; pm_math_cross3 (
xx + 43 , xx + 64 , xx + 40 ) ; pm_math_quatXform ( xx + 175 , xx + 524 , xx
+ 43 ) ; xx [ 50 ] = xx [ 131 ] * xx [ 753 ] - xx [ 180 ] * xx [ 755 ] ; xx [
59 ] = xx [ 180 ] * xx [ 754 ] ; xx [ 71 ] = - xx [ 131 ] * xx [ 754 ] ; xx [
72 ] = xx [ 50 ] ; xx [ 73 ] = xx [ 59 ] ; pm_math_cross3 ( xx + 753 , xx +
71 , xx + 74 ) ; pm_math_quatXform ( xx + 332 , xx + 307 , xx + 71 ) ; xx [
68 ] = xx [ 303 ] * xx [ 334 ] + xx [ 247 ] * xx [ 335 ] ; xx [ 77 ] = xx [
303 ] * xx [ 333 ] ; xx [ 101 ] = - xx [ 68 ] ; xx [ 102 ] = xx [ 77 ] ; xx [
103 ] = xx [ 247 ] * xx [ 333 ] ; pm_math_cross3 ( xx + 333 , xx + 101 , xx +
104 ) ; xx [ 101 ] = 0.01583458085085141 ; xx [ 102 ] = -
3.469188917546366e-7 ; xx [ 103 ] = - 1.472506675461308e-8 ;
pm_math_quatXform ( xx + 481 , xx + 101 , xx + 122 ) ; xx [ 125 ] = xx [ 71 ]
+ input [ 5 ] - ( xx [ 104 ] - xx [ 332 ] * xx [ 68 ] ) * xx [ 27 ] - ( xx [
122 ] + xx [ 29 ] ) ; xx [ 126 ] = xx [ 72 ] + input [ 6 ] - xx [ 27 ] * ( xx
[ 105 ] + xx [ 332 ] * xx [ 77 ] ) - ( xx [ 123 ] + xx [ 52 ] ) +
0.1516999999953523 ; xx [ 127 ] = xx [ 73 ] + input [ 7 ] - ( xx [ 247 ] * xx
[ 340 ] + xx [ 106 ] ) * xx [ 27 ] - ( xx [ 124 ] + xx [ 58 ] ) + xx [ 303 ]
; pm_math_quatInverseXform ( xx + 748 , xx + 125 , xx + 71 ) ; xx [ 104 ] = (
xx [ 74 ] - xx [ 131 ] * xx [ 752 ] * xx [ 754 ] ) * xx [ 27 ] + xx [ 71 ] -
xx [ 180 ] ; xx [ 105 ] = ( xx [ 752 ] * xx [ 50 ] + xx [ 75 ] ) * xx [ 27 ]
+ xx [ 72 ] ; xx [ 106 ] = xx [ 27 ] * ( xx [ 76 ] + xx [ 752 ] * xx [ 59 ] )
+ xx [ 73 ] - xx [ 131 ] ; xx [ 71 ] = - input [ 8 ] ; xx [ 72 ] = - input [
9 ] ; xx [ 73 ] = - input [ 10 ] ; pm_math_cross3 ( xx + 104 , xx + 71 , xx +
74 ) ; xx [ 71 ] = xx [ 43 ] - xx [ 74 ] ; xx [ 72 ] = xx [ 44 ] - xx [ 75 ]
; xx [ 73 ] = xx [ 45 ] - xx [ 76 ] ; pm_math_quatXform ( xx + 535 , xx + 71
, xx + 43 ) ; pm_math_quatXform ( xx + 535 , xx + 487 , xx + 71 ) ;
pm_math_cross3 ( xx + 101 , xx + 71 , xx + 75 ) ; xx [ 101 ] = - xx [ 5 ] ;
xx [ 102 ] = xx [ 17 ] ; xx [ 103 ] = - state [ 18 ] ; pm_math_cross3 ( xx +
34 , xx + 101 , xx + 104 ) ; xx [ 5 ] = xx [ 47 ] - xx [ 96 ] - xx [ 110 ] -
xx [ 116 ] - xx [ 40 ] + xx [ 43 ] + xx [ 75 ] + xx [ 21 ] * xx [ 104 ] ; xx
[ 17 ] = 2.436932203016518e-8 ; xx [ 29 ] = xx [ 48 ] - xx [ 97 ] - xx [ 111
] - xx [ 117 ] - xx [ 41 ] + xx [ 44 ] + xx [ 76 ] + xx [ 26 ] * xx [ 105 ] ;
xx [ 40 ] = xx [ 49 ] - xx [ 98 ] - xx [ 112 ] - xx [ 118 ] - xx [ 42 ] + xx
[ 45 ] + xx [ 77 ] + xx [ 28 ] * xx [ 106 ] ; xx [ 42 ] = - xx [ 87 ] ; xx [
43 ] = - xx [ 93 ] ; xx [ 44 ] = - xx [ 94 ] ; xx [ 47 ] = xx [ 34 ] + xx [ 6
] ; xx [ 48 ] = xx [ 35 ] + xx [ 18 ] ; xx [ 49 ] = xx [ 36 ] + xx [ 20 ] ;
xx [ 34 ] = - xx [ 90 ] ; xx [ 35 ] = - xx [ 100 ] ; xx [ 36 ] = - xx [ 95 ]
; pm_math_cross3 ( xx + 47 , xx + 34 , xx + 74 ) ; pm_math_cross3 ( xx + 23 ,
xx + 79 , xx + 34 ) ; pm_math_quatInverseXform ( xx + 726 , xx + 34 , xx + 47
) ; xx [ 18 ] = 36.00297158887692 ; xx [ 20 ] = xx [ 71 ] - ( xx [ 107 ] + xx
[ 113 ] + xx [ 119 ] + xx [ 64 ] ) + ( xx [ 74 ] + xx [ 47 ] ) * xx [ 18 ] ;
xx [ 34 ] = xx [ 72 ] - ( xx [ 108 ] + xx [ 114 ] + xx [ 120 ] + xx [ 65 ] )
+ ( xx [ 75 ] + xx [ 48 ] ) * xx [ 18 ] ; xx [ 35 ] = xx [ 73 ] - ( xx [ 109
] + xx [ 115 ] + xx [ 121 ] + xx [ 66 ] ) + ( xx [ 76 ] + xx [ 49 ] ) * xx [
18 ] ; xx [ 47 ] = xx [ 20 ] ; xx [ 48 ] = xx [ 34 ] ; xx [ 49 ] = xx [ 35 ]
; xx [ 36 ] = 0.554059239374008 ; memcpy ( ii + 2 , ii + 0 , 1 * sizeof ( int
) ) ; ii [ 1 ] = factorSymmetric ( xx + 36 , 1 , xx + 58 , xx + 45 , ii + 2 ,
ii + 3 ) ; if ( ii [ 3 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Walk_Sim4/Gait Emulator/Walkway & force plate/Force Plate/Revolute7' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 45 ] = ( input [ 15 ] - ( xx [ 29 ] * xx [ 172 ] - xx
[ 5 ] * xx [ 19 ] - xx [ 40 ] + pm_math_dot3 ( xx + 42 , xx + 47 ) ) ) / xx [
36 ] ; xx [ 6 ] = 2.830974609346598e-11 ; xx [ 41 ] = xx [ 5 ] - xx [ 17 ] *
xx [ 45 ] ; xx [ 42 ] = xx [ 29 ] + xx [ 6 ] * xx [ 45 ] ; xx [ 43 ] = xx [
40 ] - xx [ 28 ] * xx [ 45 ] ; pm_math_quatXform ( xx + 726 , xx + 41 , xx +
47 ) ; xx [ 5 ] = 3.884033639504245e-4 ; xx [ 19 ] = 3.158015742975086 ; xx [
29 ] = 1.08983808652906e-10 ; xx [ 40 ] = xx [ 20 ] - xx [ 5 ] * xx [ 45 ] ;
xx [ 41 ] = xx [ 34 ] - xx [ 19 ] * xx [ 45 ] ; xx [ 42 ] = xx [ 35 ] - xx [
29 ] * xx [ 45 ] ; pm_math_quatXform ( xx + 726 , xx + 40 , xx + 64 ) ;
pm_math_cross3 ( xx + 61 , xx + 64 , xx + 40 ) ; xx [ 20 ] = xx [ 726 ] * xx
[ 726 ] ; xx [ 34 ] = xx [ 727 ] * xx [ 728 ] ; xx [ 35 ] = xx [ 726 ] * xx [
729 ] ; xx [ 43 ] = xx [ 727 ] * xx [ 729 ] ; xx [ 44 ] = xx [ 726 ] * xx [
728 ] ; xx [ 50 ] = xx [ 728 ] * xx [ 729 ] ; xx [ 52 ] = xx [ 726 ] * xx [
727 ] ; xx [ 71 ] = ( xx [ 20 ] + xx [ 727 ] * xx [ 727 ] ) * xx [ 27 ] - xx
[ 30 ] ; xx [ 72 ] = xx [ 27 ] * ( xx [ 34 ] - xx [ 35 ] ) ; xx [ 73 ] = ( xx
[ 43 ] + xx [ 44 ] ) * xx [ 27 ] ; xx [ 74 ] = ( xx [ 34 ] + xx [ 35 ] ) * xx
[ 27 ] ; xx [ 75 ] = ( xx [ 20 ] + xx [ 728 ] * xx [ 728 ] ) * xx [ 27 ] - xx
[ 30 ] ; xx [ 76 ] = xx [ 27 ] * ( xx [ 50 ] - xx [ 52 ] ) ; xx [ 77 ] = xx [
27 ] * ( xx [ 43 ] - xx [ 44 ] ) ; xx [ 78 ] = ( xx [ 50 ] + xx [ 52 ] ) * xx
[ 27 ] ; xx [ 79 ] = ( xx [ 20 ] + xx [ 729 ] * xx [ 729 ] ) * xx [ 27 ] - xx
[ 30 ] ; xx [ 20 ] = xx [ 5 ] / xx [ 36 ] ; xx [ 30 ] = xx [ 19 ] / xx [ 36 ]
; xx [ 34 ] = xx [ 29 ] / xx [ 36 ] ; xx [ 93 ] = - xx [ 17 ] * xx [ 20 ] ;
xx [ 94 ] = - xx [ 17 ] * xx [ 30 ] ; xx [ 95 ] = - xx [ 17 ] * xx [ 34 ] ;
xx [ 96 ] = xx [ 6 ] * xx [ 20 ] ; xx [ 97 ] = xx [ 6 ] * xx [ 30 ] ; xx [ 98
] = xx [ 6 ] * xx [ 34 ] ; xx [ 99 ] = - xx [ 28 ] * xx [ 20 ] ; xx [ 100 ] =
- xx [ 28 ] * xx [ 30 ] ; xx [ 101 ] = - xx [ 28 ] * xx [ 34 ] ;
pm_math_matrix3x3ComposeTranspose ( xx + 93 , xx + 71 , xx + 102 ) ;
pm_math_matrix3x3Compose ( xx + 71 , xx + 102 , xx + 93 ) ; xx [ 35 ] = - xx
[ 19 ] * xx [ 20 ] ; xx [ 43 ] = - xx [ 29 ] * xx [ 20 ] ; xx [ 44 ] = - xx [
29 ] * xx [ 30 ] ; xx [ 102 ] = xx [ 18 ] - xx [ 5 ] * xx [ 20 ] ; xx [ 103 ]
= xx [ 35 ] ; xx [ 104 ] = xx [ 43 ] ; xx [ 105 ] = xx [ 35 ] ; xx [ 106 ] =
xx [ 18 ] - xx [ 19 ] * xx [ 30 ] ; xx [ 107 ] = xx [ 44 ] ; xx [ 108 ] = xx
[ 43 ] ; xx [ 109 ] = xx [ 44 ] ; xx [ 110 ] = xx [ 18 ] - xx [ 29 ] * xx [
34 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 102 , xx + 71 , xx + 111 ) ;
pm_math_matrix3x3Compose ( xx + 71 , xx + 111 , xx + 102 ) ;
pm_math_matrix3x3PostCross ( xx + 102 , xx + 61 , xx + 112 ) ; xx [ 130 ] =
xx [ 93 ] - xx [ 112 ] ; xx [ 131 ] = xx [ 94 ] - xx [ 115 ] ; xx [ 132 ] =
xx [ 95 ] - xx [ 118 ] ; xx [ 133 ] = xx [ 96 ] - xx [ 113 ] ; xx [ 134 ] =
xx [ 97 ] - xx [ 116 ] ; xx [ 135 ] = xx [ 98 ] - xx [ 119 ] ; xx [ 136 ] =
xx [ 99 ] - xx [ 114 ] ; xx [ 137 ] = xx [ 100 ] - xx [ 117 ] ; xx [ 138 ] =
xx [ 101 ] - xx [ 120 ] ; xx [ 121 ] = - xx [ 83 ] ; xx [ 122 ] = xx [ 86 ] ;
xx [ 123 ] = xx [ 89 ] ; pm_math_cross3 ( xx + 23 , xx + 121 , xx + 89 ) ;
pm_math_matrix3x3Xform ( xx + 130 , xx + 89 , xx + 23 ) ; xx [ 121 ] = xx [
37 ] + xx [ 47 ] + xx [ 40 ] + xx [ 23 ] ; xx [ 122 ] = xx [ 38 ] + xx [ 48 ]
+ xx [ 41 ] + xx [ 24 ] ; xx [ 123 ] = xx [ 39 ] + xx [ 49 ] + xx [ 42 ] + xx
[ 25 ] ; xx [ 23 ] = - xx [ 82 ] ; xx [ 24 ] = xx [ 85 ] ; xx [ 25 ] = xx [
88 ] ; xx [ 5 ] = 8.651131955098283e-3 ; xx [ 139 ] = xx [ 5 ] + xx [ 102 ] ;
xx [ 140 ] = xx [ 103 ] ; xx [ 141 ] = xx [ 104 ] ; xx [ 142 ] = xx [ 105 ] ;
xx [ 143 ] = xx [ 5 ] + xx [ 106 ] ; xx [ 144 ] = xx [ 107 ] ; xx [ 145 ] =
xx [ 108 ] ; xx [ 146 ] = xx [ 109 ] ; xx [ 147 ] = xx [ 5 ] + xx [ 110 ] ;
pm_math_matrix3x3Xform ( xx + 139 , xx + 89 , xx + 37 ) ; xx [ 40 ] = xx [ 64
] + xx [ 37 ] ; xx [ 41 ] = xx [ 65 ] + xx [ 38 ] ; xx [ 42 ] = xx [ 66 ] +
xx [ 39 ] ; xx [ 5 ] = xx [ 17 ] / xx [ 36 ] ; xx [ 18 ] = xx [ 6 ] * xx [ 5
] ; xx [ 19 ] = - xx [ 28 ] * xx [ 5 ] ; xx [ 29 ] = xx [ 6 ] / xx [ 36 ] ;
xx [ 35 ] = xx [ 28 ] * xx [ 29 ] ; xx [ 102 ] = xx [ 21 ] - xx [ 17 ] * xx [
5 ] ; xx [ 103 ] = xx [ 18 ] ; xx [ 104 ] = xx [ 19 ] ; xx [ 105 ] = xx [ 18
] ; xx [ 106 ] = xx [ 26 ] - xx [ 6 ] * xx [ 29 ] ; xx [ 107 ] = xx [ 35 ] ;
xx [ 108 ] = xx [ 19 ] ; xx [ 109 ] = xx [ 35 ] ; xx [ 110 ] = xx [ 28 ] -
0.07675812136724587 / xx [ 36 ] ; pm_math_matrix3x3ComposeTranspose ( xx +
102 , xx + 71 , xx + 167 ) ; pm_math_matrix3x3Compose ( xx + 71 , xx + 167 ,
xx + 102 ) ; pm_math_matrix3x3PostCross ( xx + 93 , xx + 61 , xx + 71 ) ;
pm_math_matrix3x3PreCross ( xx + 112 , xx + 61 , xx + 93 ) ; xx [ 111 ] =
1.923141148356463e-7 + xx [ 102 ] - xx [ 71 ] - xx [ 71 ] - xx [ 93 ] ; xx [
112 ] = xx [ 103 ] - xx [ 72 ] - xx [ 74 ] - xx [ 94 ] ; xx [ 113 ] = xx [
104 ] - xx [ 73 ] - xx [ 77 ] - xx [ 95 ] ; xx [ 114 ] = xx [ 105 ] - xx [ 74
] - xx [ 72 ] - xx [ 96 ] ; xx [ 115 ] = 1.39626544228738e-7 + xx [ 106 ] -
xx [ 75 ] - xx [ 75 ] - xx [ 97 ] ; xx [ 116 ] = xx [ 107 ] - xx [ 76 ] - xx
[ 78 ] - xx [ 98 ] ; xx [ 117 ] = xx [ 108 ] - xx [ 77 ] - xx [ 73 ] - xx [
99 ] ; xx [ 118 ] = xx [ 109 ] - xx [ 78 ] - xx [ 76 ] - xx [ 100 ] ; xx [
119 ] = 1.396265442671866e-7 + xx [ 110 ] - xx [ 79 ] - xx [ 79 ] - xx [ 101
] ; pm_math_matrix3x3Xform ( xx + 111 , xx + 14 , xx + 37 ) ;
pm_math_matrix3x3Xform ( xx + 130 , xx + 23 , xx + 47 ) ; xx [ 64 ] = xx [ 37
] + xx [ 47 ] ; xx [ 65 ] = xx [ 38 ] + xx [ 48 ] ; xx [ 66 ] = xx [ 39 ] +
xx [ 49 ] ; pm_math_matrix3x3TransposeXform ( xx + 130 , xx + 14 , xx + 37 )
; pm_math_matrix3x3Xform ( xx + 139 , xx + 23 , xx + 47 ) ; xx [ 6 ] = xx [
37 ] + xx [ 47 ] ; xx [ 18 ] = xx [ 38 ] + xx [ 48 ] ; xx [ 19 ] = xx [ 39 ]
+ xx [ 49 ] ; xx [ 37 ] = xx [ 6 ] ; xx [ 38 ] = xx [ 18 ] ; xx [ 39 ] = xx [
19 ] ; xx [ 21 ] = pm_math_dot3 ( xx + 14 , xx + 64 ) + pm_math_dot3 ( xx +
23 , xx + 37 ) ; ii [ 1 ] = factorSymmetric ( xx + 21 , 1 , xx + 37 , xx + 17
, ii + 0 , ii + 2 ) ; if ( ii [ 2 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Walk_Sim4/Gait Emulator/Walkway & force plate/Force Plate/Revolute6' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 37 ] = xx [ 6 ] / xx [ 21 ] ; xx [ 38 ] = xx [ 18 ] /
xx [ 21 ] ; xx [ 39 ] = xx [ 19 ] / xx [ 21 ] ; xx [ 6 ] = xx [ 129 ] * xx [
724 ] ; xx [ 17 ] = xx [ 129 ] * xx [ 722 ] ; xx [ 19 ] = ( xx [ 721 ] * xx [
6 ] + xx [ 723 ] * xx [ 17 ] ) * xx [ 27 ] ; xx [ 26 ] = ( xx [ 724 ] * xx [
6 ] + xx [ 722 ] * xx [ 17 ] ) * xx [ 27 ] ; xx [ 18 ] = xx [ 27 ] * ( xx [
723 ] * xx [ 6 ] - xx [ 721 ] * xx [ 17 ] ) ; xx [ 47 ] = xx [ 19 ] ; xx [ 48
] = xx [ 129 ] - xx [ 26 ] ; xx [ 49 ] = xx [ 18 ] ; xx [ 6 ] = ( input [ 14
] - ( pm_math_dot3 ( xx + 14 , xx + 121 ) + pm_math_dot3 ( xx + 23 , xx + 40
) ) ) / xx [ 21 ] - pm_math_dot3 ( xx + 37 , xx + 47 ) ; xx [ 14 ] = - xx [ 5
] ; xx [ 15 ] = xx [ 29 ] ; xx [ 16 ] = - xx [ 28 ] / xx [ 36 ] ; xx [ 23 ] =
- xx [ 158 ] * xx [ 6 ] ; xx [ 24 ] = - xx [ 151 ] * xx [ 6 ] ; xx [ 25 ] = -
xx [ 166 ] * xx [ 6 ] ; pm_math_quatInverseXform ( xx + 726 , xx + 23 , xx +
27 ) ; xx [ 35 ] = - xx [ 20 ] ; xx [ 36 ] = - xx [ 30 ] ; xx [ 37 ] = - xx [
34 ] ; pm_math_cross3 ( xx + 23 , xx + 61 , xx + 38 ) ; xx [ 23 ] = xx [ 19 ]
+ xx [ 89 ] - xx [ 82 ] * xx [ 6 ] + xx [ 38 ] ; xx [ 24 ] = xx [ 90 ] - xx [
26 ] + xx [ 85 ] * xx [ 6 ] + xx [ 39 ] + xx [ 129 ] ; xx [ 25 ] = xx [ 18 ]
+ xx [ 91 ] + xx [ 88 ] * xx [ 6 ] + xx [ 40 ] ; pm_math_quatInverseXform (
xx + 726 , xx + 23 , xx + 17 ) ; xx [ 5 ] = ( xx [ 516 ] * xx [ 214 ] - xx [
462 ] * xx [ 213 ] - xx [ 542 ] * xx [ 215 ] ) / xx [ 463 ] ; xx [ 23 ] = -
xx [ 445 ] * xx [ 5 ] ; xx [ 24 ] = - xx [ 468 ] * xx [ 5 ] ; xx [ 25 ] = -
xx [ 470 ] * xx [ 5 ] ; pm_math_quatXform ( xx + 528 , xx + 23 , xx + 38 ) ;
xx [ 20 ] = ( xx [ 541 ] * xx [ 214 ] - xx [ 469 ] * xx [ 213 ] - xx [ 552 ]
* xx [ 215 ] + xx [ 563 ] * xx [ 217 ] - pm_math_dot3 ( xx + 518 , xx + 38 )
) / xx [ 515 ] ; xx [ 23 ] = xx [ 38 ] + xx [ 20 ] * xx [ 557 ] ; xx [ 24 ] =
xx [ 39 ] + xx [ 20 ] * xx [ 558 ] ; xx [ 25 ] = xx [ 40 ] + xx [ 20 ] * xx [
559 ] ; pm_math_quatXform ( xx + 511 , xx + 23 , xx + 38 ) ; xx [ 21 ] = ( xx
[ 553 ] * xx [ 216 ] - xx [ 213 ] + xx [ 561 ] * xx [ 217 ] - pm_math_dot3 (
xx + 449 , xx + 38 ) ) / xx [ 504 ] - xx [ 57 ] ; xx [ 23 ] = xx [ 46 ] + xx
[ 430 ] * xx [ 21 ] ; xx [ 24 ] = xx [ 443 ] * xx [ 21 ] - xx [ 53 ] ; xx [
25 ] = xx [ 55 ] - xx [ 444 ] * xx [ 21 ] ; pm_math_quatInverseXform ( xx +
511 , xx + 23 , xx + 38 ) ; xx [ 23 ] = xx [ 20 ] - pm_math_dot3 ( xx + 532 ,
xx + 38 ) ; xx [ 41 ] = xx [ 38 ] - xx [ 480 ] * xx [ 23 ] ; xx [ 42 ] = xx [
39 ] + xx [ 497 ] * xx [ 23 ] ; xx [ 43 ] = xx [ 40 ] - xx [ 502 ] * xx [ 23
] ; pm_math_quatInverseXform ( xx + 528 , xx + 41 , xx + 24 ) ; xx [ 38 ] =
xx [ 31 ] + xx [ 446 ] - xx [ 51 ] * xx [ 2 ] ; xx [ 39 ] = xx [ 32 ] + xx [
447 ] - xx [ 54 ] * xx [ 2 ] ; xx [ 40 ] = xx [ 33 ] + xx [ 448 ] - xx [ 56 ]
* xx [ 2 ] ; xx [ 30 ] = xx [ 338 ] ; xx [ 31 ] = xx [ 339 ] ; xx [ 32 ] = -
0.7067545433081799 ; deriv [ 0 ] = xx [ 7 ] ; deriv [ 1 ] = xx [ 8 ] ; deriv
[ 2 ] = xx [ 9 ] ; deriv [ 3 ] = xx [ 10 ] ; deriv [ 4 ] = xx [ 3 ] ; deriv [
5 ] = xx [ 4 ] ; deriv [ 6 ] = xx [ 0 ] ; deriv [ 7 ] = state [ 8 ] ; deriv [
8 ] = xx [ 188 ] - ( xx [ 267 ] * xx [ 11 ] - xx [ 272 ] * xx [ 13 ] - xx [
255 ] * xx [ 22 ] ) ; deriv [ 9 ] = state [ 10 ] ; deriv [ 10 ] = xx [ 1 ] ;
deriv [ 11 ] = state [ 12 ] ; deriv [ 12 ] = xx [ 12 ] ; deriv [ 13 ] = state
[ 14 ] ; deriv [ 14 ] = xx [ 2 ] ; deriv [ 15 ] = state [ 16 ] ; deriv [ 16 ]
= xx [ 6 ] ; deriv [ 17 ] = state [ 18 ] ; deriv [ 18 ] = xx [ 45 ] - (
pm_math_dot3 ( xx + 14 , xx + 27 ) + pm_math_dot3 ( xx + 35 , xx + 17 ) ) ;
deriv [ 19 ] = state [ 20 ] ; deriv [ 20 ] = xx [ 21 ] ; deriv [ 21 ] = state
[ 22 ] ; deriv [ 22 ] = xx [ 23 ] ; deriv [ 23 ] = state [ 24 ] ; deriv [ 24
] = xx [ 5 ] - pm_math_dot3 ( xx + 543 , xx + 24 ) ; deriv [ 25 ] = state [
26 ] ; deriv [ 26 ] = - ( xx [ 553 ] * xx [ 216 ] / xx [ 564 ] + xx [ 84 ] )
; deriv [ 27 ] = state [ 28 ] ; deriv [ 28 ] = - xx [ 561 ] * xx [ 217 ] / xx
[ 574 ] ; deriv [ 29 ] = state [ 30 ] ; deriv [ 30 ] = pm_math_dot3 ( xx + 38
, xx + 30 ) ; deriv [ 31 ] = state [ 32 ] ; deriv [ 32 ] = xx [ 418 ] ; ii [
0 ] = ( 0 != 0 && fabs ( cos ( input [ 3 ] ) ) < 1.0e-6 ) ? 1 : 0 ; if ( ii [
0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:GimbalLock" ,
 "'Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/simple_shin_1_RIGID/Gimbal Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } errorResult [ 0 ] = xx [ 60 ] + xx [ 92 ] + xx [ 70 ] + xx
[ 67 ] + xx [ 60 ] + xx [ 92 ] + xx [ 70 ] + xx [ 67 ] + ( ( double ) ii [ 0
] ) ; return NULL ; }
