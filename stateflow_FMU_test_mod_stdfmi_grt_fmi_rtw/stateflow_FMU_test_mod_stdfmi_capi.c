/*
 * stateflow_FMU_test_mod_stdfmi_capi.c
 *
 * Code generation for model "stateflow_FMU_test_mod_stdfmi".
 *
 * Model version              : 1.6
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Wed Jun  1 19:12:21 2022
 *
 * Target selection: grtfmi.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "stateflow_FMU_test_mod_stdfmi_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "stateflow_FMU_test_mod_stdfmi.h"
#include "stateflow_FMU_test_mod_stdfmi_capi.h"
#include "stateflow_FMU_test_mod_stdfmi_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Block states information */
static const rtwCAPI_States rtBlockStates[] = {
  /* addrMapIndex, contStateStartIndex, blockPath,
   * stateName, pathAlias, dWorkIndex, dataTypeIndex, dimIndex,
   * fixPtIdx, sTimeIndex, isContinuous, hierInfoIdx, flatElemIdx
   */
  {
    0, -1, (NULL), (NULL), (NULL), 0, 0, 0, 0, 0, 0, -1, 0
  }
};

/* Root Inputs information */
static const rtwCAPI_Signals rtRootInputs[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, TARGET_STRING("stateflow_FMU_test_mod_stdfmi/delayCode"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("stateflow_FMU_test_mod_stdfmi/offCode"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("stateflow_FMU_test_mod_stdfmi/onCode"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("stateflow_FMU_test_mod_stdfmi/queueCode"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("stateflow_FMU_test_mod_stdfmi/waitCode"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 5, 0, TARGET_STRING("stateflow_FMU_test_mod_stdfmi/startCode"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

/* Root Outputs information */
static const rtwCAPI_Signals rtRootOutputs[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 6, 0, TARGET_STRING("stateflow_FMU_test_mod_stdfmi/waitState"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 7, 0, TARGET_STRING("stateflow_FMU_test_mod_stdfmi/onState"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 8, 0, TARGET_STRING("stateflow_FMU_test_mod_stdfmi/offState"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 9, 0, TARGET_STRING("stateflow_FMU_test_mod_stdfmi/delayState"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 10, 0, TARGET_STRING("stateflow_FMU_test_mod_stdfmi/queueState"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("stateflow_FMU_test_mod_stdfmi/startState"),
    TARGET_STRING(""), 6, 0, 0, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &stateflow_FMU_test_mod_stdfmi_U.delayCode,/* 0: Root Input */
  &stateflow_FMU_test_mod_stdfmi_U.offCode,/* 1: Root Input */
  &stateflow_FMU_test_mod_stdfmi_U.onCode,/* 2: Root Input */
  &stateflow_FMU_test_mod_stdfmi_U.queueCode,/* 3: Root Input */
  &stateflow_FMU_test_mod_stdfmi_U.waitCode,/* 4: Root Input */
  &stateflow_FMU_test_mod_stdfmi_U.startCode,/* 5: Root Input */
  &stateflow_FMU_test_mod_stdfmi_Y.waitState,/* 6: Root Output */
  &stateflow_FMU_test_mod_stdfmi_Y.onState,/* 7: Root Output */
  &stateflow_FMU_test_mod_stdfmi_Y.offState,/* 8: Root Output */
  &stateflow_FMU_test_mod_stdfmi_Y.delayState,/* 9: Root Output */
  &stateflow_FMU_test_mod_stdfmi_Y.queueState,/* 10: Root Output */
  &stateflow_FMU_test_mod_stdfmi_Y.startState,/* 11: Root Output */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer, enumStorageType */
  { "double", "real_T", 0, 0, sizeof(real_T), (uint8_T)SS_DOUBLE, 0, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1                                    /* 1 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.1, 0.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, (boolean_T)0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    (int8_T)0, (uint8_T)0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 0,
    rtRootInputs, 6,
    rtRootOutputs, 6 },

  { rtBlockParameters, 0,
    rtModelParameters, 0 },

  { rtBlockStates, 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 720414726U,
    924212110U,
    782294043U,
    3003851427U },
  (NULL), 0,
  (boolean_T)0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  stateflow_FMU_test_mod_stdfmi_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void stateflow_FMU_test_mod_stdfmi_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(stateflow_FMU_test_mod_stdfm_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(stateflow_FMU_test_mod_stdfm_M->DataMapInfo.mmi,
                       &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(stateflow_FMU_test_mod_stdfm_M->DataMapInfo.mmi,
    (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(stateflow_FMU_test_mod_stdfm_M->DataMapInfo.mmi,
    rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(stateflow_FMU_test_mod_stdfm_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(stateflow_FMU_test_mod_stdfm_M->DataMapInfo.mmi,
    (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(stateflow_FMU_test_mod_stdfm_M->DataMapInfo.mmi,
    (NULL));
  rtwCAPI_SetChildMMIArrayLen(stateflow_FMU_test_mod_stdfm_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void stateflow_FMU_test_mod_stdfmi_host_InitializeDataMapInfo
    (stateflow_FMU_test_mod_stdfmi_host_DataMapInfo_T *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, (NULL));

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, (NULL));

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, (NULL));

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: stateflow_FMU_test_mod_stdfmi_capi.c */
