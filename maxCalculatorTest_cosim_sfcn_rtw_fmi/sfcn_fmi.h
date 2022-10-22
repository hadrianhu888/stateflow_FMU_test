/*
 * Model-specific defintions for "maxCalculatorTest_cosim"
 *
 * Generated on : Thu Jun  2 19:16:35 2022
 */

#pragma once

#include "simstruc.h"
#define MODEL_GUID                     "{fb532931-2b90-48ce-b0d7-a808eec730d7}"

/* Solver settings selected in Simulink */
#define SFCN_FMI_IS_VARIABLE_STEP_SOLVER 0
#define SFCN_FMI_FIXED_STEP_SIZE       0.2
#define SFCN_FMI_IS_MT                 0
#define SFCN_FMI_EXTRAPOLATION_ORDER   -1
#define SFCN_FMI_NEWTON_ITER           -1

/* Model sizes */
#define SFCN_FMI_ZC_LENGTH             0

/* Model identifier */
#define SFCN_FMI_MODEL_IDENTIFIER      "maxCalculatorTest_cosim"

/* Loading of MEX binaries, path to MATLAB bin */
#define SFCN_FMI_LOAD_MEX              1
#define SFCN_FMI_MATLAB_BIN            "D:\\Program Files\\Matlab\\bin\\win64"
#define SFCN_FMI_MEXEXT                "mexw64"
#define SFCN_FMI_NBR_MEX               0

static const char* SFCN_FMI_MEX_NAMES[1] = { "" };

extern void sfcn_fmi_mxGlobalTunable_(SimStruct* S, int_T create, int_T update);
extern void* sfcn_fmi_allocateBusObject(int_T isInput, int_T portid, int_T width);
extern void sfcn_fmi_registerMdlCallbacks_(SimStruct* S);
extern void sfcn_fmi_registerRTModelCallbacks_(SimStruct*S);
extern void sfcn_fmi_copyToSFcnParams_(SimStruct* S);
extern void sfcn_fmi_mxGlobalTunable_(SimStruct* S, int_T create, int_T update);