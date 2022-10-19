#ifndef RTW_HEADER_stateflow_FMU_test_h_
#define RTW_HEADER_stateflow_FMU_test_h_
#include <string.h>
#ifndef stateflow_FMU_test_COMMON_INCLUDES_
#define stateflow_FMU_test_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif

#include "stateflow_FMU_test_types.h"

#include "multiword_types.h"

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

typedef struct {
  uint8_T is_active_c3_stateflow_FMU_test;
  uint8_T is_c3_stateflow_FMU_test;
} DW_stateflow_FMU_test_T;

typedef struct {
  real_T delayCode;
  real_T offCode;
  real_T onCode;
  real_T queueCode;
  real_T waitCode;
  real_T startCode;
} ExtU_stateflow_FMU_test_T;

typedef struct {
  real_T waitState;
  real_T onState;
  real_T offState;
  real_T delayState;
  real_T queueState;
  real_T startState;
} ExtY_stateflow_FMU_test_T;

struct tag_RTM_stateflow_FMU_test_T {
  const char_T *errorStatus;
};

extern DW_stateflow_FMU_test_T stateflow_FMU_test_DW;
extern ExtU_stateflow_FMU_test_T stateflow_FMU_test_U;
extern ExtY_stateflow_FMU_test_T stateflow_FMU_test_Y;
extern void stateflow_FMU_test_initialize(void);
extern void stateflow_FMU_test_step(void);
extern void stateflow_FMU_test_terminate(void);
extern RT_MODEL_stateflow_FMU_test_T *const stateflow_FMU_test_M;
extern void fmu_LogOutput();

#endif
