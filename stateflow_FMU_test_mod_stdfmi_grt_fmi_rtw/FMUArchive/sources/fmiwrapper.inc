#include "simstruc_types.h"

#include "stateflow_FMU_test_mod_stdfmi.h"
#include "stateflow_FMU_test_mod_stdfmi_private.h"

typedef struct {
	BuiltInDTypeId dtypeID;
	size_t size;
	void* address;
} ModelVariable;

#ifndef NO_FMI_FUNCTION_PREFIX
#define FMI3_FUNCTION_PREFIX stateflow_FMU_test_mod_stdfmi_
#endif

#define MODEL_GUID       "{90b776c8-ba80-4093-a7b9-5c42ddca57b8}"
#define MODEL            stateflow_FMU_test_mod_stdfmi
#define MODEL_INITIALIZE stateflow_FMU_test_mod_stdfmi_initialize
#define MODEL_STEP       stateflow_FMU_test_mod_stdfmi_step
#define MODEL_TERMINATE  stateflow_FMU_test_mod_stdfmi_terminate
#define RT_MDL_TYPE      RT_MODEL_stateflow_FMU_test_m_T
#define STEP_SIZE        0.1
#define NUM_TASKS        1
#define NUM_SAMPLE_TIMES 1
#define FIRST_TASK_ID    0

/* since R2019a the block parameters are defined as extern */
#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(S) (&stateflow_FMU_test_mod_stdfmi_P)
#endif

/* Definitions for non-reusable models */
#define RT_MDL_INSTANCE     stateflow_FMU_test_mod_stdfm_M
#define rtmGetU(S)          (&stateflow_FMU_test_mod_stdfmi_U)
#define rtmGetY(S)          (&stateflow_FMU_test_mod_stdfmi_Y)
#define rtmGetBlockIO(S)    (&stateflow_FMU_test_mod_stdfmi_B)

static void initializeModelVariables(RT_MDL_TYPE* S, ModelVariable modelVariables[]) {
    modelVariables[0].dtypeID = 0;
    modelVariables[0].size    = 1;
    modelVariables[0].address = &(rtmGetU(S)->delayCode);
    modelVariables[1].dtypeID = 0;
    modelVariables[1].size    = 1;
    modelVariables[1].address = &(rtmGetU(S)->offCode);
    modelVariables[2].dtypeID = 0;
    modelVariables[2].size    = 1;
    modelVariables[2].address = &(rtmGetU(S)->onCode);
    modelVariables[3].dtypeID = 0;
    modelVariables[3].size    = 1;
    modelVariables[3].address = &(rtmGetU(S)->queueCode);
    modelVariables[4].dtypeID = 0;
    modelVariables[4].size    = 1;
    modelVariables[4].address = &(rtmGetU(S)->waitCode);
    modelVariables[5].dtypeID = 0;
    modelVariables[5].size    = 1;
    modelVariables[5].address = &(rtmGetU(S)->startCode);
    modelVariables[6].dtypeID = 0;
    modelVariables[6].size    = 1;
    modelVariables[6].address = &(rtmGetY(S)->waitState);
    modelVariables[7].dtypeID = 0;
    modelVariables[7].size    = 1;
    modelVariables[7].address = &(rtmGetY(S)->onState);
    modelVariables[8].dtypeID = 0;
    modelVariables[8].size    = 1;
    modelVariables[8].address = &(rtmGetY(S)->offState);
    modelVariables[9].dtypeID = 0;
    modelVariables[9].size    = 1;
    modelVariables[9].address = &(rtmGetY(S)->delayState);
    modelVariables[10].dtypeID = 0;
    modelVariables[10].size    = 1;
    modelVariables[10].address = &(rtmGetY(S)->queueState);
    modelVariables[11].dtypeID = 0;
    modelVariables[11].size    = 1;
    modelVariables[11].address = &(rtmGetY(S)->startState);
}

#define N_MODEL_VARIABLES 12
