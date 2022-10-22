/*
 * stateflow_FMU_test_mod_xchng_sid.h
 *
 * Code generation for model "stateflow_FMU_test_mod_xchng_sf".
 *
 * Model version              : 1.6
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Wed Jun  1 19:10:17 2022
 *
 * Target selection: rtwsfcnfmi.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Debugging
 * Validation result: Not run
 *
 * SOURCES: stateflow_FMU_test_mod_xchng_sf.c
 */

/* statically allocated instance data for model: stateflow_FMU_test_mod_xchng */
{
  {
    /* Local SimStruct for the generated S-Function */
    static LocalS slS;
    LocalS *lS = &slS;
    ssSetUserData(rts, lS);

    /* block I/O */
    {
      static B_stateflow_FMU_test_mod_xchng_T sfcnB;
      void *b = (real_T *) &sfcnB;
      ssSetLocalBlockIO(rts, b);
      (void) memset(b, 0,
                    sizeof(B_stateflow_FMU_test_mod_xchng_T));
    }

    /* model checksums */
    ssSetChecksumVal(rts, 0, 2449389878U);
    ssSetChecksumVal(rts, 1, 1497760952U);
    ssSetChecksumVal(rts, 2, 4019726934U);
    ssSetChecksumVal(rts, 3, 765983158U);
  }
}
