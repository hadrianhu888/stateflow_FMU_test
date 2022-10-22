/*
 * maxCalculatorTest_grtfmi_v0.h
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

#ifndef RTW_HEADER_maxCalculatorTest_grtfmi_v0_h_
#define RTW_HEADER_maxCalculatorTest_grtfmi_v0_h_
#include <math.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef maxCalculatorTest_grtfmi_v0_COMMON_INCLUDES_
#define maxCalculatorTest_grtfmi_v0_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                        /* maxCalculatorTest_grtfmi_v0_COMMON_INCLUDES_ */

#include "maxCalculatorTest_grtfmi_v0_types.h"

/* Shared type includes */
#include "multiword_types.h"

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

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T In2;                          /* '<Root>/In2' */
  real_T In3;                          /* '<Root>/In3' */
} ExtU_maxCalculatorTest_grtfmi_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_maxCalculatorTest_grtfmi_T;

/* Real-time Model Data Structure */
struct tag_RTM_maxCalculatorTest_grt_T {
  const char_T *errorStatus;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_maxCalculatorTest_grtfmi_T maxCalculatorTest_grtfmi_v0_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_maxCalculatorTest_grtfmi_T maxCalculatorTest_grtfmi_v0_Y;

/* Model entry point functions */
extern void maxCalculatorTest_grtfmi_v0_initialize(void);
extern void maxCalculatorTest_grtfmi_v0_step(void);
extern void maxCalculatorTest_grtfmi_v0_terminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  maxCalculatorTest_grtfmi_v0_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_maxCalculatorTest_gr_T *const maxCalculatorTest_grtfmi_v0_M;

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
 * '<Root>' : 'maxCalculatorTest_grtfmi_v0'
 */
#endif                           /* RTW_HEADER_maxCalculatorTest_grtfmi_v0_h_ */
