/*
 * File: stateflow_FMU_test_shrd_lib.c
 *
 * Code generated for Simulink model 'stateflow_FMU_test_shrd_lib'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Wed Jun  1 19:19:05 2022
 *
 * Target selection: ert_shrlib.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "stateflow_FMU_test_shrd_lib_capi.h"
#include "stateflow_FMU_test_shrd_lib.h"
#include "stateflow_FMU_test_shrd_lib_private.h"

/* Named constants for Chart: '<Root>/State Flow FMU Test' */
#define stateflow_FMU_test_shr_IN_delay ((uint8_T)1U)
#define stateflow_FMU_test_shr_IN_queue ((uint8_T)4U)
#define stateflow_FMU_test_shr_IN_start ((uint8_T)5U)
#define stateflow_FMU_test_shrd_IN_wait ((uint8_T)6U)
#define stateflow_FMU_test_shrd__IN_off ((uint8_T)2U)
#define stateflow_FMU_test_shrd_l_IN_on ((uint8_T)3U)

/* Block states (default storage) */
DW_stateflow_FMU_test_shrd_li_T stateflow_FMU_test_shrd_lib_DW;

/* External inputs (root inport signals with default storage) */
ExtU_stateflow_FMU_test_shrd__T stateflow_FMU_test_shrd_lib_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_stateflow_FMU_test_shrd__T stateflow_FMU_test_shrd_lib_Y;

/* Real-time model */
static RT_MODEL_stateflow_FMU_test_s_T stateflow_FMU_test_shrd_lib_M_;
RT_MODEL_stateflow_FMU_test_s_T *const stateflow_FMU_test_shrd_lib_M =
  &stateflow_FMU_test_shrd_lib_M_;

/* Model step function */
void stateflow_FMU_test_shrd_lib_step(void)
{
  /* Chart: '<Root>/State Flow FMU Test' incorporates:
   *  Inport: '<Root>/delayCode'
   *  Inport: '<Root>/offCode'
   *  Inport: '<Root>/onCode'
   *  Inport: '<Root>/queueCode'
   *  Inport: '<Root>/startCode'
   *  Inport: '<Root>/waitCode'
   */
  /* Gateway: State Flow FMU Test */
  /* During: State Flow FMU Test */
  if (stateflow_FMU_test_shrd_lib_DW.is_active_c3_stateflow_FMU_test == 0U) {
    /* Entry: State Flow FMU Test */
    stateflow_FMU_test_shrd_lib_DW.is_active_c3_stateflow_FMU_test = 1U;

    /* Entry Internal: State Flow FMU Test */
    /* Transition: '<S1>:2' */
    stateflow_FMU_test_shrd_lib_DW.is_c3_stateflow_FMU_test_shrd_l =
      stateflow_FMU_test_shr_IN_start;

    /* Outport: '<Root>/startState' */
    /* Entry 'start': '<S1>:1' */
    stateflow_FMU_test_shrd_lib_Y.startState = 1.0;

    /* Outport: '<Root>/delayState' */
    stateflow_FMU_test_shrd_lib_Y.delayState = 1.0;
  } else {
    switch (stateflow_FMU_test_shrd_lib_DW.is_c3_stateflow_FMU_test_shrd_l) {
     case stateflow_FMU_test_shr_IN_delay:
      /* During 'delay': '<S1>:6' */
      if (stateflow_FMU_test_shrd_lib_U.delayCode == 0.0) {
        /* Transition: '<S1>:16' */
        stateflow_FMU_test_shrd_lib_DW.is_c3_stateflow_FMU_test_shrd_l =
          stateflow_FMU_test_shrd_IN_wait;

        /* Outport: '<Root>/waitState' */
        /* Entry 'wait': '<S1>:5' */
        stateflow_FMU_test_shrd_lib_Y.waitState = 1.0;
      } else if (stateflow_FMU_test_shrd_lib_U.queueCode == 1.0) {
        /* Transition: '<S1>:18' */
        stateflow_FMU_test_shrd_lib_DW.is_c3_stateflow_FMU_test_shrd_l =
          stateflow_FMU_test_shr_IN_queue;

        /* Entry 'queue': '<S1>:7' */
      }
      break;

     case stateflow_FMU_test_shrd__IN_off:
      /* During 'off': '<S1>:4' */
      if ((stateflow_FMU_test_shrd_lib_U.startCode == 0.0) &&
          (stateflow_FMU_test_shrd_lib_U.offCode == 0.0)) {
        /* Transition: '<S1>:12' */
        stateflow_FMU_test_shrd_lib_DW.is_c3_stateflow_FMU_test_shrd_l =
          stateflow_FMU_test_shr_IN_start;

        /* Outport: '<Root>/startState' */
        /* Entry 'start': '<S1>:1' */
        stateflow_FMU_test_shrd_lib_Y.startState = 1.0;

        /* Outport: '<Root>/delayState' */
        stateflow_FMU_test_shrd_lib_Y.delayState = 1.0;
      } else if (stateflow_FMU_test_shrd_lib_U.onCode == 1.0) {
        /* Transition: '<S1>:22' */
        stateflow_FMU_test_shrd_lib_DW.is_c3_stateflow_FMU_test_shrd_l =
          stateflow_FMU_test_shrd_l_IN_on;

        /* Outport: '<Root>/onState' */
        /* Entry 'on': '<S1>:3' */
        stateflow_FMU_test_shrd_lib_Y.onState = 1.0;
      }
      break;

     case stateflow_FMU_test_shrd_l_IN_on:
      /* During 'on': '<S1>:3' */
      if ((stateflow_FMU_test_shrd_lib_U.waitCode == 1.0) &&
          (stateflow_FMU_test_shrd_lib_U.onCode == 1.0)) {
        /* Transition: '<S1>:10' */
        stateflow_FMU_test_shrd_lib_DW.is_c3_stateflow_FMU_test_shrd_l =
          stateflow_FMU_test_shrd_IN_wait;

        /* Outport: '<Root>/waitState' */
        /* Entry 'wait': '<S1>:5' */
        stateflow_FMU_test_shrd_lib_Y.waitState = 1.0;
      } else if (stateflow_FMU_test_shrd_lib_U.offCode == 1.0) {
        /* Transition: '<S1>:21' */
        stateflow_FMU_test_shrd_lib_DW.is_c3_stateflow_FMU_test_shrd_l =
          stateflow_FMU_test_shrd__IN_off;

        /* Entry 'off': '<S1>:4' */
      } else {
        /* Outport: '<Root>/onState' */
        stateflow_FMU_test_shrd_lib_Y.onState = 1.0;
      }
      break;

     case stateflow_FMU_test_shr_IN_queue:
      /* During 'queue': '<S1>:7' */
      if (stateflow_FMU_test_shrd_lib_U.queueCode == 1.0) {
        /* Transition: '<S1>:19' */
        stateflow_FMU_test_shrd_lib_DW.is_c3_stateflow_FMU_test_shrd_l =
          stateflow_FMU_test_shr_IN_delay;

        /* Entry 'delay': '<S1>:6' */
      } else if (stateflow_FMU_test_shrd_lib_U.offCode == 1.0) {
        /* Transition: '<S1>:23' */
        stateflow_FMU_test_shrd_lib_DW.is_c3_stateflow_FMU_test_shrd_l =
          stateflow_FMU_test_shrd__IN_off;

        /* Entry 'off': '<S1>:4' */
      }
      break;

     case stateflow_FMU_test_shr_IN_start:
      /* During 'start': '<S1>:1' */
      if ((stateflow_FMU_test_shrd_lib_U.startCode == 1.0) &&
          (stateflow_FMU_test_shrd_lib_U.onCode == 1.0)) {
        /* Transition: '<S1>:8' */
        stateflow_FMU_test_shrd_lib_DW.is_c3_stateflow_FMU_test_shrd_l =
          stateflow_FMU_test_shrd_l_IN_on;

        /* Outport: '<Root>/onState' */
        /* Entry 'on': '<S1>:3' */
        stateflow_FMU_test_shrd_lib_Y.onState = 1.0;
      } else if ((stateflow_FMU_test_shrd_lib_U.offCode == 1.0) &&
                 (stateflow_FMU_test_shrd_lib_U.startCode == 0.0)) {
        /* Transition: '<S1>:17' */
        stateflow_FMU_test_shrd_lib_DW.is_c3_stateflow_FMU_test_shrd_l =
          stateflow_FMU_test_shrd__IN_off;

        /* Entry 'off': '<S1>:4' */
      } else {
        /* Outport: '<Root>/startState' */
        stateflow_FMU_test_shrd_lib_Y.startState = 1.0;

        /* Outport: '<Root>/delayState' */
        stateflow_FMU_test_shrd_lib_Y.delayState = 1.0;
      }
      break;

     default:
      /* During 'wait': '<S1>:5' */
      if ((stateflow_FMU_test_shrd_lib_U.waitCode == 1.0) &&
          (stateflow_FMU_test_shrd_lib_U.onCode == 0.0)) {
        /* Transition: '<S1>:11' */
        stateflow_FMU_test_shrd_lib_DW.is_c3_stateflow_FMU_test_shrd_l =
          stateflow_FMU_test_shrd_l_IN_on;

        /* Outport: '<Root>/onState' */
        /* Entry 'on': '<S1>:3' */
        stateflow_FMU_test_shrd_lib_Y.onState = 1.0;
      } else if (stateflow_FMU_test_shrd_lib_U.delayCode == 1.0) {
        /* Transition: '<S1>:13' */
        stateflow_FMU_test_shrd_lib_DW.is_c3_stateflow_FMU_test_shrd_l =
          stateflow_FMU_test_shr_IN_delay;

        /* Entry 'delay': '<S1>:6' */
      } else {
        /* Outport: '<Root>/waitState' */
        stateflow_FMU_test_shrd_lib_Y.waitState = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/State Flow FMU Test' */
}

/* Model initialize function */
void stateflow_FMU_test_shrd_lib_initialize(void)
{
  /* Registration code */

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  stateflow_FMU_test_shrd_lib_InitializeDataMapInfo();
}

/* Model terminate function */
void stateflow_FMU_test_shrd_lib_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
