/*
 * stateflow_FMU_test_cosim_mid.h
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
 *
 * SOURCES: stateflow_FMU_test_cosim_sf.c
 */

#include "simstruc.h"
#include "stateflow_FMU_test_cosim_sf.h"
#if defined(MATLAB_MEX_FILE) || defined(RT_MALLOC)

static int_T RegNumInputPorts(SimStruct *S, int_T nInputPorts)
{
  _ssSetNumInputPorts(S,nInputPorts);
  return true;
}

static int_T RegNumOutputPorts(SimStruct *S, int_T nOutputPorts)
{
  _ssSetNumOutputPorts(S,nOutputPorts);
  return true;
}

static int_T FcnSetErrorStatus(const SimStruct *S, DTypeId arg2)
{
  static char msg[256];
  if (strlen(ssGetModelName(S)) < 128) {
    sprintf(msg,
            "S-function %s does not have a tlc file. It cannot use macros that access regDataType field in simstruct.",
            ssGetModelName(S));
  } else {
    sprintf(msg,
            "A S-function does not have a tlc file. It cannot use macros that access regDataType field in simstruct.");
  }

  ssSetErrorStatus(S, msg);
  UNUSED_PARAMETER(arg2);
  return 0;
}

static void * FcnSetErrorStatusWithReturnPtr(const SimStruct *S, DTypeId arg2)
{
  FcnSetErrorStatus(S,0);
  UNUSED_PARAMETER(arg2);
  return 0;
}

static int_T FcnSetErrorStatusWithArgPtr(const SimStruct *S, const void* arg2)
{
  FcnSetErrorStatus(S,0);
  UNUSED_PARAMETER(arg2);
  return 0;
}

#endif

/* Instance data for model: stateflow_FMU_test_cosim */
void *stateflow_FMU_test_cosim_malloc(SimStruct *rts)
{
  /* Local SimStruct for the generated S-Function */
  LocalS *lS = (LocalS *) malloc(sizeof(LocalS));
  ss_VALIDATE_MEMORY(rts,lS);
  (void) memset((char *) lS, 0,
                sizeof(LocalS));
  ssSetUserData(rts, lS);

  /* block I/O */
  {
    void *b = malloc(sizeof(B_stateflow_FMU_test_cosim_T));
    ss_VALIDATE_MEMORY(rts,b);
    ssSetLocalBlockIO(rts, b);
    (void) memset(b, 0,
                  sizeof(B_stateflow_FMU_test_cosim_T));
  }

  /* model checksums */
  ssSetChecksumVal(rts, 0, 374118774U);
  ssSetChecksumVal(rts, 1, 475945049U);
  ssSetChecksumVal(rts, 2, 3051879824U);
  ssSetChecksumVal(rts, 3, 1139358516U);
  return (NULL);
}