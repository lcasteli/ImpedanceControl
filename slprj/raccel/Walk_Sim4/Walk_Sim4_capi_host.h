#include "__cf_Walk_Sim4.h"
#ifndef _RTW_HEADER_Walk_Sim4_cap_host_h__
#define _RTW_HEADER_Walk_Sim4_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
Walk_Sim4_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void Walk_Sim4_host_InitializeDataMapInfo ( Walk_Sim4_host_DataMapInfo_T *
dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
