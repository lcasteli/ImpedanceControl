#include "__cf_Walk_Sim4.h"
#ifndef RTW_HEADER_Walk_Sim4_h_
#define RTW_HEADER_Walk_Sim4_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef Walk_Sim4_COMMON_INCLUDES_
#define Walk_Sim4_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "Walk_Sim4_6bedce81_gateway.h"
#endif
#include "Walk_Sim4_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Walk_Sim4
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (66) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (57)   
#elif NCSTATES != 57
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T j5waylb1c5 [ 3 ] ; real_T l1lfivnqwc [ 3 ] ; real_T
ptbvgl0xdm [ 3 ] ; real_T amj0331tiy [ 3 ] ; } j0elubofmb ; typedef struct {
real_T i5pngojnqr [ 3 ] ; real_T jd3yc3sozl [ 4 ] ; real_T cpcxsiqkk2 [ 4 ] ;
real_T anyhha524k [ 4 ] ; real_T gcpbvidrnc [ 3 ] ; real_T avffaxkxts [ 4 ] ;
real_T lron4andxg [ 4 ] ; real_T aopnf0g0rt [ 4 ] ; real_T fff0lbkzmp [ 33 ]
; real_T mhcsmwu1e3 [ 65 ] ; real_T kbkny1y404 ; real_T h5j1pq2oet ; real_T
aigqxjxfq3 ; real_T evn4akd3fq ; real_T j5dq3zbm12 ; real_T avbvpd3knl ;
real_T kdtqmrecw1 ; real_T a4eplwnvip ; real_T hih35pqonz ; real_T a2a4hpyrz2
[ 4 ] ; real_T lji3oip3eh ; real_T hxu10aja3n ; real_T b0em5jvgbh ; real_T
ftzc33eq5a ; real_T g1qnevlihp ; real_T ptnjmn1blx ; real_T czawg3xijz ;
real_T ggozmdzmm5 ; real_T agaj15tfxi ; real_T giy1h5ky1s [ 4 ] ; real_T
gck1x5c55z [ 4 ] ; real_T lneeaq3ggn [ 4 ] ; real_T jzvmovor4f [ 4 ] ; real_T
ngt2nzthph [ 4 ] ; real_T oagxdgsciz [ 4 ] ; real_T byrhxyhu2y [ 4 ] ; real_T
izulu4xivv ; real_T iegxcysk54 [ 4 ] ; real_T bhfomtbk3s [ 4 ] ; real_T
gstkjtwy5v [ 4 ] ; real_T lmqf1lcrpl [ 4 ] ; real_T ig3bwkisun [ 4 ] ; real_T
nyjkrhoabu [ 4 ] ; real_T nskx41j5ik [ 4 ] ; real_T o31xe204ix [ 4 ] ; real_T
c11psdq1sa [ 4 ] ; real_T iejevtu2b2 [ 4 ] ; real_T nptbn3r2vs [ 4 ] ; real_T
piq3dxclaf [ 4 ] ; real_T ipue3gycmh [ 4 ] ; real_T ignnz2fkm0 [ 4 ] ; real_T
p0ja4kahop [ 14 ] ; real_T jvhlqsjoa5 ; real_T mxe1jfb20d ; real_T cufysxrud3
[ 3 ] ; real_T gu4box0to2 [ 3 ] ; real_T cbshgsh2c0 [ 3 ] ; real_T aaktuvfa1z
[ 3 ] ; j0elubofmb hvkcdvrvj3 ; j0elubofmb n1b4dgswxn ; } B ; typedef struct
{ real_T lz43hau3ig ; real_T gzrlfqcepc ; real_T fcwoczvcvk ; real_T
fmxt4x3vzi ; real_T ehes2w3gkx ; real_T b0jhzc35v0 ; real_T ovtgirnpkm ;
real_T flrsvcdg0r ; real_T m4y5z5rmyz [ 2 ] ; real_T lzspqinia5 [ 2 ] ;
real_T buw4n1rvum [ 2 ] ; real_T gpk4s0onyl [ 2 ] ; real_T icxehzbrhz [ 2 ] ;
real_T ig241xud5a [ 2 ] ; real_T ep3taliqrv ; real_T fgvya54ooh ; real_T
gda0flyxdj [ 2 ] ; real_T m53yfro10x [ 2 ] ; real_T dgj13ve15g [ 2 ] ; real_T
ahznleminz [ 2 ] ; real_T jlqgfyvlhr [ 2 ] ; real_T e5n0z3marz [ 2 ] ; real_T
iiohjssyew [ 2 ] ; real_T hikj0frbs2 [ 2 ] ; real_T hyzyueow4e [ 2 ] ; real_T
ipc5v31ie1 [ 2 ] ; real_T fntjzpwqp4 [ 2 ] ; real_T lrgvsubcfa [ 2 ] ; real_T
bui11fpqhc ; real_T m33n3pbjwx ; struct { void * TimePtr ; void * DataPtr ;
void * RSimInfoPtr ; } fafkv3xcrk ; struct { void * TimePtr ; void * DataPtr
; void * RSimInfoPtr ; } l1fwndj2zw ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } lpq22eshns ; void * f2pkiziunv ; void *
na53wmkywe ; void * jhdycf30bg ; void * a3s3xrrs52 ; void * hvgbbz5e1m ; void
* eu3uzx5cy5 ; void * fmfjt51fiu ; void * m55fft4qhd ; void * kldcjb511d ;
void * hplyuomj1a ; struct { void * TimePtr ; void * DataPtr ; void *
RSimInfoPtr ; } h2mcpex5lc ; void * k4xl5tajfk ; void * aiac20tcs1 ; void *
bqvpxns5ic ; void * inrngbrgzb ; void * eogf2nziqi ; struct { void *
LoggedData ; } dhy1gflovz ; struct { void * LoggedData ; } ioooez41vt ;
struct { void * LoggedData ; } g5fjljmrja ; struct { void * LoggedData ; }
fnpoyjv2kz ; struct { void * LoggedData ; } kyhpgfkqo4 ; struct { void *
LoggedData ; } hvfr1q1ras ; struct { void * LoggedData ; } dcawsmu0pp ;
struct { void * LoggedData ; } ejumgzbajg ; struct { void * LoggedData ; }
c2s4lwqau4 ; struct { void * LoggedData ; } mqwcoq30lo ; struct { void *
LoggedData ; } eqll2jpmri ; struct { void * LoggedData ; } dh3n5iflcj ;
struct { void * LoggedData ; } edkohxzpet ; struct { void * LoggedData ; }
hy3u52fqzo ; struct { void * LoggedData ; } kw05vumtwg ; struct { void *
LoggedData ; } ky34kodbzh ; struct { void * LoggedData ; } eo2mbxwqtp ; void
* c12ldaiyh0 ; void * krqurhqe5y ; void * nna3b5urvj ; void * iouz0hzzff ;
void * cyz32aqdti ; int32_T h4aljpv1cn ; struct { int_T PrevIndex ; }
aanf40bm32 ; struct { int_T PrevIndex ; } k0p41gumgr ; struct { int_T
PrevIndex ; } kqviwtyywd ; struct { int_T PrevIndex ; } f1homicqdz ; int_T
mmcrb4wiru ; int_T bschfredd1 ; boolean_T edx0zygcli ; boolean_T o3ajckmd2u ;
boolean_T cngerysgtf ; boolean_T epflee4abz ; } DW ; typedef struct { real_T
oleka5vmsg [ 2 ] ; real_T gmsmwr3cc0 [ 2 ] ; real_T lvikcw4pct [ 2 ] ; real_T
p0asllibcr [ 2 ] ; real_T mrf5gvci5v [ 2 ] ; real_T mbimce0fqa [ 2 ] ; real_T
dplrnvasdu [ 33 ] ; real_T n3q0hefys4 ; real_T gigke2wig1 ; real_T f5zro03fnf
[ 2 ] ; real_T i4huqr2jqy ; real_T p1coydakrg ; real_T okqmbmuryh [ 2 ] ;
real_T dmckm0h0rt [ 2 ] ; real_T f02hzaguhy [ 2 ] ; } X ; typedef struct {
real_T oleka5vmsg [ 2 ] ; real_T gmsmwr3cc0 [ 2 ] ; real_T lvikcw4pct [ 2 ] ;
real_T p0asllibcr [ 2 ] ; real_T mrf5gvci5v [ 2 ] ; real_T mbimce0fqa [ 2 ] ;
real_T dplrnvasdu [ 33 ] ; real_T n3q0hefys4 ; real_T gigke2wig1 ; real_T
f5zro03fnf [ 2 ] ; real_T i4huqr2jqy ; real_T p1coydakrg ; real_T okqmbmuryh
[ 2 ] ; real_T dmckm0h0rt [ 2 ] ; real_T f02hzaguhy [ 2 ] ; } XDot ; typedef
struct { boolean_T oleka5vmsg [ 2 ] ; boolean_T gmsmwr3cc0 [ 2 ] ; boolean_T
lvikcw4pct [ 2 ] ; boolean_T p0asllibcr [ 2 ] ; boolean_T mrf5gvci5v [ 2 ] ;
boolean_T mbimce0fqa [ 2 ] ; boolean_T dplrnvasdu [ 33 ] ; boolean_T
n3q0hefys4 ; boolean_T gigke2wig1 ; boolean_T f5zro03fnf [ 2 ] ; boolean_T
i4huqr2jqy ; boolean_T p1coydakrg ; boolean_T okqmbmuryh [ 2 ] ; boolean_T
dmckm0h0rt [ 2 ] ; boolean_T f02hzaguhy [ 2 ] ; } XDis ; typedef struct {
real_T oleka5vmsg [ 2 ] ; real_T gmsmwr3cc0 [ 2 ] ; real_T lvikcw4pct [ 2 ] ;
real_T p0asllibcr [ 2 ] ; real_T mrf5gvci5v [ 2 ] ; real_T mbimce0fqa [ 2 ] ;
real_T dplrnvasdu [ 33 ] ; real_T n3q0hefys4 ; real_T gigke2wig1 ; real_T
f5zro03fnf [ 2 ] ; real_T i4huqr2jqy ; real_T p1coydakrg ; real_T okqmbmuryh
[ 2 ] ; real_T dmckm0h0rt [ 2 ] ; real_T f02hzaguhy [ 2 ] ; } CStateAbsTol ;
typedef struct { real_T p13iog4sc1 ; real_T bishprcmq4 ; real_T in1bbox021 ;
real_T k5wx4sxby4 ; } ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct P_ { real_T FromWorkspace9_Time0 [ 378 ] ; real_T
FromWorkspace9_Data0 [ 378 ] ; real_T FromWorkspace2_Time0 [ 378 ] ; real_T
FromWorkspace2_Data0 [ 1134 ] ; real_T FromWorkspace_Time0 [ 378 ] ; real_T
FromWorkspace_Data0 [ 1134 ] ; real_T ProportionalGain_Gain ; real_T
Integrator_IC ; real_T DerivativeGain_Gain ; real_T Filter_IC ; real_T
FilterCoefficient_Gain ; real_T Saturate_UpperSat ; real_T Saturate_LowerSat
; real_T FromWorkspace1_Time0 [ 378 ] ; real_T FromWorkspace1_Data0 [ 378 ] ;
real_T ProportionalGain_Gain_oxrlybfiwz ; real_T Integrator_IC_b2h4rjcnp4 ;
real_T DerivativeGain_Gain_hb0xklitus ; real_T Filter_IC_ip1faalzbr ; real_T
FilterCoefficient_Gain_loae5b3qga ; real_T Saturate_UpperSat_fewg3kv1xw ;
real_T Saturate_LowerSat_l0zqlb52y1 ; real_T SineWave4_Amp ; real_T
SineWave4_Bias ; real_T SineWave4_Freq ; real_T SineWave4_Hsin ; real_T
SineWave4_HCos ; real_T SineWave4_PSin ; real_T SineWave4_PCos ; real_T
Constant3_Value ; real_T IntegralGain_Gain ; real_T
IntegralGain_Gain_jydit0z4zb ; } ; extern P rtP ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern const rtwCAPI_ModelMappingStaticInfo * Walk_Sim4_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ;
extern const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern const
int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
extern const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [
] ; extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T
tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
