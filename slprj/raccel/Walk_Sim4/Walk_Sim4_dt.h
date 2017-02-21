#include "__cf_Walk_Sim4.h"
#include "ext_types.h"
static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T )
, sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof (
uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T )
, sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof (
action_T ) , 2 * sizeof ( uint32_T ) } ; static const char_T *
rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T" ,
"int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T"
, "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" } ; static
DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB . i5pngojnqr
[ 0 ] ) , 0 , 0 , 263 } , { ( char_T * ) ( & rtB . hvkcdvrvj3 . j5waylb1c5 [
0 ] ) , 0 , 0 , 12 } , { ( char_T * ) ( & rtB . n1b4dgswxn . j5waylb1c5 [ 0 ]
) , 0 , 0 , 12 } , { ( char_T * ) ( & rtDW . lz43hau3ig ) , 0 , 0 , 48 } , {
( char_T * ) ( & rtDW . fafkv3xcrk . TimePtr ) , 11 , 0 , 41 } , { ( char_T *
) ( & rtDW . h4aljpv1cn ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW .
aanf40bm32 . PrevIndex ) , 10 , 0 , 6 } , { ( char_T * ) ( & rtDW .
edx0zygcli ) , 8 , 0 , 4 } } ; static DataTypeTransitionTable rtBTransTable =
{ 8U , rtBTransitions } ; static DataTypeTransition rtPTransitions [ ] = { {
( char_T * ) ( & rtP . FromWorkspace9_Time0 [ 0 ] ) , 0 , 0 , 4560 } } ;
static DataTypeTransitionTable rtPTransTable = { 1U , rtPTransitions } ;
