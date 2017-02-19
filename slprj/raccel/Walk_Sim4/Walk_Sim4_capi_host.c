#include "Walk_Sim4_capi_host.h"
static Walk_Sim4_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Walk_Sim4_host_InitializeDataMapInfo(&(root), "Walk_Sim4");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
