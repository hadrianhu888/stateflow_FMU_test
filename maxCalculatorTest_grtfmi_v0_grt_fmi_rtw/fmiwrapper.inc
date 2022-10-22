#include "simstruc_types.h"

#include "maxCalculatorTest_grtfmi_v0.h"
#include "maxCalculatorTest_grtfmi_v0_private.h"

typedef struct {
	BuiltInDTypeId dtypeID;
	size_t size;
	void* address;
} ModelVariable;

#ifndef NO_FMI_FUNCTION_PREFIX
#define FMI3_FUNCTION_PREFIX maxCalculatorTest_grtfmi_v0_
#endif

#define MODEL_GUID       "{7bb71e8f-d663-4ec0-ad1a-c1fa86d6bdec}"
#define MODEL            maxCalculatorTest_grtfmi_v0
#define MODEL_INITIALIZE maxCalculatorTest_grtfmi_v0_initialize
#define MODEL_STEP       maxCalculatorTest_grtfmi_v0_step
#define MODEL_TERMINATE  maxCalculatorTest_grtfmi_v0_terminate
#define RT_MDL_TYPE      RT_MODEL_maxCalculatorTest_gr_T
#define STEP_SIZE        0.2
#define NUM_TASKS        1
#define NUM_SAMPLE_TIMES 1
#define FIRST_TASK_ID    0

/* since R2019a the block parameters are defined as extern */
#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(S) (&maxCalculatorTest_grtfmi_v0_P)
#endif

/* Definitions for non-reusable models */
#define RT_MDL_INSTANCE     maxCalculatorTest_grtfmi_v0_M
#define rtmGetU(S)          (&maxCalculatorTest_grtfmi_v0_U)
#define rtmGetY(S)          (&maxCalculatorTest_grtfmi_v0_Y)
#define rtmGetBlockIO(S)    (&maxCalculatorTest_grtfmi_v0_B)

static void initializeModelVariables(RT_MDL_TYPE* S, ModelVariable modelVariables[]) {
    modelVariables[0].dtypeID = 0;
    modelVariables[0].size    = 1;
    modelVariables[0].address = &(rtmGetU(S)->In1);
    modelVariables[1].dtypeID = 0;
    modelVariables[1].size    = 1;
    modelVariables[1].address = &(rtmGetU(S)->In2);
    modelVariables[2].dtypeID = 0;
    modelVariables[2].size    = 1;
    modelVariables[2].address = &(rtmGetU(S)->In3);
    modelVariables[3].dtypeID = 0;
    modelVariables[3].size    = 1;
    modelVariables[3].address = &(rtmGetY(S)->Out1);
}

#define N_MODEL_VARIABLES 4
