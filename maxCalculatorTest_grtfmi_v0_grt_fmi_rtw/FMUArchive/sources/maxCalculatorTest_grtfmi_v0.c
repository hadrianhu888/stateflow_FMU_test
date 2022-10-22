/*
 * maxCalculatorTest_grtfmi_v0.c
 *
 * Code generation for model "maxCalculatorTest_grtfmi_v0".
 *
 * Model version              : 1.7
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Thu Jun  2 19:13:37 2022
 *
 * Target selection: grtfmi.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Debugging
 * Validation result: Not run
 */

#include "maxCalculatorTest_grtfmi_v0_capi.h"
#include "maxCalculatorTest_grtfmi_v0.h"
#include "maxCalculatorTest_grtfmi_v0_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_maxCalculatorTest_grtfmi_T maxCalculatorTest_grtfmi_v0_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_maxCalculatorTest_grtfmi_T maxCalculatorTest_grtfmi_v0_Y;

/* Real-time model */
static RT_MODEL_maxCalculatorTest_gr_T maxCalculatorTest_grtfmi_v0_M_;
RT_MODEL_maxCalculatorTest_gr_T *const maxCalculatorTest_grtfmi_v0_M =
  &maxCalculatorTest_grtfmi_v0_M_;

/* Model step function */
void maxCalculatorTest_grtfmi_v0_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Inport: '<Root>/In3'
   *  MinMax: '<Root>/Max'
   */
  maxCalculatorTest_grtfmi_v0_Y.Out1 = fmax(fmax
    (maxCalculatorTest_grtfmi_v0_U.In1, maxCalculatorTest_grtfmi_v0_U.In2),
    maxCalculatorTest_grtfmi_v0_U.In3);
}

/* Model initialize function */
void maxCalculatorTest_grtfmi_v0_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)maxCalculatorTest_grtfmi_v0_M, 0,
                sizeof(RT_MODEL_maxCalculatorTest_gr_T));

  /* external inputs */
  (void)memset(&maxCalculatorTest_grtfmi_v0_U, 0, sizeof
               (ExtU_maxCalculatorTest_grtfmi_T));

  /* external outputs */
  maxCalculatorTest_grtfmi_v0_Y.Out1 = 0.0;

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  maxCalculatorTest_grtfmi_v0_InitializeDataMapInfo();
}

/* Model terminate function */
void maxCalculatorTest_grtfmi_v0_terminate(void)
{
  /* (no terminate code required) */
}
