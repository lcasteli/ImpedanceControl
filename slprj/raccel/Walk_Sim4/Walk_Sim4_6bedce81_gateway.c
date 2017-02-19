#include "__cf_Walk_Sim4.h"
#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif
#include "nesl_rtw.h"
#include "Walk_Sim4_6bedce81_1.h"
void Walk_Sim4_6bedce81_gateway ( void ) { NeModelParameters modelparams = {
( NeSolverType ) 0 , 0.001 , 1 , 0.001 , 0 , 0 , 0 , 0 , ( SscLoggingSetting
) 0 , } ; NeSolverParameters solverparams = { 0 , 0 , 1 , 0 , 0 , 0.001 ,
1e-06 , 1e-09 , 0 , 0 , 100 , 0 , 1e-09 , 0 , ( NeAdvancerChoice ) 0 , 0.001
, 0 , 3 , 2 , ( NeLinearAlgebraChoice ) 0 , 1024 , 1 , 0.001 , } ; const
NeOutputParameters * outputparameters = NULL ; const NeLinearAlgebra *
linear_algebra_ptr = ( ( solverparams . mLinearAlgebra == NE_FULL_LA ) ?
get_rtw_linear_algebra ( ) : neu_get_csparse_linear_algebra ( ) ) ; NeDae *
dae [ 1 ] ; size_t numOutputs = 0 ; { static const NeOutputParameters
outputparameters_init [ ] = { { 0 , 0 ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration" , } , { 0 , 1 ,
"Walk_Sim4/Gait Emulator/Solver\nConfiguration" , } , } ; outputparameters =
outputparameters_init ; numOutputs = sizeof ( outputparameters_init ) /
sizeof ( outputparameters_init [ 0 ] ) ; } Walk_Sim4_6bedce81_1_dae ( & dae [
0 ] , & modelparams , & solverparams , linear_algebra_ptr ) ;
nesl_register_simulator_group (
"Walk_Sim4/Gait Emulator/Solver Configuration" , 1 , dae , solverparams ,
modelparams , numOutputs , outputparameters , 1 ) ; }
