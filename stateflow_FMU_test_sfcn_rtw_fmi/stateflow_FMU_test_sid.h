/*
 * stateflow_FMU_test_sid.h
 *
 * Code generation for model "stateflow_FMU_test_sf".
 *
 * Model version              : 1.4
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Wed Jun  1 19:07:36 2022
 *
 * Target selection: rtwsfcnfmi.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Debugging
 * Validation result: Not run
 *
 * SOURCES: stateflow_FMU_test_sf.c
 */

/* statically allocated instance data for model: stateflow_FMU_test */
{
  {
    /* Local SimStruct for the generated S-Function */
    static LocalS slS;
    LocalS *lS = &slS;
    ssSetUserData(rts, lS);

    /* block I/O */
    {
      static B_stateflow_FMU_test_T sfcnB;
      void *b = (real_T *) &sfcnB;
      ssSetLocalBlockIO(rts, b);
      (void) memset(b, 0,
                    sizeof(B_stateflow_FMU_test_T));
    }

    /* model checksums */
    ssSetChecksumVal(rts, 0, 712080028U);
    ssSetChecksumVal(rts, 1, 3691577419U);
    ssSetChecksumVal(rts, 2, 1897673424U);
    ssSetChecksumVal(rts, 3, 411165076U);
  }
}
