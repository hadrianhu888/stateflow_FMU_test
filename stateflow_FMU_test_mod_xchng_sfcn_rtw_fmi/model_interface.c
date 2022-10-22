#include "stateflow_FMU_test_mod_xchng_sf.h"
#include "model_interface.h"

size_t getCGTypeSize(DTypeId typeIndex)
{
  switch (typeIndex) {
   case 0:
    return 8;                          /* real_T */

   case 1:
    return 4;                          /* real32_T */

   case 2:
    return 1;                          /* int8_T */

   case 3:
    return 1;                          /* uint8_T */

   case 4:
    return 2;                          /* int16_T */

   case 5:
    return 2;                          /* uint16_T */

   case 6:
    return 4;                          /* int32_T */

   case 7:
    return 4;                          /* uint32_T */

   case 8:
    return 1;                          /* boolean_T */

   case 9:
    return 0;                          /* fcn_call_T */

   case 10:
    return 4;                          /* int_T */

   case 11:
    return 8;                          /* pointer_T */

   case 12:
    return 8;                          /* action_T */

   case 13:
    return 8;                          /* timer_uint32_pair_T */

   case 14:
    return 8;                          /* physical_connection */

   default:
    return 0;                          /* unknown type */
  }
}

void initializeModelVariables(SimStruct* S, ModelVariable modelVariables[])
{
  modelVariables[0].dtypeID = 0;
  modelVariables[0].size = 0;
  modelVariables[0].address = &((*((real_T **)ssGetInputPortSignalPtrs(S, 0))[0]));
  modelVariables[1].dtypeID = 0;
  modelVariables[1].size = 0;
  modelVariables[1].address = &((*((real_T **)ssGetInputPortSignalPtrs(S, 1))[0]));
  modelVariables[2].dtypeID = 0;
  modelVariables[2].size = 0;
  modelVariables[2].address = &((*((real_T **)ssGetInputPortSignalPtrs(S, 2))[0]));
  modelVariables[3].dtypeID = 0;
  modelVariables[3].size = 0;
  modelVariables[3].address = &((*((real_T **)ssGetInputPortSignalPtrs(S, 3))[0]));
  modelVariables[4].dtypeID = 0;
  modelVariables[4].size = 0;
  modelVariables[4].address = &((*((real_T **)ssGetInputPortSignalPtrs(S, 4))[0]));
  modelVariables[5].dtypeID = 0;
  modelVariables[5].size = 0;
  modelVariables[5].address = &((*((real_T **)ssGetInputPortSignalPtrs(S, 5))[0]));
  modelVariables[6].dtypeID = 0;
  modelVariables[6].size = 0;
  modelVariables[6].address = &(((real_T *)ssGetOutputPortSignal(S, 0))[0]);
  modelVariables[7].dtypeID = 0;
  modelVariables[7].size = 0;
  modelVariables[7].address = &(((real_T *)ssGetOutputPortSignal(S, 1))[0]);
  modelVariables[8].dtypeID = 0;
  modelVariables[8].size = 0;
  modelVariables[8].address = &(((real_T *)ssGetOutputPortSignal(S, 2))[0]);
  modelVariables[9].dtypeID = 0;
  modelVariables[9].size = 0;
  modelVariables[9].address = &(((real_T *)ssGetOutputPortSignal(S, 3))[0]);
  modelVariables[10].dtypeID = 0;
  modelVariables[10].size = 0;
  modelVariables[10].address = &(((real_T *)ssGetOutputPortSignal(S, 4))[0]);
  modelVariables[11].dtypeID = 0;
  modelVariables[11].size = 0;
  modelVariables[11].address = &(((real_T *)ssGetOutputPortSignal(S, 5))[0]);
  modelVariables[12].dtypeID = 0;
  modelVariables[12].size = 0;
  modelVariables[12].address = &(((B_stateflow_FMU_test_mod_xchng_T *)
    ssGetLocalBlockIO(S))->waitState);
  modelVariables[13].dtypeID = 0;
  modelVariables[13].size = 0;
  modelVariables[13].address = &(((B_stateflow_FMU_test_mod_xchng_T *)
    ssGetLocalBlockIO(S))->onState);
  modelVariables[14].dtypeID = 0;
  modelVariables[14].size = 0;
  modelVariables[14].address = &(((B_stateflow_FMU_test_mod_xchng_T *)
    ssGetLocalBlockIO(S))->offState);
  modelVariables[15].dtypeID = 0;
  modelVariables[15].size = 0;
  modelVariables[15].address = &(((B_stateflow_FMU_test_mod_xchng_T *)
    ssGetLocalBlockIO(S))->delayState);
  modelVariables[16].dtypeID = 0;
  modelVariables[16].size = 0;
  modelVariables[16].address = &(((B_stateflow_FMU_test_mod_xchng_T *)
    ssGetLocalBlockIO(S))->queueState);
  modelVariables[17].dtypeID = 0;
  modelVariables[17].size = 0;
  modelVariables[17].address = &(((B_stateflow_FMU_test_mod_xchng_T *)
    ssGetLocalBlockIO(S))->startState);
}
