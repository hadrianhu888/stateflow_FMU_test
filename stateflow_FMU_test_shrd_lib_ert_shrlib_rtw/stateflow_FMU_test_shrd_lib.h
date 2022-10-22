/*
 * File: stateflow_FMU_test_shrd_lib.h
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

#ifndef RTW_HEADER_stateflow_FMU_test_shrd_lib_h_
#define RTW_HEADER_stateflow_FMU_test_shrd_lib_h_
#include "rtw_modelmap.h"
#ifndef stateflow_FMU_test_shrd_lib_COMMON_INCLUDES_
#define stateflow_FMU_test_shrd_lib_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                        /* stateflow_FMU_test_shrd_lib_COMMON_INCLUDES_ */

#include "stateflow_FMU_test_shrd_lib_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_stateflow_FMU_test;/* '<Root>/State Flow FMU Test' */
  uint8_T is_c3_stateflow_FMU_test_shrd_l;/* '<Root>/State Flow FMU Test' */
} DW_stateflow_FMU_test_shrd_li_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T delayCode;                    /* '<Root>/delayCode' */
  real_T offCode;                      /* '<Root>/offCode' */
  real_T onCode;                       /* '<Root>/onCode' */
  real_T queueCode;                    /* '<Root>/queueCode' */
  real_T waitCode;                     /* '<Root>/waitCode' */
  real_T startCode;                    /* '<Root>/startCode' */
} ExtU_stateflow_FMU_test_shrd__T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T waitState;                    /* '<Root>/waitState' */
  real_T onState;                      /* '<Root>/onState' */
  real_T offState;                     /* '<Root>/offState' */
  real_T delayState;                   /* '<Root>/delayState' */
  real_T queueState;                   /* '<Root>/queueState' */
  real_T startState;                   /* '<Root>/startState' */
} ExtY_stateflow_FMU_test_shrd__T;

/* Real-time Model Data Structure */
struct tag_RTM_stateflow_FMU_test_sh_T {
  const char_T * volatile errorStatus;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;
};

/* Block states (default storage) */
extern DW_stateflow_FMU_test_shrd_li_T stateflow_FMU_test_shrd_lib_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_stateflow_FMU_test_shrd__T stateflow_FMU_test_shrd_lib_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_stateflow_FMU_test_shrd__T stateflow_FMU_test_shrd_lib_Y;

/* Model entry point functions */
extern void stateflow_FMU_test_shrd_lib_initialize(void);
extern void stateflow_FMU_test_shrd_lib_step(void);
extern void stateflow_FMU_test_shrd_lib_terminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  stateflow_FMU_test_shrd_lib_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_stateflow_FMU_test_s_T *const stateflow_FMU_test_shrd_lib_M;

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
 * '<Root>' : 'stateflow_FMU_test_shrd_lib'
 * '<S1>'   : 'stateflow_FMU_test_shrd_lib/State Flow FMU Test'
 */
#endif                           /* RTW_HEADER_stateflow_FMU_test_shrd_lib_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */