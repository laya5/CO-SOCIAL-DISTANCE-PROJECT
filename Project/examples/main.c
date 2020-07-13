/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * main.c
 *
 * Code generation for function 'main'
 *
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

/* Include files */
#include "main.h"
#include "Project.h"
#include "Project_terminate.h"

/* Function Declarations */
static void argInit_1x2_int32_T(int result[2]);
static void argInit_1x6_int32_T(int result[6]);
static int argInit_int32_T(void);
static void main_Project(void);

/* Function Definitions */
static void argInit_1x2_int32_T(int result[2])
{
  int result_tmp;

  /* Loop over the array to initialize each element. */
  /* Set the value of the array element.
     Change this value to the value that the application requires. */
  result_tmp = argInit_int32_T();
  result[0] = result_tmp;

  /* Set the value of the array element.
     Change this value to the value that the application requires. */
  result[1] = result_tmp;
}

static void argInit_1x6_int32_T(int result[6])
{
  int idx1;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 6; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx1] = argInit_int32_T();
  }
}

static int argInit_int32_T(void)
{
  return 0;
}

static void main_Project(void)
{
  int iv[2];
  int iv1[6];
  int h[3];

  /* Initialize function 'Project' input arguments. */
  /* Initialize function input argument 'T'. */
  /* Initialize function input argument 'A'. */
  /* Call the entry-point 'Project'. */
  argInit_1x2_int32_T(iv);
  argInit_1x6_int32_T(iv1);
  Project(iv, argInit_int32_T(), iv1, argInit_int32_T(), h);
}

int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* The initialize function is being called automatically from your entry-point function. So, a call to initialize is not included here. */
  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_Project();

  /* Terminate the application.
     You do not need to do this more than one time. */
  Project_terminate();
  return 0;
}

/* End of code generation (main.c) */
