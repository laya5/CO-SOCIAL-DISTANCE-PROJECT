/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * _coder_Untitled2_mex.c
 *
 * Code generation for function '_coder_Untitled2_mex'
 *
 */

/* Include files */
#include "_coder_Untitled2_mex.h"
#include "_coder_Untitled2_api.h"

/* Function Declarations */
MEXFUNCTION_LINKAGE void Untitled2_mexFunction(int32_T nlhs, int32_T nrhs);

/* Function Definitions */
void Untitled2_mexFunction(int32_T nlhs, int32_T nrhs)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4, 9,
                        "Untitled2");
  }

  if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 9,
                        "Untitled2");
  }

  /* Call the function. */
  Untitled2_api(nlhs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  (void)plhs;
  (void)prhs;
  mexAtExit(Untitled2_atexit);

  /* Module initialization. */
  Untitled2_initialize();

  /* Dispatch the entry-point. */
  Untitled2_mexFunction(nlhs, nrhs);

  /* Module termination. */
  Untitled2_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Untitled2_mex.c) */
