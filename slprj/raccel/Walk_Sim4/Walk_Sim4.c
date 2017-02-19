#include "__cf_Walk_Sim4.h"
#include "rt_logging_mmi.h"
#include "Walk_Sim4_capi.h"
#include <math.h>
#include "Walk_Sim4.h"
#include "Walk_Sim4_private.h"
#include "Walk_Sim4_dt.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 4 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "8.8 (R2015a) 09-Feb-2015" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\Walk_Sim4\\Walk_Sim4_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [
] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
void MdlOutputsParameterSampleTime ( int_T tid ) { UNUSED_PARAMETER ( tid ) ;
} B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS
= & model_S ; static void ezlkw42xil ( const real_T a [ 8 ] , real_T b [ 24 ]
) ; static void igi4ynpft5 ( const real_T x [ 24 ] , real_T y [ 3 ] ) ;
static void pwkn3bhcpa ( const real_T a [ 8 ] , real_T b [ 24 ] ) ; static
void b4edgxtqfu ( const real_T x [ 24 ] , real_T y [ 3 ] ) ; static void
ezlkw42xil ( const real_T a [ 8 ] , real_T b [ 24 ] ) { int32_T ibmat ;
int32_T jcol ; for ( jcol = 0 ; jcol < 8 ; jcol ++ ) { ibmat = jcol * 3 ; b [
ibmat ] = a [ jcol ] ; b [ ibmat + 1 ] = a [ jcol ] ; b [ ibmat + 2 ] = a [
jcol ] ; } } static void igi4ynpft5 ( const real_T x [ 24 ] , real_T y [ 3 ]
) { int32_T ix ; int32_T iy ; int32_T ixstart ; real_T s ; int32_T j ;
int32_T k ; iy = - 1 ; ixstart = - 1 ; for ( j = 0 ; j < 3 ; j ++ ) { ixstart
++ ; ix = ixstart ; s = x [ ixstart ] ; for ( k = 0 ; k < 7 ; k ++ ) { ix +=
3 ; s += x [ ix ] ; } iy ++ ; y [ iy ] = s ; } } void k2305amnw5 ( real_T
lcfjivz1c3 , real_T obrnuaktpy , real_T hfvnomsr0n , real_T n0sjaaflwo ,
real_T ezucnwi4jd , real_T ladmx20aqb , const real_T dmtomiymgm [ 4 ] , const
real_T paplltdte2 [ 3 ] , j0elubofmb * localB ) { real_T R [ 9 ] ; real_T rr
[ 24 ] ; real_T vv [ 24 ] ; real_T FF [ 24 ] ; real_T loss [ 8 ] ; int32_T ak
; int32_T ck ; real_T c [ 24 ] ; static const real_T b [ 24 ] = { 0.1 , 0.05
, 0.0 , 0.1 , 0.05 , - 0.0 , 0.1 , - 0.05 , 0.0 , 0.1 , - 0.05 , - 0.0 , -
0.1 , 0.05 , 0.0 , - 0.1 , 0.05 , - 0.0 , - 0.1 , - 0.05 , 0.0 , - 0.1 , -
0.05 , - 0.0 } ; static const int32_T a [ 9 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , - 200000 } ; static const int16_T b_a [ 9 ] = { 2000 , 0 , 0 , 0 , 2000 ,
0 , 0 , 0 , 2000 } ; real_T a_p [ 24 ] ; real_T loss_p ; localB -> j5waylb1c5
[ 0 ] = lcfjivz1c3 ; localB -> j5waylb1c5 [ 1 ] = obrnuaktpy ; localB ->
j5waylb1c5 [ 2 ] = hfvnomsr0n ; localB -> l1lfivnqwc [ 0 ] = n0sjaaflwo ;
localB -> l1lfivnqwc [ 1 ] = ezucnwi4jd ; localB -> l1lfivnqwc [ 2 ] =
ladmx20aqb ; if ( muDoubleScalarAbs ( localB -> j5waylb1c5 [ 0 ] ) <= 1.475 )
{ R [ 0 ] = ( 1.0 - dmtomiymgm [ 2 ] * dmtomiymgm [ 2 ] * 2.0 ) - dmtomiymgm
[ 3 ] * dmtomiymgm [ 3 ] * 2.0 ; R [ 3 ] = 2.0 * dmtomiymgm [ 1 ] *
dmtomiymgm [ 2 ] - 2.0 * dmtomiymgm [ 3 ] * dmtomiymgm [ 0 ] ; R [ 6 ] = 2.0
* dmtomiymgm [ 1 ] * dmtomiymgm [ 3 ] + 2.0 * dmtomiymgm [ 2 ] * dmtomiymgm [
0 ] ; R [ 1 ] = 2.0 * dmtomiymgm [ 1 ] * dmtomiymgm [ 2 ] + 2.0 * dmtomiymgm
[ 3 ] * dmtomiymgm [ 0 ] ; R [ 4 ] = ( 1.0 - dmtomiymgm [ 1 ] * dmtomiymgm [
1 ] * 2.0 ) - dmtomiymgm [ 3 ] * dmtomiymgm [ 3 ] * 2.0 ; R [ 7 ] = 2.0 *
dmtomiymgm [ 2 ] * dmtomiymgm [ 3 ] - 2.0 * dmtomiymgm [ 1 ] * dmtomiymgm [ 0
] ; R [ 2 ] = 2.0 * dmtomiymgm [ 1 ] * dmtomiymgm [ 3 ] - 2.0 * dmtomiymgm [
2 ] * dmtomiymgm [ 0 ] ; R [ 5 ] = 2.0 * dmtomiymgm [ 2 ] * dmtomiymgm [ 3 ]
+ 2.0 * dmtomiymgm [ 1 ] * dmtomiymgm [ 0 ] ; R [ 8 ] = ( 1.0 - dmtomiymgm [
1 ] * dmtomiymgm [ 1 ] * 2.0 ) - dmtomiymgm [ 2 ] * dmtomiymgm [ 2 ] * 2.0 ;
for ( ck = 0 ; ck < 3 ; ck ++ ) { for ( ak = 0 ; ak < 8 ; ak ++ ) { vv [ ck +
3 * ak ] = 0.0 ; vv [ ck + 3 * ak ] += b [ 3 * ak ] * R [ ck ] ; vv [ ck + 3
* ak ] += b [ 3 * ak + 1 ] * R [ ck + 3 ] ; vv [ ck + 3 * ak ] += b [ 3 * ak
+ 2 ] * R [ ck + 6 ] ; } } ak = 0 ; for ( ck = 0 ; ck <= 22 ; ck += 3 ) { rr
[ ck ] = vv [ ak ] + localB -> j5waylb1c5 [ 0 ] ; rr [ ck + 1 ] = vv [ ak + 1
] + localB -> j5waylb1c5 [ 1 ] ; rr [ ck + 2 ] = vv [ ak + 2 ] + localB ->
j5waylb1c5 [ 2 ] ; ak += 3 ; } for ( ck = 0 ; ck < 3 ; ck ++ ) { for ( ak = 0
; ak < 8 ; ak ++ ) { vv [ ck + 3 * ak ] = 0.0 ; vv [ ck + 3 * ak ] += b [ 3 *
ak ] * R [ ck ] ; vv [ ck + 3 * ak ] += b [ 3 * ak + 1 ] * R [ ck + 3 ] ; vv
[ ck + 3 * ak ] += b [ 3 * ak + 2 ] * R [ ck + 6 ] ; } } ak = 0 ; for ( ck =
0 ; ck <= 22 ; ck += 3 ) { c [ ck ] = vv [ ak + 2 ] * paplltdte2 [ 1 ] - vv [
ak + 1 ] * paplltdte2 [ 2 ] ; c [ ck + 1 ] = paplltdte2 [ 2 ] * vv [ ak ] -
vv [ ak + 2 ] * paplltdte2 [ 0 ] ; c [ ck + 2 ] = vv [ ak + 1 ] * paplltdte2
[ 0 ] - paplltdte2 [ 1 ] * vv [ ak ] ; ak += 3 ; } ak = 0 ; for ( ck = 0 ; ck
<= 22 ; ck += 3 ) { vv [ ck ] = localB -> l1lfivnqwc [ 0 ] + c [ ak ] ; vv [
ck + 1 ] = c [ ak + 1 ] + localB -> l1lfivnqwc [ 1 ] ; vv [ ck + 2 ] = c [ ak
+ 2 ] + localB -> l1lfivnqwc [ 2 ] ; ak += 3 ; } for ( ck = 0 ; ck < 3 ; ck
++ ) { for ( ak = 0 ; ak < 8 ; ak ++ ) { a_p [ ck + 3 * ak ] = 0.0 ; a_p [ ck
+ 3 * ak ] += rr [ 3 * ak ] * - 0.0 ; a_p [ ck + 3 * ak ] += rr [ 3 * ak + 1
] * - 0.0 ; a_p [ ck + 3 * ak ] += rr [ 3 * ak + 2 ] * ( real_T ) a [ ck + 6
] ; } } for ( ck = 0 ; ck < 3 ; ck ++ ) { for ( ak = 0 ; ak < 8 ; ak ++ ) {
rr [ ck + 3 * ak ] = 0.0 ; rr [ ck + 3 * ak ] += vv [ 3 * ak ] * ( real_T )
b_a [ ck ] ; rr [ ck + 3 * ak ] += vv [ 3 * ak + 1 ] * ( real_T ) b_a [ ck +
3 ] ; rr [ ck + 3 * ak ] += vv [ 3 * ak + 2 ] * ( real_T ) b_a [ ck + 6 ] ; }
} for ( ck = 0 ; ck < 8 ; ck ++ ) { FF [ 3 * ck ] = a_p [ 3 * ck ] - rr [ 3 *
ck ] ; FF [ 1 + 3 * ck ] = a_p [ 3 * ck + 1 ] - rr [ 3 * ck + 1 ] ; FF [ 2 +
3 * ck ] = a_p [ 3 * ck + 2 ] - rr [ 3 * ck + 2 ] ; } for ( ck = 0 ; ck < 8 ;
ck ++ ) { loss_p = muDoubleScalarExp ( - FF [ 3 * ck + 2 ] + ( FF [ 3 * ck +
1 ] * - 0.0 + FF [ 3 * ck ] * - 0.0 ) ) ; loss_p = 1.0 / ( 1.0 + loss_p ) ;
loss [ ck ] = loss_p ; } ezlkw42xil ( loss , rr ) ; for ( ck = 0 ; ck < 24 ;
ck ++ ) { a_p [ ck ] = rr [ ck ] * FF [ ck ] ; } igi4ynpft5 ( a_p , localB ->
ptbvgl0xdm ) ; for ( ck = 0 ; ck < 3 ; ck ++ ) { for ( ak = 0 ; ak < 8 ; ak
++ ) { vv [ ck + 3 * ak ] = 0.0 ; vv [ ck + 3 * ak ] += b [ 3 * ak ] * R [ ck
] ; vv [ ck + 3 * ak ] += b [ 3 * ak + 1 ] * R [ ck + 3 ] ; vv [ ck + 3 * ak
] += b [ 3 * ak + 2 ] * R [ ck + 6 ] ; } } for ( ck = 0 ; ck <= 22 ; ck += 3
) { for ( ak = ck ; ak + 1 <= ck + 1 ; ak ++ ) { c [ ak ] = vv [ ak + 1 ] *
FF [ ak + 2 ] - vv [ ak + 2 ] * FF [ ak + 1 ] ; c [ ak + 1 ] = vv [ ak + 2 ]
* FF [ ak ] - FF [ ak + 2 ] * vv [ ak ] ; c [ ak + 2 ] = FF [ ak + 1 ] * vv [
ak ] - vv [ ak + 1 ] * FF [ ak ] ; } } ezlkw42xil ( loss , rr ) ; for ( ck =
0 ; ck < 24 ; ck ++ ) { a_p [ ck ] = rr [ ck ] * c [ ck ] ; } igi4ynpft5 (
a_p , localB -> amj0331tiy ) ; } else { localB -> ptbvgl0xdm [ 0 ] = 0.0 ;
localB -> ptbvgl0xdm [ 1 ] = 0.0 ; localB -> ptbvgl0xdm [ 2 ] = 0.0 ; localB
-> amj0331tiy [ 0 ] = 0.0 ; localB -> amj0331tiy [ 1 ] = 0.0 ; localB ->
amj0331tiy [ 2 ] = 0.0 ; } } static void pwkn3bhcpa ( const real_T a [ 8 ] ,
real_T b [ 24 ] ) { int32_T ibmat ; int32_T jcol ; for ( jcol = 0 ; jcol < 8
; jcol ++ ) { ibmat = jcol * 3 ; b [ ibmat ] = a [ jcol ] ; b [ ibmat + 1 ] =
a [ jcol ] ; b [ ibmat + 2 ] = a [ jcol ] ; } } static void b4edgxtqfu (
const real_T x [ 24 ] , real_T y [ 3 ] ) { int32_T ix ; int32_T iy ; int32_T
ixstart ; real_T s ; int32_T j ; int32_T k ; iy = - 1 ; ixstart = - 1 ; for (
j = 0 ; j < 3 ; j ++ ) { ixstart ++ ; ix = ixstart ; s = x [ ixstart ] ; for
( k = 0 ; k < 7 ; k ++ ) { ix += 3 ; s += x [ ix ] ; } iy ++ ; y [ iy ] = s ;
} } void MdlInitialize ( void ) { boolean_T tmp ; int_T tmp_p ; char * tmp_e
; tmp = false ; if ( tmp ) { tmp_p = strcmp ( "ode15s" , ssGetSolverName (
rtS ) ) ; if ( tmp_p != 0 ) { tmp_e = solver_mismatch_message ( "ode15s" ,
ssGetSolverName ( rtS ) ) ; ssSetErrorStatus ( rtS , tmp_e ) ; } } rtX .
n3q0hefys4 = rtP . Integrator_IC ; rtX . gigke2wig1 = rtP . Filter_IC ; rtX .
i4huqr2jqy = rtP . Integrator_IC_b2h4rjcnp4 ; rtX . p1coydakrg = rtP .
Filter_IC_ip1faalzbr ; } void MdlEnable ( void ) { rtDW . h4aljpv1cn = 1 ; }
void MdlStart ( void ) { NeuDiagnosticManager * diagnosticManager ; real_T
modelParameters_mSolverTolerance ; real_T modelParameters_mFixedStepSize ;
boolean_T modelParameters_mVariableStepSolver ; NeslSimulator * simulator ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp ; char * msg ;
NeslSimulationData * simulationData ; real_T time ; real_T time_p ; real_T
time_e ; NeModelParameters expl_temp ; NeModelParameters expl_temp_p ;
NeModelParameters expl_temp_e ; { FWksInfo * fromwksInfo ; if ( ( fromwksInfo
= ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) {
ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "ankle_angle_ie" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace9_Data0 ; fromwksInfo -> nDataPoints
= 378 ; fromwksInfo -> time = ( double * ) rtP . FromWorkspace9_Time0 ; rtDW
. fafkv3xcrk . TimePtr = fromwksInfo -> time ; rtDW . fafkv3xcrk . DataPtr =
fromwksInfo -> data ; rtDW . fafkv3xcrk . RSimInfoPtr = fromwksInfo ; } rtDW
. aanf40bm32 . PrevIndex = 0 ; } { FWksInfo * fromwksInfo ; if ( (
fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL )
) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "shin_angles" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 3 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace2_Data0 ; fromwksInfo -> nDataPoints
= 378 ; fromwksInfo -> time = ( double * ) rtP . FromWorkspace2_Time0 ; rtDW
. l1fwndj2zw . TimePtr = fromwksInfo -> time ; rtDW . l1fwndj2zw . DataPtr =
fromwksInfo -> data ; rtDW . l1fwndj2zw . RSimInfoPtr = fromwksInfo ; } rtDW
. k0p41gumgr . PrevIndex = 0 ; } { FWksInfo * fromwksInfo ; if ( (
fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL )
) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "ankle_trans_in" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 3 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace_Data0 ; fromwksInfo -> nDataPoints =
378 ; fromwksInfo -> time = ( double * ) rtP . FromWorkspace_Time0 ; rtDW .
lpq22eshns . TimePtr = fromwksInfo -> time ; rtDW . lpq22eshns . DataPtr =
fromwksInfo -> data ; rtDW . lpq22eshns . RSimInfoPtr = fromwksInfo ; } rtDW
. kqviwtyywd . PrevIndex = 0 ; } simulator = nesl_lease_simulator (
"Walk_Sim4/Gait Emulator/Solver Configuration" , 0 , 0 ) ; rtDW . f2pkiziunv
= ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . f2pkiziunv ) ; if (
modelParameters_mVariableStepSolver ) { Walk_Sim4_6bedce81_gateway ( ) ;
simulator = nesl_lease_simulator (
"Walk_Sim4/Gait Emulator/Solver Configuration" , 0 , 0 ) ; rtDW . f2pkiziunv
= ( void * ) simulator ; } simulationData = nesl_create_simulation_data ( ) ;
rtDW . na53wmkywe = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . jhdycf30bg = ( void * ) diagnosticManager
; modelParameters_mSolverTolerance = 0.001 ; modelParameters_mFixedStepSize =
0.0 ; modelParameters_mVariableStepSolver = true ; simulator = (
NeslSimulator * ) rtDW . f2pkiziunv ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . jhdycf30bg ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; expl_temp .
mVariableStepSolver = modelParameters_mVariableStepSolver ; expl_temp .
mUseSimState = false ; expl_temp . mStartTime = 0.0 ; expl_temp . mSolverType
= NE_SOLVER_TYPE_DAE ; expl_temp . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp . mLoadInitialState = false ; expl_temp .
mLinTrimCompile = false ; expl_temp . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp , diagnosticManager ) ; if ( tmp != 0 ) {
modelParameters_mVariableStepSolver = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( modelParameters_mVariableStepSolver ) { msg
= rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; }
} simulationData = ( NeslSimulationData * ) rtDW . na53wmkywe ; time = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 33 ;
simulationData -> mData -> mContStates . mX = ( real_T * ) & rtX . dplrnvasdu
; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = NULL ; simulationData -> mData -> mModeVector . mN = 0
; simulationData -> mData -> mModeVector . mX = NULL ;
modelParameters_mVariableStepSolver = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = modelParameters_mVariableStepSolver ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
modelParameters_mVariableStepSolver = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ;
modelParameters_mVariableStepSolver = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = modelParameters_mVariableStepSolver ; simulator =
( NeslSimulator * ) rtDW . f2pkiziunv ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . jhdycf30bg ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp =
ne_simulator_method ( simulator , NESL_SIM_INITIALIZEONCE , simulationData ,
diagnosticManager ) ; if ( tmp != 0 ) { modelParameters_mVariableStepSolver =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
modelParameters_mVariableStepSolver ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulator =
nesl_lease_simulator ( "Walk_Sim4/Gait Emulator/Solver Configuration" , 2 , 0
) ; rtDW . eu3uzx5cy5 = ( void * ) simulator ;
modelParameters_mVariableStepSolver = pointer_is_null ( rtDW . eu3uzx5cy5 ) ;
if ( modelParameters_mVariableStepSolver ) { Walk_Sim4_6bedce81_gateway ( ) ;
simulator = nesl_lease_simulator (
"Walk_Sim4/Gait Emulator/Solver Configuration" , 2 , 0 ) ; rtDW . eu3uzx5cy5
= ( void * ) simulator ; } simulationData = nesl_create_simulation_data ( ) ;
rtDW . fmfjt51fiu = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . m55fft4qhd = ( void * ) diagnosticManager
; modelParameters_mSolverTolerance = 0.001 ; modelParameters_mFixedStepSize =
0.0 ; modelParameters_mVariableStepSolver = true ; simulator = (
NeslSimulator * ) rtDW . eu3uzx5cy5 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . m55fft4qhd ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; expl_temp_p .
mVariableStepSolver = modelParameters_mVariableStepSolver ; expl_temp_p .
mUseSimState = false ; expl_temp_p . mStartTime = 0.0 ; expl_temp_p .
mSolverType = NE_SOLVER_TYPE_DAE ; expl_temp_p . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_p . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_p . mLoadInitialState = false ; expl_temp_p .
mLinTrimCompile = false ; expl_temp_p . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_p , diagnosticManager ) ; if ( tmp != 0 ) {
modelParameters_mVariableStepSolver = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( modelParameters_mVariableStepSolver ) { msg
= rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; }
} simulationData = ( NeslSimulationData * ) rtDW . fmfjt51fiu ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 0 ; simulationData -> mData -> mContStates . mX = NULL ; simulationData
-> mData -> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates .
mX = NULL ; simulationData -> mData -> mModeVector . mN = 0 ; simulationData
-> mData -> mModeVector . mX = NULL ; modelParameters_mVariableStepSolver = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents =
modelParameters_mVariableStepSolver ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
modelParameters_mVariableStepSolver = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ; simulationData
-> mData -> mIsComputingJacobian = false ;
modelParameters_mVariableStepSolver = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset =
modelParameters_mVariableStepSolver ; simulator = ( NeslSimulator * ) rtDW .
eu3uzx5cy5 ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . m55fft4qhd
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp !=
0 ) { modelParameters_mVariableStepSolver = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( modelParameters_mVariableStepSolver ) { msg
= rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; }
} { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "ankle_angle_dp" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo
-> data = ( void * ) rtP . FromWorkspace1_Data0 ; fromwksInfo -> nDataPoints
= 378 ; fromwksInfo -> time = ( double * ) rtP . FromWorkspace1_Time0 ; rtDW
. h2mcpex5lc . TimePtr = fromwksInfo -> time ; rtDW . h2mcpex5lc . DataPtr =
fromwksInfo -> data ; rtDW . h2mcpex5lc . RSimInfoPtr = fromwksInfo ; } rtDW
. f1homicqdz . PrevIndex = 0 ; } simulator = nesl_lease_simulator (
"Walk_Sim4/Gait Emulator/Solver Configuration" , 2 , 1 ) ; rtDW . k4xl5tajfk
= ( void * ) simulator ; modelParameters_mVariableStepSolver =
pointer_is_null ( rtDW . k4xl5tajfk ) ; if (
modelParameters_mVariableStepSolver ) { Walk_Sim4_6bedce81_gateway ( ) ;
simulator = nesl_lease_simulator (
"Walk_Sim4/Gait Emulator/Solver Configuration" , 2 , 1 ) ; rtDW . k4xl5tajfk
= ( void * ) simulator ; } simulationData = nesl_create_simulation_data ( ) ;
rtDW . aiac20tcs1 = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . bqvpxns5ic = ( void * ) diagnosticManager
; modelParameters_mSolverTolerance = 0.001 ; modelParameters_mFixedStepSize =
0.0 ; modelParameters_mVariableStepSolver = true ; simulator = (
NeslSimulator * ) rtDW . k4xl5tajfk ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . bqvpxns5ic ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; expl_temp_e .
mVariableStepSolver = modelParameters_mVariableStepSolver ; expl_temp_e .
mUseSimState = false ; expl_temp_e . mStartTime = 0.0 ; expl_temp_e .
mSolverType = NE_SOLVER_TYPE_DAE ; expl_temp_e . mSolverTolerance =
modelParameters_mSolverTolerance ; expl_temp_e . mLoggingMode =
SSC_LOGGING_NONE ; expl_temp_e . mLoadInitialState = false ; expl_temp_e .
mLinTrimCompile = false ; expl_temp_e . mFixedStepSize =
modelParameters_mFixedStepSize ; tmp = nesl_initialize_simulator ( simulator
, expl_temp_e , diagnosticManager ) ; if ( tmp != 0 ) {
modelParameters_mVariableStepSolver = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( modelParameters_mVariableStepSolver ) { msg
= rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; }
} simulationData = ( NeslSimulationData * ) rtDW . aiac20tcs1 ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 0 ; simulationData -> mData -> mContStates . mX = NULL ; simulationData
-> mData -> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates .
mX = NULL ; simulationData -> mData -> mModeVector . mN = 0 ; simulationData
-> mData -> mModeVector . mX = NULL ; modelParameters_mVariableStepSolver = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents =
modelParameters_mVariableStepSolver ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
modelParameters_mVariableStepSolver = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
modelParameters_mVariableStepSolver ; modelParameters_mVariableStepSolver =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = modelParameters_mVariableStepSolver ; simulationData
-> mData -> mIsComputingJacobian = false ;
modelParameters_mVariableStepSolver = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset =
modelParameters_mVariableStepSolver ; simulator = ( NeslSimulator * ) rtDW .
k4xl5tajfk ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . bqvpxns5ic
; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp = ne_simulator_method ( simulator ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp !=
0 ) { modelParameters_mVariableStepSolver = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( modelParameters_mVariableStepSolver ) { msg
= rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; }
} { static int_T rt_ToWksWidths [ ] = { 3 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = { 3
} ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static const char_T * rt_ToWksLabels [ ] = {
"" } ; static RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) ,
( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ;
static const char_T rt_ToWksBlockName [ ] = "Walk_Sim4/To Workspace" ; rtDW .
dhy1gflovz . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "torque_ie" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo ,
rt_ToWksBlockName ) ; if ( rtDW . dhy1gflovz . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 3 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = { 3
} ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static const char_T * rt_ToWksLabels [ ] = {
"" } ; static RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) ,
( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ;
static const char_T rt_ToWksBlockName [ ] = "Walk_Sim4/To Workspace1" ; rtDW
. ioooez41vt . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "torque_dp" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo ,
rt_ToWksBlockName ) ; if ( rtDW . ioooez41vt . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 1 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = { 1
} ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static const char_T * rt_ToWksLabels [ ] = {
"" } ; static RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) ,
( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ;
static const char_T rt_ToWksBlockName [ ] = "Walk_Sim4/To Workspace2" ; rtDW
. g5fjljmrja . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "angle_ie_out" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo ,
rt_ToWksBlockName ) ; if ( rtDW . g5fjljmrja . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 1 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = { 1
} ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static const char_T * rt_ToWksLabels [ ] = {
"" } ; static RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) ,
( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ;
static const char_T rt_ToWksBlockName [ ] = "Walk_Sim4/To Workspace3" ; rtDW
. fnpoyjv2kz . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "angle_dp_out" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo ,
rt_ToWksBlockName ) ; if ( rtDW . fnpoyjv2kz . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 3 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = { 3
} ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static const char_T * rt_ToWksLabels [ ] = {
"" } ; static RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) ,
( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ;
static const char_T rt_ToWksBlockName [ ] = "Walk_Sim4/To Workspace4" ; rtDW
. kyhpgfkqo4 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "fp_force_out" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo ,
rt_ToWksBlockName ) ; if ( rtDW . kyhpgfkqo4 . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 3 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = { 3
} ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static const char_T * rt_ToWksLabels [ ] = {
"" } ; static RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) ,
( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ;
static const char_T rt_ToWksBlockName [ ] = "Walk_Sim4/To Workspace5" ; rtDW
. hvfr1q1ras . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "fp_torque_out" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo ,
rt_ToWksBlockName ) ; if ( rtDW . hvfr1q1ras . LoggedData == ( NULL ) )
return ; } { static int_T rt_ToWksWidths [ ] = { 1 } ; static int_T
rt_ToWksNumDimensions [ ] = { 1 } ; static int_T rt_ToWksDimensions [ ] = { 1
} ; static boolean_T rt_ToWksIsVarDims [ ] = { 0 } ; static void *
rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize
[ ] = { 4 } ; static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ;
static int_T rt_ToWksComplexSignals [ ] = { 0 } ; static int_T
rt_ToWksFrameData [ ] = { 0 } ; static const char_T * rt_ToWksLabels [ ] = {
"" } ; static RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) ,
( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ;
static const char_T rt_ToWksBlockName [ ] = "Walk_Sim4/To Workspace6" ; rtDW
. dcawsmu0pp . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "acc_ie" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo , rt_ToWksBlockName )
; if ( rtDW . dcawsmu0pp . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 1 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ;
static int_T rt_ToWksDimensions [ ] = { 1 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) ,
( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ;
static const char_T rt_ToWksBlockName [ ] = "Walk_Sim4/To Workspace7" ; rtDW
. ejumgzbajg . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "vel_ie" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo , rt_ToWksBlockName )
; if ( rtDW . ejumgzbajg . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 1 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ;
static int_T rt_ToWksDimensions [ ] = { 1 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) ,
( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ;
static const char_T rt_ToWksBlockName [ ] = "Walk_Sim4/To Workspace8" ; rtDW
. c2s4lwqau4 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "acc_dp" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo , rt_ToWksBlockName )
; if ( rtDW . c2s4lwqau4 . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 1 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ;
static int_T rt_ToWksDimensions [ ] = { 1 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) ,
( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ;
static const char_T rt_ToWksBlockName [ ] = "Walk_Sim4/To Workspace9" ; rtDW
. mqwcoq30lo . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "vel_dp" , 1 , 0 , 1 , 0.0 , & rt_ToWksSignalInfo , rt_ToWksBlockName )
; if ( rtDW . mqwcoq30lo . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 3 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ;
static int_T rt_ToWksDimensions [ ] = { 3 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) ,
( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ;
static const char_T rt_ToWksBlockName [ ] =
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/simple_shin_1_RIGID/To Workspace2"
; rtDW . eqll2jpmri . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "trans_shin" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . eqll2jpmri .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 4 }
; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 4 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0
} ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static const
char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) , ( NULL ) , ( NULL ) , { (
NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static const char_T
rt_ToWksBlockName [ ] =
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/simple_shin_1_RIGID/To Workspace1"
; rtDW . dh3n5iflcj . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "quat_shin" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . dh3n5iflcj .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 3 }
; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 3 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0
} ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static const
char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) , ( NULL ) , ( NULL ) , { (
NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static const char_T
rt_ToWksBlockName [ ] =
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/foot_1_RIGID/To Workspace2"
; rtDW . edkohxzpet . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "trans_foot" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . edkohxzpet .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 4 }
; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 4 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0
} ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static const
char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) , ( NULL ) , ( NULL ) , { (
NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static const char_T
rt_ToWksBlockName [ ] =
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/foot_1_RIGID/To Workspace1"
; rtDW . hy3u52fqzo . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "quat_foot" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . hy3u52fqzo .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 3 }
; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 3 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0
} ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static const
char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) , ( NULL ) , ( NULL ) , { (
NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static const char_T
rt_ToWksBlockName [ ] =
 "Walk_Sim4/Gait Emulator/Walkway & force plate/Force Plate/Plate_1_RIGID/To Workspace2"
; rtDW . ky34kodbzh . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "trans_fp" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . ky34kodbzh .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 4 }
; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 4 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0
} ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static const
char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) , ( NULL ) , ( NULL ) , { (
NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static const char_T
rt_ToWksBlockName [ ] =
 "Walk_Sim4/Gait Emulator/Walkway & force plate/Force Plate/Plate_1_RIGID/To Workspace1"
; rtDW . eo2mbxwqtp . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "quat_fp" , 1 , 0 , 1 , 0.0 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . eo2mbxwqtp .
LoggedData == ( NULL ) ) return ; } MdlInitialize ( ) ; MdlEnable ( ) ; }
void MdlOutputs ( int_T tid ) { real_T c3nzpmmequ ; boolean_T first_output ;
NeslSimulationData * simulationData ; real_T time ; real_T tmp [ 112 ] ;
int_T tmp_p [ 29 ] ; NeslSimulator * simulator ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
time_p ; real_T tmp_e [ 145 ] ; int_T tmp_i [ 30 ] ; real_T time_e ; real_T
tmp_m [ 145 ] ; int_T tmp_g [ 30 ] ; real_T R [ 9 ] ; real_T rr [ 24 ] ;
real_T vv [ 24 ] ; real_T FF [ 24 ] ; real_T loss [ 8 ] ; int32_T ak ; real_T
c [ 24 ] ; int32_T j_k ; static const real_T b [ 24 ] = { 0.1 , 0.05 , 0.0 ,
0.1 , 0.05 , - 0.0 , 0.1 , - 0.05 , 0.0 , 0.1 , - 0.05 , - 0.0 , - 0.1 , 0.05
, 0.0 , - 0.1 , 0.05 , - 0.0 , - 0.1 , - 0.05 , 0.0 , - 0.1 , - 0.05 , - 0.0
} ; static const int32_T a [ 9 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , - 200000
} ; static const int16_T b_a [ 9 ] = { 2000 , 0 , 0 , 0 , 2000 , 0 , 0 , 0 ,
2000 } ; real_T a_p [ 24 ] ; real_T av_idx_1 ; real_T av_idx_2 ; real_T
av_idx_0 ; { real_T * pDataValues = ( real_T * ) rtDW . fafkv3xcrk . DataPtr
; real_T * pTimeValues = ( real_T * ) rtDW . fafkv3xcrk . TimePtr ; int_T
currTimeIndex = rtDW . aanf40bm32 . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . fafkv3xcrk . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
aanf40bm32 . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { c3nzpmmequ = pDataValues [ currTimeIndex ] ; } else {
c3nzpmmequ = pDataValues [ currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2
- t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T
TimeIndex = currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues
[ TimeIndex + 1 ] ; c3nzpmmequ = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2
) ; pDataValues += numPoints ; } } } { real_T * pDataValues = ( real_T * )
rtDW . l1fwndj2zw . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
l1fwndj2zw . TimePtr ; int_T currTimeIndex = rtDW . k0p41gumgr . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . l1fwndj2zw . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . k0p41gumgr . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 3 ; ++ elIdx ) { ( & rtB . i5pngojnqr [ 0 ] ) [ elIdx ] =
pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; } } } else { {
int_T elIdx ; for ( elIdx = 0 ; elIdx < 3 ; ++ elIdx ) { ( & rtB . i5pngojnqr
[ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 3 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB . i5pngojnqr [ 0 ]
) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } first_output = false ; if ( rtDW . lz43hau3ig == 0.0 )
{ rtDW . lz43hau3ig = 1.0 ; first_output = true ; } if ( first_output ) { rtX
. oleka5vmsg [ 0 ] = rtB . i5pngojnqr [ 0 ] ; rtX . oleka5vmsg [ 1 ] = 0.0 ;
} rtB . jd3yc3sozl [ 0 ] = rtX . oleka5vmsg [ 0 ] ; rtB . jd3yc3sozl [ 1 ] =
rtX . oleka5vmsg [ 1 ] ; rtB . jd3yc3sozl [ 2 ] = ( ( rtB . i5pngojnqr [ 0 ]
- rtX . oleka5vmsg [ 0 ] ) * 1000.0 - 2.0 * rtX . oleka5vmsg [ 1 ] ) * 1000.0
; rtB . jd3yc3sozl [ 3 ] = 0.0 ; first_output = false ; if ( rtDW .
gzrlfqcepc == 0.0 ) { rtDW . gzrlfqcepc = 1.0 ; first_output = true ; } if (
first_output ) { rtX . gmsmwr3cc0 [ 0 ] = rtB . i5pngojnqr [ 1 ] ; rtX .
gmsmwr3cc0 [ 1 ] = 0.0 ; } rtB . cpcxsiqkk2 [ 0 ] = rtX . gmsmwr3cc0 [ 0 ] ;
rtB . cpcxsiqkk2 [ 1 ] = rtX . gmsmwr3cc0 [ 1 ] ; rtB . cpcxsiqkk2 [ 2 ] = (
( rtB . i5pngojnqr [ 1 ] - rtX . gmsmwr3cc0 [ 0 ] ) * 1000.0 - 2.0 * rtX .
gmsmwr3cc0 [ 1 ] ) * 1000.0 ; rtB . cpcxsiqkk2 [ 3 ] = 0.0 ; first_output =
false ; if ( rtDW . fcwoczvcvk == 0.0 ) { rtDW . fcwoczvcvk = 1.0 ;
first_output = true ; } if ( first_output ) { rtX . lvikcw4pct [ 0 ] = rtB .
i5pngojnqr [ 2 ] ; rtX . lvikcw4pct [ 1 ] = 0.0 ; } rtB . anyhha524k [ 0 ] =
rtX . lvikcw4pct [ 0 ] ; rtB . anyhha524k [ 1 ] = rtX . lvikcw4pct [ 1 ] ;
rtB . anyhha524k [ 2 ] = ( ( rtB . i5pngojnqr [ 2 ] - rtX . lvikcw4pct [ 0 ]
) * 1000.0 - 2.0 * rtX . lvikcw4pct [ 1 ] ) * 1000.0 ; rtB . anyhha524k [ 3 ]
= 0.0 ; { real_T * pDataValues = ( real_T * ) rtDW . lpq22eshns . DataPtr ;
real_T * pTimeValues = ( real_T * ) rtDW . lpq22eshns . TimePtr ; int_T
currTimeIndex = rtDW . kqviwtyywd . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . lpq22eshns . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
kqviwtyywd . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 3 ; ++ elIdx
) { ( & rtB . gcpbvidrnc [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 3 ; ++ elIdx ) { ( & rtB . gcpbvidrnc [ 0 ] ) [ elIdx ] = pDataValues
[ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 =
( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ;
int_T TimeIndex = currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 3
; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; ( & rtB . gcpbvidrnc [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate (
d1 , d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } first_output =
false ; if ( rtDW . fmxt4x3vzi == 0.0 ) { rtDW . fmxt4x3vzi = 1.0 ;
first_output = true ; } if ( first_output ) { rtX . p0asllibcr [ 0 ] = rtB .
gcpbvidrnc [ 0 ] ; rtX . p0asllibcr [ 1 ] = 0.0 ; } rtB . avffaxkxts [ 0 ] =
rtX . p0asllibcr [ 0 ] ; rtB . avffaxkxts [ 1 ] = rtX . p0asllibcr [ 1 ] ;
rtB . avffaxkxts [ 2 ] = ( ( rtB . gcpbvidrnc [ 0 ] - rtX . p0asllibcr [ 0 ]
) * 1000.0 - 2.0 * rtX . p0asllibcr [ 1 ] ) * 1000.0 ; rtB . avffaxkxts [ 3 ]
= 0.0 ; first_output = false ; if ( rtDW . ehes2w3gkx == 0.0 ) { rtDW .
ehes2w3gkx = 1.0 ; first_output = true ; } if ( first_output ) { rtX .
mrf5gvci5v [ 0 ] = rtB . gcpbvidrnc [ 1 ] ; rtX . mrf5gvci5v [ 1 ] = 0.0 ; }
rtB . lron4andxg [ 0 ] = rtX . mrf5gvci5v [ 0 ] ; rtB . lron4andxg [ 1 ] =
rtX . mrf5gvci5v [ 1 ] ; rtB . lron4andxg [ 2 ] = ( ( rtB . gcpbvidrnc [ 1 ]
- rtX . mrf5gvci5v [ 0 ] ) * 1000.0 - 2.0 * rtX . mrf5gvci5v [ 1 ] ) * 1000.0
; rtB . lron4andxg [ 3 ] = 0.0 ; first_output = false ; if ( rtDW .
b0jhzc35v0 == 0.0 ) { rtDW . b0jhzc35v0 = 1.0 ; first_output = true ; } if (
first_output ) { rtX . mbimce0fqa [ 0 ] = rtB . gcpbvidrnc [ 2 ] ; rtX .
mbimce0fqa [ 1 ] = 0.0 ; } rtB . aopnf0g0rt [ 0 ] = rtX . mbimce0fqa [ 0 ] ;
rtB . aopnf0g0rt [ 1 ] = rtX . mbimce0fqa [ 1 ] ; rtB . aopnf0g0rt [ 2 ] = (
( rtB . gcpbvidrnc [ 2 ] - rtX . mbimce0fqa [ 0 ] ) * 1000.0 - 2.0 * rtX .
mbimce0fqa [ 1 ] ) * 1000.0 ; rtB . aopnf0g0rt [ 3 ] = 0.0 ; simulationData =
( NeslSimulationData * ) rtDW . na53wmkywe ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 33 ;
simulationData -> mData -> mContStates . mX = ( real_T * ) & rtX . dplrnvasdu
; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = NULL ; simulationData -> mData -> mModeVector . mN = 0
; simulationData -> mData -> mModeVector . mX = NULL ; first_output = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = first_output ; simulationData
-> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; first_output = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = first_output ; first_output
= ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = first_output ; first_output =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = first_output ; first_output =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = first_output ; tmp_p [ 0 ] = 0 ; tmp [ 0 ] = rtB .
a2a4hpyrz2 [ 0 ] ; tmp [ 1 ] = rtB . a2a4hpyrz2 [ 1 ] ; tmp [ 2 ] = rtB .
a2a4hpyrz2 [ 2 ] ; tmp [ 3 ] = rtB . a2a4hpyrz2 [ 3 ] ; tmp_p [ 1 ] = 4 ; tmp
[ 4 ] = rtB . giy1h5ky1s [ 0 ] ; tmp [ 5 ] = rtB . giy1h5ky1s [ 1 ] ; tmp [ 6
] = rtB . giy1h5ky1s [ 2 ] ; tmp [ 7 ] = rtB . giy1h5ky1s [ 3 ] ; tmp_p [ 2 ]
= 8 ; tmp [ 8 ] = rtB . jd3yc3sozl [ 0 ] ; tmp [ 9 ] = rtB . jd3yc3sozl [ 1 ]
; tmp [ 10 ] = rtB . jd3yc3sozl [ 2 ] ; tmp [ 11 ] = rtB . jd3yc3sozl [ 3 ] ;
tmp_p [ 3 ] = 12 ; tmp [ 12 ] = rtB . cpcxsiqkk2 [ 0 ] ; tmp [ 13 ] = rtB .
cpcxsiqkk2 [ 1 ] ; tmp [ 14 ] = rtB . cpcxsiqkk2 [ 2 ] ; tmp [ 15 ] = rtB .
cpcxsiqkk2 [ 3 ] ; tmp_p [ 4 ] = 16 ; tmp [ 16 ] = rtB . anyhha524k [ 0 ] ;
tmp [ 17 ] = rtB . anyhha524k [ 1 ] ; tmp [ 18 ] = rtB . anyhha524k [ 2 ] ;
tmp [ 19 ] = rtB . anyhha524k [ 3 ] ; tmp_p [ 5 ] = 20 ; tmp [ 20 ] = rtB .
avffaxkxts [ 0 ] ; tmp [ 21 ] = rtB . avffaxkxts [ 1 ] ; tmp [ 22 ] = rtB .
avffaxkxts [ 2 ] ; tmp [ 23 ] = rtB . avffaxkxts [ 3 ] ; tmp_p [ 6 ] = 24 ;
tmp [ 24 ] = rtB . lron4andxg [ 0 ] ; tmp [ 25 ] = rtB . lron4andxg [ 1 ] ;
tmp [ 26 ] = rtB . lron4andxg [ 2 ] ; tmp [ 27 ] = rtB . lron4andxg [ 3 ] ;
tmp_p [ 7 ] = 28 ; tmp [ 28 ] = rtB . aopnf0g0rt [ 0 ] ; tmp [ 29 ] = rtB .
aopnf0g0rt [ 1 ] ; tmp [ 30 ] = rtB . aopnf0g0rt [ 2 ] ; tmp [ 31 ] = rtB .
aopnf0g0rt [ 3 ] ; tmp_p [ 8 ] = 32 ; tmp [ 32 ] = rtB . gck1x5c55z [ 0 ] ;
tmp [ 33 ] = rtB . gck1x5c55z [ 1 ] ; tmp [ 34 ] = rtB . gck1x5c55z [ 2 ] ;
tmp [ 35 ] = rtB . gck1x5c55z [ 3 ] ; tmp_p [ 9 ] = 36 ; tmp [ 36 ] = rtB .
lneeaq3ggn [ 0 ] ; tmp [ 37 ] = rtB . lneeaq3ggn [ 1 ] ; tmp [ 38 ] = rtB .
lneeaq3ggn [ 2 ] ; tmp [ 39 ] = rtB . lneeaq3ggn [ 3 ] ; tmp_p [ 10 ] = 40 ;
tmp [ 40 ] = rtB . jzvmovor4f [ 0 ] ; tmp [ 41 ] = rtB . jzvmovor4f [ 1 ] ;
tmp [ 42 ] = rtB . jzvmovor4f [ 2 ] ; tmp [ 43 ] = rtB . jzvmovor4f [ 3 ] ;
tmp_p [ 11 ] = 44 ; tmp [ 44 ] = rtB . ngt2nzthph [ 0 ] ; tmp [ 45 ] = rtB .
ngt2nzthph [ 1 ] ; tmp [ 46 ] = rtB . ngt2nzthph [ 2 ] ; tmp [ 47 ] = rtB .
ngt2nzthph [ 3 ] ; tmp_p [ 12 ] = 48 ; tmp [ 48 ] = rtB . oagxdgsciz [ 0 ] ;
tmp [ 49 ] = rtB . oagxdgsciz [ 1 ] ; tmp [ 50 ] = rtB . oagxdgsciz [ 2 ] ;
tmp [ 51 ] = rtB . oagxdgsciz [ 3 ] ; tmp_p [ 13 ] = 52 ; tmp [ 52 ] = rtB .
byrhxyhu2y [ 0 ] ; tmp [ 53 ] = rtB . byrhxyhu2y [ 1 ] ; tmp [ 54 ] = rtB .
byrhxyhu2y [ 2 ] ; tmp [ 55 ] = rtB . byrhxyhu2y [ 3 ] ; tmp_p [ 14 ] = 56 ;
tmp [ 56 ] = rtB . iegxcysk54 [ 0 ] ; tmp [ 57 ] = rtB . iegxcysk54 [ 1 ] ;
tmp [ 58 ] = rtB . iegxcysk54 [ 2 ] ; tmp [ 59 ] = rtB . iegxcysk54 [ 3 ] ;
tmp_p [ 15 ] = 60 ; tmp [ 60 ] = rtB . bhfomtbk3s [ 0 ] ; tmp [ 61 ] = rtB .
bhfomtbk3s [ 1 ] ; tmp [ 62 ] = rtB . bhfomtbk3s [ 2 ] ; tmp [ 63 ] = rtB .
bhfomtbk3s [ 3 ] ; tmp_p [ 16 ] = 64 ; tmp [ 64 ] = rtB . gstkjtwy5v [ 0 ] ;
tmp [ 65 ] = rtB . gstkjtwy5v [ 1 ] ; tmp [ 66 ] = rtB . gstkjtwy5v [ 2 ] ;
tmp [ 67 ] = rtB . gstkjtwy5v [ 3 ] ; tmp_p [ 17 ] = 68 ; tmp [ 68 ] = rtB .
lmqf1lcrpl [ 0 ] ; tmp [ 69 ] = rtB . lmqf1lcrpl [ 1 ] ; tmp [ 70 ] = rtB .
lmqf1lcrpl [ 2 ] ; tmp [ 71 ] = rtB . lmqf1lcrpl [ 3 ] ; tmp_p [ 18 ] = 72 ;
tmp [ 72 ] = rtB . ig3bwkisun [ 0 ] ; tmp [ 73 ] = rtB . ig3bwkisun [ 1 ] ;
tmp [ 74 ] = rtB . ig3bwkisun [ 2 ] ; tmp [ 75 ] = rtB . ig3bwkisun [ 3 ] ;
tmp_p [ 19 ] = 76 ; tmp [ 76 ] = rtB . nyjkrhoabu [ 0 ] ; tmp [ 77 ] = rtB .
nyjkrhoabu [ 1 ] ; tmp [ 78 ] = rtB . nyjkrhoabu [ 2 ] ; tmp [ 79 ] = rtB .
nyjkrhoabu [ 3 ] ; tmp_p [ 20 ] = 80 ; tmp [ 80 ] = rtB . nskx41j5ik [ 0 ] ;
tmp [ 81 ] = rtB . nskx41j5ik [ 1 ] ; tmp [ 82 ] = rtB . nskx41j5ik [ 2 ] ;
tmp [ 83 ] = rtB . nskx41j5ik [ 3 ] ; tmp_p [ 21 ] = 84 ; tmp [ 84 ] = rtB .
o31xe204ix [ 0 ] ; tmp [ 85 ] = rtB . o31xe204ix [ 1 ] ; tmp [ 86 ] = rtB .
o31xe204ix [ 2 ] ; tmp [ 87 ] = rtB . o31xe204ix [ 3 ] ; tmp_p [ 22 ] = 88 ;
tmp [ 88 ] = rtB . c11psdq1sa [ 0 ] ; tmp [ 89 ] = rtB . c11psdq1sa [ 1 ] ;
tmp [ 90 ] = rtB . c11psdq1sa [ 2 ] ; tmp [ 91 ] = rtB . c11psdq1sa [ 3 ] ;
tmp_p [ 23 ] = 92 ; tmp [ 92 ] = rtB . iejevtu2b2 [ 0 ] ; tmp [ 93 ] = rtB .
iejevtu2b2 [ 1 ] ; tmp [ 94 ] = rtB . iejevtu2b2 [ 2 ] ; tmp [ 95 ] = rtB .
iejevtu2b2 [ 3 ] ; tmp_p [ 24 ] = 96 ; tmp [ 96 ] = rtB . nptbn3r2vs [ 0 ] ;
tmp [ 97 ] = rtB . nptbn3r2vs [ 1 ] ; tmp [ 98 ] = rtB . nptbn3r2vs [ 2 ] ;
tmp [ 99 ] = rtB . nptbn3r2vs [ 3 ] ; tmp_p [ 25 ] = 100 ; tmp [ 100 ] = rtB
. piq3dxclaf [ 0 ] ; tmp [ 101 ] = rtB . piq3dxclaf [ 1 ] ; tmp [ 102 ] = rtB
. piq3dxclaf [ 2 ] ; tmp [ 103 ] = rtB . piq3dxclaf [ 3 ] ; tmp_p [ 26 ] =
104 ; tmp [ 104 ] = rtB . ipue3gycmh [ 0 ] ; tmp [ 105 ] = rtB . ipue3gycmh [
1 ] ; tmp [ 106 ] = rtB . ipue3gycmh [ 2 ] ; tmp [ 107 ] = rtB . ipue3gycmh [
3 ] ; tmp_p [ 27 ] = 108 ; tmp [ 108 ] = rtB . ignnz2fkm0 [ 0 ] ; tmp [ 109 ]
= rtB . ignnz2fkm0 [ 1 ] ; tmp [ 110 ] = rtB . ignnz2fkm0 [ 2 ] ; tmp [ 111 ]
= rtB . ignnz2fkm0 [ 3 ] ; tmp_p [ 28 ] = 112 ; simulationData -> mData ->
mInputValues . mN = 112 ; simulationData -> mData -> mInputValues . mX = &
tmp [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 29 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_p [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 33 ; simulationData -> mData ->
mOutputs . mX = & rtB . fff0lbkzmp [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . f2pkiziunv ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . jhdycf30bg ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; j_k =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( j_k != 0 ) { first_output = error_buffer_is_empty
( ssGetErrorStatus ( rtS ) ) ; if ( first_output ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . fmfjt51fiu ; time_p = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL
; simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData
-> mModeVector . mX = NULL ; first_output = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = first_output ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; first_output = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = first_output ; first_output
= ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = first_output ; simulationData -> mData ->
mIsComputingJacobian = false ; first_output = ssIsSolverRequestingReset ( rtS
) ; simulationData -> mData -> mIsSolverRequestingReset = first_output ;
tmp_i [ 0 ] = 0 ; tmp_e [ 0 ] = rtB . a2a4hpyrz2 [ 0 ] ; tmp_e [ 1 ] = rtB .
a2a4hpyrz2 [ 1 ] ; tmp_e [ 2 ] = rtB . a2a4hpyrz2 [ 2 ] ; tmp_e [ 3 ] = rtB .
a2a4hpyrz2 [ 3 ] ; tmp_i [ 1 ] = 4 ; tmp_e [ 4 ] = rtB . giy1h5ky1s [ 0 ] ;
tmp_e [ 5 ] = rtB . giy1h5ky1s [ 1 ] ; tmp_e [ 6 ] = rtB . giy1h5ky1s [ 2 ] ;
tmp_e [ 7 ] = rtB . giy1h5ky1s [ 3 ] ; tmp_i [ 2 ] = 8 ; tmp_e [ 8 ] = rtB .
jd3yc3sozl [ 0 ] ; tmp_e [ 9 ] = rtB . jd3yc3sozl [ 1 ] ; tmp_e [ 10 ] = rtB
. jd3yc3sozl [ 2 ] ; tmp_e [ 11 ] = rtB . jd3yc3sozl [ 3 ] ; tmp_i [ 3 ] = 12
; tmp_e [ 12 ] = rtB . cpcxsiqkk2 [ 0 ] ; tmp_e [ 13 ] = rtB . cpcxsiqkk2 [ 1
] ; tmp_e [ 14 ] = rtB . cpcxsiqkk2 [ 2 ] ; tmp_e [ 15 ] = rtB . cpcxsiqkk2 [
3 ] ; tmp_i [ 4 ] = 16 ; tmp_e [ 16 ] = rtB . anyhha524k [ 0 ] ; tmp_e [ 17 ]
= rtB . anyhha524k [ 1 ] ; tmp_e [ 18 ] = rtB . anyhha524k [ 2 ] ; tmp_e [ 19
] = rtB . anyhha524k [ 3 ] ; tmp_i [ 5 ] = 20 ; tmp_e [ 20 ] = rtB .
avffaxkxts [ 0 ] ; tmp_e [ 21 ] = rtB . avffaxkxts [ 1 ] ; tmp_e [ 22 ] = rtB
. avffaxkxts [ 2 ] ; tmp_e [ 23 ] = rtB . avffaxkxts [ 3 ] ; tmp_i [ 6 ] = 24
; tmp_e [ 24 ] = rtB . lron4andxg [ 0 ] ; tmp_e [ 25 ] = rtB . lron4andxg [ 1
] ; tmp_e [ 26 ] = rtB . lron4andxg [ 2 ] ; tmp_e [ 27 ] = rtB . lron4andxg [
3 ] ; tmp_i [ 7 ] = 28 ; tmp_e [ 28 ] = rtB . aopnf0g0rt [ 0 ] ; tmp_e [ 29 ]
= rtB . aopnf0g0rt [ 1 ] ; tmp_e [ 30 ] = rtB . aopnf0g0rt [ 2 ] ; tmp_e [ 31
] = rtB . aopnf0g0rt [ 3 ] ; tmp_i [ 8 ] = 32 ; tmp_e [ 32 ] = rtB .
gck1x5c55z [ 0 ] ; tmp_e [ 33 ] = rtB . gck1x5c55z [ 1 ] ; tmp_e [ 34 ] = rtB
. gck1x5c55z [ 2 ] ; tmp_e [ 35 ] = rtB . gck1x5c55z [ 3 ] ; tmp_i [ 9 ] = 36
; tmp_e [ 36 ] = rtB . lneeaq3ggn [ 0 ] ; tmp_e [ 37 ] = rtB . lneeaq3ggn [ 1
] ; tmp_e [ 38 ] = rtB . lneeaq3ggn [ 2 ] ; tmp_e [ 39 ] = rtB . lneeaq3ggn [
3 ] ; tmp_i [ 10 ] = 40 ; tmp_e [ 40 ] = rtB . jzvmovor4f [ 0 ] ; tmp_e [ 41
] = rtB . jzvmovor4f [ 1 ] ; tmp_e [ 42 ] = rtB . jzvmovor4f [ 2 ] ; tmp_e [
43 ] = rtB . jzvmovor4f [ 3 ] ; tmp_i [ 11 ] = 44 ; tmp_e [ 44 ] = rtB .
ngt2nzthph [ 0 ] ; tmp_e [ 45 ] = rtB . ngt2nzthph [ 1 ] ; tmp_e [ 46 ] = rtB
. ngt2nzthph [ 2 ] ; tmp_e [ 47 ] = rtB . ngt2nzthph [ 3 ] ; tmp_i [ 12 ] =
48 ; tmp_e [ 48 ] = rtB . oagxdgsciz [ 0 ] ; tmp_e [ 49 ] = rtB . oagxdgsciz
[ 1 ] ; tmp_e [ 50 ] = rtB . oagxdgsciz [ 2 ] ; tmp_e [ 51 ] = rtB .
oagxdgsciz [ 3 ] ; tmp_i [ 13 ] = 52 ; tmp_e [ 52 ] = rtB . byrhxyhu2y [ 0 ]
; tmp_e [ 53 ] = rtB . byrhxyhu2y [ 1 ] ; tmp_e [ 54 ] = rtB . byrhxyhu2y [ 2
] ; tmp_e [ 55 ] = rtB . byrhxyhu2y [ 3 ] ; tmp_i [ 14 ] = 56 ; tmp_e [ 56 ]
= rtB . iegxcysk54 [ 0 ] ; tmp_e [ 57 ] = rtB . iegxcysk54 [ 1 ] ; tmp_e [ 58
] = rtB . iegxcysk54 [ 2 ] ; tmp_e [ 59 ] = rtB . iegxcysk54 [ 3 ] ; tmp_i [
15 ] = 60 ; tmp_e [ 60 ] = rtB . bhfomtbk3s [ 0 ] ; tmp_e [ 61 ] = rtB .
bhfomtbk3s [ 1 ] ; tmp_e [ 62 ] = rtB . bhfomtbk3s [ 2 ] ; tmp_e [ 63 ] = rtB
. bhfomtbk3s [ 3 ] ; tmp_i [ 16 ] = 64 ; tmp_e [ 64 ] = rtB . gstkjtwy5v [ 0
] ; tmp_e [ 65 ] = rtB . gstkjtwy5v [ 1 ] ; tmp_e [ 66 ] = rtB . gstkjtwy5v [
2 ] ; tmp_e [ 67 ] = rtB . gstkjtwy5v [ 3 ] ; tmp_i [ 17 ] = 68 ; tmp_e [ 68
] = rtB . lmqf1lcrpl [ 0 ] ; tmp_e [ 69 ] = rtB . lmqf1lcrpl [ 1 ] ; tmp_e [
70 ] = rtB . lmqf1lcrpl [ 2 ] ; tmp_e [ 71 ] = rtB . lmqf1lcrpl [ 3 ] ; tmp_i
[ 18 ] = 72 ; tmp_e [ 72 ] = rtB . ig3bwkisun [ 0 ] ; tmp_e [ 73 ] = rtB .
ig3bwkisun [ 1 ] ; tmp_e [ 74 ] = rtB . ig3bwkisun [ 2 ] ; tmp_e [ 75 ] = rtB
. ig3bwkisun [ 3 ] ; tmp_i [ 19 ] = 76 ; tmp_e [ 76 ] = rtB . nyjkrhoabu [ 0
] ; tmp_e [ 77 ] = rtB . nyjkrhoabu [ 1 ] ; tmp_e [ 78 ] = rtB . nyjkrhoabu [
2 ] ; tmp_e [ 79 ] = rtB . nyjkrhoabu [ 3 ] ; tmp_i [ 20 ] = 80 ; tmp_e [ 80
] = rtB . nskx41j5ik [ 0 ] ; tmp_e [ 81 ] = rtB . nskx41j5ik [ 1 ] ; tmp_e [
82 ] = rtB . nskx41j5ik [ 2 ] ; tmp_e [ 83 ] = rtB . nskx41j5ik [ 3 ] ; tmp_i
[ 21 ] = 84 ; tmp_e [ 84 ] = rtB . o31xe204ix [ 0 ] ; tmp_e [ 85 ] = rtB .
o31xe204ix [ 1 ] ; tmp_e [ 86 ] = rtB . o31xe204ix [ 2 ] ; tmp_e [ 87 ] = rtB
. o31xe204ix [ 3 ] ; tmp_i [ 22 ] = 88 ; tmp_e [ 88 ] = rtB . c11psdq1sa [ 0
] ; tmp_e [ 89 ] = rtB . c11psdq1sa [ 1 ] ; tmp_e [ 90 ] = rtB . c11psdq1sa [
2 ] ; tmp_e [ 91 ] = rtB . c11psdq1sa [ 3 ] ; tmp_i [ 23 ] = 92 ; tmp_e [ 92
] = rtB . iejevtu2b2 [ 0 ] ; tmp_e [ 93 ] = rtB . iejevtu2b2 [ 1 ] ; tmp_e [
94 ] = rtB . iejevtu2b2 [ 2 ] ; tmp_e [ 95 ] = rtB . iejevtu2b2 [ 3 ] ; tmp_i
[ 24 ] = 96 ; tmp_e [ 96 ] = rtB . nptbn3r2vs [ 0 ] ; tmp_e [ 97 ] = rtB .
nptbn3r2vs [ 1 ] ; tmp_e [ 98 ] = rtB . nptbn3r2vs [ 2 ] ; tmp_e [ 99 ] = rtB
. nptbn3r2vs [ 3 ] ; tmp_i [ 25 ] = 100 ; tmp_e [ 100 ] = rtB . piq3dxclaf [
0 ] ; tmp_e [ 101 ] = rtB . piq3dxclaf [ 1 ] ; tmp_e [ 102 ] = rtB .
piq3dxclaf [ 2 ] ; tmp_e [ 103 ] = rtB . piq3dxclaf [ 3 ] ; tmp_i [ 26 ] =
104 ; tmp_e [ 104 ] = rtB . ipue3gycmh [ 0 ] ; tmp_e [ 105 ] = rtB .
ipue3gycmh [ 1 ] ; tmp_e [ 106 ] = rtB . ipue3gycmh [ 2 ] ; tmp_e [ 107 ] =
rtB . ipue3gycmh [ 3 ] ; tmp_i [ 27 ] = 108 ; tmp_e [ 108 ] = rtB .
ignnz2fkm0 [ 0 ] ; tmp_e [ 109 ] = rtB . ignnz2fkm0 [ 1 ] ; tmp_e [ 110 ] =
rtB . ignnz2fkm0 [ 2 ] ; tmp_e [ 111 ] = rtB . ignnz2fkm0 [ 3 ] ; tmp_i [ 28
] = 112 ; tmp_e [ 112 ] = rtB . fff0lbkzmp [ 0 ] ; tmp_e [ 113 ] = rtB .
fff0lbkzmp [ 1 ] ; tmp_e [ 114 ] = rtB . fff0lbkzmp [ 2 ] ; tmp_e [ 115 ] =
rtB . fff0lbkzmp [ 3 ] ; tmp_e [ 116 ] = rtB . fff0lbkzmp [ 4 ] ; tmp_e [ 117
] = rtB . fff0lbkzmp [ 5 ] ; tmp_e [ 118 ] = rtB . fff0lbkzmp [ 6 ] ; tmp_e [
119 ] = rtB . fff0lbkzmp [ 7 ] ; tmp_e [ 120 ] = rtB . fff0lbkzmp [ 8 ] ;
tmp_e [ 121 ] = rtB . fff0lbkzmp [ 9 ] ; tmp_e [ 122 ] = rtB . fff0lbkzmp [
10 ] ; tmp_e [ 123 ] = rtB . fff0lbkzmp [ 11 ] ; tmp_e [ 124 ] = rtB .
fff0lbkzmp [ 12 ] ; tmp_e [ 125 ] = rtB . fff0lbkzmp [ 13 ] ; tmp_e [ 126 ] =
rtB . fff0lbkzmp [ 14 ] ; tmp_e [ 127 ] = rtB . fff0lbkzmp [ 15 ] ; tmp_e [
128 ] = rtB . fff0lbkzmp [ 16 ] ; tmp_e [ 129 ] = rtB . fff0lbkzmp [ 17 ] ;
tmp_e [ 130 ] = rtB . fff0lbkzmp [ 18 ] ; tmp_e [ 131 ] = rtB . fff0lbkzmp [
19 ] ; tmp_e [ 132 ] = rtB . fff0lbkzmp [ 20 ] ; tmp_e [ 133 ] = rtB .
fff0lbkzmp [ 21 ] ; tmp_e [ 134 ] = rtB . fff0lbkzmp [ 22 ] ; tmp_e [ 135 ] =
rtB . fff0lbkzmp [ 23 ] ; tmp_e [ 136 ] = rtB . fff0lbkzmp [ 24 ] ; tmp_e [
137 ] = rtB . fff0lbkzmp [ 25 ] ; tmp_e [ 138 ] = rtB . fff0lbkzmp [ 26 ] ;
tmp_e [ 139 ] = rtB . fff0lbkzmp [ 27 ] ; tmp_e [ 140 ] = rtB . fff0lbkzmp [
28 ] ; tmp_e [ 141 ] = rtB . fff0lbkzmp [ 29 ] ; tmp_e [ 142 ] = rtB .
fff0lbkzmp [ 30 ] ; tmp_e [ 143 ] = rtB . fff0lbkzmp [ 31 ] ; tmp_e [ 144 ] =
rtB . fff0lbkzmp [ 32 ] ; tmp_i [ 29 ] = 145 ; simulationData -> mData ->
mInputValues . mN = 145 ; simulationData -> mData -> mInputValues . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 30 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_i [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 65 ; simulationData -> mData ->
mOutputs . mX = & rtB . mhcsmwu1e3 [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . eu3uzx5cy5 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . m55fft4qhd ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; j_k =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( j_k != 0 ) { first_output = error_buffer_is_empty
( ssGetErrorStatus ( rtS ) ) ; if ( first_output ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
rtB . kbkny1y404 = c3nzpmmequ - rtB . mhcsmwu1e3 [ 1 ] ; rtB . h5j1pq2oet =
rtP . ProportionalGain_Gain * rtB . kbkny1y404 ; rtB . aigqxjxfq3 = rtX .
n3q0hefys4 ; rtB . evn4akd3fq = rtP . DerivativeGain_Gain * rtB . kbkny1y404
; rtB . j5dq3zbm12 = rtX . gigke2wig1 ; rtB . avbvpd3knl = rtB . evn4akd3fq -
rtB . j5dq3zbm12 ; rtB . kdtqmrecw1 = rtP . FilterCoefficient_Gain * rtB .
avbvpd3knl ; rtB . a4eplwnvip = ( rtB . h5j1pq2oet + rtB . aigqxjxfq3 ) + rtB
. kdtqmrecw1 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . mmcrb4wiru = rtB .
a4eplwnvip >= rtP . Saturate_UpperSat ? 1 : rtB . a4eplwnvip > rtP .
Saturate_LowerSat ? 0 : - 1 ; } rtB . hih35pqonz = rtDW . mmcrb4wiru == 1 ?
rtP . Saturate_UpperSat : rtDW . mmcrb4wiru == - 1 ? rtP . Saturate_LowerSat
: rtB . a4eplwnvip ; first_output = false ; if ( rtDW . ovtgirnpkm == 0.0 ) {
rtDW . ovtgirnpkm = 1.0 ; first_output = true ; } if ( first_output ) { rtX .
f5zro03fnf [ 0 ] = rtB . hih35pqonz ; rtX . f5zro03fnf [ 1 ] = 0.0 ; } rtB .
a2a4hpyrz2 [ 0 ] = rtX . f5zro03fnf [ 0 ] ; rtB . a2a4hpyrz2 [ 1 ] = rtX .
f5zro03fnf [ 1 ] ; rtB . a2a4hpyrz2 [ 2 ] = ( ( rtB . hih35pqonz - rtX .
f5zro03fnf [ 0 ] ) * 1000.0 - 2.0 * rtX . f5zro03fnf [ 1 ] ) * 1000.0 ; rtB .
a2a4hpyrz2 [ 3 ] = 0.0 ; { real_T * pDataValues = ( real_T * ) rtDW .
h2mcpex5lc . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . h2mcpex5lc
. TimePtr ; int_T currTimeIndex = rtDW . f1homicqdz . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . h2mcpex5lc . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . f1homicqdz . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { c3nzpmmequ =
pDataValues [ currTimeIndex ] ; } else { c3nzpmmequ = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; c3nzpmmequ = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } rtB . lji3oip3eh = c3nzpmmequ - rtB .
mhcsmwu1e3 [ 3 ] ; rtB . hxu10aja3n = rtP . ProportionalGain_Gain_oxrlybfiwz
* rtB . lji3oip3eh ; rtB . b0em5jvgbh = rtX . i4huqr2jqy ; rtB . ftzc33eq5a =
rtP . DerivativeGain_Gain_hb0xklitus * rtB . lji3oip3eh ; rtB . g1qnevlihp =
rtX . p1coydakrg ; rtB . ptnjmn1blx = rtB . ftzc33eq5a - rtB . g1qnevlihp ;
rtB . czawg3xijz = rtP . FilterCoefficient_Gain_loae5b3qga * rtB . ptnjmn1blx
; rtB . ggozmdzmm5 = ( rtB . hxu10aja3n + rtB . b0em5jvgbh ) + rtB .
czawg3xijz ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . bschfredd1 = rtB .
ggozmdzmm5 >= rtP . Saturate_UpperSat_fewg3kv1xw ? 1 : rtB . ggozmdzmm5 > rtP
. Saturate_LowerSat_l0zqlb52y1 ? 0 : - 1 ; } rtB . agaj15tfxi = rtDW .
bschfredd1 == 1 ? rtP . Saturate_UpperSat_fewg3kv1xw : rtDW . bschfredd1 == -
1 ? rtP . Saturate_LowerSat_l0zqlb52y1 : rtB . ggozmdzmm5 ; first_output =
false ; if ( rtDW . flrsvcdg0r == 0.0 ) { rtDW . flrsvcdg0r = 1.0 ;
first_output = true ; } if ( first_output ) { rtX . okqmbmuryh [ 0 ] = rtB .
agaj15tfxi ; rtX . okqmbmuryh [ 1 ] = 0.0 ; } rtB . giy1h5ky1s [ 0 ] = rtX .
okqmbmuryh [ 0 ] ; rtB . giy1h5ky1s [ 1 ] = rtX . okqmbmuryh [ 1 ] ; rtB .
giy1h5ky1s [ 2 ] = ( ( rtB . agaj15tfxi - rtX . okqmbmuryh [ 0 ] ) * 1000.0 -
2.0 * rtX . okqmbmuryh [ 1 ] ) * 1000.0 ; rtB . giy1h5ky1s [ 3 ] = 0.0 ; rtB
. cufysxrud3 [ 0 ] = rtB . mhcsmwu1e3 [ 5 ] ; rtB . cufysxrud3 [ 1 ] = rtB .
mhcsmwu1e3 [ 7 ] ; rtB . cufysxrud3 [ 2 ] = rtB . mhcsmwu1e3 [ 9 ] ; rtB .
gu4box0to2 [ 0 ] = rtB . mhcsmwu1e3 [ 6 ] ; rtB . gu4box0to2 [ 1 ] = rtB .
mhcsmwu1e3 [ 8 ] ; rtB . gu4box0to2 [ 2 ] = rtB . mhcsmwu1e3 [ 10 ] ; if (
muDoubleScalarAbs ( rtB . cufysxrud3 [ 0 ] ) <= 0.25 ) { R [ 0 ] = ( 1.0 -
rtB . mhcsmwu1e3 [ 13 ] * rtB . mhcsmwu1e3 [ 13 ] * 2.0 ) - rtB . mhcsmwu1e3
[ 14 ] * rtB . mhcsmwu1e3 [ 14 ] * 2.0 ; R [ 3 ] = 2.0 * rtB . mhcsmwu1e3 [
12 ] * rtB . mhcsmwu1e3 [ 13 ] - 2.0 * rtB . mhcsmwu1e3 [ 14 ] * rtB .
mhcsmwu1e3 [ 11 ] ; R [ 6 ] = 2.0 * rtB . mhcsmwu1e3 [ 12 ] * rtB .
mhcsmwu1e3 [ 14 ] + 2.0 * rtB . mhcsmwu1e3 [ 13 ] * rtB . mhcsmwu1e3 [ 11 ] ;
R [ 1 ] = 2.0 * rtB . mhcsmwu1e3 [ 12 ] * rtB . mhcsmwu1e3 [ 13 ] + 2.0 * rtB
. mhcsmwu1e3 [ 14 ] * rtB . mhcsmwu1e3 [ 11 ] ; R [ 4 ] = ( 1.0 - rtB .
mhcsmwu1e3 [ 12 ] * rtB . mhcsmwu1e3 [ 12 ] * 2.0 ) - rtB . mhcsmwu1e3 [ 14 ]
* rtB . mhcsmwu1e3 [ 14 ] * 2.0 ; R [ 7 ] = 2.0 * rtB . mhcsmwu1e3 [ 13 ] *
rtB . mhcsmwu1e3 [ 14 ] - 2.0 * rtB . mhcsmwu1e3 [ 12 ] * rtB . mhcsmwu1e3 [
11 ] ; R [ 2 ] = 2.0 * rtB . mhcsmwu1e3 [ 12 ] * rtB . mhcsmwu1e3 [ 14 ] -
2.0 * rtB . mhcsmwu1e3 [ 13 ] * rtB . mhcsmwu1e3 [ 11 ] ; R [ 5 ] = 2.0 * rtB
. mhcsmwu1e3 [ 13 ] * rtB . mhcsmwu1e3 [ 14 ] + 2.0 * rtB . mhcsmwu1e3 [ 12 ]
* rtB . mhcsmwu1e3 [ 11 ] ; R [ 8 ] = ( 1.0 - rtB . mhcsmwu1e3 [ 12 ] * rtB .
mhcsmwu1e3 [ 12 ] * 2.0 ) - rtB . mhcsmwu1e3 [ 13 ] * rtB . mhcsmwu1e3 [ 13 ]
* 2.0 ; for ( j_k = 0 ; j_k < 3 ; j_k ++ ) { for ( ak = 0 ; ak < 8 ; ak ++ )
{ vv [ j_k + 3 * ak ] = 0.0 ; vv [ j_k + 3 * ak ] += b [ 3 * ak ] * R [ j_k ]
; vv [ j_k + 3 * ak ] += b [ 3 * ak + 1 ] * R [ j_k + 3 ] ; vv [ j_k + 3 * ak
] += b [ 3 * ak + 2 ] * R [ j_k + 6 ] ; } } ak = 0 ; for ( j_k = 0 ; j_k <=
22 ; j_k += 3 ) { rr [ j_k ] = vv [ ak ] + rtB . cufysxrud3 [ 0 ] ; rr [ j_k
+ 1 ] = vv [ ak + 1 ] + rtB . cufysxrud3 [ 1 ] ; rr [ j_k + 2 ] = vv [ ak + 2
] + rtB . cufysxrud3 [ 2 ] ; ak += 3 ; } for ( j_k = 0 ; j_k < 3 ; j_k ++ ) {
for ( ak = 0 ; ak < 8 ; ak ++ ) { vv [ j_k + 3 * ak ] = 0.0 ; vv [ j_k + 3 *
ak ] += b [ 3 * ak ] * R [ j_k ] ; vv [ j_k + 3 * ak ] += b [ 3 * ak + 1 ] *
R [ j_k + 3 ] ; vv [ j_k + 3 * ak ] += b [ 3 * ak + 2 ] * R [ j_k + 6 ] ; } }
ak = 0 ; for ( j_k = 0 ; j_k <= 22 ; j_k += 3 ) { av_idx_0 = rtB . mhcsmwu1e3
[ 15 ] ; av_idx_1 = rtB . mhcsmwu1e3 [ 16 ] ; av_idx_2 = rtB . mhcsmwu1e3 [
17 ] ; c [ j_k ] = vv [ ak + 2 ] * av_idx_1 - vv [ ak + 1 ] * av_idx_2 ; c [
j_k + 1 ] = av_idx_2 * vv [ ak ] - vv [ ak + 2 ] * av_idx_0 ; c [ j_k + 2 ] =
vv [ ak + 1 ] * av_idx_0 - av_idx_1 * vv [ ak ] ; ak += 3 ; } ak = 0 ; for (
j_k = 0 ; j_k <= 22 ; j_k += 3 ) { vv [ j_k ] = rtB . gu4box0to2 [ 0 ] + c [
ak ] ; vv [ j_k + 1 ] = c [ ak + 1 ] + rtB . gu4box0to2 [ 1 ] ; vv [ j_k + 2
] = c [ ak + 2 ] + rtB . gu4box0to2 [ 2 ] ; ak += 3 ; } for ( j_k = 0 ; j_k <
3 ; j_k ++ ) { for ( ak = 0 ; ak < 8 ; ak ++ ) { a_p [ j_k + 3 * ak ] = 0.0 ;
a_p [ j_k + 3 * ak ] += rr [ 3 * ak ] * - 0.0 ; a_p [ j_k + 3 * ak ] += rr [
3 * ak + 1 ] * - 0.0 ; a_p [ j_k + 3 * ak ] += rr [ 3 * ak + 2 ] * ( real_T )
a [ j_k + 6 ] ; } } for ( j_k = 0 ; j_k < 3 ; j_k ++ ) { for ( ak = 0 ; ak <
8 ; ak ++ ) { rr [ j_k + 3 * ak ] = 0.0 ; rr [ j_k + 3 * ak ] += vv [ 3 * ak
] * ( real_T ) b_a [ j_k ] ; rr [ j_k + 3 * ak ] += vv [ 3 * ak + 1 ] * (
real_T ) b_a [ j_k + 3 ] ; rr [ j_k + 3 * ak ] += vv [ 3 * ak + 2 ] * (
real_T ) b_a [ j_k + 6 ] ; } } for ( j_k = 0 ; j_k < 8 ; j_k ++ ) { FF [ 3 *
j_k ] = a_p [ 3 * j_k ] - rr [ 3 * j_k ] ; FF [ 1 + 3 * j_k ] = a_p [ 3 * j_k
+ 1 ] - rr [ 3 * j_k + 1 ] ; FF [ 2 + 3 * j_k ] = a_p [ 3 * j_k + 2 ] - rr [
3 * j_k + 2 ] ; } for ( j_k = 0 ; j_k < 8 ; j_k ++ ) { av_idx_0 =
muDoubleScalarExp ( - FF [ 3 * j_k + 2 ] + ( FF [ 3 * j_k + 1 ] * - 0.0 + FF
[ 3 * j_k ] * - 0.0 ) ) ; av_idx_0 = 1.0 / ( 1.0 + av_idx_0 ) ; loss [ j_k ]
= av_idx_0 ; } pwkn3bhcpa ( loss , rr ) ; for ( j_k = 0 ; j_k < 24 ; j_k ++ )
{ a_p [ j_k ] = rr [ j_k ] * FF [ j_k ] ; } b4edgxtqfu ( a_p , rtB .
cbshgsh2c0 ) ; for ( j_k = 0 ; j_k < 3 ; j_k ++ ) { for ( ak = 0 ; ak < 8 ;
ak ++ ) { vv [ j_k + 3 * ak ] = 0.0 ; vv [ j_k + 3 * ak ] += b [ 3 * ak ] * R
[ j_k ] ; vv [ j_k + 3 * ak ] += b [ 3 * ak + 1 ] * R [ j_k + 3 ] ; vv [ j_k
+ 3 * ak ] += b [ 3 * ak + 2 ] * R [ j_k + 6 ] ; } } for ( j_k = 0 ; j_k <=
22 ; j_k += 3 ) { for ( ak = j_k ; ak + 1 <= j_k + 1 ; ak ++ ) { c [ ak ] =
vv [ ak + 1 ] * FF [ ak + 2 ] - vv [ ak + 2 ] * FF [ ak + 1 ] ; c [ ak + 1 ]
= vv [ ak + 2 ] * FF [ ak ] - FF [ ak + 2 ] * vv [ ak ] ; c [ ak + 2 ] = FF [
ak + 1 ] * vv [ ak ] - vv [ ak + 1 ] * FF [ ak ] ; } } pwkn3bhcpa ( loss , rr
) ; for ( j_k = 0 ; j_k < 24 ; j_k ++ ) { a_p [ j_k ] = rr [ j_k ] * c [ j_k
] ; } b4edgxtqfu ( a_p , rtB . aaktuvfa1z ) ; } else { rtB . cbshgsh2c0 [ 0 ]
= 0.0 ; rtB . cbshgsh2c0 [ 1 ] = 0.0 ; rtB . cbshgsh2c0 [ 2 ] = 0.0 ; rtB .
aaktuvfa1z [ 0 ] = 0.0 ; rtB . aaktuvfa1z [ 1 ] = 0.0 ; rtB . aaktuvfa1z [ 2
] = 0.0 ; } rtB . gck1x5c55z [ 0 ] = rtB . cbshgsh2c0 [ 0 ] ; rtB .
gck1x5c55z [ 1 ] = 0.0 ; rtB . gck1x5c55z [ 2 ] = 0.0 ; rtB . gck1x5c55z [ 3
] = 0.0 ; rtB . lneeaq3ggn [ 0 ] = rtB . cbshgsh2c0 [ 1 ] ; rtB . lneeaq3ggn
[ 1 ] = 0.0 ; rtB . lneeaq3ggn [ 2 ] = 0.0 ; rtB . lneeaq3ggn [ 3 ] = 0.0 ;
rtB . jzvmovor4f [ 0 ] = rtB . cbshgsh2c0 [ 2 ] ; rtB . jzvmovor4f [ 1 ] =
0.0 ; rtB . jzvmovor4f [ 2 ] = 0.0 ; rtB . jzvmovor4f [ 3 ] = 0.0 ; rtB .
ngt2nzthph [ 0 ] = rtB . aaktuvfa1z [ 0 ] ; rtB . ngt2nzthph [ 1 ] = 0.0 ;
rtB . ngt2nzthph [ 2 ] = 0.0 ; rtB . ngt2nzthph [ 3 ] = 0.0 ; rtB .
oagxdgsciz [ 0 ] = rtB . aaktuvfa1z [ 1 ] ; rtB . oagxdgsciz [ 1 ] = 0.0 ;
rtB . oagxdgsciz [ 2 ] = 0.0 ; rtB . oagxdgsciz [ 3 ] = 0.0 ; rtB .
byrhxyhu2y [ 0 ] = rtB . aaktuvfa1z [ 2 ] ; rtB . byrhxyhu2y [ 1 ] = 0.0 ;
rtB . byrhxyhu2y [ 2 ] = 0.0 ; rtB . byrhxyhu2y [ 3 ] = 0.0 ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( rtDW . h4aljpv1cn != 0 ) { rtDW .
bui11fpqhc = muDoubleScalarSin ( rtP . SineWave4_Freq * ssGetTaskTime ( rtS ,
2 ) ) ; rtDW . m33n3pbjwx = muDoubleScalarCos ( rtP . SineWave4_Freq *
ssGetTaskTime ( rtS , 2 ) ) ; rtDW . h4aljpv1cn = 0 ; } rtB . izulu4xivv = (
( rtDW . bui11fpqhc * rtP . SineWave4_PCos + rtDW . m33n3pbjwx * rtP .
SineWave4_PSin ) * rtP . SineWave4_HCos + ( rtDW . m33n3pbjwx * rtP .
SineWave4_PCos - rtDW . bui11fpqhc * rtP . SineWave4_PSin ) * rtP .
SineWave4_Hsin ) * rtP . SineWave4_Amp + rtP . SineWave4_Bias ; }
first_output = false ; if ( rtDW . ep3taliqrv == 0.0 ) { rtDW . ep3taliqrv =
1.0 ; first_output = true ; } if ( first_output ) { rtX . dmckm0h0rt [ 0 ] =
rtB . izulu4xivv ; rtX . dmckm0h0rt [ 1 ] = 0.0 ; } rtB . iegxcysk54 [ 0 ] =
rtX . dmckm0h0rt [ 0 ] ; rtB . iegxcysk54 [ 1 ] = rtX . dmckm0h0rt [ 1 ] ;
rtB . iegxcysk54 [ 2 ] = ( ( rtB . izulu4xivv - rtX . dmckm0h0rt [ 0 ] ) *
1000.0 - 2.0 * rtX . dmckm0h0rt [ 1 ] ) * 1000.0 ; rtB . iegxcysk54 [ 3 ] =
0.0 ; first_output = false ; if ( rtDW . fgvya54ooh == 0.0 ) { rtDW .
fgvya54ooh = 1.0 ; first_output = true ; } if ( first_output ) { rtX .
f02hzaguhy [ 0 ] = rtP . Constant3_Value ; rtX . f02hzaguhy [ 1 ] = 0.0 ; }
rtB . bhfomtbk3s [ 0 ] = rtX . f02hzaguhy [ 0 ] ; rtB . bhfomtbk3s [ 1 ] =
rtX . f02hzaguhy [ 1 ] ; rtB . bhfomtbk3s [ 2 ] = ( ( rtP . Constant3_Value -
rtX . f02hzaguhy [ 0 ] ) * 10000.0 - 2.0 * rtX . f02hzaguhy [ 1 ] ) * 10000.0
; rtB . bhfomtbk3s [ 3 ] = 0.0 ; k2305amnw5 ( rtB . mhcsmwu1e3 [ 18 ] , rtB .
mhcsmwu1e3 [ 20 ] , rtB . mhcsmwu1e3 [ 22 ] , rtB . mhcsmwu1e3 [ 19 ] , rtB .
mhcsmwu1e3 [ 21 ] , rtB . mhcsmwu1e3 [ 23 ] , & rtB . mhcsmwu1e3 [ 24 ] , &
rtB . mhcsmwu1e3 [ 28 ] , & rtB . n1b4dgswxn ) ; rtB . gstkjtwy5v [ 0 ] = rtB
. n1b4dgswxn . ptbvgl0xdm [ 0 ] ; rtB . gstkjtwy5v [ 1 ] = 0.0 ; rtB .
gstkjtwy5v [ 2 ] = 0.0 ; rtB . gstkjtwy5v [ 3 ] = 0.0 ; rtB . lmqf1lcrpl [ 0
] = rtB . n1b4dgswxn . ptbvgl0xdm [ 1 ] ; rtB . lmqf1lcrpl [ 1 ] = 0.0 ; rtB
. lmqf1lcrpl [ 2 ] = 0.0 ; rtB . lmqf1lcrpl [ 3 ] = 0.0 ; rtB . ig3bwkisun [
0 ] = rtB . n1b4dgswxn . ptbvgl0xdm [ 2 ] ; rtB . ig3bwkisun [ 1 ] = 0.0 ;
rtB . ig3bwkisun [ 2 ] = 0.0 ; rtB . ig3bwkisun [ 3 ] = 0.0 ; rtB .
nyjkrhoabu [ 0 ] = rtB . n1b4dgswxn . amj0331tiy [ 0 ] ; rtB . nyjkrhoabu [ 1
] = 0.0 ; rtB . nyjkrhoabu [ 2 ] = 0.0 ; rtB . nyjkrhoabu [ 3 ] = 0.0 ; rtB .
nskx41j5ik [ 0 ] = rtB . n1b4dgswxn . amj0331tiy [ 1 ] ; rtB . nskx41j5ik [ 1
] = 0.0 ; rtB . nskx41j5ik [ 2 ] = 0.0 ; rtB . nskx41j5ik [ 3 ] = 0.0 ; rtB .
o31xe204ix [ 0 ] = rtB . n1b4dgswxn . amj0331tiy [ 2 ] ; rtB . o31xe204ix [ 1
] = 0.0 ; rtB . o31xe204ix [ 2 ] = 0.0 ; rtB . o31xe204ix [ 3 ] = 0.0 ;
k2305amnw5 ( rtB . mhcsmwu1e3 [ 31 ] , rtB . mhcsmwu1e3 [ 33 ] , rtB .
mhcsmwu1e3 [ 35 ] , rtB . mhcsmwu1e3 [ 32 ] , rtB . mhcsmwu1e3 [ 34 ] , rtB .
mhcsmwu1e3 [ 36 ] , & rtB . mhcsmwu1e3 [ 37 ] , & rtB . mhcsmwu1e3 [ 41 ] , &
rtB . hvkcdvrvj3 ) ; rtB . c11psdq1sa [ 0 ] = rtB . hvkcdvrvj3 . ptbvgl0xdm [
0 ] ; rtB . c11psdq1sa [ 1 ] = 0.0 ; rtB . c11psdq1sa [ 2 ] = 0.0 ; rtB .
c11psdq1sa [ 3 ] = 0.0 ; rtB . iejevtu2b2 [ 0 ] = rtB . hvkcdvrvj3 .
ptbvgl0xdm [ 1 ] ; rtB . iejevtu2b2 [ 1 ] = 0.0 ; rtB . iejevtu2b2 [ 2 ] =
0.0 ; rtB . iejevtu2b2 [ 3 ] = 0.0 ; rtB . nptbn3r2vs [ 0 ] = rtB .
hvkcdvrvj3 . ptbvgl0xdm [ 2 ] ; rtB . nptbn3r2vs [ 1 ] = 0.0 ; rtB .
nptbn3r2vs [ 2 ] = 0.0 ; rtB . nptbn3r2vs [ 3 ] = 0.0 ; rtB . piq3dxclaf [ 0
] = rtB . hvkcdvrvj3 . amj0331tiy [ 0 ] ; rtB . piq3dxclaf [ 1 ] = 0.0 ; rtB
. piq3dxclaf [ 2 ] = 0.0 ; rtB . piq3dxclaf [ 3 ] = 0.0 ; rtB . ipue3gycmh [
0 ] = rtB . hvkcdvrvj3 . amj0331tiy [ 1 ] ; rtB . ipue3gycmh [ 1 ] = 0.0 ;
rtB . ipue3gycmh [ 2 ] = 0.0 ; rtB . ipue3gycmh [ 3 ] = 0.0 ; rtB .
ignnz2fkm0 [ 0 ] = rtB . hvkcdvrvj3 . amj0331tiy [ 2 ] ; rtB . ignnz2fkm0 [ 1
] = 0.0 ; rtB . ignnz2fkm0 [ 2 ] = 0.0 ; rtB . ignnz2fkm0 [ 3 ] = 0.0 ;
simulationData = ( NeslSimulationData * ) rtDW . aiac20tcs1 ; time_e = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL
; simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData
-> mModeVector . mX = NULL ; first_output = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = first_output ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; first_output = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = first_output ; first_output
= ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = first_output ; simulationData -> mData ->
mIsComputingJacobian = false ; first_output = ssIsSolverRequestingReset ( rtS
) ; simulationData -> mData -> mIsSolverRequestingReset = first_output ;
tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB . a2a4hpyrz2 [ 0 ] ; tmp_m [ 1 ] = rtB .
a2a4hpyrz2 [ 1 ] ; tmp_m [ 2 ] = rtB . a2a4hpyrz2 [ 2 ] ; tmp_m [ 3 ] = rtB .
a2a4hpyrz2 [ 3 ] ; tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . giy1h5ky1s [ 0 ] ;
tmp_m [ 5 ] = rtB . giy1h5ky1s [ 1 ] ; tmp_m [ 6 ] = rtB . giy1h5ky1s [ 2 ] ;
tmp_m [ 7 ] = rtB . giy1h5ky1s [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB .
jd3yc3sozl [ 0 ] ; tmp_m [ 9 ] = rtB . jd3yc3sozl [ 1 ] ; tmp_m [ 10 ] = rtB
. jd3yc3sozl [ 2 ] ; tmp_m [ 11 ] = rtB . jd3yc3sozl [ 3 ] ; tmp_g [ 3 ] = 12
; tmp_m [ 12 ] = rtB . cpcxsiqkk2 [ 0 ] ; tmp_m [ 13 ] = rtB . cpcxsiqkk2 [ 1
] ; tmp_m [ 14 ] = rtB . cpcxsiqkk2 [ 2 ] ; tmp_m [ 15 ] = rtB . cpcxsiqkk2 [
3 ] ; tmp_g [ 4 ] = 16 ; tmp_m [ 16 ] = rtB . anyhha524k [ 0 ] ; tmp_m [ 17 ]
= rtB . anyhha524k [ 1 ] ; tmp_m [ 18 ] = rtB . anyhha524k [ 2 ] ; tmp_m [ 19
] = rtB . anyhha524k [ 3 ] ; tmp_g [ 5 ] = 20 ; tmp_m [ 20 ] = rtB .
avffaxkxts [ 0 ] ; tmp_m [ 21 ] = rtB . avffaxkxts [ 1 ] ; tmp_m [ 22 ] = rtB
. avffaxkxts [ 2 ] ; tmp_m [ 23 ] = rtB . avffaxkxts [ 3 ] ; tmp_g [ 6 ] = 24
; tmp_m [ 24 ] = rtB . lron4andxg [ 0 ] ; tmp_m [ 25 ] = rtB . lron4andxg [ 1
] ; tmp_m [ 26 ] = rtB . lron4andxg [ 2 ] ; tmp_m [ 27 ] = rtB . lron4andxg [
3 ] ; tmp_g [ 7 ] = 28 ; tmp_m [ 28 ] = rtB . aopnf0g0rt [ 0 ] ; tmp_m [ 29 ]
= rtB . aopnf0g0rt [ 1 ] ; tmp_m [ 30 ] = rtB . aopnf0g0rt [ 2 ] ; tmp_m [ 31
] = rtB . aopnf0g0rt [ 3 ] ; tmp_g [ 8 ] = 32 ; tmp_m [ 32 ] = rtB .
gck1x5c55z [ 0 ] ; tmp_m [ 33 ] = rtB . gck1x5c55z [ 1 ] ; tmp_m [ 34 ] = rtB
. gck1x5c55z [ 2 ] ; tmp_m [ 35 ] = rtB . gck1x5c55z [ 3 ] ; tmp_g [ 9 ] = 36
; tmp_m [ 36 ] = rtB . lneeaq3ggn [ 0 ] ; tmp_m [ 37 ] = rtB . lneeaq3ggn [ 1
] ; tmp_m [ 38 ] = rtB . lneeaq3ggn [ 2 ] ; tmp_m [ 39 ] = rtB . lneeaq3ggn [
3 ] ; tmp_g [ 10 ] = 40 ; tmp_m [ 40 ] = rtB . jzvmovor4f [ 0 ] ; tmp_m [ 41
] = rtB . jzvmovor4f [ 1 ] ; tmp_m [ 42 ] = rtB . jzvmovor4f [ 2 ] ; tmp_m [
43 ] = rtB . jzvmovor4f [ 3 ] ; tmp_g [ 11 ] = 44 ; tmp_m [ 44 ] = rtB .
ngt2nzthph [ 0 ] ; tmp_m [ 45 ] = rtB . ngt2nzthph [ 1 ] ; tmp_m [ 46 ] = rtB
. ngt2nzthph [ 2 ] ; tmp_m [ 47 ] = rtB . ngt2nzthph [ 3 ] ; tmp_g [ 12 ] =
48 ; tmp_m [ 48 ] = rtB . oagxdgsciz [ 0 ] ; tmp_m [ 49 ] = rtB . oagxdgsciz
[ 1 ] ; tmp_m [ 50 ] = rtB . oagxdgsciz [ 2 ] ; tmp_m [ 51 ] = rtB .
oagxdgsciz [ 3 ] ; tmp_g [ 13 ] = 52 ; tmp_m [ 52 ] = rtB . byrhxyhu2y [ 0 ]
; tmp_m [ 53 ] = rtB . byrhxyhu2y [ 1 ] ; tmp_m [ 54 ] = rtB . byrhxyhu2y [ 2
] ; tmp_m [ 55 ] = rtB . byrhxyhu2y [ 3 ] ; tmp_g [ 14 ] = 56 ; tmp_m [ 56 ]
= rtB . iegxcysk54 [ 0 ] ; tmp_m [ 57 ] = rtB . iegxcysk54 [ 1 ] ; tmp_m [ 58
] = rtB . iegxcysk54 [ 2 ] ; tmp_m [ 59 ] = rtB . iegxcysk54 [ 3 ] ; tmp_g [
15 ] = 60 ; tmp_m [ 60 ] = rtB . bhfomtbk3s [ 0 ] ; tmp_m [ 61 ] = rtB .
bhfomtbk3s [ 1 ] ; tmp_m [ 62 ] = rtB . bhfomtbk3s [ 2 ] ; tmp_m [ 63 ] = rtB
. bhfomtbk3s [ 3 ] ; tmp_g [ 16 ] = 64 ; tmp_m [ 64 ] = rtB . gstkjtwy5v [ 0
] ; tmp_m [ 65 ] = rtB . gstkjtwy5v [ 1 ] ; tmp_m [ 66 ] = rtB . gstkjtwy5v [
2 ] ; tmp_m [ 67 ] = rtB . gstkjtwy5v [ 3 ] ; tmp_g [ 17 ] = 68 ; tmp_m [ 68
] = rtB . lmqf1lcrpl [ 0 ] ; tmp_m [ 69 ] = rtB . lmqf1lcrpl [ 1 ] ; tmp_m [
70 ] = rtB . lmqf1lcrpl [ 2 ] ; tmp_m [ 71 ] = rtB . lmqf1lcrpl [ 3 ] ; tmp_g
[ 18 ] = 72 ; tmp_m [ 72 ] = rtB . ig3bwkisun [ 0 ] ; tmp_m [ 73 ] = rtB .
ig3bwkisun [ 1 ] ; tmp_m [ 74 ] = rtB . ig3bwkisun [ 2 ] ; tmp_m [ 75 ] = rtB
. ig3bwkisun [ 3 ] ; tmp_g [ 19 ] = 76 ; tmp_m [ 76 ] = rtB . nyjkrhoabu [ 0
] ; tmp_m [ 77 ] = rtB . nyjkrhoabu [ 1 ] ; tmp_m [ 78 ] = rtB . nyjkrhoabu [
2 ] ; tmp_m [ 79 ] = rtB . nyjkrhoabu [ 3 ] ; tmp_g [ 20 ] = 80 ; tmp_m [ 80
] = rtB . nskx41j5ik [ 0 ] ; tmp_m [ 81 ] = rtB . nskx41j5ik [ 1 ] ; tmp_m [
82 ] = rtB . nskx41j5ik [ 2 ] ; tmp_m [ 83 ] = rtB . nskx41j5ik [ 3 ] ; tmp_g
[ 21 ] = 84 ; tmp_m [ 84 ] = rtB . o31xe204ix [ 0 ] ; tmp_m [ 85 ] = rtB .
o31xe204ix [ 1 ] ; tmp_m [ 86 ] = rtB . o31xe204ix [ 2 ] ; tmp_m [ 87 ] = rtB
. o31xe204ix [ 3 ] ; tmp_g [ 22 ] = 88 ; tmp_m [ 88 ] = rtB . c11psdq1sa [ 0
] ; tmp_m [ 89 ] = rtB . c11psdq1sa [ 1 ] ; tmp_m [ 90 ] = rtB . c11psdq1sa [
2 ] ; tmp_m [ 91 ] = rtB . c11psdq1sa [ 3 ] ; tmp_g [ 23 ] = 92 ; tmp_m [ 92
] = rtB . iejevtu2b2 [ 0 ] ; tmp_m [ 93 ] = rtB . iejevtu2b2 [ 1 ] ; tmp_m [
94 ] = rtB . iejevtu2b2 [ 2 ] ; tmp_m [ 95 ] = rtB . iejevtu2b2 [ 3 ] ; tmp_g
[ 24 ] = 96 ; tmp_m [ 96 ] = rtB . nptbn3r2vs [ 0 ] ; tmp_m [ 97 ] = rtB .
nptbn3r2vs [ 1 ] ; tmp_m [ 98 ] = rtB . nptbn3r2vs [ 2 ] ; tmp_m [ 99 ] = rtB
. nptbn3r2vs [ 3 ] ; tmp_g [ 25 ] = 100 ; tmp_m [ 100 ] = rtB . piq3dxclaf [
0 ] ; tmp_m [ 101 ] = rtB . piq3dxclaf [ 1 ] ; tmp_m [ 102 ] = rtB .
piq3dxclaf [ 2 ] ; tmp_m [ 103 ] = rtB . piq3dxclaf [ 3 ] ; tmp_g [ 26 ] =
104 ; tmp_m [ 104 ] = rtB . ipue3gycmh [ 0 ] ; tmp_m [ 105 ] = rtB .
ipue3gycmh [ 1 ] ; tmp_m [ 106 ] = rtB . ipue3gycmh [ 2 ] ; tmp_m [ 107 ] =
rtB . ipue3gycmh [ 3 ] ; tmp_g [ 27 ] = 108 ; tmp_m [ 108 ] = rtB .
ignnz2fkm0 [ 0 ] ; tmp_m [ 109 ] = rtB . ignnz2fkm0 [ 1 ] ; tmp_m [ 110 ] =
rtB . ignnz2fkm0 [ 2 ] ; tmp_m [ 111 ] = rtB . ignnz2fkm0 [ 3 ] ; tmp_g [ 28
] = 112 ; tmp_m [ 112 ] = rtB . fff0lbkzmp [ 0 ] ; tmp_m [ 113 ] = rtB .
fff0lbkzmp [ 1 ] ; tmp_m [ 114 ] = rtB . fff0lbkzmp [ 2 ] ; tmp_m [ 115 ] =
rtB . fff0lbkzmp [ 3 ] ; tmp_m [ 116 ] = rtB . fff0lbkzmp [ 4 ] ; tmp_m [ 117
] = rtB . fff0lbkzmp [ 5 ] ; tmp_m [ 118 ] = rtB . fff0lbkzmp [ 6 ] ; tmp_m [
119 ] = rtB . fff0lbkzmp [ 7 ] ; tmp_m [ 120 ] = rtB . fff0lbkzmp [ 8 ] ;
tmp_m [ 121 ] = rtB . fff0lbkzmp [ 9 ] ; tmp_m [ 122 ] = rtB . fff0lbkzmp [
10 ] ; tmp_m [ 123 ] = rtB . fff0lbkzmp [ 11 ] ; tmp_m [ 124 ] = rtB .
fff0lbkzmp [ 12 ] ; tmp_m [ 125 ] = rtB . fff0lbkzmp [ 13 ] ; tmp_m [ 126 ] =
rtB . fff0lbkzmp [ 14 ] ; tmp_m [ 127 ] = rtB . fff0lbkzmp [ 15 ] ; tmp_m [
128 ] = rtB . fff0lbkzmp [ 16 ] ; tmp_m [ 129 ] = rtB . fff0lbkzmp [ 17 ] ;
tmp_m [ 130 ] = rtB . fff0lbkzmp [ 18 ] ; tmp_m [ 131 ] = rtB . fff0lbkzmp [
19 ] ; tmp_m [ 132 ] = rtB . fff0lbkzmp [ 20 ] ; tmp_m [ 133 ] = rtB .
fff0lbkzmp [ 21 ] ; tmp_m [ 134 ] = rtB . fff0lbkzmp [ 22 ] ; tmp_m [ 135 ] =
rtB . fff0lbkzmp [ 23 ] ; tmp_m [ 136 ] = rtB . fff0lbkzmp [ 24 ] ; tmp_m [
137 ] = rtB . fff0lbkzmp [ 25 ] ; tmp_m [ 138 ] = rtB . fff0lbkzmp [ 26 ] ;
tmp_m [ 139 ] = rtB . fff0lbkzmp [ 27 ] ; tmp_m [ 140 ] = rtB . fff0lbkzmp [
28 ] ; tmp_m [ 141 ] = rtB . fff0lbkzmp [ 29 ] ; tmp_m [ 142 ] = rtB .
fff0lbkzmp [ 30 ] ; tmp_m [ 143 ] = rtB . fff0lbkzmp [ 31 ] ; tmp_m [ 144 ] =
rtB . fff0lbkzmp [ 32 ] ; tmp_g [ 29 ] = 145 ; simulationData -> mData ->
mInputValues . mN = 145 ; simulationData -> mData -> mInputValues . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 30 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 14 ; simulationData -> mData ->
mOutputs . mX = & rtB . p0ja4kahop [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulator = (
NeslSimulator * ) rtDW . k4xl5tajfk ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . bqvpxns5ic ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; j_k =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData ,
diagnosticManager ) ; if ( j_k != 0 ) { first_output = error_buffer_is_empty
( ssGetErrorStatus ( rtS ) ) ; if ( first_output ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
{ double locTime = ssGetTaskTime ( rtS , 0 ) ; if ( ssGetLogOutput ( rtS ) )
{ rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . dhy1gflovz . LoggedData ,
& locTime , & rtB . p0ja4kahop [ 1 ] ) ; } } { double locTime = ssGetTaskTime
( rtS , 0 ) ; if ( ssGetLogOutput ( rtS ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . ioooez41vt . LoggedData , & locTime , & rtB .
p0ja4kahop [ 5 ] ) ; } } { double locTime = ssGetTaskTime ( rtS , 0 ) ; if (
ssGetLogOutput ( rtS ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW .
g5fjljmrja . LoggedData , & locTime , & rtB . mhcsmwu1e3 [ 1 ] ) ; } } {
double locTime = ssGetTaskTime ( rtS , 0 ) ; if ( ssGetLogOutput ( rtS ) ) {
rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . fnpoyjv2kz . LoggedData , &
locTime , & rtB . mhcsmwu1e3 [ 3 ] ) ; } } { double locTime = ssGetTaskTime (
rtS , 0 ) ; if ( ssGetLogOutput ( rtS ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . kyhpgfkqo4 . LoggedData , & locTime , & rtB .
p0ja4kahop [ 11 ] ) ; } } { double locTime = ssGetTaskTime ( rtS , 0 ) ; if (
ssGetLogOutput ( rtS ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW .
hvfr1q1ras . LoggedData , & locTime , & rtB . p0ja4kahop [ 8 ] ) ; } } {
double locTime = ssGetTaskTime ( rtS , 0 ) ; if ( ssGetLogOutput ( rtS ) ) {
rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . dcawsmu0pp . LoggedData , &
locTime , & rtB . p0ja4kahop [ 0 ] ) ; } } { double locTime = ssGetTaskTime (
rtS , 0 ) ; if ( ssGetLogOutput ( rtS ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . ejumgzbajg . LoggedData , & locTime , & rtB .
mhcsmwu1e3 [ 2 ] ) ; } } { double locTime = ssGetTaskTime ( rtS , 0 ) ; if (
ssGetLogOutput ( rtS ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW .
c2s4lwqau4 . LoggedData , & locTime , & rtB . p0ja4kahop [ 4 ] ) ; } } {
double locTime = ssGetTaskTime ( rtS , 0 ) ; if ( ssGetLogOutput ( rtS ) ) {
rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . mqwcoq30lo . LoggedData , &
locTime , & rtB . mhcsmwu1e3 [ 4 ] ) ; } } rtB . jvhlqsjoa5 = rtP .
IntegralGain_Gain * rtB . kbkny1y404 ; rtB . mxe1jfb20d = rtP .
IntegralGain_Gain_jydit0z4zb * rtB . lji3oip3eh ; { double locTime =
ssGetTaskTime ( rtS , 0 ) ; if ( ssGetLogOutput ( rtS ) ) {
rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . eqll2jpmri . LoggedData , &
locTime , & rtB . mhcsmwu1e3 [ 55 ] ) ; } } { double locTime = ssGetTaskTime
( rtS , 0 ) ; if ( ssGetLogOutput ( rtS ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . dh3n5iflcj . LoggedData , & locTime , & rtB .
mhcsmwu1e3 [ 51 ] ) ; } } { double locTime = ssGetTaskTime ( rtS , 0 ) ; if (
ssGetLogOutput ( rtS ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW .
edkohxzpet . LoggedData , & locTime , & rtB . mhcsmwu1e3 [ 48 ] ) ; } } {
double locTime = ssGetTaskTime ( rtS , 0 ) ; if ( ssGetLogOutput ( rtS ) ) {
rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . hy3u52fqzo . LoggedData , &
locTime , & rtB . mhcsmwu1e3 [ 44 ] ) ; } } { double locTime = ssGetTaskTime
( rtS , 0 ) ; if ( ssGetLogOutput ( rtS ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . ky34kodbzh . LoggedData , & locTime , & rtB .
mhcsmwu1e3 [ 62 ] ) ; } } { double locTime = ssGetTaskTime ( rtS , 0 ) ; if (
ssGetLogOutput ( rtS ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW .
eo2mbxwqtp . LoggedData , & locTime , & rtB . mhcsmwu1e3 [ 58 ] ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { real_T HoldSine ;
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { HoldSine = rtDW . bui11fpqhc ; rtDW .
bui11fpqhc = rtDW . bui11fpqhc * rtP . SineWave4_HCos + rtDW . m33n3pbjwx *
rtP . SineWave4_Hsin ; rtDW . m33n3pbjwx = rtDW . m33n3pbjwx * rtP .
SineWave4_HCos - HoldSine * rtP . SineWave4_Hsin ; } UNUSED_PARAMETER ( tid )
; } void MdlDerivatives ( void ) { NeslSimulationData * simulationData ;
real_T time ; boolean_T tmp ; real_T tmp_p [ 112 ] ; int_T tmp_e [ 29 ] ;
NeslSimulator * simulator ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char * msg ; XDot *
_rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot -> oleka5vmsg [
0 ] = rtX . oleka5vmsg [ 1 ] ; _rtXdot -> oleka5vmsg [ 1 ] = ( ( rtB .
i5pngojnqr [ 0 ] - rtX . oleka5vmsg [ 0 ] ) * 1000.0 - 2.0 * rtX . oleka5vmsg
[ 1 ] ) * 1000.0 ; _rtXdot -> gmsmwr3cc0 [ 0 ] = rtX . gmsmwr3cc0 [ 1 ] ;
_rtXdot -> gmsmwr3cc0 [ 1 ] = ( ( rtB . i5pngojnqr [ 1 ] - rtX . gmsmwr3cc0 [
0 ] ) * 1000.0 - 2.0 * rtX . gmsmwr3cc0 [ 1 ] ) * 1000.0 ; _rtXdot ->
lvikcw4pct [ 0 ] = rtX . lvikcw4pct [ 1 ] ; _rtXdot -> lvikcw4pct [ 1 ] = ( (
rtB . i5pngojnqr [ 2 ] - rtX . lvikcw4pct [ 0 ] ) * 1000.0 - 2.0 * rtX .
lvikcw4pct [ 1 ] ) * 1000.0 ; _rtXdot -> p0asllibcr [ 0 ] = rtX . p0asllibcr
[ 1 ] ; _rtXdot -> p0asllibcr [ 1 ] = ( ( rtB . gcpbvidrnc [ 0 ] - rtX .
p0asllibcr [ 0 ] ) * 1000.0 - 2.0 * rtX . p0asllibcr [ 1 ] ) * 1000.0 ;
_rtXdot -> mrf5gvci5v [ 0 ] = rtX . mrf5gvci5v [ 1 ] ; _rtXdot -> mrf5gvci5v
[ 1 ] = ( ( rtB . gcpbvidrnc [ 1 ] - rtX . mrf5gvci5v [ 0 ] ) * 1000.0 - 2.0
* rtX . mrf5gvci5v [ 1 ] ) * 1000.0 ; _rtXdot -> mbimce0fqa [ 0 ] = rtX .
mbimce0fqa [ 1 ] ; _rtXdot -> mbimce0fqa [ 1 ] = ( ( rtB . gcpbvidrnc [ 2 ] -
rtX . mbimce0fqa [ 0 ] ) * 1000.0 - 2.0 * rtX . mbimce0fqa [ 1 ] ) * 1000.0 ;
simulationData = ( NeslSimulationData * ) rtDW . na53wmkywe ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 33 ;
simulationData -> mData -> mContStates . mX = ( real_T * ) & rtX . dplrnvasdu
; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = NULL ; simulationData -> mData -> mModeVector . mN = 0
; simulationData -> mData -> mModeVector . mX = NULL ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . a2a4hpyrz2 [ 0 ] ; tmp_p [ 1 ] = rtB . a2a4hpyrz2 [ 1 ] ;
tmp_p [ 2 ] = rtB . a2a4hpyrz2 [ 2 ] ; tmp_p [ 3 ] = rtB . a2a4hpyrz2 [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . giy1h5ky1s [ 0 ] ; tmp_p [ 5 ] = rtB .
giy1h5ky1s [ 1 ] ; tmp_p [ 6 ] = rtB . giy1h5ky1s [ 2 ] ; tmp_p [ 7 ] = rtB .
giy1h5ky1s [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . jd3yc3sozl [ 0 ] ;
tmp_p [ 9 ] = rtB . jd3yc3sozl [ 1 ] ; tmp_p [ 10 ] = rtB . jd3yc3sozl [ 2 ]
; tmp_p [ 11 ] = rtB . jd3yc3sozl [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . cpcxsiqkk2 [ 0 ] ; tmp_p [ 13 ] = rtB . cpcxsiqkk2 [ 1 ] ; tmp_p [ 14 ]
= rtB . cpcxsiqkk2 [ 2 ] ; tmp_p [ 15 ] = rtB . cpcxsiqkk2 [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = rtB . anyhha524k [ 0 ] ; tmp_p [ 17 ] = rtB .
anyhha524k [ 1 ] ; tmp_p [ 18 ] = rtB . anyhha524k [ 2 ] ; tmp_p [ 19 ] = rtB
. anyhha524k [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB . avffaxkxts [ 0 ]
; tmp_p [ 21 ] = rtB . avffaxkxts [ 1 ] ; tmp_p [ 22 ] = rtB . avffaxkxts [ 2
] ; tmp_p [ 23 ] = rtB . avffaxkxts [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] =
rtB . lron4andxg [ 0 ] ; tmp_p [ 25 ] = rtB . lron4andxg [ 1 ] ; tmp_p [ 26 ]
= rtB . lron4andxg [ 2 ] ; tmp_p [ 27 ] = rtB . lron4andxg [ 3 ] ; tmp_e [ 7
] = 28 ; tmp_p [ 28 ] = rtB . aopnf0g0rt [ 0 ] ; tmp_p [ 29 ] = rtB .
aopnf0g0rt [ 1 ] ; tmp_p [ 30 ] = rtB . aopnf0g0rt [ 2 ] ; tmp_p [ 31 ] = rtB
. aopnf0g0rt [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] = rtB . gck1x5c55z [ 0 ]
; tmp_p [ 33 ] = rtB . gck1x5c55z [ 1 ] ; tmp_p [ 34 ] = rtB . gck1x5c55z [ 2
] ; tmp_p [ 35 ] = rtB . gck1x5c55z [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] =
rtB . lneeaq3ggn [ 0 ] ; tmp_p [ 37 ] = rtB . lneeaq3ggn [ 1 ] ; tmp_p [ 38 ]
= rtB . lneeaq3ggn [ 2 ] ; tmp_p [ 39 ] = rtB . lneeaq3ggn [ 3 ] ; tmp_e [ 10
] = 40 ; tmp_p [ 40 ] = rtB . jzvmovor4f [ 0 ] ; tmp_p [ 41 ] = rtB .
jzvmovor4f [ 1 ] ; tmp_p [ 42 ] = rtB . jzvmovor4f [ 2 ] ; tmp_p [ 43 ] = rtB
. jzvmovor4f [ 3 ] ; tmp_e [ 11 ] = 44 ; tmp_p [ 44 ] = rtB . ngt2nzthph [ 0
] ; tmp_p [ 45 ] = rtB . ngt2nzthph [ 1 ] ; tmp_p [ 46 ] = rtB . ngt2nzthph [
2 ] ; tmp_p [ 47 ] = rtB . ngt2nzthph [ 3 ] ; tmp_e [ 12 ] = 48 ; tmp_p [ 48
] = rtB . oagxdgsciz [ 0 ] ; tmp_p [ 49 ] = rtB . oagxdgsciz [ 1 ] ; tmp_p [
50 ] = rtB . oagxdgsciz [ 2 ] ; tmp_p [ 51 ] = rtB . oagxdgsciz [ 3 ] ; tmp_e
[ 13 ] = 52 ; tmp_p [ 52 ] = rtB . byrhxyhu2y [ 0 ] ; tmp_p [ 53 ] = rtB .
byrhxyhu2y [ 1 ] ; tmp_p [ 54 ] = rtB . byrhxyhu2y [ 2 ] ; tmp_p [ 55 ] = rtB
. byrhxyhu2y [ 3 ] ; tmp_e [ 14 ] = 56 ; tmp_p [ 56 ] = rtB . iegxcysk54 [ 0
] ; tmp_p [ 57 ] = rtB . iegxcysk54 [ 1 ] ; tmp_p [ 58 ] = rtB . iegxcysk54 [
2 ] ; tmp_p [ 59 ] = rtB . iegxcysk54 [ 3 ] ; tmp_e [ 15 ] = 60 ; tmp_p [ 60
] = rtB . bhfomtbk3s [ 0 ] ; tmp_p [ 61 ] = rtB . bhfomtbk3s [ 1 ] ; tmp_p [
62 ] = rtB . bhfomtbk3s [ 2 ] ; tmp_p [ 63 ] = rtB . bhfomtbk3s [ 3 ] ; tmp_e
[ 16 ] = 64 ; tmp_p [ 64 ] = rtB . gstkjtwy5v [ 0 ] ; tmp_p [ 65 ] = rtB .
gstkjtwy5v [ 1 ] ; tmp_p [ 66 ] = rtB . gstkjtwy5v [ 2 ] ; tmp_p [ 67 ] = rtB
. gstkjtwy5v [ 3 ] ; tmp_e [ 17 ] = 68 ; tmp_p [ 68 ] = rtB . lmqf1lcrpl [ 0
] ; tmp_p [ 69 ] = rtB . lmqf1lcrpl [ 1 ] ; tmp_p [ 70 ] = rtB . lmqf1lcrpl [
2 ] ; tmp_p [ 71 ] = rtB . lmqf1lcrpl [ 3 ] ; tmp_e [ 18 ] = 72 ; tmp_p [ 72
] = rtB . ig3bwkisun [ 0 ] ; tmp_p [ 73 ] = rtB . ig3bwkisun [ 1 ] ; tmp_p [
74 ] = rtB . ig3bwkisun [ 2 ] ; tmp_p [ 75 ] = rtB . ig3bwkisun [ 3 ] ; tmp_e
[ 19 ] = 76 ; tmp_p [ 76 ] = rtB . nyjkrhoabu [ 0 ] ; tmp_p [ 77 ] = rtB .
nyjkrhoabu [ 1 ] ; tmp_p [ 78 ] = rtB . nyjkrhoabu [ 2 ] ; tmp_p [ 79 ] = rtB
. nyjkrhoabu [ 3 ] ; tmp_e [ 20 ] = 80 ; tmp_p [ 80 ] = rtB . nskx41j5ik [ 0
] ; tmp_p [ 81 ] = rtB . nskx41j5ik [ 1 ] ; tmp_p [ 82 ] = rtB . nskx41j5ik [
2 ] ; tmp_p [ 83 ] = rtB . nskx41j5ik [ 3 ] ; tmp_e [ 21 ] = 84 ; tmp_p [ 84
] = rtB . o31xe204ix [ 0 ] ; tmp_p [ 85 ] = rtB . o31xe204ix [ 1 ] ; tmp_p [
86 ] = rtB . o31xe204ix [ 2 ] ; tmp_p [ 87 ] = rtB . o31xe204ix [ 3 ] ; tmp_e
[ 22 ] = 88 ; tmp_p [ 88 ] = rtB . c11psdq1sa [ 0 ] ; tmp_p [ 89 ] = rtB .
c11psdq1sa [ 1 ] ; tmp_p [ 90 ] = rtB . c11psdq1sa [ 2 ] ; tmp_p [ 91 ] = rtB
. c11psdq1sa [ 3 ] ; tmp_e [ 23 ] = 92 ; tmp_p [ 92 ] = rtB . iejevtu2b2 [ 0
] ; tmp_p [ 93 ] = rtB . iejevtu2b2 [ 1 ] ; tmp_p [ 94 ] = rtB . iejevtu2b2 [
2 ] ; tmp_p [ 95 ] = rtB . iejevtu2b2 [ 3 ] ; tmp_e [ 24 ] = 96 ; tmp_p [ 96
] = rtB . nptbn3r2vs [ 0 ] ; tmp_p [ 97 ] = rtB . nptbn3r2vs [ 1 ] ; tmp_p [
98 ] = rtB . nptbn3r2vs [ 2 ] ; tmp_p [ 99 ] = rtB . nptbn3r2vs [ 3 ] ; tmp_e
[ 25 ] = 100 ; tmp_p [ 100 ] = rtB . piq3dxclaf [ 0 ] ; tmp_p [ 101 ] = rtB .
piq3dxclaf [ 1 ] ; tmp_p [ 102 ] = rtB . piq3dxclaf [ 2 ] ; tmp_p [ 103 ] =
rtB . piq3dxclaf [ 3 ] ; tmp_e [ 26 ] = 104 ; tmp_p [ 104 ] = rtB .
ipue3gycmh [ 0 ] ; tmp_p [ 105 ] = rtB . ipue3gycmh [ 1 ] ; tmp_p [ 106 ] =
rtB . ipue3gycmh [ 2 ] ; tmp_p [ 107 ] = rtB . ipue3gycmh [ 3 ] ; tmp_e [ 27
] = 108 ; tmp_p [ 108 ] = rtB . ignnz2fkm0 [ 0 ] ; tmp_p [ 109 ] = rtB .
ignnz2fkm0 [ 1 ] ; tmp_p [ 110 ] = rtB . ignnz2fkm0 [ 2 ] ; tmp_p [ 111 ] =
rtB . ignnz2fkm0 [ 3 ] ; tmp_e [ 28 ] = 112 ; simulationData -> mData ->
mInputValues . mN = 112 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 29 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 33 ; simulationData -> mData -> mDx .
mX = ( real_T * ) & _rtXdot -> dplrnvasdu ; simulator = ( NeslSimulator * )
rtDW . f2pkiziunv ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
jhdycf30bg ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( simulator ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } { ( ( XDot * ) ssGetdX ( rtS ) ) -> n3q0hefys4 = rtB . jvhlqsjoa5 ; } {
( ( XDot * ) ssGetdX ( rtS ) ) -> gigke2wig1 = rtB . kdtqmrecw1 ; } _rtXdot
-> f5zro03fnf [ 0 ] = rtX . f5zro03fnf [ 1 ] ; _rtXdot -> f5zro03fnf [ 1 ] =
( ( rtB . hih35pqonz - rtX . f5zro03fnf [ 0 ] ) * 1000.0 - 2.0 * rtX .
f5zro03fnf [ 1 ] ) * 1000.0 ; { ( ( XDot * ) ssGetdX ( rtS ) ) -> i4huqr2jqy
= rtB . mxe1jfb20d ; } { ( ( XDot * ) ssGetdX ( rtS ) ) -> p1coydakrg = rtB .
czawg3xijz ; } _rtXdot -> okqmbmuryh [ 0 ] = rtX . okqmbmuryh [ 1 ] ; _rtXdot
-> okqmbmuryh [ 1 ] = ( ( rtB . agaj15tfxi - rtX . okqmbmuryh [ 0 ] ) *
1000.0 - 2.0 * rtX . okqmbmuryh [ 1 ] ) * 1000.0 ; _rtXdot -> dmckm0h0rt [ 0
] = rtX . dmckm0h0rt [ 1 ] ; _rtXdot -> dmckm0h0rt [ 1 ] = ( ( rtB .
izulu4xivv - rtX . dmckm0h0rt [ 0 ] ) * 1000.0 - 2.0 * rtX . dmckm0h0rt [ 1 ]
) * 1000.0 ; _rtXdot -> f02hzaguhy [ 0 ] = rtX . f02hzaguhy [ 1 ] ; _rtXdot
-> f02hzaguhy [ 1 ] = ( ( rtP . Constant3_Value - rtX . f02hzaguhy [ 0 ] ) *
10000.0 - 2.0 * rtX . f02hzaguhy [ 1 ] ) * 10000.0 ; } void MdlProjection (
void ) { NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ;
real_T tmp_p [ 112 ] ; int_T tmp_e [ 29 ] ; NeslSimulator * simulator ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_i ; char * msg ; simulationData = ( NeslSimulationData * ) rtDW
. na53wmkywe ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 33 ; simulationData -> mData -> mContStates . mX
= ( real_T * ) & rtX . dplrnvasdu ; simulationData -> mData -> mDiscStates .
mN = 0 ; simulationData -> mData -> mDiscStates . mX = NULL ; simulationData
-> mData -> mModeVector . mN = 0 ; simulationData -> mData -> mModeVector .
mX = NULL ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
a2a4hpyrz2 [ 0 ] ; tmp_p [ 1 ] = rtB . a2a4hpyrz2 [ 1 ] ; tmp_p [ 2 ] = rtB .
a2a4hpyrz2 [ 2 ] ; tmp_p [ 3 ] = rtB . a2a4hpyrz2 [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . giy1h5ky1s [ 0 ] ; tmp_p [ 5 ] = rtB . giy1h5ky1s [ 1 ] ;
tmp_p [ 6 ] = rtB . giy1h5ky1s [ 2 ] ; tmp_p [ 7 ] = rtB . giy1h5ky1s [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . jd3yc3sozl [ 0 ] ; tmp_p [ 9 ] = rtB .
jd3yc3sozl [ 1 ] ; tmp_p [ 10 ] = rtB . jd3yc3sozl [ 2 ] ; tmp_p [ 11 ] = rtB
. jd3yc3sozl [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . cpcxsiqkk2 [ 0 ]
; tmp_p [ 13 ] = rtB . cpcxsiqkk2 [ 1 ] ; tmp_p [ 14 ] = rtB . cpcxsiqkk2 [ 2
] ; tmp_p [ 15 ] = rtB . cpcxsiqkk2 [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . anyhha524k [ 0 ] ; tmp_p [ 17 ] = rtB . anyhha524k [ 1 ] ; tmp_p [ 18 ]
= rtB . anyhha524k [ 2 ] ; tmp_p [ 19 ] = rtB . anyhha524k [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . avffaxkxts [ 0 ] ; tmp_p [ 21 ] = rtB .
avffaxkxts [ 1 ] ; tmp_p [ 22 ] = rtB . avffaxkxts [ 2 ] ; tmp_p [ 23 ] = rtB
. avffaxkxts [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = rtB . lron4andxg [ 0 ]
; tmp_p [ 25 ] = rtB . lron4andxg [ 1 ] ; tmp_p [ 26 ] = rtB . lron4andxg [ 2
] ; tmp_p [ 27 ] = rtB . lron4andxg [ 3 ] ; tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] =
rtB . aopnf0g0rt [ 0 ] ; tmp_p [ 29 ] = rtB . aopnf0g0rt [ 1 ] ; tmp_p [ 30 ]
= rtB . aopnf0g0rt [ 2 ] ; tmp_p [ 31 ] = rtB . aopnf0g0rt [ 3 ] ; tmp_e [ 8
] = 32 ; tmp_p [ 32 ] = rtB . gck1x5c55z [ 0 ] ; tmp_p [ 33 ] = rtB .
gck1x5c55z [ 1 ] ; tmp_p [ 34 ] = rtB . gck1x5c55z [ 2 ] ; tmp_p [ 35 ] = rtB
. gck1x5c55z [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] = rtB . lneeaq3ggn [ 0 ]
; tmp_p [ 37 ] = rtB . lneeaq3ggn [ 1 ] ; tmp_p [ 38 ] = rtB . lneeaq3ggn [ 2
] ; tmp_p [ 39 ] = rtB . lneeaq3ggn [ 3 ] ; tmp_e [ 10 ] = 40 ; tmp_p [ 40 ]
= rtB . jzvmovor4f [ 0 ] ; tmp_p [ 41 ] = rtB . jzvmovor4f [ 1 ] ; tmp_p [ 42
] = rtB . jzvmovor4f [ 2 ] ; tmp_p [ 43 ] = rtB . jzvmovor4f [ 3 ] ; tmp_e [
11 ] = 44 ; tmp_p [ 44 ] = rtB . ngt2nzthph [ 0 ] ; tmp_p [ 45 ] = rtB .
ngt2nzthph [ 1 ] ; tmp_p [ 46 ] = rtB . ngt2nzthph [ 2 ] ; tmp_p [ 47 ] = rtB
. ngt2nzthph [ 3 ] ; tmp_e [ 12 ] = 48 ; tmp_p [ 48 ] = rtB . oagxdgsciz [ 0
] ; tmp_p [ 49 ] = rtB . oagxdgsciz [ 1 ] ; tmp_p [ 50 ] = rtB . oagxdgsciz [
2 ] ; tmp_p [ 51 ] = rtB . oagxdgsciz [ 3 ] ; tmp_e [ 13 ] = 52 ; tmp_p [ 52
] = rtB . byrhxyhu2y [ 0 ] ; tmp_p [ 53 ] = rtB . byrhxyhu2y [ 1 ] ; tmp_p [
54 ] = rtB . byrhxyhu2y [ 2 ] ; tmp_p [ 55 ] = rtB . byrhxyhu2y [ 3 ] ; tmp_e
[ 14 ] = 56 ; tmp_p [ 56 ] = rtB . iegxcysk54 [ 0 ] ; tmp_p [ 57 ] = rtB .
iegxcysk54 [ 1 ] ; tmp_p [ 58 ] = rtB . iegxcysk54 [ 2 ] ; tmp_p [ 59 ] = rtB
. iegxcysk54 [ 3 ] ; tmp_e [ 15 ] = 60 ; tmp_p [ 60 ] = rtB . bhfomtbk3s [ 0
] ; tmp_p [ 61 ] = rtB . bhfomtbk3s [ 1 ] ; tmp_p [ 62 ] = rtB . bhfomtbk3s [
2 ] ; tmp_p [ 63 ] = rtB . bhfomtbk3s [ 3 ] ; tmp_e [ 16 ] = 64 ; tmp_p [ 64
] = rtB . gstkjtwy5v [ 0 ] ; tmp_p [ 65 ] = rtB . gstkjtwy5v [ 1 ] ; tmp_p [
66 ] = rtB . gstkjtwy5v [ 2 ] ; tmp_p [ 67 ] = rtB . gstkjtwy5v [ 3 ] ; tmp_e
[ 17 ] = 68 ; tmp_p [ 68 ] = rtB . lmqf1lcrpl [ 0 ] ; tmp_p [ 69 ] = rtB .
lmqf1lcrpl [ 1 ] ; tmp_p [ 70 ] = rtB . lmqf1lcrpl [ 2 ] ; tmp_p [ 71 ] = rtB
. lmqf1lcrpl [ 3 ] ; tmp_e [ 18 ] = 72 ; tmp_p [ 72 ] = rtB . ig3bwkisun [ 0
] ; tmp_p [ 73 ] = rtB . ig3bwkisun [ 1 ] ; tmp_p [ 74 ] = rtB . ig3bwkisun [
2 ] ; tmp_p [ 75 ] = rtB . ig3bwkisun [ 3 ] ; tmp_e [ 19 ] = 76 ; tmp_p [ 76
] = rtB . nyjkrhoabu [ 0 ] ; tmp_p [ 77 ] = rtB . nyjkrhoabu [ 1 ] ; tmp_p [
78 ] = rtB . nyjkrhoabu [ 2 ] ; tmp_p [ 79 ] = rtB . nyjkrhoabu [ 3 ] ; tmp_e
[ 20 ] = 80 ; tmp_p [ 80 ] = rtB . nskx41j5ik [ 0 ] ; tmp_p [ 81 ] = rtB .
nskx41j5ik [ 1 ] ; tmp_p [ 82 ] = rtB . nskx41j5ik [ 2 ] ; tmp_p [ 83 ] = rtB
. nskx41j5ik [ 3 ] ; tmp_e [ 21 ] = 84 ; tmp_p [ 84 ] = rtB . o31xe204ix [ 0
] ; tmp_p [ 85 ] = rtB . o31xe204ix [ 1 ] ; tmp_p [ 86 ] = rtB . o31xe204ix [
2 ] ; tmp_p [ 87 ] = rtB . o31xe204ix [ 3 ] ; tmp_e [ 22 ] = 88 ; tmp_p [ 88
] = rtB . c11psdq1sa [ 0 ] ; tmp_p [ 89 ] = rtB . c11psdq1sa [ 1 ] ; tmp_p [
90 ] = rtB . c11psdq1sa [ 2 ] ; tmp_p [ 91 ] = rtB . c11psdq1sa [ 3 ] ; tmp_e
[ 23 ] = 92 ; tmp_p [ 92 ] = rtB . iejevtu2b2 [ 0 ] ; tmp_p [ 93 ] = rtB .
iejevtu2b2 [ 1 ] ; tmp_p [ 94 ] = rtB . iejevtu2b2 [ 2 ] ; tmp_p [ 95 ] = rtB
. iejevtu2b2 [ 3 ] ; tmp_e [ 24 ] = 96 ; tmp_p [ 96 ] = rtB . nptbn3r2vs [ 0
] ; tmp_p [ 97 ] = rtB . nptbn3r2vs [ 1 ] ; tmp_p [ 98 ] = rtB . nptbn3r2vs [
2 ] ; tmp_p [ 99 ] = rtB . nptbn3r2vs [ 3 ] ; tmp_e [ 25 ] = 100 ; tmp_p [
100 ] = rtB . piq3dxclaf [ 0 ] ; tmp_p [ 101 ] = rtB . piq3dxclaf [ 1 ] ;
tmp_p [ 102 ] = rtB . piq3dxclaf [ 2 ] ; tmp_p [ 103 ] = rtB . piq3dxclaf [ 3
] ; tmp_e [ 26 ] = 104 ; tmp_p [ 104 ] = rtB . ipue3gycmh [ 0 ] ; tmp_p [ 105
] = rtB . ipue3gycmh [ 1 ] ; tmp_p [ 106 ] = rtB . ipue3gycmh [ 2 ] ; tmp_p [
107 ] = rtB . ipue3gycmh [ 3 ] ; tmp_e [ 27 ] = 108 ; tmp_p [ 108 ] = rtB .
ignnz2fkm0 [ 0 ] ; tmp_p [ 109 ] = rtB . ignnz2fkm0 [ 1 ] ; tmp_p [ 110 ] =
rtB . ignnz2fkm0 [ 2 ] ; tmp_p [ 111 ] = rtB . ignnz2fkm0 [ 3 ] ; tmp_e [ 28
] = 112 ; simulationData -> mData -> mInputValues . mN = 112 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 29 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulator = ( NeslSimulator * ) rtDW . f2pkiziunv ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . jhdycf30bg ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( simulator , NESL_SIM_PROJECTION ,
simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
} void MdlZeroCrossings ( void ) { ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> p13iog4sc1 = rtB .
a4eplwnvip - rtP . Saturate_UpperSat ; _rtZCSV -> bishprcmq4 = rtB .
a4eplwnvip - rtP . Saturate_LowerSat ; _rtZCSV -> in1bbox021 = rtB .
ggozmdzmm5 - rtP . Saturate_UpperSat_fewg3kv1xw ; _rtZCSV -> k5wx4sxby4 = rtB
. ggozmdzmm5 - rtP . Saturate_LowerSat_l0zqlb52y1 ; } void MdlTerminate (
void ) { rt_FREE ( rtDW . fafkv3xcrk . RSimInfoPtr ) ; rt_FREE ( rtDW .
l1fwndj2zw . RSimInfoPtr ) ; rt_FREE ( rtDW . lpq22eshns . RSimInfoPtr ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . jhdycf30bg
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . na53wmkywe
) ; nesl_erase_simulator ( "Walk_Sim4/Gait Emulator/Solver Configuration" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . m55fft4qhd
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . fmfjt51fiu
) ; nesl_erase_simulator ( "Walk_Sim4/Gait Emulator/Solver Configuration" ) ;
rt_FREE ( rtDW . h2mcpex5lc . RSimInfoPtr ) ; neu_destroy_diagnostic_manager
( ( NeuDiagnosticManager * ) rtDW . bqvpxns5ic ) ;
nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . aiac20tcs1 ) ;
nesl_erase_simulator ( "Walk_Sim4/Gait Emulator/Solver Configuration" ) ; }
void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 57 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
4 ) ; ssSetNumBlocks ( rtS , 552 ) ; ssSetNumBlockIO ( rtS , 66 ) ;
ssSetNumBlockParams ( rtS , 4560 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 0.001 ) ; ssSetSampleTime ( rtS , 3 , 0.1 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; ssSetOffsetTime ( rtS , 3 , 0.0 ) ; }
void raccel_set_checksum ( SimStruct * rtS ) { ssSetChecksumVal ( rtS , 0 ,
1872870915U ) ; ssSetChecksumVal ( rtS , 1 , 323335718U ) ; ssSetChecksumVal
( rtS , 2 , 3744814416U ) ; ssSetChecksumVal ( rtS , 3 , 3555727120U ) ; }
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } ssSetDefaultParam ( rtS , ( real_T * ) & rtP ) ; { real_T * x = (
real_T * ) & rtX ; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * )
x , 0 , sizeof ( X ) ) ; } { void * dwork = ( void * ) & rtDW ;
ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW )
) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) &
dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ;
dtInfo . numDataTypes = 14 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ]
; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . B = &
rtBTransTable ; dtInfo . P = & rtPTransTable ; }
Walk_Sim4_InitializeDataMapInfo ( rtS ) ; ssSetIsRapidAcceleratorActive ( rtS
, true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "Walk_Sim4" ) ; ssSetPath
( rtS , "Walk_Sim4" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 10.0
) ; { static RTWLogInfo rt_DataLoggingInfo ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 2 , 2
, 2 , 2 , 2 , 2 , 4 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 1 , 1 , 2 , 2
, 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 2 , 1 , 1 , 2 , 2 ,
2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 } ; static int_T rt_LoggedStateDimensions [ ] = { 2 , 2 , 2 , 2 , 2 , 2 , 4
, 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 1 , 1 , 2 , 2 , 2 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 2 , 1 , 1 , 2 , 2 , 2 , 2 , 2 , 2 , 2 ,
2 , 2 , 2 , 2 , 2 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static const char_T * rt_LoggedStateLabels
[ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "discrete" , "discrete" , "discrete" , "discrete" , "discrete" ,
"discrete" , "discrete" , "discrete" , "discrete" , "discrete" , "discrete" ,
"discrete" , "discrete" , "discrete" , "discrete" , "discrete" , "discrete" ,
"discrete" , "discrete" , "discrete" , "discrete" , "discrete" , "discrete" ,
"discrete" , "discrete" , "discrete" , "discrete" , "discrete" } ; static
const char_T * rt_LoggedStateBlockNames [ ] = {
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_8_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ,
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/simple_shin_1_RIGID/6-DOF Joint"
,
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/simple_shin_1_RIGID/6-DOF Joint"
, "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/Revolute9" ,
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/Revolute9" ,
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/Revolute8" ,
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/Revolute8" ,
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/Revolute5" ,
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/Revolute5" ,
"Walk_Sim4/Gait Emulator/knee /Revolute11" ,
"Walk_Sim4/Gait Emulator/knee /Revolute11" ,
"Walk_Sim4/Gait Emulator/Walkway & force plate/Force Plate/Revolute6" ,
"Walk_Sim4/Gait Emulator/Walkway & force plate/Force Plate/Revolute6" ,
"Walk_Sim4/Gait Emulator/Walkway & force plate/Force Plate/Revolute7" ,
"Walk_Sim4/Gait Emulator/Walkway & force plate/Force Plate/Revolute7" ,
"Walk_Sim4/Gait Emulator/prismatic frame/Prismatic1" ,
"Walk_Sim4/Gait Emulator/prismatic frame/Prismatic1" ,
"Walk_Sim4/Gait Emulator/prismatic frame/Prismatic2" ,
"Walk_Sim4/Gait Emulator/prismatic frame/Prismatic2" ,
"Walk_Sim4/Gait Emulator/prismatic frame/Prismatic" ,
"Walk_Sim4/Gait Emulator/prismatic frame/Prismatic" ,
"Walk_Sim4/Gait Emulator/prismatic frame/Prismatic6" ,
"Walk_Sim4/Gait Emulator/prismatic frame/Prismatic6" ,
"Walk_Sim4/Gait Emulator/prismatic frame/Prismatic Joint" ,
"Walk_Sim4/Gait Emulator/prismatic frame/Prismatic Joint" ,
"Walk_Sim4/Gait Emulator/knee /Revolute10" ,
"Walk_Sim4/Gait Emulator/knee /Revolute10" ,
"Walk_Sim4/Gait Emulator/prismatic frame/Planar Joint" ,
"Walk_Sim4/Gait Emulator/prismatic frame/Planar Joint" ,
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Integrator"
, "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller1/Filter" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Integrator"
, "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/PID Controller/Filter" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_21_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_22_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_8_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_10_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_11_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_12_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_2" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_3" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_21_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_22_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_14_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_15_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_16_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_13_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_13_1_2" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_13_1_3" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_18_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_19_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_20_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_17_1_1" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_17_1_2" ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration/EVAL_KEY/INPUT_17_1_3" } ;
static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" , ""
,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.x6_DOF_Joint.S.Q"
,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.x6_DOF_Joint.S.w"
, "Gait_Emulator.Hip_and_ankle_prosthesis.Revolute9.Rz.q" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.Revolute9.Rz.w" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.Revolute8.Rz.q" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.Revolute8.Rz.w" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.Revolute5.Rz.q" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.Revolute5.Rz.w" ,
"Gait_Emulator.knee.Revolute11.Rz.q" , "Gait_Emulator.knee.Revolute11.Rz.w" ,
"Gait_Emulator.Walkway_force_plate.Force_Plate.Revolute6.Rz.q" ,
"Gait_Emulator.Walkway_force_plate.Force_Plate.Revolute6.Rz.w" ,
"Gait_Emulator.Walkway_force_plate.Force_Plate.Revolute7.Rz.q" ,
"Gait_Emulator.Walkway_force_plate.Force_Plate.Revolute7.Rz.w" ,
"Gait_Emulator.prismatic_frame.Prismatic1.Pz.p" ,
"Gait_Emulator.prismatic_frame.Prismatic1.Pz.v" ,
"Gait_Emulator.prismatic_frame.Prismatic2.Pz.p" ,
"Gait_Emulator.prismatic_frame.Prismatic2.Pz.v" ,
"Gait_Emulator.prismatic_frame.Prismatic.Pz.p" ,
"Gait_Emulator.prismatic_frame.Prismatic.Pz.v" ,
"Gait_Emulator.prismatic_frame.Prismatic6.Pz.p" ,
"Gait_Emulator.prismatic_frame.Prismatic6.Pz.v" ,
"Gait_Emulator.prismatic_frame.Prismatic_Joint.Pz.p" ,
"Gait_Emulator.prismatic_frame.Prismatic_Joint.Pz.v" ,
"Gait_Emulator.knee.Revolute10.Rz.q" , "Gait_Emulator.knee.Revolute10.Rz.w" ,
"Gait_Emulator.prismatic_frame.Planar_Joint.Rz.q" ,
"Gait_Emulator.prismatic_frame.Planar_Joint.Rz.w" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" }
; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert
[ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 70 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , { rt_LoggedStateLabels } , ( NULL )
, ( NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , { rt_LoggedStateNames
} , rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 70 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . oleka5vmsg [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . gmsmwr3cc0 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . lvikcw4pct [ 0 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . p0asllibcr [ 0 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . mrf5gvci5v [ 0 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . mbimce0fqa [ 0 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . dplrnvasdu [ 0 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . dplrnvasdu [ 4 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . dplrnvasdu [ 7 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . dplrnvasdu [ 8 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . dplrnvasdu [ 9 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . dplrnvasdu [ 10 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . dplrnvasdu [ 11 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . dplrnvasdu [ 12 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . dplrnvasdu [ 13 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . dplrnvasdu [ 14 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . dplrnvasdu [ 15 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . dplrnvasdu [ 16 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . dplrnvasdu [ 17 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . dplrnvasdu [ 18 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . dplrnvasdu [ 19 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . dplrnvasdu [ 20 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . dplrnvasdu [ 21 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . dplrnvasdu [ 22 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . dplrnvasdu [ 23 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . dplrnvasdu [ 24 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . dplrnvasdu [ 25 ] ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . dplrnvasdu [ 26 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . dplrnvasdu [ 27 ] ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . dplrnvasdu [ 28 ] ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . dplrnvasdu [ 29 ] ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . dplrnvasdu [ 30 ] ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . dplrnvasdu [ 31 ] ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . dplrnvasdu [ 32 ] ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . n3q0hefys4 ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . gigke2wig1 ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . f5zro03fnf [ 0 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . i4huqr2jqy ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . p1coydakrg ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . okqmbmuryh [ 0 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . dmckm0h0rt [ 0 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . f02hzaguhy [ 0 ] ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtDW . lz43hau3ig ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtDW . gzrlfqcepc ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtDW . fcwoczvcvk ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtDW . fmxt4x3vzi ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtDW . ehes2w3gkx ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtDW . b0jhzc35v0 ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtDW . ovtgirnpkm ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtDW . flrsvcdg0r ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) rtDW . m4y5z5rmyz ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) rtDW . lzspqinia5 ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) rtDW . buw4n1rvum ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) rtDW . gpk4s0onyl ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) rtDW . icxehzbrhz ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) rtDW . ig241xud5a ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtDW . ep3taliqrv ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtDW . fgvya54ooh ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) rtDW . gda0flyxdj ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) rtDW . m53yfro10x ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) rtDW . dgj13ve15g ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) rtDW . ahznleminz ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) rtDW . jlqgfyvlhr ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) rtDW . e5n0z3marz ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) rtDW . iiohjssyew ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) rtDW . hikj0frbs2 ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) rtDW . hyzyueow4e ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) rtDW . ipc5v31ie1 ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) rtDW . fntjzpwqp4 ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) rtDW . lrgvsubcfa ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS ,
& statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3 ;
static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 57 ] ; static real_T absTol [ 57 ] = { 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static
uint8_T absTolControl [ 57 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U } ; static uint8_T zcAttributes [ 4 ] = { ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ; static
ssNonContDerivSigInfo nonContDerivSigInfo [ 1 ] = { { 1 * sizeof ( real_T ) ,
( char * ) ( & rtB . izulu4xivv ) , ( NULL ) } } ; ssSetSolverRelTol ( rtS ,
0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ;
ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.001 ) ; ssSetSolverMaxOrder ( rtS , 5 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
1 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "ode15s" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; _ssSetSolverUpdateJacobianAtReset
( rtS , true ) ; ssSetAbsTolVector ( rtS , absTol ) ;
ssSetAbsTolControlVector ( rtS , absTolControl ) ; ssSetSolverAbsTol_Obsolete
( rtS , absTol ) ; ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl )
; ssSetSolverStateProjection ( rtS , 1 ) ; ( void ) memset ( ( void * ) &
mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ; ssSetModelMethods2 ( rtS , &
mdlMethods2 ) ; ( void ) memset ( ( void * ) & mdlMethods3 , 0 , sizeof (
mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , & mdlMethods3 ) ;
ssSetModelProjection ( rtS , MdlProjection ) ; ssSetSolverMassMatrixType (
rtS , ( ssMatrixType ) 0 ) ; ssSetSolverMassMatrixNzMax ( rtS , 0 ) ;
ssSetModelOutputs ( rtS , MdlOutputs ) ; ssSetModelLogData ( rtS ,
rt_UpdateTXYLogVars ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ;
ssSetModelDerivatives ( rtS , MdlDerivatives ) ; ssSetSolverZcSignalAttrib (
rtS , zcAttributes ) ; ssSetSolverNumZcSignals ( rtS , 4 ) ;
ssSetModelZeroCrossings ( rtS , MdlZeroCrossings ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ; ssSetSolverMaxConsecutiveMinStep
( rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid (
rtS , INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset (
rtS ) ; ssSetNumNonsampledZCs ( rtS , 4 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 1872870915U ) ; ssSetChecksumVal ( rtS , 1 ,
323335718U ) ; ssSetChecksumVal ( rtS , 2 , 3744814416U ) ; ssSetChecksumVal
( rtS , 3 , 3555727120U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 4 ] ; ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo
) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } return rtS ; }
