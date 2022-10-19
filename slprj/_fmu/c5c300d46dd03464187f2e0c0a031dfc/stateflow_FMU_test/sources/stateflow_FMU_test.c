#include "stateflow_FMU_test_macros.h"
#include "stateflow_FMU_test.h"
#include "stateflow_FMU_test_private.h"

#define stateflow_FMU_test_IN_delay    ((uint8_T)1U)
#define stateflow_FMU_test_IN_off      ((uint8_T)2U)
#define stateflow_FMU_test_IN_on       ((uint8_T)3U)
#define stateflow_FMU_test_IN_queue    ((uint8_T)4U)
#define stateflow_FMU_test_IN_start    ((uint8_T)5U)
#define stateflow_FMU_test_IN_wait     ((uint8_T)6U)
#define stateflow_FM_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

DW_stateflow_FMU_test_T stateflow_FMU_test_DW;
ExtU_stateflow_FMU_test_T stateflow_FMU_test_U;
ExtY_stateflow_FMU_test_T stateflow_FMU_test_Y;
static RT_MODEL_stateflow_FMU_test_T stateflow_FMU_test_M_;
RT_MODEL_stateflow_FMU_test_T *const stateflow_FMU_test_M =
  &stateflow_FMU_test_M_;
void stateflow_FMU_test_step(void)
{
  if (stateflow_FMU_test_DW.is_active_c3_stateflow_FMU_test == 0U) {
    stateflow_FMU_test_DW.is_active_c3_stateflow_FMU_test = 1U;
    stateflow_FMU_test_DW.is_c3_stateflow_FMU_test = stateflow_FMU_test_IN_start;
    stateflow_FMU_test_Y.startState = 1.0;
    stateflow_FMU_test_Y.delayState = 1.0;
  } else {
    switch (stateflow_FMU_test_DW.is_c3_stateflow_FMU_test) {
     case stateflow_FMU_test_IN_delay:
      if (stateflow_FMU_test_U.delayCode == 0.0) {
        stateflow_FMU_test_DW.is_c3_stateflow_FMU_test =
          stateflow_FMU_test_IN_wait;
        stateflow_FMU_test_Y.waitState = 1.0;
      } else if (stateflow_FMU_test_U.queueCode == 1.0) {
        stateflow_FMU_test_DW.is_c3_stateflow_FMU_test =
          stateflow_FMU_test_IN_queue;
      }
      break;

     case stateflow_FMU_test_IN_off:
      if ((stateflow_FMU_test_U.startCode == 0.0) &&
          (stateflow_FMU_test_U.offCode == 0.0)) {
        stateflow_FMU_test_DW.is_c3_stateflow_FMU_test =
          stateflow_FMU_test_IN_start;
        stateflow_FMU_test_Y.startState = 1.0;
        stateflow_FMU_test_Y.delayState = 1.0;
      } else if (stateflow_FMU_test_U.onCode == 1.0) {
        stateflow_FMU_test_DW.is_c3_stateflow_FMU_test =
          stateflow_FMU_test_IN_on;
        stateflow_FMU_test_Y.onState = 1.0;
      }
      break;

     case stateflow_FMU_test_IN_on:
      if ((stateflow_FMU_test_U.waitCode == 1.0) && (stateflow_FMU_test_U.onCode
           == 1.0)) {
        stateflow_FMU_test_DW.is_c3_stateflow_FMU_test =
          stateflow_FMU_test_IN_wait;
        stateflow_FMU_test_Y.waitState = 1.0;
      } else if (stateflow_FMU_test_U.offCode == 1.0) {
        stateflow_FMU_test_DW.is_c3_stateflow_FMU_test =
          stateflow_FMU_test_IN_off;
      } else {
        stateflow_FMU_test_Y.onState = 1.0;
      }
      break;

     case stateflow_FMU_test_IN_queue:
      if (stateflow_FMU_test_U.queueCode == 1.0) {
        stateflow_FMU_test_DW.is_c3_stateflow_FMU_test =
          stateflow_FMU_test_IN_delay;
      } else if (stateflow_FMU_test_U.offCode == 1.0) {
        stateflow_FMU_test_DW.is_c3_stateflow_FMU_test =
          stateflow_FMU_test_IN_off;
      }
      break;

     case stateflow_FMU_test_IN_start:
      if ((stateflow_FMU_test_U.startCode == 1.0) &&
          (stateflow_FMU_test_U.onCode == 1.0)) {
        stateflow_FMU_test_DW.is_c3_stateflow_FMU_test =
          stateflow_FMU_test_IN_on;
        stateflow_FMU_test_Y.onState = 1.0;
      } else if ((stateflow_FMU_test_U.offCode == 1.0) &&
                 (stateflow_FMU_test_U.startCode == 0.0)) {
        stateflow_FMU_test_DW.is_c3_stateflow_FMU_test =
          stateflow_FMU_test_IN_off;
      } else {
        stateflow_FMU_test_Y.startState = 1.0;
        stateflow_FMU_test_Y.delayState = 1.0;
      }
      break;

     default:
      if ((stateflow_FMU_test_U.waitCode == 1.0) && (stateflow_FMU_test_U.onCode
           == 0.0)) {
        stateflow_FMU_test_DW.is_c3_stateflow_FMU_test =
          stateflow_FMU_test_IN_on;
        stateflow_FMU_test_Y.onState = 1.0;
      } else if (stateflow_FMU_test_U.delayCode == 1.0) {
        stateflow_FMU_test_DW.is_c3_stateflow_FMU_test =
          stateflow_FMU_test_IN_delay;
      } else {
        stateflow_FMU_test_Y.waitState = 1.0;
      }
      break;
    }
  }

  fmu_LogOutput();
}

void stateflow_FMU_test_initialize(void)
{
  (void) memset((void *)stateflow_FMU_test_M, 0,
                sizeof(RT_MODEL_stateflow_FMU_test_T));
  (void) memset((void *)&stateflow_FMU_test_DW, 0,
                sizeof(DW_stateflow_FMU_test_T));
  (void)memset(&stateflow_FMU_test_U, 0, sizeof(ExtU_stateflow_FMU_test_T));
  (void)memset(&stateflow_FMU_test_Y, 0, sizeof(ExtY_stateflow_FMU_test_T));
  stateflow_FMU_test_DW.is_active_c3_stateflow_FMU_test = 0U;
  stateflow_FMU_test_DW.is_c3_stateflow_FMU_test =
    stateflow_FM_IN_NO_ACTIVE_CHILD;
  stateflow_FMU_test_Y.waitState = 0.0;
  stateflow_FMU_test_Y.onState = 0.0;
  stateflow_FMU_test_Y.offState = 0.0;
  stateflow_FMU_test_Y.delayState = 0.0;
  stateflow_FMU_test_Y.queueState = 0.0;
  stateflow_FMU_test_Y.startState = 0.0;
}

void stateflow_FMU_test_terminate(void)
{
}
