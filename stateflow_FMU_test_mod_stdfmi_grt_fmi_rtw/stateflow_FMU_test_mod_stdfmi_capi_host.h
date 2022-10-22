#ifndef RTW_HEADER_stateflow_FMU_test_mod_stdfmi_cap_host_h__
#define RTW_HEADER_stateflow_FMU_test_mod_stdfmi_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
} stateflow_FMU_test_mod_stdfmi_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C" {

#endif

  void stateflow_FMU_test_mod_stdfmi_host_InitializeDataMapInfo
    (stateflow_FMU_test_mod_stdfmi_host_DataMapInfo_T *dataMap, const char *path);

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif               /* RTW_HEADER_stateflow_FMU_test_mod_stdfmi_cap_host_h__ */

/* EOF: stateflow_FMU_test_mod_stdfmi_capi_host.h */
