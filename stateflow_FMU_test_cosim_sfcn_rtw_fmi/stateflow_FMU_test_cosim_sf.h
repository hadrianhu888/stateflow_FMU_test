/*
 * stateflow_FMU_test_cosim_sf.h
 *
 * Code generation for model "stateflow_FMU_test_cosim_sf".
 *
 * Model version              : 1.5
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Wed Jun  1 19:09:22 2022
 *
 * Target selection: rtwsfcnfmi.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Debugging
 * Validation result: Not run
 */

#ifndef RTW_HEADER_stateflow_FMU_test_cosim_sf_h_
#define RTW_HEADER_stateflow_FMU_test_cosim_sf_h_
#include <string.h>
#include <stddef.h>
#ifndef stateflow_FMU_test_cosim_sf_COMMON_INCLUDES_
#define stateflow_FMU_test_cosim_sf_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME                stateflow_FMU_test_cosim_sf
#define S_FUNCTION_LEVEL               2
#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif

#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#if !defined(MATLAB_MEX_FILE)
#include "rt_matrx.h"
#endif

#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES

typedef struct {
  void *blockIO;
  void *defaultParam;
  void *nonContDerivSig;
} LocalS;

#define ssSetLocalBlockIO(S, io)       ((LocalS *)ssGetUserData(S))->blockIO = ((void *)(io))
#define ssGetLocalBlockIO(S)           ((LocalS *)ssGetUserData(S))->blockIO
#define ssSetLocalDefaultParam(S, paramVector) ((LocalS *)ssGetUserData(S))->defaultParam = (paramVector)
#define ssGetLocalDefaultParam(S)      ((LocalS *)ssGetUserData(S))->defaultParam
#define ssSetLocalNonContDerivSig(S, pSig) ((LocalS *)ssGetUserData(S))->nonContDerivSig = (pSig)
#define ssGetLocalNonContDerivSig(S)   ((LocalS *)ssGetUserData(S))->nonContDerivSig
#endif
#endif                        /* stateflow_FMU_test_cosim_sf_COMMON_INCLUDES_ */

#include "stateflow_FMU_test_cosim_sf_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Block signals (default storage) */
typedef struct {
  real_T waitState;                    /* '<Root>/State Flow FMU Test' */
  real_T onState;                      /* '<Root>/State Flow FMU Test' */
  real_T offState;                     /* '<Root>/State Flow FMU Test' */
  real_T delayState;                   /* '<Root>/State Flow FMU Test' */
  real_T queueState;                   /* '<Root>/State Flow FMU Test' */
  real_T startState;                   /* '<Root>/State Flow FMU Test' */
} B_stateflow_FMU_test_cosim_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T *delayCode;                   /* '<Root>/delayCode' */
  real_T *offCode;                     /* '<Root>/offCode' */
  real_T *onCode;                      /* '<Root>/onCode' */
  real_T *queueCode;                   /* '<Root>/queueCode' */
  real_T *waitCode;                    /* '<Root>/waitCode' */
  real_T *startCode;                   /* '<Root>/startCode' */
} ExternalUPtrs_stateflow_FMU_test_cosim_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T *waitState;                   /* '<Root>/waitState' */
  real_T *onState;                     /* '<Root>/onState' */
  real_T *offState;                    /* '<Root>/offState' */
  real_T *delayState;                  /* '<Root>/delayState' */
  real_T *queueState;                  /* '<Root>/queueState' */
  real_T *startState;                  /* '<Root>/startState' */
} ExtY_stateflow_FMU_test_cosim_T;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'stateflow_FMU_test_cosim_sf'
 * '<S1>'   : 'stateflow_FMU_test_cosim/State Flow FMU Test'
 */
#endif                           /* RTW_HEADER_stateflow_FMU_test_cosim_sf_h_ */
