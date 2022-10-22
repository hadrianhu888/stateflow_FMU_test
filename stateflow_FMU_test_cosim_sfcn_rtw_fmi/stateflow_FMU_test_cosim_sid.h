/*
 * stateflow_FMU_test_cosim_sid.h
 *
 * Code generation for model "stateflow_FMU_test_cosim_sf".
 *
 * Model version              : 1.5
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Wed Jun  1 19:09:22 2022
 *
 * Target selection: rtwsfcnfmi.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Debugging
 * Validation result: Not run
 *
 * SOURCES: stateflow_FMU_test_cosim_sf.c
 */

/* statically allocated instance data for model: stateflow_FMU_test_cosim */
{
  {
    /* Local SimStruct for the generated S-Function */
    static LocalS slS;
    LocalS *lS = &slS;
    ssSetUserData(rts, lS);

    /* block I/O */
    {
      static B_stateflow_FMU_test_cosim_T sfcnB;
      void *b = (real_T *) &sfcnB;
      ssSetLocalBlockIO(rts, b);
      (void) memset(b, 0,
                    sizeof(B_stateflow_FMU_test_cosim_T));
    }

    /* model checksums */
    ssSetChecksumVal(rts, 0, 374118774U);
    ssSetChecksumVal(rts, 1, 475945049U);
    ssSetChecksumVal(rts, 2, 3051879824U);
    ssSetChecksumVal(rts, 3, 1139358516U);
  }
}
