#include "__cf_Walk_Sim4.h"
#include <math.h>
#include "Walk_Sim4_acc.h"
#include "Walk_Sim4_acc_private.h"
#include <stdio.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
static void mdlOutputs ( SimStruct * S , int_T tid ) { boolean_T first_output
; db1qyhnkjl * _rtB ; lyyt0pxois * _rtP ; kofd50oqiz * _rtX ; b4vymrwfjr *
_rtDW ; _rtDW = ( ( b4vymrwfjr * ) ssGetRootDWork ( S ) ) ; _rtX = ( (
kofd50oqiz * ) ssGetContStates ( S ) ) ; _rtP = ( ( lyyt0pxois * )
ssGetDefaultParam ( S ) ) ; _rtB = ( ( db1qyhnkjl * ) _ssGetBlockIO ( S ) ) ;
ssCallAccelRunBlock ( S , 3 , 0 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock
( S , 3 , 1 , SS_CALL_MDL_OUTPUTS ) ; first_output = false ; if ( _rtDW ->
lz43hau3ig == 0.0 ) { _rtDW -> lz43hau3ig = 1.0 ; first_output = true ; } if
( first_output ) { _rtX -> oleka5vmsg [ 0 ] = _rtB -> mq3z5vyk1i [ 0 ] ; _rtX
-> oleka5vmsg [ 1 ] = 0.0 ; } _rtB -> d1wk3i4ttg [ 0 ] = _rtX -> oleka5vmsg [
0 ] ; _rtB -> d1wk3i4ttg [ 1 ] = _rtX -> oleka5vmsg [ 1 ] ; _rtB ->
d1wk3i4ttg [ 2 ] = ( ( _rtB -> mq3z5vyk1i [ 0 ] - _rtX -> oleka5vmsg [ 0 ] )
* 1000.0 - 2.0 * _rtX -> oleka5vmsg [ 1 ] ) * 1000.0 ; _rtB -> d1wk3i4ttg [ 3
] = 0.0 ; first_output = false ; if ( _rtDW -> gzrlfqcepc == 0.0 ) { _rtDW ->
gzrlfqcepc = 1.0 ; first_output = true ; } if ( first_output ) { _rtX ->
gmsmwr3cc0 [ 0 ] = _rtB -> mq3z5vyk1i [ 1 ] ; _rtX -> gmsmwr3cc0 [ 1 ] = 0.0
; } _rtB -> d5nsf0x0wr [ 0 ] = _rtX -> gmsmwr3cc0 [ 0 ] ; _rtB -> d5nsf0x0wr
[ 1 ] = _rtX -> gmsmwr3cc0 [ 1 ] ; _rtB -> d5nsf0x0wr [ 2 ] = ( ( _rtB ->
mq3z5vyk1i [ 1 ] - _rtX -> gmsmwr3cc0 [ 0 ] ) * 1000.0 - 2.0 * _rtX ->
gmsmwr3cc0 [ 1 ] ) * 1000.0 ; _rtB -> d5nsf0x0wr [ 3 ] = 0.0 ; first_output =
false ; if ( _rtDW -> fcwoczvcvk == 0.0 ) { _rtDW -> fcwoczvcvk = 1.0 ;
first_output = true ; } if ( first_output ) { _rtX -> lvikcw4pct [ 0 ] = _rtB
-> mq3z5vyk1i [ 2 ] ; _rtX -> lvikcw4pct [ 1 ] = 0.0 ; } _rtB -> lzba52fcf0 [
0 ] = _rtX -> lvikcw4pct [ 0 ] ; _rtB -> lzba52fcf0 [ 1 ] = _rtX ->
lvikcw4pct [ 1 ] ; _rtB -> lzba52fcf0 [ 2 ] = ( ( _rtB -> mq3z5vyk1i [ 2 ] -
_rtX -> lvikcw4pct [ 0 ] ) * 1000.0 - 2.0 * _rtX -> lvikcw4pct [ 1 ] ) *
1000.0 ; _rtB -> lzba52fcf0 [ 3 ] = 0.0 ; ssCallAccelRunBlock ( S , 3 , 5 ,
SS_CALL_MDL_OUTPUTS ) ; first_output = false ; if ( _rtDW -> fmxt4x3vzi ==
0.0 ) { _rtDW -> fmxt4x3vzi = 1.0 ; first_output = true ; } if ( first_output
) { _rtX -> p0asllibcr [ 0 ] = _rtB -> anfs0tstcc [ 0 ] ; _rtX -> p0asllibcr
[ 1 ] = 0.0 ; } _rtB -> aiqqb4y4r1 [ 0 ] = _rtX -> p0asllibcr [ 0 ] ; _rtB ->
aiqqb4y4r1 [ 1 ] = _rtX -> p0asllibcr [ 1 ] ; _rtB -> aiqqb4y4r1 [ 2 ] = ( (
_rtB -> anfs0tstcc [ 0 ] - _rtX -> p0asllibcr [ 0 ] ) * 1000.0 - 2.0 * _rtX
-> p0asllibcr [ 1 ] ) * 1000.0 ; _rtB -> aiqqb4y4r1 [ 3 ] = 0.0 ;
first_output = false ; if ( _rtDW -> ehes2w3gkx == 0.0 ) { _rtDW ->
ehes2w3gkx = 1.0 ; first_output = true ; } if ( first_output ) { _rtX ->
mrf5gvci5v [ 0 ] = _rtB -> anfs0tstcc [ 1 ] ; _rtX -> mrf5gvci5v [ 1 ] = 0.0
; } _rtB -> hq5nwxb3ol [ 0 ] = _rtX -> mrf5gvci5v [ 0 ] ; _rtB -> hq5nwxb3ol
[ 1 ] = _rtX -> mrf5gvci5v [ 1 ] ; _rtB -> hq5nwxb3ol [ 2 ] = ( ( _rtB ->
anfs0tstcc [ 1 ] - _rtX -> mrf5gvci5v [ 0 ] ) * 1000.0 - 2.0 * _rtX ->
mrf5gvci5v [ 1 ] ) * 1000.0 ; _rtB -> hq5nwxb3ol [ 3 ] = 0.0 ; first_output =
false ; if ( _rtDW -> b0jhzc35v0 == 0.0 ) { _rtDW -> b0jhzc35v0 = 1.0 ;
first_output = true ; } if ( first_output ) { _rtX -> mbimce0fqa [ 0 ] = _rtB
-> anfs0tstcc [ 2 ] ; _rtX -> mbimce0fqa [ 1 ] = 0.0 ; } _rtB -> d1ggivwgly [
0 ] = _rtX -> mbimce0fqa [ 0 ] ; _rtB -> d1ggivwgly [ 1 ] = _rtX ->
mbimce0fqa [ 1 ] ; _rtB -> d1ggivwgly [ 2 ] = ( ( _rtB -> anfs0tstcc [ 2 ] -
_rtX -> mbimce0fqa [ 0 ] ) * 1000.0 - 2.0 * _rtX -> mbimce0fqa [ 1 ] ) *
1000.0 ; _rtB -> d1ggivwgly [ 3 ] = 0.0 ; ssCallAccelRunBlock ( S , 3 , 9 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 3 , 10 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> lrk0wyqc1y = _rtB -> lqm1fspkjp - _rtB ->
ekpycmo1jw [ 1 ] ; _rtB -> lqsb5gtaie = _rtP -> P_0 * _rtB -> lrk0wyqc1y ;
_rtB -> fmbac02nvi = ( ( kofd50oqiz * ) ssGetContStates ( S ) ) -> n3q0hefys4
; _rtB -> ldglnsbazw = _rtP -> P_2 * _rtB -> lrk0wyqc1y ; _rtB -> g53qvchqh3
= ( ( kofd50oqiz * ) ssGetContStates ( S ) ) -> gigke2wig1 ; _rtB ->
m2okjprze1 = _rtB -> ldglnsbazw - _rtB -> g53qvchqh3 ; _rtB -> lo245xpekb =
_rtP -> P_4 * _rtB -> m2okjprze1 ; _rtB -> h11hjiz33m = ( _rtB -> lqsb5gtaie
+ _rtB -> fmbac02nvi ) + _rtB -> lo245xpekb ; if ( ssIsMajorTimeStep ( S ) )
{ _rtDW -> mmcrb4wiru = _rtB -> h11hjiz33m >= _rtP -> P_5 ? 1 : _rtB ->
h11hjiz33m > _rtP -> P_6 ? 0 : - 1 ; } _rtB -> myrm4cpxsp = _rtDW ->
mmcrb4wiru == 1 ? _rtP -> P_5 : _rtDW -> mmcrb4wiru == - 1 ? _rtP -> P_6 :
_rtB -> h11hjiz33m ; first_output = false ; if ( _rtDW -> ovtgirnpkm == 0.0 )
{ _rtDW -> ovtgirnpkm = 1.0 ; first_output = true ; } if ( first_output ) {
_rtX -> f5zro03fnf [ 0 ] = _rtB -> myrm4cpxsp ; _rtX -> f5zro03fnf [ 1 ] =
0.0 ; } _rtB -> jsacuztcoy [ 0 ] = _rtX -> f5zro03fnf [ 0 ] ; _rtB ->
jsacuztcoy [ 1 ] = _rtX -> f5zro03fnf [ 1 ] ; _rtB -> jsacuztcoy [ 2 ] = ( (
_rtB -> myrm4cpxsp - _rtX -> f5zro03fnf [ 0 ] ) * 1000.0 - 2.0 * _rtX ->
f5zro03fnf [ 1 ] ) * 1000.0 ; _rtB -> jsacuztcoy [ 3 ] = 0.0 ;
ssCallAccelRunBlock ( S , 3 , 21 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> emqvpqxkta
= _rtB -> lqm1fspkjp - _rtB -> ekpycmo1jw [ 3 ] ; _rtB -> lsjlekt5ro = _rtP
-> P_7 * _rtB -> emqvpqxkta ; _rtB -> b33zcfwxev = ( ( kofd50oqiz * )
ssGetContStates ( S ) ) -> i4huqr2jqy ; _rtB -> ju4ag4kqxs = _rtP -> P_9 *
_rtB -> emqvpqxkta ; _rtB -> i5vlzp3b2r = ( ( kofd50oqiz * ) ssGetContStates
( S ) ) -> p1coydakrg ; _rtB -> l3z535npmj = _rtB -> ju4ag4kqxs - _rtB ->
i5vlzp3b2r ; _rtB -> h04tgp2mli = _rtP -> P_11 * _rtB -> l3z535npmj ; _rtB ->
n4heicwoa5 = ( _rtB -> lsjlekt5ro + _rtB -> b33zcfwxev ) + _rtB -> h04tgp2mli
; if ( ssIsMajorTimeStep ( S ) ) { _rtDW -> bschfredd1 = _rtB -> n4heicwoa5
>= _rtP -> P_12 ? 1 : _rtB -> n4heicwoa5 > _rtP -> P_13 ? 0 : - 1 ; } _rtB ->
pxpz2kypjw = _rtDW -> bschfredd1 == 1 ? _rtP -> P_12 : _rtDW -> bschfredd1 ==
- 1 ? _rtP -> P_13 : _rtB -> n4heicwoa5 ; first_output = false ; if ( _rtDW
-> flrsvcdg0r == 0.0 ) { _rtDW -> flrsvcdg0r = 1.0 ; first_output = true ; }
if ( first_output ) { _rtX -> okqmbmuryh [ 0 ] = _rtB -> pxpz2kypjw ; _rtX ->
okqmbmuryh [ 1 ] = 0.0 ; } _rtB -> nduyvyrgqg [ 0 ] = _rtX -> okqmbmuryh [ 0
] ; _rtB -> nduyvyrgqg [ 1 ] = _rtX -> okqmbmuryh [ 1 ] ; _rtB -> nduyvyrgqg
[ 2 ] = ( ( _rtB -> pxpz2kypjw - _rtX -> okqmbmuryh [ 0 ] ) * 1000.0 - 2.0 *
_rtX -> okqmbmuryh [ 1 ] ) * 1000.0 ; _rtB -> nduyvyrgqg [ 3 ] = 0.0 ; _rtB
-> mpn2igferc [ 0 ] = _rtB -> ekpycmo1jw [ 5 ] ; _rtB -> mpn2igferc [ 1 ] =
_rtB -> ekpycmo1jw [ 7 ] ; _rtB -> mpn2igferc [ 2 ] = _rtB -> ekpycmo1jw [ 9
] ; _rtB -> aukazj4aao [ 0 ] = _rtB -> ekpycmo1jw [ 6 ] ; _rtB -> aukazj4aao
[ 1 ] = _rtB -> ekpycmo1jw [ 8 ] ; _rtB -> aukazj4aao [ 2 ] = _rtB ->
ekpycmo1jw [ 10 ] ; ssCallAccelRunBlock ( S , 0 , 2 , SS_CALL_MDL_OUTPUTS ) ;
_rtB -> f5tcas5kwn [ 0 ] = _rtB -> gh2bcq2pnx [ 0 ] ; _rtB -> f5tcas5kwn [ 1
] = 0.0 ; _rtB -> f5tcas5kwn [ 2 ] = 0.0 ; _rtB -> f5tcas5kwn [ 3 ] = 0.0 ;
_rtB -> joc0lpp0jb [ 0 ] = _rtB -> gh2bcq2pnx [ 1 ] ; _rtB -> joc0lpp0jb [ 1
] = 0.0 ; _rtB -> joc0lpp0jb [ 2 ] = 0.0 ; _rtB -> joc0lpp0jb [ 3 ] = 0.0 ;
_rtB -> lw3ikjbac2 [ 0 ] = _rtB -> gh2bcq2pnx [ 2 ] ; _rtB -> lw3ikjbac2 [ 1
] = 0.0 ; _rtB -> lw3ikjbac2 [ 2 ] = 0.0 ; _rtB -> lw3ikjbac2 [ 3 ] = 0.0 ;
_rtB -> hgnzc0grzm [ 0 ] = _rtB -> ifabk1v03h [ 0 ] ; _rtB -> hgnzc0grzm [ 1
] = 0.0 ; _rtB -> hgnzc0grzm [ 2 ] = 0.0 ; _rtB -> hgnzc0grzm [ 3 ] = 0.0 ;
_rtB -> mbvdulcp1s [ 0 ] = _rtB -> ifabk1v03h [ 1 ] ; _rtB -> mbvdulcp1s [ 1
] = 0.0 ; _rtB -> mbvdulcp1s [ 2 ] = 0.0 ; _rtB -> mbvdulcp1s [ 3 ] = 0.0 ;
_rtB -> p1tirqb1e1 [ 0 ] = _rtB -> ifabk1v03h [ 2 ] ; _rtB -> p1tirqb1e1 [ 1
] = 0.0 ; _rtB -> p1tirqb1e1 [ 2 ] = 0.0 ; _rtB -> p1tirqb1e1 [ 3 ] = 0.0 ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { if ( _rtDW -> h4aljpv1cn != 0 ) { _rtDW
-> bui11fpqhc = muDoubleScalarSin ( _rtP -> P_16 * ssGetTaskTime ( S , 2 ) )
; _rtDW -> m33n3pbjwx = muDoubleScalarCos ( _rtP -> P_16 * ssGetTaskTime ( S
, 2 ) ) ; _rtDW -> h4aljpv1cn = 0 ; } _rtB -> df3etekx3o = ( ( _rtDW ->
bui11fpqhc * _rtP -> P_20 + _rtDW -> m33n3pbjwx * _rtP -> P_19 ) * _rtP ->
P_18 + ( _rtDW -> m33n3pbjwx * _rtP -> P_20 - _rtDW -> bui11fpqhc * _rtP ->
P_19 ) * _rtP -> P_17 ) * _rtP -> P_14 + _rtP -> P_15 ; } first_output =
false ; if ( _rtDW -> ep3taliqrv == 0.0 ) { _rtDW -> ep3taliqrv = 1.0 ;
first_output = true ; } if ( first_output ) { _rtX -> dmckm0h0rt [ 0 ] = _rtB
-> df3etekx3o ; _rtX -> dmckm0h0rt [ 1 ] = 0.0 ; } _rtB -> famhgwv4of [ 0 ] =
_rtX -> dmckm0h0rt [ 0 ] ; _rtB -> famhgwv4of [ 1 ] = _rtX -> dmckm0h0rt [ 1
] ; _rtB -> famhgwv4of [ 2 ] = ( ( _rtB -> df3etekx3o - _rtX -> dmckm0h0rt [
0 ] ) * 1000.0 - 2.0 * _rtX -> dmckm0h0rt [ 1 ] ) * 1000.0 ; _rtB ->
famhgwv4of [ 3 ] = 0.0 ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB ->
ni1jlior3s = _rtP -> P_21 ; } first_output = false ; if ( _rtDW -> fgvya54ooh
== 0.0 ) { _rtDW -> fgvya54ooh = 1.0 ; first_output = true ; } if (
first_output ) { _rtX -> f02hzaguhy [ 0 ] = _rtB -> ni1jlior3s ; _rtX ->
f02hzaguhy [ 1 ] = 0.0 ; } _rtB -> ar2w03zk4m [ 0 ] = _rtX -> f02hzaguhy [ 0
] ; _rtB -> ar2w03zk4m [ 1 ] = _rtX -> f02hzaguhy [ 1 ] ; _rtB -> ar2w03zk4m
[ 2 ] = ( ( _rtB -> ni1jlior3s - _rtX -> f02hzaguhy [ 0 ] ) * 10000.0 - 2.0 *
_rtX -> f02hzaguhy [ 1 ] ) * 10000.0 ; _rtB -> ar2w03zk4m [ 3 ] = 0.0 ; _rtB
-> lcdu52n30z [ 0 ] = _rtB -> ekpycmo1jw [ 18 ] ; _rtB -> lcdu52n30z [ 1 ] =
_rtB -> ekpycmo1jw [ 20 ] ; _rtB -> lcdu52n30z [ 2 ] = _rtB -> ekpycmo1jw [
22 ] ; _rtB -> kb2dmz1ka0 [ 0 ] = _rtB -> ekpycmo1jw [ 19 ] ; _rtB ->
kb2dmz1ka0 [ 1 ] = _rtB -> ekpycmo1jw [ 21 ] ; _rtB -> kb2dmz1ka0 [ 2 ] =
_rtB -> ekpycmo1jw [ 23 ] ; ssCallAccelRunBlock ( S , 1 , 2 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> htqto51ysh [ 0 ] = _rtB -> a0gfpbbhlm [ 0 ] ;
_rtB -> htqto51ysh [ 1 ] = 0.0 ; _rtB -> htqto51ysh [ 2 ] = 0.0 ; _rtB ->
htqto51ysh [ 3 ] = 0.0 ; _rtB -> iy4svy0fjx [ 0 ] = _rtB -> a0gfpbbhlm [ 1 ]
; _rtB -> iy4svy0fjx [ 1 ] = 0.0 ; _rtB -> iy4svy0fjx [ 2 ] = 0.0 ; _rtB ->
iy4svy0fjx [ 3 ] = 0.0 ; _rtB -> agwvguque5 [ 0 ] = _rtB -> a0gfpbbhlm [ 2 ]
; _rtB -> agwvguque5 [ 1 ] = 0.0 ; _rtB -> agwvguque5 [ 2 ] = 0.0 ; _rtB ->
agwvguque5 [ 3 ] = 0.0 ; _rtB -> olj2diegie [ 0 ] = _rtB -> d2yspcj11m [ 0 ]
; _rtB -> olj2diegie [ 1 ] = 0.0 ; _rtB -> olj2diegie [ 2 ] = 0.0 ; _rtB ->
olj2diegie [ 3 ] = 0.0 ; _rtB -> l2l3hk2toc [ 0 ] = _rtB -> d2yspcj11m [ 1 ]
; _rtB -> l2l3hk2toc [ 1 ] = 0.0 ; _rtB -> l2l3hk2toc [ 2 ] = 0.0 ; _rtB ->
l2l3hk2toc [ 3 ] = 0.0 ; _rtB -> l4qoy43ita [ 0 ] = _rtB -> d2yspcj11m [ 2 ]
; _rtB -> l4qoy43ita [ 1 ] = 0.0 ; _rtB -> l4qoy43ita [ 2 ] = 0.0 ; _rtB ->
l4qoy43ita [ 3 ] = 0.0 ; _rtB -> cz4xhktc4a [ 0 ] = _rtB -> ekpycmo1jw [ 31 ]
; _rtB -> cz4xhktc4a [ 1 ] = _rtB -> ekpycmo1jw [ 33 ] ; _rtB -> cz4xhktc4a [
2 ] = _rtB -> ekpycmo1jw [ 35 ] ; _rtB -> ka51ank0yl [ 0 ] = _rtB ->
ekpycmo1jw [ 32 ] ; _rtB -> ka51ank0yl [ 1 ] = _rtB -> ekpycmo1jw [ 34 ] ;
_rtB -> ka51ank0yl [ 2 ] = _rtB -> ekpycmo1jw [ 36 ] ; ssCallAccelRunBlock (
S , 2 , 2 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> mm2igwf4yk [ 0 ] = _rtB ->
hwm03xayrc [ 0 ] ; _rtB -> mm2igwf4yk [ 1 ] = 0.0 ; _rtB -> mm2igwf4yk [ 2 ]
= 0.0 ; _rtB -> mm2igwf4yk [ 3 ] = 0.0 ; _rtB -> pxk0rx4jzx [ 0 ] = _rtB ->
hwm03xayrc [ 1 ] ; _rtB -> pxk0rx4jzx [ 1 ] = 0.0 ; _rtB -> pxk0rx4jzx [ 2 ]
= 0.0 ; _rtB -> pxk0rx4jzx [ 3 ] = 0.0 ; _rtB -> kncpyjzur3 [ 0 ] = _rtB ->
hwm03xayrc [ 2 ] ; _rtB -> kncpyjzur3 [ 1 ] = 0.0 ; _rtB -> kncpyjzur3 [ 2 ]
= 0.0 ; _rtB -> kncpyjzur3 [ 3 ] = 0.0 ; _rtB -> keqy2qjx2i [ 0 ] = _rtB ->
jxtbz0dy2v [ 0 ] ; _rtB -> keqy2qjx2i [ 1 ] = 0.0 ; _rtB -> keqy2qjx2i [ 2 ]
= 0.0 ; _rtB -> keqy2qjx2i [ 3 ] = 0.0 ; _rtB -> ek0cmdsnip [ 0 ] = _rtB ->
jxtbz0dy2v [ 1 ] ; _rtB -> ek0cmdsnip [ 1 ] = 0.0 ; _rtB -> ek0cmdsnip [ 2 ]
= 0.0 ; _rtB -> ek0cmdsnip [ 3 ] = 0.0 ; _rtB -> a2deylkfo1 [ 0 ] = _rtB ->
jxtbz0dy2v [ 2 ] ; _rtB -> a2deylkfo1 [ 1 ] = 0.0 ; _rtB -> a2deylkfo1 [ 2 ]
= 0.0 ; _rtB -> a2deylkfo1 [ 3 ] = 0.0 ; ssCallAccelRunBlock ( S , 3 , 57 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 3 , 58 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 3 , 59 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 3 , 60 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 3 , 61 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 3 , 62 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 3 , 63 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 3 , 64 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 3 , 65 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 3 , 66 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 3 , 67 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> oqlojpqdqt = _rtP -> P_22 * _rtB ->
lrk0wyqc1y ; _rtB -> hhkanj4a0v = _rtP -> P_23 * _rtB -> emqvpqxkta ;
ssCallAccelRunBlock ( S , 3 , 86 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 3 , 90 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 3 , 125 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 3 , 129 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 3 , 153 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 3 , 156 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 3 , 160 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 3 , 328 , SS_CALL_MDL_OUTPUTS ) ; UNUSED_PARAMETER
( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { real_T HoldSine ;
db1qyhnkjl * _rtB ; lyyt0pxois * _rtP ; b4vymrwfjr * _rtDW ; _rtDW = ( (
b4vymrwfjr * ) ssGetRootDWork ( S ) ) ; _rtP = ( ( lyyt0pxois * )
ssGetDefaultParam ( S ) ) ; _rtB = ( ( db1qyhnkjl * ) _ssGetBlockIO ( S ) ) ;
if ( ssIsSampleHit ( S , 2 , 0 ) ) { HoldSine = _rtDW -> bui11fpqhc ; _rtDW
-> bui11fpqhc = _rtDW -> bui11fpqhc * _rtP -> P_18 + _rtDW -> m33n3pbjwx *
_rtP -> P_17 ; _rtDW -> m33n3pbjwx = _rtDW -> m33n3pbjwx * _rtP -> P_18 -
HoldSine * _rtP -> P_17 ; } UNUSED_PARAMETER ( tid ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { db1qyhnkjl * _rtB ; lyyt0pxois
* _rtP ; kofd50oqiz * _rtX ; ep2azlzbni * _rtXdot ; _rtXdot = ( ( ep2azlzbni
* ) ssGetdX ( S ) ) ; _rtX = ( ( kofd50oqiz * ) ssGetContStates ( S ) ) ;
_rtP = ( ( lyyt0pxois * ) ssGetDefaultParam ( S ) ) ; _rtB = ( ( db1qyhnkjl *
) _ssGetBlockIO ( S ) ) ; _rtXdot -> oleka5vmsg [ 0 ] = _rtX -> oleka5vmsg [
1 ] ; _rtXdot -> oleka5vmsg [ 1 ] = ( ( _rtB -> mq3z5vyk1i [ 0 ] - _rtX ->
oleka5vmsg [ 0 ] ) * 1000.0 - 2.0 * _rtX -> oleka5vmsg [ 1 ] ) * 1000.0 ;
_rtXdot -> gmsmwr3cc0 [ 0 ] = _rtX -> gmsmwr3cc0 [ 1 ] ; _rtXdot ->
gmsmwr3cc0 [ 1 ] = ( ( _rtB -> mq3z5vyk1i [ 1 ] - _rtX -> gmsmwr3cc0 [ 0 ] )
* 1000.0 - 2.0 * _rtX -> gmsmwr3cc0 [ 1 ] ) * 1000.0 ; _rtXdot -> lvikcw4pct
[ 0 ] = _rtX -> lvikcw4pct [ 1 ] ; _rtXdot -> lvikcw4pct [ 1 ] = ( ( _rtB ->
mq3z5vyk1i [ 2 ] - _rtX -> lvikcw4pct [ 0 ] ) * 1000.0 - 2.0 * _rtX ->
lvikcw4pct [ 1 ] ) * 1000.0 ; _rtXdot -> p0asllibcr [ 0 ] = _rtX ->
p0asllibcr [ 1 ] ; _rtXdot -> p0asllibcr [ 1 ] = ( ( _rtB -> anfs0tstcc [ 0 ]
- _rtX -> p0asllibcr [ 0 ] ) * 1000.0 - 2.0 * _rtX -> p0asllibcr [ 1 ] ) *
1000.0 ; _rtXdot -> mrf5gvci5v [ 0 ] = _rtX -> mrf5gvci5v [ 1 ] ; _rtXdot ->
mrf5gvci5v [ 1 ] = ( ( _rtB -> anfs0tstcc [ 1 ] - _rtX -> mrf5gvci5v [ 0 ] )
* 1000.0 - 2.0 * _rtX -> mrf5gvci5v [ 1 ] ) * 1000.0 ; _rtXdot -> mbimce0fqa
[ 0 ] = _rtX -> mbimce0fqa [ 1 ] ; _rtXdot -> mbimce0fqa [ 1 ] = ( ( _rtB ->
anfs0tstcc [ 2 ] - _rtX -> mbimce0fqa [ 0 ] ) * 1000.0 - 2.0 * _rtX ->
mbimce0fqa [ 1 ] ) * 1000.0 ; ssCallAccelRunBlock ( S , 3 , 9 ,
SS_CALL_MDL_DERIVATIVES ) ; { ( ( ep2azlzbni * ) ssGetdX ( S ) ) ->
n3q0hefys4 = _rtB -> oqlojpqdqt ; } { ( ( ep2azlzbni * ) ssGetdX ( S ) ) ->
gigke2wig1 = _rtB -> lo245xpekb ; } _rtXdot -> f5zro03fnf [ 0 ] = _rtX ->
f5zro03fnf [ 1 ] ; _rtXdot -> f5zro03fnf [ 1 ] = ( ( _rtB -> myrm4cpxsp -
_rtX -> f5zro03fnf [ 0 ] ) * 1000.0 - 2.0 * _rtX -> f5zro03fnf [ 1 ] ) *
1000.0 ; { ( ( ep2azlzbni * ) ssGetdX ( S ) ) -> i4huqr2jqy = _rtB ->
hhkanj4a0v ; } { ( ( ep2azlzbni * ) ssGetdX ( S ) ) -> p1coydakrg = _rtB ->
h04tgp2mli ; } _rtXdot -> okqmbmuryh [ 0 ] = _rtX -> okqmbmuryh [ 1 ] ;
_rtXdot -> okqmbmuryh [ 1 ] = ( ( _rtB -> pxpz2kypjw - _rtX -> okqmbmuryh [ 0
] ) * 1000.0 - 2.0 * _rtX -> okqmbmuryh [ 1 ] ) * 1000.0 ; _rtXdot ->
dmckm0h0rt [ 0 ] = _rtX -> dmckm0h0rt [ 1 ] ; _rtXdot -> dmckm0h0rt [ 1 ] = (
( _rtB -> df3etekx3o - _rtX -> dmckm0h0rt [ 0 ] ) * 1000.0 - 2.0 * _rtX ->
dmckm0h0rt [ 1 ] ) * 1000.0 ; _rtXdot -> f02hzaguhy [ 0 ] = _rtX ->
f02hzaguhy [ 1 ] ; _rtXdot -> f02hzaguhy [ 1 ] = ( ( _rtB -> ni1jlior3s -
_rtX -> f02hzaguhy [ 0 ] ) * 10000.0 - 2.0 * _rtX -> f02hzaguhy [ 1 ] ) *
10000.0 ; }
#define MDL_PROJECTION
static void mdlProjection ( SimStruct * S ) { ssCallAccelRunBlock ( S , 3 , 9
, SS_CALL_MDL_PROJECTION ) ; }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { db1qyhnkjl * _rtB ;
lyyt0pxois * _rtP ; nwtgwbqkdd * _rtZCSV ; _rtZCSV = ( ( nwtgwbqkdd * )
ssGetSolverZcSignalVector ( S ) ) ; _rtP = ( ( lyyt0pxois * )
ssGetDefaultParam ( S ) ) ; _rtB = ( ( db1qyhnkjl * ) _ssGetBlockIO ( S ) ) ;
_rtZCSV -> p13iog4sc1 = _rtB -> h11hjiz33m - _rtP -> P_5 ; _rtZCSV ->
bishprcmq4 = _rtB -> h11hjiz33m - _rtP -> P_6 ; _rtZCSV -> in1bbox021 = _rtB
-> n4heicwoa5 - _rtP -> P_12 ; _rtZCSV -> k5wx4sxby4 = _rtB -> n4heicwoa5 -
_rtP -> P_13 ; } static void mdlInitializeSizes ( SimStruct * S ) {
ssSetChecksumVal ( S , 0 , 294479912U ) ; ssSetChecksumVal ( S , 1 ,
3760847270U ) ; ssSetChecksumVal ( S , 2 , 1581012472U ) ; ssSetChecksumVal (
S , 3 , 4252471466U ) ; { mxArray * slVerStructMat = NULL ; mxArray *
slStrMat = mxCreateString ( "simulink" ) ; char slVerChar [ 10 ] ; int status
= mexCallMATLAB ( 1 , & slVerStructMat , 1 , & slStrMat , "ver" ) ; if (
status == 0 ) { mxArray * slVerMat = mxGetField ( slVerStructMat , 0 ,
"Version" ) ; if ( slVerMat == NULL ) { status = 1 ; } else { status =
mxGetString ( slVerMat , slVerChar , 10 ) ; } } mxDestroyArray ( slStrMat ) ;
mxDestroyArray ( slVerStructMat ) ; if ( ( status == 1 ) || ( strcmp (
slVerChar , "8.5" ) != 0 ) ) { return ; } } ssSetOptions ( S ,
SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork ( S ) != sizeof (
b4vymrwfjr ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( db1qyhnkjl ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
lyyt0pxois ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetDefaultParam ( S , (
real_T * ) & ab10zq4gfv ) ; rt_InitInfAndNaN ( sizeof ( real_T ) ) ; } static
void mdlInitializeSampleTimes ( SimStruct * S ) { { SimStruct * childS ;
SysOutputFcn * callSysFcns ; childS = ssGetSFunction ( S , 0 ) ; callSysFcns
= ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 1 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; childS = ssGetSFunction ( S , 2 ) ; callSysFcns =
ssGetCallSystemOutputFcnList ( childS ) ; callSysFcns [ 3 + 0 ] = (
SysOutputFcn ) ( NULL ) ; } } static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
