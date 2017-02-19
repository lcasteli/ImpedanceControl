#include "__cf_Walk_Sim4.h"
#include "pm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "ne_default_allocator.h"
#include "sm_ssci_NeDaePrivateData.h"
#include "sm_CTarget.h"
PmfMessageId sm_ssci_recordRunTimeError ( const char * errorId , const char *
errorMsg , NeuDiagnosticManager * mgr ) ;
#define ne_allocator_alloc(_allocator, _m, _n) ((_allocator)->mCallocFcn((_allocator), (_m), (_n)))
#define NE_ALLOCATE_ARRAY(_name, _type, _size, _allocator)\
 _name = (_type *) ne_allocator_alloc(_allocator, sizeof(_type), _size)
#define ne_size_to_int(_size)          ((int32_T) (_size))
NeIntVector * neu_create_int_vector ( size_t , NeAllocator * ) ; int_T
neu_create_int_vector_fields ( NeIntVector * , size_t , NeAllocator * ) ;
int_T neu_create_real_vector_fields ( NeRealVector * , size_t , NeAllocator *
) ; int_T neu_create_char_vector_fields ( NeCharVector * , size_t ,
NeAllocator * ) ; int_T neu_create_bool_vector_fields ( NeBoolVector * ,
size_t , NeAllocator * ) ; void neu_rv_equals_rv ( const NeRealVector * ,
const NeRealVector * ) ; void sm_ssci_setupLoggerFcn_codeGen ( const NeDae *
dae , NeLoggerBuilder * neLoggerBuilder ) ; int32_T sm_ssci_logFcn_codeGen (
const NeDae * dae , const NeSystemInput * systemInput , NeRealVector * output
) ; PmfMessageId Walk_Sim4_6bedce81_1_deriv ( const double * , const double *
, const double * , const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Walk_Sim4_6bedce81_1_checkDynamics ( const double * , const double * , const
double * , const double * , const double * , double * , NeuDiagnosticManager
* neDiagMgr ) ; PmfMessageId Walk_Sim4_6bedce81_1_outputDyn ( const double *
, const double * , const double * , const double * , const double * , double
* , double * , int * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
Walk_Sim4_6bedce81_1_outputKin ( const double * , const double * , const
double * , const double * , const double * , double * , NeuDiagnosticManager
* neDiagMgr ) ; PmfMessageId Walk_Sim4_6bedce81_1_output ( const double * ,
const double * , const double * , const double * , const double * , double *
, double * , int * , NeuDiagnosticManager * neDiagMgr ) ; void
Walk_Sim4_6bedce81_1_resetStateVector ( const void * mech , double *
stateVector ) ; PmfMessageId Walk_Sim4_6bedce81_1_initializeTrackedAngleState
( const void * mech , double * stateVector , void * neDiagMgr ) ; void
Walk_Sim4_6bedce81_1_computeDiscreteState ( const void * mech , double *
stateVector ) ; void Walk_Sim4_6bedce81_1_adjustPosition ( const void * mech
, const double * dofDeltas , double * stateVector ) ; void
Walk_Sim4_6bedce81_1_perturbState ( const void * mech , size_t stageIdx ,
size_t primitiveIdx , double magnitude , boolean_T doPerturbVelocity , double
* stateVector ) ; void Walk_Sim4_6bedce81_1_computeDofBlendMatrix ( const
void * mech , size_t stageIdx , size_t primitiveIdx , const double *
stateVector , int partialType , double * matrix ) ; void
Walk_Sim4_6bedce81_1_projectPartiallyTargetedPos ( const void * mech , size_t
stageIdx , size_t primitiveIdx , const double * origStateVector , int
partialType , double * stateVector ) ; void
Walk_Sim4_6bedce81_1_propagateMotion ( const void * mech , const double *
stateVector , double * motionData ) ; size_t
Walk_Sim4_6bedce81_1_computeAssemblyError ( const void * mech , size_t
constraintIdx , const double * stateVector , const double * motionData ,
double * error ) ; size_t Walk_Sim4_6bedce81_1_computeAssemblyJacobian (
const void * mech , size_t constraintIdx , boolean_T forVelocitySatisfaction
, const double * stateVector , const double * motionData , double * J ) ;
size_t Walk_Sim4_6bedce81_1_computeFullAssemblyJacobian ( const void * mech ,
const double * stateVector , const double * motionData , double * J ) ;
PmfMessageId Walk_Sim4_6bedce81_1_convertStateVector ( const void * asmMech ,
const void * simMech , const double * asmStateVector , double *
simStateVector , void * neDiagMgr ) ; void
Walk_Sim4_6bedce81_1_constructStateVector ( const void * mech , const double
* solverStateVector , const double * u , const double * uDot , const double *
discreteStateVector , double * fullStateVector ) ; void
Walk_Sim4_6bedce81_1_extractSolverStateVector ( const void * mech , const
double * fullStateVector , double * solverStateVector ) ; int
Walk_Sim4_6bedce81_1_isPositionViolation ( const void * mech , const double *
stateVector ) ; int Walk_Sim4_6bedce81_1_isVelocityViolation ( const void *
mech , const double * stateVector ) ; PmfMessageId
Walk_Sim4_6bedce81_1_projectStateSim ( const void * mech , const double *
inputVector , double * stateVector , void * neDiagMgr ) ; PmfMessageId
Walk_Sim4_6bedce81_1_assemble ( const double * u , double * udot , double * x
, NeuDiagnosticManager * neDiagMgr ) { ( void ) x ; ( void ) u ; ( void )
udot ; return NULL ; } static PmfMessageId dae_cg_deriv_method ( const NeDae
* dae , const NeSystemInput * systemInput , NeDaeMethodOutput *
daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData
* smData = dae -> mPrivateData ; PmfMessageId errorId = NULL ; double
errorResult = 0.0 ; if ( smData -> mCachedDerivativesAvailable ) memcpy (
daeMethodOutput -> mXP0 . mX , smData -> mCachedDerivatives . mX , 33 *
sizeof ( real_T ) ) ; else errorId = Walk_Sim4_6bedce81_1_deriv ( systemInput
-> mX . mX , systemInput -> mU . mX , systemInput -> mU . mX + 28 ,
systemInput -> mV . mX + 28 , systemInput -> mD . mX , daeMethodOutput ->
mXP0 . mX , & errorResult , neDiagMgr ) ; return errorId ; } static
PmfMessageId dae_cg_output_method ( const NeDae * dae , const NeSystemInput *
systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { PmfMessageId errorId = NULL ; NeDaePrivateData * smData = dae
-> mPrivateData ; if ( smData -> mDoComputeDynamicOutputs ) { int derivErr =
0 ; errorId = Walk_Sim4_6bedce81_1_outputDyn ( systemInput -> mX . mX ,
systemInput -> mU . mX , systemInput -> mU . mX + 28 , systemInput -> mV . mX
+ 28 , systemInput -> mD . mX , smData -> mCachedDerivatives . mX ,
daeMethodOutput -> mY . mX , & derivErr , neDiagMgr ) ; smData ->
mCachedDerivativesAvailable = ( derivErr == 0 ) ; } else errorId =
Walk_Sim4_6bedce81_1_outputKin ( systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 28 , systemInput -> mV . mX + 28 , systemInput
-> mD . mX , daeMethodOutput -> mY . mX , neDiagMgr ) ; return errorId ; }
static PmfMessageId dae_cg_project_solve ( const NeDae * dae , const
NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; return sm_core_projectState
( false , & smData -> mSimulationDelegate , systemInput -> mU . mX ,
systemInput -> mU . mX + 28 , systemInput -> mD . mX , systemInput -> mX . mX
, neDiagMgr ) ; } static PmfMessageId dae_cg_check_solve ( const NeDae * dae
, const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId = NULL
; if ( smData -> mNumConstraintEqns > 0 ) errorId = sm_core_projectState (
false , & smData -> mSimulationDelegate , systemInput -> mU . mX ,
systemInput -> mU . mX + 28 , systemInput -> mD . mX , systemInput -> mX . mX
, neDiagMgr ) ; if ( errorId == NULL && smData -> mDoCheckDynamics ) { double
result = 0.0 ; errorId = Walk_Sim4_6bedce81_1_checkDynamics ( systemInput ->
mX . mX , systemInput -> mU . mX , systemInput -> mU . mX + 28 , systemInput
-> mV . mX + 28 , systemInput -> mD . mX , & result , neDiagMgr ) ; } return
errorId ; } static PmfMessageId dae_cg_projectMaybe_solve ( const NeDae * dae
, const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; return sm_core_projectState
( true , & smData -> mSimulationDelegate , systemInput -> mU . mX ,
systemInput -> mU . mX + 28 , systemInput -> mD . mX , systemInput -> mX . mX
, neDiagMgr ) ; } static PmfMessageId dae_cg_assemble_solve ( const NeDae *
dae , const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr )
{ NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId =
NULL ; if ( smData -> mNumInputMotionPrimitives == 0 ) { neu_rv_equals_rv ( &
systemInput -> mX , & dae -> mPrivateData -> mInitialStateVector ) ;
neu_rv_equals_rv ( & systemInput -> mD , & dae -> mPrivateData ->
mDiscreteStateVector ) ; } else { size_t i ; const size_t numTargets = 88 ;
unsigned int asmStatus = 0 ; double * assemblyFullStateVector = smData ->
mAssemblyFullStateVector . mX ; double * simulationFullStateVector = smData
-> mSimulationFullStateVector . mX ; const double * u = systemInput -> mU .
mX ; const double * uDot = u + smData -> mInputVectorSize ; CTarget * target
= smData -> mTargets + smData -> mNumInternalTargets ; for ( i = 0 ; i <
smData -> mNumInputMotionPrimitives ; ++ i ) { const size_t inputOffset =
smData -> mMotionInputOffsets . mX [ i ] ; ( target ++ ) -> mValue [ 0 ] = u
[ inputOffset ] ; ( target ++ ) -> mValue [ 0 ] = uDot [ inputOffset ] ; }
errorId = sm_core_computeStateVector ( & smData -> mMechanismDelegate ,
numTargets , smData -> mTargets , assemblyFullStateVector , neDiagMgr ) ; if
( errorId != NULL ) return errorId ; asmStatus = sm_core_checkAssembly ( &
smData -> mMechanismDelegate , numTargets , smData -> mTargets ,
assemblyFullStateVector , NULL , NULL ) ; if ( asmStatus != 1 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:AssemblyFailure" , asmStatus == 2 ?
 "Model not assembled due to a position violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
:
 "Model not assembled due to a velocity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
, neDiagMgr ) ; } errorId = ( * smData -> mMechanismDelegate .
mConvertStateVector ) ( NULL , NULL , assemblyFullStateVector ,
simulationFullStateVector , neDiagMgr ) ; for ( i = 0 ; i < smData ->
mStateVectorSize ; ++ i ) systemInput -> mX . mX [ i ] =
simulationFullStateVector [ smData -> mStateVectorMap . mX [ i ] ] ; memcpy (
systemInput -> mD . mX , simulationFullStateVector + smData ->
mFullStateVectorSize - smData -> mDiscreteStateSize , smData ->
mDiscreteStateSize * sizeof ( double ) ) ; } return errorId ; } typedef
struct { size_t first ; size_t second ; } SizePair ; static void
checkMemAllocStatus ( int_T status ) { ( void ) status ; } static
NeCharVector cStringToCharVector ( const char * src ) { const size_t n =
strlen ( src ) ; NeCharVector charVect ; const int_T status =
neu_create_char_vector_fields ( & charVect , n + 1 , ne_default_allocator ( )
) ; checkMemAllocStatus ( status ) ; strcpy ( charVect . mX , src ) ; return
charVect ; } static void initBasicAttributes ( NeDaePrivateData * smData ) {
size_t i ; smData -> mStateVectorSize = 33 ; smData -> mFullStateVectorSize =
45 ; smData -> mDiscreteStateSize = 0 ; smData -> mInputVectorSize = 28 ;
smData -> mOutputVectorSize = 79 ; smData -> mNumConstraintEqns = 10 ; smData
-> mDoCheckDynamics = true ; for ( i = 0 ; i < 4 ; ++ i ) smData -> mChecksum
[ i ] = 0 ; } static void initStateVector ( NeDaePrivateData * smData ) {
NeAllocator * alloc = ne_default_allocator ( ) ; const double
initialStateVector [ 33 ] = { + 8.826480142544401700e-01 , +
8.118615043142299000e-04 , + 7.123629944030366100e-04 , -
4.700333140880076900e-01 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
8.857258878647300500e-05 , + 0.000000000000000000e+00 , +
2.112908656487277900e-03 , + 0.000000000000000000e+00 , -
7.635138083390558000e-04 , + 0.000000000000000000e+00 , +
4.133644887649445800e-03 , + 0.000000000000000000e+00 , +
9.727339670062562500e-05 , + 0.000000000000000000e+00 , +
7.771426927316582600e-05 , + 0.000000000000000000e+00 , +
7.456832250453167300e-02 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
7.380490005076907600e-02 , + 0.000000000000000000e+00 , +
7.456832250453361600e-02 , + 0.000000000000000000e+00 , +
7.456832250453142300e-02 , + 0.000000000000000000e+00 , +
5.921410483205340500e-01 , + 0.000000000000000000e+00 , -
3.141592653589793100e+00 , + 0.000000000000000000e+00 } ; const double *
discreteStateVector = NULL ; const int32_T stateVectorMap [ 33 ] = { 3 , 4 ,
5 , 6 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 27 , 28 , 29 ,
30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 38 , 39 , 40 , 41 , 42 , 43 , 44 } ;
const CTarget targets [ 88 ] = { { 0 , 22 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 22 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 23 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 23 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 24 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 24 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 94 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 94 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 94 , 1 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 94 , 1
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 94 , 2 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 94 , 2
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 95 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 95 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 95 , 1 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 95 , 1
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 95 , 2 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 95 , 2
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 105 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 105 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 105 , 1 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 105 , 1
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 105 , 2 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 105 , 2
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 105 , 3 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 105 , 3
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 122 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 122 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 122 , 1 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 122 , 1
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 122 , 2 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 122 , 2
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 122 , 3 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 122 , 3
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 162 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 162 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 163 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 163 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 322 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 322 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 322 , 1 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 322 , 1
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 322 , 2 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 322 , 2
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 322 , 3 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 322 , 3
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 328 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 328 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 328 , 1 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 328 , 1
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 328 , 2 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 328 , 2
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 328 , 3 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 328 , 3
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 352 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 352 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 353 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 353 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 474 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 474 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 474 , 1 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 474 , 1
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 474 , 2 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 474 , 2
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 475 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 475 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 476 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 476 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 477 , 0 , false , 0 , 1 , "m" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 477 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 478 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 478 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 479 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 479 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 480 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 480 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 1
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 105 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 105 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 105 , 1 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 105 , 1
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 105 , 2 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 105 , 2
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 95 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 95 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 95 , 1 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 95 , 1
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 95 , 2 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 95 , 2
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } } ; const size_t numTargets = 88 ; int_T status
; size_t i ; status = neu_create_real_vector_fields ( & smData ->
mAssemblyFullStateVector , 45 , alloc ) ; checkMemAllocStatus ( status ) ;
status = neu_create_real_vector_fields ( & smData ->
mSimulationFullStateVector , 45 , alloc ) ; checkMemAllocStatus ( status ) ;
status = neu_create_real_vector_fields ( & smData -> mInitialStateVector , 33
, alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData ->
mInitialStateVector . mX , initialStateVector , 33 * sizeof ( real_T ) ) ;
status = neu_create_real_vector_fields ( & smData -> mDiscreteStateVector , 0
, alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData ->
mDiscreteStateVector . mX , discreteStateVector , 0 * sizeof ( real_T ) ) ;
status = neu_create_int_vector_fields ( & smData -> mStateVectorMap , smData
-> mStateVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy (
smData -> mStateVectorMap . mX , stateVectorMap , smData -> mStateVectorSize
* sizeof ( int32_T ) ) ; smData -> mNumInternalTargets = 76 ; smData ->
mNumInputMotionPrimitives = 6 ; NE_ALLOCATE_ARRAY ( smData -> mTargets ,
CTarget , numTargets , alloc ) ; for ( i = 0 ; i < numTargets ; ++ i )
sm_compiler_CTarget_copy ( targets + i , smData -> mTargets + i ) ; } static
void initVariables ( NeDaePrivateData * smData ) { const char * varFullPaths
[ 33 ] = {
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.x6_DOF_Joint.S.Q"
,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.x6_DOF_Joint.S.Q"
,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.x6_DOF_Joint.S.Q"
,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.x6_DOF_Joint.S.Q"
,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.x6_DOF_Joint.S.w"
,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.x6_DOF_Joint.S.w"
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
"Gait_Emulator.prismatic_frame.Planar_Joint.Rz.w" } ; const char * varObjects
[ 33 ] = {
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/simple_shin_1_RIGID/6-DOF Joint"
,
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/simple_shin_1_RIGID/6-DOF Joint"
,
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/simple_shin_1_RIGID/6-DOF Joint"
,
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/simple_shin_1_RIGID/6-DOF Joint"
,
 "Walk_Sim4/Gait Emulator/Hip_and_ankle_prosthesis/simple_shin_1_RIGID/6-DOF Joint"
,
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
"Walk_Sim4/Gait Emulator/prismatic frame/Planar Joint" } ; smData ->
mNumVarScalars = 33 ; smData -> mVarFullPaths = NULL ; smData -> mVarObjects
= NULL ; if ( smData -> mNumVarScalars > 0 ) { size_t s ; NeAllocator * alloc
= ne_default_allocator ( ) ; NE_ALLOCATE_ARRAY ( smData -> mVarFullPaths ,
NeCharVector , 33 , alloc ) ; NE_ALLOCATE_ARRAY ( smData -> mVarObjects ,
NeCharVector , 33 , alloc ) ; for ( s = 0 ; s < smData -> mNumVarScalars ; ++
s ) { smData -> mVarFullPaths [ s ] = cStringToCharVector ( varFullPaths [ s
] ) ; smData -> mVarObjects [ s ] = cStringToCharVector ( varObjects [ s ] )
; } } } static void initIoInfoHelper ( size_t n , const char *
portPathsSource [ ] , const char * unitsSource [ ] , const SizePair
dimensions [ ] , boolean_T doInputs , NeDaePrivateData * smData ) {
NeCharVector * portPaths = NULL ; NeCharVector * units = NULL ; NeDsIoInfo *
infos = NULL ; if ( n > 0 ) { size_t s ; NeAllocator * alloc =
ne_default_allocator ( ) ; NE_ALLOCATE_ARRAY ( portPaths , NeCharVector , n ,
alloc ) ; NE_ALLOCATE_ARRAY ( units , NeCharVector , n , alloc ) ;
NE_ALLOCATE_ARRAY ( infos , NeDsIoInfo , n , alloc ) ; for ( s = 0 ; s < n ;
++ s ) { portPaths [ s ] = cStringToCharVector ( portPathsSource [ s ] ) ;
units [ s ] = cStringToCharVector ( unitsSource [ s ] ) ; { NeDsIoInfo * info
= infos + s ; info -> mName = info -> mIdentifier = portPaths [ s ] . mX ;
info -> mM = dimensions [ s ] . first ; info -> mN = dimensions [ s ] .
second ; info -> mUnit = units [ s ] . mX ; } } } if ( doInputs ) { smData ->
mNumInputs = n ; smData -> mInputPortPaths = portPaths ; smData ->
mInputUnits = units ; smData -> mInputInfos = infos ; } else { smData ->
mNumOutputs = n ; smData -> mOutputPortPaths = portPaths ; smData ->
mOutputUnits = units ; smData -> mOutputInfos = infos ; } } static void
initIoInfo ( NeDaePrivateData * smData ) { const char * inputPortPaths [ 22 ]
= { "Gait_Emulator.Hip_and_ankle_prosthesis.Revolute8.ti" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.Revolute9.ti" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.Gimbal_Joint.qxi"
,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.Gimbal_Joint.qyi"
,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.Gimbal_Joint.qzi"
,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.x6_DOF_Joint.pxi"
,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.x6_DOF_Joint.pyi"
,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.x6_DOF_Joint.pzi"
, "Gait_Emulator.Walkway_force_plate.FP_Contact.x6_DOF_Joint.fxi" ,
"Gait_Emulator.Walkway_force_plate.FP_Contact.x6_DOF_Joint.fyi" ,
"Gait_Emulator.Walkway_force_plate.FP_Contact.x6_DOF_Joint.fzi" ,
"Gait_Emulator.Walkway_force_plate.FP_Contact.x6_DOF_Joint.ti" ,
"Gait_Emulator.Walkway_force_plate.Force_Plate.Revolute6.ti" ,
"Gait_Emulator.Walkway_force_plate.Force_Plate.Revolute7.ti" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact1.x6_DOF_Joint.fxi" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact1.x6_DOF_Joint.fyi" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact1.x6_DOF_Joint.fzi" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact1.x6_DOF_Joint.ti" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact2.x6_DOF_Joint.fxi" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact2.x6_DOF_Joint.fyi" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact2.x6_DOF_Joint.fzi" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact2.x6_DOF_Joint.ti" } ; const
char * inputUnits [ 22 ] = { "m^2*kg/s^2" , "m^2*kg/s^2" , "rad" , "rad" ,
"rad" , "m" , "m" , "m" , "m*kg/s^2" , "m*kg/s^2" , "m*kg/s^2" , "m^2*kg/s^2"
, "m^2*kg/s^2" , "m^2*kg/s^2" , "m*kg/s^2" , "m*kg/s^2" , "m*kg/s^2" ,
"m^2*kg/s^2" , "m*kg/s^2" , "m*kg/s^2" , "m*kg/s^2" , "m^2*kg/s^2" } ; const
SizePair inputDimensions [ 22 ] = { { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 3 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 3 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 3 , 1 } } ; const
char * outputPortPaths [ 47 ] = {
"Gait_Emulator.Hip_and_ankle_prosthesis.Revolute5.q" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.Revolute8.q" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.Revolute8.w" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.Revolute8.b" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.Revolute8.tt" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.Revolute9.q" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.Revolute9.w" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.Revolute9.b" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.Revolute9.tt" ,
"Gait_Emulator.Walkway_force_plate.FP_Contact.x6_DOF_Joint.px" ,
"Gait_Emulator.Walkway_force_plate.FP_Contact.x6_DOF_Joint.vx" ,
"Gait_Emulator.Walkway_force_plate.FP_Contact.x6_DOF_Joint.py" ,
"Gait_Emulator.Walkway_force_plate.FP_Contact.x6_DOF_Joint.vy" ,
"Gait_Emulator.Walkway_force_plate.FP_Contact.x6_DOF_Joint.pz" ,
"Gait_Emulator.Walkway_force_plate.FP_Contact.x6_DOF_Joint.vz" ,
"Gait_Emulator.Walkway_force_plate.FP_Contact.x6_DOF_Joint.Q" ,
"Gait_Emulator.Walkway_force_plate.FP_Contact.x6_DOF_Joint.w" ,
"Gait_Emulator.Walkway_force_plate.Force_Plate.Plate_1_RIGID.Weld_Joint1.tc"
,
"Gait_Emulator.Walkway_force_plate.Force_Plate.Plate_1_RIGID.Weld_Joint1.fc"
, "Gait_Emulator.Walkway_force_plate.Ground_Contact1.x6_DOF_Joint.px" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact1.x6_DOF_Joint.vx" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact1.x6_DOF_Joint.py" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact1.x6_DOF_Joint.vy" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact1.x6_DOF_Joint.pz" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact1.x6_DOF_Joint.vz" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact1.x6_DOF_Joint.Q" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact1.x6_DOF_Joint.w" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact2.x6_DOF_Joint.px" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact2.x6_DOF_Joint.vx" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact2.x6_DOF_Joint.py" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact2.x6_DOF_Joint.vy" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact2.x6_DOF_Joint.pz" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact2.x6_DOF_Joint.vz" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact2.x6_DOF_Joint.Q" ,
"Gait_Emulator.Walkway_force_plate.Ground_Contact2.x6_DOF_Joint.w" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.foot_1_RIGID.Transform_Sensor2.Q" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.foot_1_RIGID.Transform_Sensor2.x" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.foot_1_RIGID.Transform_Sensor2.y" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.foot_1_RIGID.Transform_Sensor2.z" ,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.Transform_Sensor2.Q"
,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.Transform_Sensor2.x"
,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.Transform_Sensor2.y"
,
"Gait_Emulator.Hip_and_ankle_prosthesis.simple_shin_1_RIGID.Transform_Sensor2.z"
,
"Gait_Emulator.Walkway_force_plate.Force_Plate.Plate_1_RIGID.Transform_Sensor.Q"
,
"Gait_Emulator.Walkway_force_plate.Force_Plate.Plate_1_RIGID.Transform_Sensor.x"
,
"Gait_Emulator.Walkway_force_plate.Force_Plate.Plate_1_RIGID.Transform_Sensor.y"
,
"Gait_Emulator.Walkway_force_plate.Force_Plate.Plate_1_RIGID.Transform_Sensor.z"
} ; const char * outputUnits [ 47 ] = { "rad" , "rad" , "rad/s" , "rad/s^2" ,
"m^2*kg/s^2" , "rad" , "rad/s" , "rad/s^2" , "m^2*kg/s^2" , "m" , "m/s" , "m"
, "m/s" , "m" , "m/s" , "1" , "rad/s" , "m^2*kg/s^2" , "m*kg/s^2" , "m" ,
"m/s" , "m" , "m/s" , "m" , "m/s" , "1" , "rad/s" , "m" , "m/s" , "m" , "m/s"
, "m" , "m/s" , "1" , "rad/s" , "1" , "m" , "m" , "m" , "1" , "m" , "m" , "m"
, "1" , "m" , "m" , "m" } ; const SizePair outputDimensions [ 47 ] = { { 1 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 3 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 3 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 ,
1 } , { 1 , 1 } , { 4 , 1 } , { 3 , 1 } , { 3 , 1 } , { 3 , 1 } , { 1 , 1 } ,
{ 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 4 , 1 } , { 3 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 4 , 1 } , { 3 , 1 } , { 4 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 4 ,
1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 4 , 1 } , { 1 , 1 } , { 1 , 1 } ,
{ 1 , 1 } } ; initIoInfoHelper ( 22 , inputPortPaths , inputUnits ,
inputDimensions , true , smData ) ; initIoInfoHelper ( 47 , outputPortPaths ,
outputUnits , outputDimensions , false , smData ) ; } static void
initInputDerivs ( NeDaePrivateData * smData ) { const int32_T numInputDerivs
[ 28 ] = { 0 , 0 , 2 , 2 , 2 , 2 , 2 , 2 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; NeAllocator * alloc =
ne_default_allocator ( ) ; const int_T status = neu_create_int_vector_fields
( & smData -> mNumInputDerivs , smData -> mInputVectorSize , alloc ) ;
checkMemAllocStatus ( status ) ; memcpy ( smData -> mNumInputDerivs . mX ,
numInputDerivs , 28 * sizeof ( int32_T ) ) ; smData -> mInputOrder = 2 ; }
static void initDirectFeedthrough ( NeDaePrivateData * smData ) { const
boolean_T directFeedthroughVector [ 28 ] = { false , false , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false } ; const boolean_T directFeedthroughMatrix [
4424 ] = { false , false , false , true , true , true , true , false , false
, true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , true , true , true ,
true , true , true , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , true , true , true , true , false ,
false , true , true , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , false , false , false , true , true , true ,
true , false , false , true , true , true , true , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , true ,
true , true , false , false , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , true , true , true , true , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , true
, true , true , true , false , false , true , true , true , true , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , true , true , true , false , false , true , true , true , true ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , true , true , true , true , true , true , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , true , true , false , false , true , true , true ,
true , false , false , false , false , false , false , false , false , false
, false , false , false , false , true , true , true , true , true , true ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , true , true , true , false , false , true , true ,
true , true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , true , true , true , true , true ,
true , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , true , true , true , true , false , false , true ,
true , true , true , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , true , true , true ,
true , true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , true , true , true , false , false ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , true , true , true ,
true , true , true , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , true , true , true , true , false ,
false , true , true , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , true , true , true ,
false , false , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , true
, true , true , true , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , true , true , true ,
true , false , false , true , true , true , true , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , true ,
true , true , false , false , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , true , true , true , true , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , true
, true , true , true , false , false , true , true , true , true , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , true , true , true , false , false , true , true , true , true ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , true , true , true , true , true , true , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , true , true , false , false , true , true , true ,
true , false , false , false , false , false , false , false , false , false
, false , false , false , false , true , true , true , true , true , true ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , true , true , true , false , false , true , true ,
true , true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , true , true , true , true , true ,
true , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , true , true , true , true , false , false , true ,
true , true , true , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , true , true , true ,
true , true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , true , true , true , false , false ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , true , true , true ,
true , true , true , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , true , true , true , true , false ,
false , true , true , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , true , true , true ,
false , false , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , true
, true , true , true , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , true , true , true ,
true , false , false , true , true , true , true , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , true ,
true , true , false , false , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , true , true , true , true , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , false , false , false
, true , true , true , true , false , false , true , true , true , true ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , true , true , true , true , true , true , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , true , true , false , false , true , true , true ,
true , false , false , false , false , false , false , false , false , false
, false , false , false , false , true , true , true , true , true , true ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , true , true , true , false , false , true , true ,
true , true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , true , true , true , true , true ,
true , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , true , true , true , true , false , false , true ,
true , true , true , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , true , true , true ,
true , true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , true , true , true , false , false ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , true , true , true ,
true , true , true , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , true , true , true , true , false ,
false , true , true , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , true , true , true ,
false , false , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , true
, true , true , true , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , true , true , true ,
true , false , false , true , true , true , true , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , true ,
true , true , false , false , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , true , true , true , true , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , true
, true , true , true , false , false , true , true , true , true , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , true , true , true , false , false , true , true , true , true ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , true , true , true , true , true , true , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , true , true , false , false , true , true , true ,
true , false , false , false , false , false , false , false , false , false
, false , false , false , false , true , true , true , true , true , true ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , true , true , true , false , false , true , true ,
true , true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , true , true , true , true , true ,
true , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , true , true , true , true , false , false , true ,
true , true , true , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , true , true , true ,
true , true , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , true , true , true , true , false , false ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , true , true , true ,
true , true , true , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , true , true , true , true , false ,
false , true , true , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , true , true , true , true ,
false , false , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , true
, true , true , true , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , true , true , true ,
true , false , false , true , true , true , true , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , true ,
true , true , false , false , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , true , true , true , true , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , true
, true , true , true , false , false , true , true , true , true , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , true , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false } ; NeAllocator * alloc
= ne_default_allocator ( ) ; { const int_T status =
neu_create_bool_vector_fields ( & smData -> mDirectFeedthroughVector , 28 ,
alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData ->
mDirectFeedthroughVector . mX , directFeedthroughVector , 28 * sizeof (
boolean_T ) ) ; } { const int_T status = neu_create_bool_vector_fields ( &
smData -> mDirectFeedthroughMatrix , 4424 , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mDirectFeedthroughMatrix . mX ,
directFeedthroughMatrix , 4424 * sizeof ( boolean_T ) ) ; } } static void
initOutputDerivProc ( NeDaePrivateData * smData ) { NeAllocator * alloc =
ne_default_allocator ( ) ; const int32_T outputFunctionMap [ 79 ] = { 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
smData -> mOutputFunctionMap = neu_create_int_vector ( 79 , alloc ) ; memcpy
( smData -> mOutputFunctionMap -> mX , outputFunctionMap , 79 * sizeof (
int32_T ) ) ; smData -> mNumOutputClasses = 2 ; smData ->
mHasKinematicOutputs = true ; smData -> mHasDynamicOutputs = true ; smData ->
mIsOutputClass0Dynamic = false ; smData -> mDoComputeDynamicOutputs = false ;
smData -> mCachedDerivativesAvailable = false ; { size_t i = 0 ; const int_T
status = neu_create_real_vector_fields ( & smData -> mCachedDerivatives , 33
, ne_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ;
i < smData -> mCachedDerivatives . mN ; ++ i ) smData -> mCachedDerivatives .
mX [ i ] = 0.0 ; } }
#if 0
static void initializeSizePairVector ( const SmSizePair * data ,
SmSizePairVector * vector ) { const size_t n = sm_core_SmSizePairVector_size
( vector ) ; size_t i ; for ( i = 0 ; i < n ; ++ i , ++ data )
sm_core_SmSizePairVector_setValue ( vector , i , data ++ ) ; }
#endif
static void initMechanismDelegate ( SmMechanismDelegate * delegate ) {
NeAllocator * alloc = ne_default_allocator ( ) ; const SmSizePair
jointToStageIdx [ 14 ] = { { 22 , 3 } , { 23 , 2 } , { 24 , 1 } , { 95 , 4 }
, { 105 , 0 } , { 160 , 7 } , { 162 , 5 } , { 163 , 6 } , { 352 , 11 } , {
475 , 10 } , { 476 , 8 } , { 477 , 9 } , { 479 , 12 } , { 480 , 13 } } ;
const size_t primitiveIndices [ 14 + 1 ] = { 0 , 4 , 5 , 6 , 7 , 10 , 11 , 12
, 12 , 13 , 14 , 15 , 16 , 17 , 18 } ; const SmSizePair stateOffsets [ 18 ] =
{ { 0 , 7 } , { 1 , 8 } , { 2 , 9 } , { 3 , 10 } , { 13 , 14 } , { 15 , 16 }
, { 17 , 18 } , { 19 , 22 } , { 20 , 23 } , { 21 , 24 } , { 25 , 26 } , { 27
, 28 } , { 29 , 30 } , { 31 , 32 } , { 33 , 34 } , { 35 , 36 } , { 37 , 38 }
, { 39 , 40 } } ; const SmSizePair dofOffsets [ 18 ] = { { 0 , 1 } , { 1 , 2
} , { 2 , 3 } , { 3 , 6 } , { 6 , 7 } , { 7 , 8 } , { 8 , 9 } , { 9 , 10 } ,
{ 10 , 11 } , { 11 , 12 } , { 12 , 13 } , { 13 , 14 } , { 14 , 15 } , { 15 ,
16 } , { 16 , 17 } , { 17 , 18 } , { 18 , 19 } , { 19 , 20 } } ; const size_t
remodIndices [ 9 ] = { 13 , 15 , 17 , 19 , 20 , 21 , 25 , 27 , 35 } ; const
size_t equationsPerConstraint [ 7 ] = { 0 , 0 , 3 , 0 , 5 , 3 , 5 } ; const
size_t dofToVelSlot [ 20 ] = { 7 , 8 , 9 , 10 , 11 , 12 , 14 , 16 , 18 , 22 ,
23 , 24 , 26 , 28 , 30 , 32 , 34 , 36 , 38 , 40 } ; const size_t
constraintDofs [ 50 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 0 , 1 , 2 , 3 , 4 , 5 ,
6 , 0 , 1 , 2 , 3 , 4 , 5 , 7 , 9 , 10 , 11 , 12 , 13 , 0 , 1 , 2 , 3 , 4 , 5
, 6 , 14 , 15 , 16 , 17 , 0 , 1 , 2 , 3 , 4 , 5 , 7 , 8 , 14 , 18 , 19 , 14 ,
15 } ; const size_t constraintDofOffsets [ 7 + 1 ] = { 0 , 7 , 14 , 24 , 33 ,
45 , 47 , 50 } ; const size_t Jm = 16 ; const size_t Jn = 20 ; SmSizePair
zeroSizePair ; zeroSizePair . mFirst = zeroSizePair . mSecond = 0 ; delegate
-> mTargetStrengthFree = 0 ; delegate -> mTargetStrengthSuggested = 1 ;
delegate -> mTargetStrengthDesired = 2 ; delegate -> mTargetStrengthRequired
= 3 ; delegate -> mConsistencyTol = + 1.000000000000000100e-09 ; delegate ->
mDof = 20 ; delegate -> mStateSize = 45 ; delegate -> mNumStages = 14 ;
delegate -> mNumConstraints = 7 ; delegate -> mNumAllConstraintEquations = 16
; sm_core_SmSizePairVector_create ( & delegate -> mJointToStageIdx , delegate
-> mNumStages , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mJointToStageIdx ) ,
jointToStageIdx , delegate -> mNumStages * sizeof ( SmSizePair ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mPrimitiveIndices , delegate ->
mNumStages + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mPrimitiveIndices ) , primitiveIndices , ( delegate -> mNumStages
+ 1 ) * sizeof ( size_t ) ) ; sm_core_SmSizePairVector_create ( & delegate ->
mStateOffsets , 18 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mStateOffsets ) ,
stateOffsets , 18 * sizeof ( SmSizePair ) ) ; sm_core_SmSizePairVector_create
( & delegate -> mDofOffsets , 18 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mDofOffsets ) ,
dofOffsets , 18 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mRemodIndices , 9 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 9 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mDofToVelSlot , delegate -> mDof , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mDofToVelSlot ) ,
dofToVelSlot , delegate -> mDof * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 50 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mConstraintDofs
) , constraintDofs , 50 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create
( & delegate -> mConstraintDofOffsets , delegate -> mNumConstraints + 1 , 0 )
; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofOffsets ) , constraintDofOffsets , ( delegate ->
mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create ( &
delegate -> mPosRequired , 20 ) ; sm_core_SmBoundedSet_create ( & delegate ->
mPosDesired , 20 ) ; sm_core_SmBoundedSet_create ( & delegate ->
mPosSuggested , 20 ) ; sm_core_SmBoundedSet_create ( & delegate -> mPosFree ,
20 ) ; sm_core_SmBoundedSet_create ( & delegate -> mPosNonRequired , 20 ) ;
sm_core_SmBoundedSet_create ( & delegate -> mPosSuggAndFree , 20 ) ;
sm_core_SmBoundedSet_create ( & delegate -> mVelRequired , 20 ) ;
sm_core_SmBoundedSet_create ( & delegate -> mVelDesired , 20 ) ;
sm_core_SmBoundedSet_create ( & delegate -> mVelSuggested , 20 ) ;
sm_core_SmBoundedSet_create ( & delegate -> mVelFree , 20 ) ;
sm_core_SmBoundedSet_create ( & delegate -> mVelNonRequired , 20 ) ;
sm_core_SmBoundedSet_create ( & delegate -> mVelSuggAndFree , 20 ) ;
sm_core_SmBoundedSet_create ( & delegate -> mConstraintFilter , 7 ) ;
sm_core_SmBoundedSet_create ( & delegate -> mActiveConstraints , 7 ) ;
sm_core_SmBoundedSet_create ( & delegate -> mActiveDofs , 20 ) ;
sm_core_SmBoundedSet_create ( & delegate -> mActiveDofs0 , 20 ) ;
sm_core_SmBoundedSet_create ( & delegate -> mNewConstraints , 7 ) ;
sm_core_SmBoundedSet_create ( & delegate -> mNewDofs , 20 ) ;
sm_core_SmBoundedSet_create ( & delegate -> mUnsatisfiedConstraints , 7 ) ;
sm_core_SmSizeTVector_create ( & delegate -> mActiveConstraintsVect , 7 , 0 )
; sm_core_SmSizeTVector_create ( & delegate -> mActiveDofsVect , 20 , 0 ) ;
sm_core_SmSizeTVector_create ( & delegate -> mFullDofToActiveDof , 20 , 0 ) ;
sm_core_SmSizePairVector_create ( & delegate -> mPartiallyPosTargetedPrims ,
18 , & zeroSizePair ) ; sm_core_SmSizePairVector_create ( & delegate ->
mPartiallyVelTargetedPrims , 18 , & zeroSizePair ) ;
sm_core_SmSizeTVector_create ( & delegate -> mPosPartialTypes , 18 , 0 ) ;
sm_core_SmSizeTVector_create ( & delegate -> mVelPartialTypes , 18 , 0 ) ;
sm_core_SmSizeTVector_create ( & delegate -> mPartiallyActivePrims , 18 , 0 )
; sm_core_SmSizePairVector_create ( & delegate -> mBaseFrameVelOffsets , 1 ,
& zeroSizePair ) ; sm_core_SmSizePairVector_create ( & delegate ->
mCvVelOffsets , 18 , & zeroSizePair ) ; sm_core_SmRealVector_create ( &
delegate -> mInitialState , 45 , 0.0 ) ; sm_core_SmRealVector_create ( &
delegate -> mStartState , 45 , 0.0 ) ; sm_core_SmRealVector_create ( &
delegate -> mTestState , 45 , 0.0 ) ; sm_core_SmRealVector_create ( &
delegate -> mFullStateVector , 45 , 0.0 ) ; sm_core_SmRealVector_create ( &
delegate -> mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create (
& delegate -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create ( &
delegate -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & delegate -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & delegate -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & delegate -> mBestConstraintError , Jm
, 0.0 ) ; sm_core_SmRealVector_create ( & delegate -> mDeltas , Jn * ( Jm <=
Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & delegate -> mSvdWork
, 1401 , 0.0 ) ; sm_core_SmRealVector_create ( & delegate ->
mLineSearchScaledDeltaVect , 20 , 0.0 ) ; sm_core_SmRealVector_create ( &
delegate -> mLineSearchTestStateVect , 45 , 0.0 ) ;
sm_core_SmRealVector_create ( & delegate -> mLineSearchErrorVect , Jm , 0.0 )
; sm_core_SmRealVector_create ( & delegate -> mActiveDofVelsVect , 20 , 0.0 )
; sm_core_SmRealVector_create ( & delegate -> mVelSystemRhs , Jm , 0.0 ) ;
sm_core_SmRealVector_create ( & delegate -> mMotionData , 280 , 0.0 ) ;
delegate -> mResetStateVector = Walk_Sim4_6bedce81_1_resetStateVector ;
delegate -> mInitializeTrackedAngleState =
Walk_Sim4_6bedce81_1_initializeTrackedAngleState ; delegate ->
mComputeDiscreteState = Walk_Sim4_6bedce81_1_computeDiscreteState ; delegate
-> mAdjustPosition = Walk_Sim4_6bedce81_1_adjustPosition ; delegate ->
mPerturbState = Walk_Sim4_6bedce81_1_perturbState ; delegate ->
mComputeDofBlendMatrix = Walk_Sim4_6bedce81_1_computeDofBlendMatrix ;
delegate -> mProjectPartiallyTargetedPos =
Walk_Sim4_6bedce81_1_projectPartiallyTargetedPos ; delegate ->
mPropagateMotion = Walk_Sim4_6bedce81_1_propagateMotion ; delegate ->
mComputeAssemblyError = Walk_Sim4_6bedce81_1_computeAssemblyError ; delegate
-> mComputeAssemblyJacobian = Walk_Sim4_6bedce81_1_computeAssemblyJacobian ;
delegate -> mComputeFullAssemblyJacobian =
Walk_Sim4_6bedce81_1_computeFullAssemblyJacobian ; delegate ->
mConvertStateVector = Walk_Sim4_6bedce81_1_convertStateVector ; delegate ->
mConstructStateVector = Walk_Sim4_6bedce81_1_constructStateVector ; delegate
-> mExtractSolverStateVector = Walk_Sim4_6bedce81_1_extractSolverStateVector
; delegate -> mIsPositionViolation = Walk_Sim4_6bedce81_1_isPositionViolation
; delegate -> mIsVelocityViolation = Walk_Sim4_6bedce81_1_isVelocityViolation
; delegate -> mProjectStateSim = Walk_Sim4_6bedce81_1_projectStateSim ;
delegate -> mMech = NULL ; } static void initSimulationDelegate (
SmMechanismDelegate * simDelegate ) { NeAllocator * alloc =
ne_default_allocator ( ) ; const SmSizePair jointToStageIdx [ 14 ] = { { 22 ,
3 } , { 23 , 2 } , { 24 , 1 } , { 95 , 5 } , { 105 , 0 } , { 160 , 8 } , {
162 , 6 } , { 163 , 7 } , { 353 , 4 } , { 475 , 11 } , { 476 , 9 } , { 477 ,
10 } , { 479 , 12 } , { 480 , 13 } } ; const size_t primitiveIndices [ 14 + 1
] = { 0 , 4 , 5 , 6 , 7 , 8 , 11 , 12 , 13 , 13 , 14 , 15 , 16 , 17 , 18 } ;
const SmSizePair stateOffsets [ 18 ] = { { 0 , 7 } , { 1 , 8 } , { 2 , 9 } ,
{ 3 , 10 } , { 13 , 14 } , { 15 , 16 } , { 17 , 18 } , { 19 , 20 } , { 21 ,
24 } , { 22 , 25 } , { 23 , 26 } , { 27 , 28 } , { 29 , 30 } , { 31 , 32 } ,
{ 33 , 34 } , { 35 , 36 } , { 37 , 38 } , { 39 , 40 } } ; const SmSizePair
dofOffsets [ 18 ] = { { 0 , 1 } , { 1 , 2 } , { 2 , 3 } , { 3 , 6 } , { 6 , 7
} , { 7 , 8 } , { 8 , 9 } , { 9 , 10 } , { 10 , 11 } , { 11 , 12 } , { 12 ,
13 } , { 13 , 14 } , { 14 , 15 } , { 15 , 16 } , { 16 , 17 } , { 17 , 18 } ,
{ 18 , 19 } , { 19 , 20 } } ; const size_t remodIndices [ 9 ] = { 13 , 15 ,
17 , 19 , 21 , 22 , 23 , 27 , 29 } ; const size_t equationsPerConstraint [ 7
] = { 0 , 0 , 3 , 0 , 5 , 1 , 1 } ; const size_t dofToVelSlot [ 20 ] = { 7 ,
8 , 9 , 10 , 11 , 12 , 14 , 16 , 18 , 20 , 24 , 25 , 26 , 28 , 30 , 32 , 34 ,
36 , 38 , 40 } ; const size_t constraintDofs [ 50 ] = { 0 , 1 , 2 , 3 , 4 , 5
, 6 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 0 , 1 , 2 , 3 , 4 , 5 , 7 , 10 , 11 , 12 ,
13 , 14 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 15 , 16 , 17 , 0 , 1 , 2 , 3 , 4 , 5 ,
7 , 8 , 9 , 15 , 18 , 19 , 15 , 16 } ; const size_t constraintDofOffsets [ 7
+ 1 ] = { 0 , 7 , 14 , 24 , 33 , 45 , 47 , 50 } ; const size_t Jm = 10 ;
const size_t Jn = 20 ; SmSizePair zeroSizePair ; zeroSizePair . mFirst =
zeroSizePair . mSecond = 0 ; simDelegate -> mTargetStrengthFree = 0 ;
simDelegate -> mTargetStrengthSuggested = 1 ; simDelegate ->
mTargetStrengthDesired = 2 ; simDelegate -> mTargetStrengthRequired = 3 ;
simDelegate -> mConsistencyTol = + 1.000000000000000100e-09 ; simDelegate ->
mDof = 20 ; simDelegate -> mStateSize = 45 ; simDelegate -> mNumStages = 14 ;
simDelegate -> mNumConstraints = 7 ; simDelegate ->
mNumAllConstraintEquations = 10 ; sm_core_SmSizePairVector_create ( &
simDelegate -> mJointToStageIdx , simDelegate -> mNumStages , & zeroSizePair
) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( & simDelegate ->
mJointToStageIdx ) , jointToStageIdx , simDelegate -> mNumStages * sizeof (
SmSizePair ) ) ; sm_core_SmSizeTVector_create ( & simDelegate ->
mPrimitiveIndices , simDelegate -> mNumStages + 1 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & simDelegate -> mPrimitiveIndices ) ,
primitiveIndices , ( simDelegate -> mNumStages + 1 ) * sizeof ( size_t ) ) ;
sm_core_SmSizePairVector_create ( & simDelegate -> mStateOffsets , 18 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
simDelegate -> mStateOffsets ) , stateOffsets , 18 * sizeof ( SmSizePair ) )
; sm_core_SmSizePairVector_create ( & simDelegate -> mDofOffsets , 18 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
simDelegate -> mDofOffsets ) , dofOffsets , 18 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizeTVector_create ( & simDelegate -> mRemodIndices , 9 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & simDelegate ->
mRemodIndices ) , remodIndices , 9 * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & simDelegate -> mEquationsPerConstraint ,
simDelegate -> mNumConstraints , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & simDelegate ->
mEquationsPerConstraint ) , equationsPerConstraint , simDelegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
simDelegate -> mDofToVelSlot , simDelegate -> mDof , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & simDelegate -> mDofToVelSlot ) ,
dofToVelSlot , simDelegate -> mDof * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & simDelegate -> mConstraintDofs , 50 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & simDelegate ->
mConstraintDofs ) , constraintDofs , 50 * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & simDelegate -> mConstraintDofOffsets ,
simDelegate -> mNumConstraints + 1 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & simDelegate -> mConstraintDofOffsets
) , constraintDofOffsets , ( simDelegate -> mNumConstraints + 1 ) * sizeof (
size_t ) ) ; sm_core_SmBoundedSet_create ( & simDelegate -> mPosRequired , 20
) ; sm_core_SmBoundedSet_create ( & simDelegate -> mPosDesired , 20 ) ;
sm_core_SmBoundedSet_create ( & simDelegate -> mPosSuggested , 20 ) ;
sm_core_SmBoundedSet_create ( & simDelegate -> mPosFree , 20 ) ;
sm_core_SmBoundedSet_create ( & simDelegate -> mPosNonRequired , 20 ) ;
sm_core_SmBoundedSet_create ( & simDelegate -> mPosSuggAndFree , 20 ) ;
sm_core_SmBoundedSet_create ( & simDelegate -> mVelRequired , 20 ) ;
sm_core_SmBoundedSet_create ( & simDelegate -> mVelDesired , 20 ) ;
sm_core_SmBoundedSet_create ( & simDelegate -> mVelSuggested , 20 ) ;
sm_core_SmBoundedSet_create ( & simDelegate -> mVelFree , 20 ) ;
sm_core_SmBoundedSet_create ( & simDelegate -> mVelNonRequired , 20 ) ;
sm_core_SmBoundedSet_create ( & simDelegate -> mVelSuggAndFree , 20 ) ;
sm_core_SmBoundedSet_create ( & simDelegate -> mConstraintFilter , 7 ) ;
sm_core_SmBoundedSet_create ( & simDelegate -> mActiveConstraints , 7 ) ;
sm_core_SmBoundedSet_create ( & simDelegate -> mActiveDofs , 20 ) ;
sm_core_SmBoundedSet_create ( & simDelegate -> mNewConstraints , 7 ) ;
sm_core_SmBoundedSet_create ( & simDelegate -> mNewDofs , 20 ) ;
sm_core_SmBoundedSet_create ( & simDelegate -> mUnsatisfiedConstraints , 7 )
; sm_core_SmSizeTVector_create ( & simDelegate -> mActiveConstraintsVect , 7
, 0 ) ; sm_core_SmSizeTVector_create ( & simDelegate -> mActiveDofsVect , 20
, 0 ) ; sm_core_SmSizePairVector_create ( & simDelegate ->
mBaseFrameVelOffsets , 1 , & zeroSizePair ) ; sm_core_SmRealVector_create ( &
simDelegate -> mInitialState , 45 , 0.0 ) ; sm_core_SmRealVector_create ( &
simDelegate -> mStartState , 45 , 0.0 ) ; sm_core_SmRealVector_create ( &
simDelegate -> mTestState , 45 , 0.0 ) ; sm_core_SmRealVector_create ( &
simDelegate -> mFullStateVector , 45 , 0.0 ) ; sm_core_SmRealVector_create (
& simDelegate -> mJacobianRowMaj , Jm * Jn , 0.0 ) ;
sm_core_SmRealVector_create ( & simDelegate -> mJacobian , Jm * Jn , 0.0 ) ;
sm_core_SmRealVector_create ( & simDelegate -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & simDelegate -> mConstraintError , Jm
, 0.0 ) ; sm_core_SmRealVector_create ( & simDelegate -> mBestConstraintError
, Jm , 0.0 ) ; sm_core_SmRealVector_create ( & simDelegate -> mDeltas , Jn *
( Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & simDelegate
-> mSvdWork , 981 , 0.0 ) ; sm_core_SmRealVector_create ( & simDelegate ->
mLineSearchScaledDeltaVect , 20 , 0.0 ) ; sm_core_SmRealVector_create ( &
simDelegate -> mLineSearchTestStateVect , 45 , 0.0 ) ;
sm_core_SmRealVector_create ( & simDelegate -> mLineSearchErrorVect , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & simDelegate -> mActiveDofVelsVect ,
20 , 0.0 ) ; sm_core_SmRealVector_create ( & simDelegate -> mVelSystemRhs ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & simDelegate -> mMotionData , 280
, 0.0 ) ; simDelegate -> mResetStateVector =
Walk_Sim4_6bedce81_1_resetStateVector ; simDelegate ->
mInitializeTrackedAngleState =
Walk_Sim4_6bedce81_1_initializeTrackedAngleState ; simDelegate ->
mComputeDiscreteState = Walk_Sim4_6bedce81_1_computeDiscreteState ;
simDelegate -> mAdjustPosition = Walk_Sim4_6bedce81_1_adjustPosition ;
simDelegate -> mPerturbState = Walk_Sim4_6bedce81_1_perturbState ;
simDelegate -> mPropagateMotion = Walk_Sim4_6bedce81_1_propagateMotion ;
simDelegate -> mComputeAssemblyError =
Walk_Sim4_6bedce81_1_computeAssemblyError ; simDelegate ->
mComputeAssemblyJacobian = Walk_Sim4_6bedce81_1_computeAssemblyJacobian ;
simDelegate -> mComputeFullAssemblyJacobian =
Walk_Sim4_6bedce81_1_computeFullAssemblyJacobian ; simDelegate ->
mConvertStateVector = Walk_Sim4_6bedce81_1_convertStateVector ; simDelegate
-> mConstructStateVector = Walk_Sim4_6bedce81_1_constructStateVector ;
simDelegate -> mExtractSolverStateVector =
Walk_Sim4_6bedce81_1_extractSolverStateVector ; simDelegate ->
mIsPositionViolation = Walk_Sim4_6bedce81_1_isPositionViolation ; simDelegate
-> mIsVelocityViolation = Walk_Sim4_6bedce81_1_isVelocityViolation ;
simDelegate -> mProjectStateSim = Walk_Sim4_6bedce81_1_projectStateSim ;
simDelegate -> mMech = NULL ; } static void initAssemblyStructures (
NeDaePrivateData * smData ) { NeAllocator * alloc = ne_default_allocator ( )
; const int32_T motionInputOffsets [ 6 ] = { 5 , 6 , 7 , 2 , 3 , 4 } ; int_T
status = 0 ; initMechanismDelegate ( & smData -> mMechanismDelegate ) ;
initSimulationDelegate ( & smData -> mSimulationDelegate ) ; status =
neu_create_int_vector_fields ( & smData -> mMotionInputOffsets , smData ->
mNumInputMotionPrimitives , alloc ) ; checkMemAllocStatus ( status ) ; memcpy
( smData -> mMotionInputOffsets . mX , motionInputOffsets , 6 * sizeof (
int32_T ) ) ; } static void initComputationFcnPtrs ( NeDaePrivateData *
smData ) { smData -> mDerivativeFcn = dae_cg_deriv_method ; smData ->
mOutputFcn = dae_cg_output_method ; smData -> mProjectionFcn =
dae_cg_project_solve ; smData -> mProjectionMaybeFcn =
dae_cg_projectMaybe_solve ; smData -> mCheckFcn = ( smData ->
mStateVectorSize == 0 ) ? dae_cg_check_solve : NULL ; smData -> mAssemblyFcn
= dae_cg_assemble_solve ; smData -> mSetupLoggerFcn =
sm_ssci_setupLoggerFcn_codeGen ; smData -> mLogFcn = sm_ssci_logFcn_codeGen ;
smData -> mResidualsFcn = NULL ; smData -> mLinearizeFcn = NULL ; smData ->
mGenerateFcn = NULL ; } static void initLiveLinkToSm ( NeDaePrivateData *
smData ) { smData -> mLiveSmLink = NULL ; smData -> mLiveSmLink_destroy =
NULL ; smData -> mLiveSmLink_copy = NULL ; } void
Walk_Sim4_6bedce81_1_NeDaePrivateData_create ( NeDaePrivateData * smData ) {
initBasicAttributes ( smData ) ; initStateVector ( smData ) ; initVariables (
smData ) ; initIoInfo ( smData ) ; initInputDerivs ( smData ) ;
initDirectFeedthrough ( smData ) ; initOutputDerivProc ( smData ) ;
initAssemblyStructures ( smData ) ; initComputationFcnPtrs ( smData ) ;
initLiveLinkToSm ( smData ) ; }
