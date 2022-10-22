/*
 * stateflow_FMU_test_cosim_sf.c
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

#include <math.h>
#include "stateflow_FMU_test_cosim_sf.h"
#include "stateflow_FMU_test_cosim_sf_private.h"
#include "simstruc.h"
#include "fixedpoint.h"

/* Named constants for Chart: '<Root>/State Flow FMU Test' */
#define stateflow_FMU_test_cos_IN_delay ((uint8_T)1U)
#define stateflow_FMU_test_cos_IN_queue ((uint8_T)4U)
#define stateflow_FMU_test_cos_IN_start ((uint8_T)5U)
#define stateflow_FMU_test_cosi_IN_wait ((uint8_T)6U)
#define stateflow_FMU_test_cosim_IN_off ((uint8_T)2U)
#define stateflow_FMU_test_cosim_IN_on ((uint8_T)3U)
#define stateflow_FM_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

extern void *stateflow_FMU_test_cosim_malloc(SimStruct *S);

#endif

#ifndef __RTW_UTFREE__
#if defined (MATLAB_MEX_FILE)

extern void * utMalloc(size_t);
extern void utFree(void *);

#endif
#endif                                 /* #ifndef __RTW_UTFREE__ */

#if defined(MATLAB_MEX_FILE)
#include "rt_nonfinite.c"
#endif

static const char_T *RT_MEMORY_ALLOCATION_ERROR =
  "memory allocation error in generated S-Function";

/* System initialize for root system: '<Root>' */
#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  if (ssIsFirstInitCond(S)) {
    B_stateflow_FMU_test_cosim_T *_rtB;
    _rtB = ((B_stateflow_FMU_test_cosim_T *) ssGetLocalBlockIO(S));

    /* SystemInitialize for Chart: '<Root>/State Flow FMU Test' */
    ((uint8_T *)ssGetDWork(S, 0))[0] = 0U;
    ((uint8_T *)ssGetDWork(S, 1))[0] = stateflow_FM_IN_NO_ACTIVE_CHILD;
    _rtB->waitState = 0.0;
    _rtB->onState = 0.0;
    _rtB->offState = 0.0;
    _rtB->delayState = 0.0;
    _rtB->queueState = 0.0;
    _rtB->startState = 0.0;
  } else {
    B_stateflow_FMU_test_cosim_T *_rtB;
    _rtB = ((B_stateflow_FMU_test_cosim_T *) ssGetLocalBlockIO(S));

    /* SystemReset for Chart: '<Root>/State Flow FMU Test' */
    ((uint8_T *)ssGetDWork(S, 0))[0] = 0U;
    ((uint8_T *)ssGetDWork(S, 1))[0] = stateflow_FM_IN_NO_ACTIVE_CHILD;
    _rtB->waitState = 0.0;
    _rtB->onState = 0.0;
    _rtB->offState = 0.0;
    _rtB->delayState = 0.0;
    _rtB->queueState = 0.0;
    _rtB->startState = 0.0;
  }
}

/* Start for root system: '<Root>' */
#define MDL_START

static void mdlStart(SimStruct *S)
{
  /* instance underlying S-Function data */
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#if defined(MATLAB_MEX_FILE)

  /* non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

#endif

  stateflow_FMU_test_cosim_malloc(S);
  if (ssGetErrorStatus(S) != (NULL) ) {
    return;
  }

#endif

  {
  }
}

/* Outputs for root system: '<Root>' */
static void mdlOutputs(SimStruct *S, int_T tid)
{
  B_stateflow_FMU_test_cosim_T *_rtB;
  _rtB = ((B_stateflow_FMU_test_cosim_T *) ssGetLocalBlockIO(S));

  /* Chart: '<Root>/State Flow FMU Test' */
  /* Gateway: State Flow FMU Test */
  /* During: State Flow FMU Test */
  if (((uint8_T *)ssGetDWork(S, 0))[0] == 0U) {
    /* Entry: State Flow FMU Test */
    ((uint8_T *)ssGetDWork(S, 0))[0] = 1U;

    /* Entry Internal: State Flow FMU Test */
    /* Transition: '<S1>:2' */
    ((uint8_T *)ssGetDWork(S, 1))[0] = stateflow_FMU_test_cos_IN_start;

    /* Entry 'start': '<S1>:1' */
    _rtB->startState = 1.0;
    _rtB->delayState = 1.0;
  } else {
    switch (((uint8_T *)ssGetDWork(S, 1))[0]) {
     case stateflow_FMU_test_cos_IN_delay:
      /* During 'delay': '<S1>:6' */
      if (*((const real_T **)ssGetInputPortSignalPtrs(S, 0))[0] == 0.0) {
        /* Transition: '<S1>:16' */
        ((uint8_T *)ssGetDWork(S, 1))[0] = stateflow_FMU_test_cosi_IN_wait;

        /* Entry 'wait': '<S1>:5' */
        _rtB->waitState = 1.0;
      } else if (*((const real_T **)ssGetInputPortSignalPtrs(S, 3))[0] == 1.0) {
        /* Transition: '<S1>:18' */
        ((uint8_T *)ssGetDWork(S, 1))[0] = stateflow_FMU_test_cos_IN_queue;

        /* Entry 'queue': '<S1>:7' */
      }
      break;

     case stateflow_FMU_test_cosim_IN_off:
      /* During 'off': '<S1>:4' */
      if ((*((const real_T **)ssGetInputPortSignalPtrs(S, 5))[0] == 0.0) && (*((
             const real_T **)ssGetInputPortSignalPtrs(S, 1))[0] == 0.0)) {
        /* Transition: '<S1>:12' */
        ((uint8_T *)ssGetDWork(S, 1))[0] = stateflow_FMU_test_cos_IN_start;

        /* Entry 'start': '<S1>:1' */
        _rtB->startState = 1.0;
        _rtB->delayState = 1.0;
      } else if (*((const real_T **)ssGetInputPortSignalPtrs(S, 2))[0] == 1.0) {
        /* Transition: '<S1>:22' */
        ((uint8_T *)ssGetDWork(S, 1))[0] = stateflow_FMU_test_cosim_IN_on;

        /* Entry 'on': '<S1>:3' */
        _rtB->onState = 1.0;
      }
      break;

     case stateflow_FMU_test_cosim_IN_on:
      /* During 'on': '<S1>:3' */
      if ((*((const real_T **)ssGetInputPortSignalPtrs(S, 4))[0] == 1.0) && (*((
             const real_T **)ssGetInputPortSignalPtrs(S, 2))[0] == 1.0)) {
        /* Transition: '<S1>:10' */
        ((uint8_T *)ssGetDWork(S, 1))[0] = stateflow_FMU_test_cosi_IN_wait;

        /* Entry 'wait': '<S1>:5' */
        _rtB->waitState = 1.0;
      } else if (*((const real_T **)ssGetInputPortSignalPtrs(S, 1))[0] == 1.0) {
        /* Transition: '<S1>:21' */
        ((uint8_T *)ssGetDWork(S, 1))[0] = stateflow_FMU_test_cosim_IN_off;

        /* Entry 'off': '<S1>:4' */
      } else {
        _rtB->onState = 1.0;
      }
      break;

     case stateflow_FMU_test_cos_IN_queue:
      /* During 'queue': '<S1>:7' */
      if (*((const real_T **)ssGetInputPortSignalPtrs(S, 3))[0] == 1.0) {
        /* Transition: '<S1>:19' */
        ((uint8_T *)ssGetDWork(S, 1))[0] = stateflow_FMU_test_cos_IN_delay;

        /* Entry 'delay': '<S1>:6' */
      } else if (*((const real_T **)ssGetInputPortSignalPtrs(S, 1))[0] == 1.0) {
        /* Transition: '<S1>:23' */
        ((uint8_T *)ssGetDWork(S, 1))[0] = stateflow_FMU_test_cosim_IN_off;

        /* Entry 'off': '<S1>:4' */
      }
      break;

     case stateflow_FMU_test_cos_IN_start:
      /* During 'start': '<S1>:1' */
      if ((*((const real_T **)ssGetInputPortSignalPtrs(S, 5))[0] == 1.0) && (*((
             const real_T **)ssGetInputPortSignalPtrs(S, 2))[0] == 1.0)) {
        /* Transition: '<S1>:8' */
        ((uint8_T *)ssGetDWork(S, 1))[0] = stateflow_FMU_test_cosim_IN_on;

        /* Entry 'on': '<S1>:3' */
        _rtB->onState = 1.0;
      } else if ((*((const real_T **)ssGetInputPortSignalPtrs(S, 1))[0] == 1.0) &&
                 (*((const real_T **)ssGetInputPortSignalPtrs(S, 5))[0] == 0.0))
      {
        /* Transition: '<S1>:17' */
        ((uint8_T *)ssGetDWork(S, 1))[0] = stateflow_FMU_test_cosim_IN_off;

        /* Entry 'off': '<S1>:4' */
      } else {
        _rtB->startState = 1.0;
        _rtB->delayState = 1.0;
      }
      break;

     default:
      /* During 'wait': '<S1>:5' */
      if ((*((const real_T **)ssGetInputPortSignalPtrs(S, 4))[0] == 1.0) && (*((
             const real_T **)ssGetInputPortSignalPtrs(S, 2))[0] == 0.0)) {
        /* Transition: '<S1>:11' */
        ((uint8_T *)ssGetDWork(S, 1))[0] = stateflow_FMU_test_cosim_IN_on;

        /* Entry 'on': '<S1>:3' */
        _rtB->onState = 1.0;
      } else if (*((const real_T **)ssGetInputPortSignalPtrs(S, 0))[0] == 1.0) {
        /* Transition: '<S1>:13' */
        ((uint8_T *)ssGetDWork(S, 1))[0] = stateflow_FMU_test_cos_IN_delay;

        /* Entry 'delay': '<S1>:6' */
      } else {
        _rtB->waitState = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/State Flow FMU Test' */

  /* Outport: '<Root>/waitState' */
  ((real_T *)ssGetOutputPortSignal(S, 0))[0] = _rtB->waitState;

  /* Outport: '<Root>/onState' */
  ((real_T *)ssGetOutputPortSignal(S, 1))[0] = _rtB->onState;

  /* Outport: '<Root>/offState' */
  ((real_T *)ssGetOutputPortSignal(S, 2))[0] = _rtB->offState;

  /* Outport: '<Root>/delayState' */
  ((real_T *)ssGetOutputPortSignal(S, 3))[0] = _rtB->delayState;

  /* Outport: '<Root>/queueState' */
  ((real_T *)ssGetOutputPortSignal(S, 4))[0] = _rtB->queueState;

  /* Outport: '<Root>/startState' */
  ((real_T *)ssGetOutputPortSignal(S, 5))[0] = _rtB->startState;
  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  UNUSED_PARAMETER(tid);
}

/* Termination for root system: '<Root>' */
static void mdlTerminate(SimStruct *S)
{

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

  if (ssGetUserData(S) != (NULL) ) {
    rt_FREE(ssGetLocalBlockIO(S));
  }

  rt_FREE(ssGetUserData(S));

#endif

}

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#include "stateflow_FMU_test_cosim_mid.h"
#endif

/* Function to initialize sizes. */
static void mdlInitializeSizes(SimStruct *S)
{
  ssSetNumSampleTimes(S, 1);           /* Number of sample times */
  ssSetNumContStates(S, 0);            /* Number of continuous states */
  ssSetNumNonsampledZCs(S, 0);         /* Number of nonsampled ZCs */

  /* Number of output ports */
  if (!ssSetNumOutputPorts(S, 6))
    return;

  /* outport number: 0 */
  if (!ssSetOutputPortVectorDimension(S, 0, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 0, SS_DOUBLE);
  }

  ssSetOutputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);

  /* outport number: 1 */
  if (!ssSetOutputPortVectorDimension(S, 1, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 1, SS_DOUBLE);
  }

  ssSetOutputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);

  /* outport number: 2 */
  if (!ssSetOutputPortVectorDimension(S, 2, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 2, SS_DOUBLE);
  }

  ssSetOutputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);

  /* outport number: 3 */
  if (!ssSetOutputPortVectorDimension(S, 3, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 3, SS_DOUBLE);
  }

  ssSetOutputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);

  /* outport number: 4 */
  if (!ssSetOutputPortVectorDimension(S, 4, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 4, SS_DOUBLE);
  }

  ssSetOutputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);

  /* outport number: 5 */
  if (!ssSetOutputPortVectorDimension(S, 5, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 5, SS_DOUBLE);
  }

  ssSetOutputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);

  /* Number of input ports */
  if (!ssSetNumInputPorts(S, 6))
    return;

  /* inport number: 0 */
  {
    if (!ssSetInputPortVectorDimension(S, 0, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 0, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 0, 1);
    ssSetInputPortOverWritable(S, 0, 0);
    ssSetInputPortOptimOpts(S, 0, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 1 */
  {
    if (!ssSetInputPortVectorDimension(S, 1, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 1, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 1, 1);
    ssSetInputPortOverWritable(S, 1, 0);
    ssSetInputPortOptimOpts(S, 1, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 2 */
  {
    if (!ssSetInputPortVectorDimension(S, 2, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 2, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 2, 1);
    ssSetInputPortOverWritable(S, 2, 0);
    ssSetInputPortOptimOpts(S, 2, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 3 */
  {
    if (!ssSetInputPortVectorDimension(S, 3, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 3, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 3, 1);
    ssSetInputPortOverWritable(S, 3, 0);
    ssSetInputPortOptimOpts(S, 3, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 4 */
  {
    if (!ssSetInputPortVectorDimension(S, 4, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 4, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 4, 1);
    ssSetInputPortOverWritable(S, 4, 0);
    ssSetInputPortOptimOpts(S, 4, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 5 */
  {
    if (!ssSetInputPortVectorDimension(S, 5, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 5, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 5, 1);
    ssSetInputPortOverWritable(S, 5, 0);
    ssSetInputPortOptimOpts(S, 5, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  ssSetRTWGeneratedSFcn(S, 1);         /* Generated S-function */

  /* DWork */
  if (!ssSetNumDWork(S, 2)) {
    return;
  }

  /* '<Root>/State Flow FMU Test': DWORK1 */
  ssSetDWorkName(S, 0, "DWORK0");
  ssSetDWorkWidth(S, 0, 1);
  ssSetDWorkDataType(S, 0, SS_UINT8);

  /* '<Root>/State Flow FMU Test': DWORK2 */
  ssSetDWorkName(S, 1, "DWORK1");
  ssSetDWorkWidth(S, 1, 1);
  ssSetDWorkDataType(S, 1, SS_UINT8);

  /* Tunable Parameters */
  ssSetNumSFcnParams(S, 0);

  /* Number of expected parameters */
#if defined(MATLAB_MEX_FILE)

  if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {

#if defined(MDL_CHECK_PARAMETERS)

    mdlCheckParameters(S);

#endif                                 /* MDL_CHECK_PARAMETERS */

    if (ssGetErrorStatus(S) != (NULL) ) {
      return;
    }
  } else {
    return;                /* Parameter mismatch will be reported by Simulink */
  }

#endif                                 /* MATLAB_MEX_FILE */

  /* Options */
  ssSetOptions(S, (SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE |
                   SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME ));

#if SS_SFCN_FOR_SIM

  {
    ssSupportsMultipleExecInstances(S, true);
    ssHasStateInsideForEachSS(S, false);
    ssSetModelReferenceSampleTimeInheritanceRule(S,
      USE_DEFAULT_FOR_DISCRETE_INHERITANCE);
  }

#endif

}

/* Function to initialize sample times. */
static void mdlInitializeSampleTimes(SimStruct *S)
{
  ssSetSampleTime(S, 0, INHERITED_SAMPLE_TIME);
  ssSetOffsetTime(S, 0, 0.0);
}

#if defined(MATLAB_MEX_FILE)
#include "fixedpoint.c"
#include "simulink.c"
#else
#undef S_FUNCTION_NAME
#define S_FUNCTION_NAME                stateflow_FMU_test_cosim_sf
#include "cg_sfun.h"
#endif                                 /* defined(MATLAB_MEX_FILE) */
