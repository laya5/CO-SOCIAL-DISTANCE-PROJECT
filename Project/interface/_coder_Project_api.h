/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * _coder_Project_api.h
 *
 * Code generation for function '_coder_Project_api'
 *
 */

#ifndef _CODER_PROJECT_API_H
#define _CODER_PROJECT_API_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void Project(int32_T T[2], int32_T K, int32_T A[6], int32_T X, int32_T h
                    [3]);
extern void Project_api(const mxArray * const prhs[4], int32_T nlhs, const
  mxArray *plhs[1]);
extern void Project_atexit(void);
extern void Project_initialize(void);
extern void Project_terminate(void);
extern void Project_xil_shutdown(void);
extern void Project_xil_terminate(void);

#endif

/* End of code generation (_coder_Project_api.h) */
