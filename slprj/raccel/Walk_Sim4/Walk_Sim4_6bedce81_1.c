#include "__cf_Walk_Sim4.h"
#include "ne_std.h"
#include "ne_default_allocator.h"
#include "ne_dae.h"
#include "ne_solverparameters.h"
#include "sm_ssci_NeDaePrivateData.h"
NeDae * sm_ssci_constructDae ( NeDaePrivateData * smData ) ; void
Walk_Sim4_6bedce81_1_NeDaePrivateData_create ( NeDaePrivateData * smData ) ;
void Walk_Sim4_6bedce81_1_dae ( NeDae * * dae , const NeModelParameters *
modelParams , const NeSolverParameters * solverParams , const NeLinearAlgebra
* linear_algebra_ptr ) { NeAllocator * alloc = ne_default_allocator ( ) ;
NeDaePrivateData * smData = ( NeDaePrivateData * ) alloc -> mCallocFcn (
alloc , sizeof ( NeDaePrivateData ) , 1 ) ; ( void ) modelParams ; ( void )
solverParams ; ( void ) linear_algebra_ptr ;
Walk_Sim4_6bedce81_1_NeDaePrivateData_create ( smData ) ; * dae =
sm_ssci_constructDae ( smData ) ; }
