#ifndef _MATRIX_MULTIPLY_H_
#define _MATRIX_MULTIPLY_H_

#include <stdio.h>
#include "ap_cint.h"

#define ROWA 8
#define COLA 8
#define COLB 8
#define DEPTH 2

typedef int data_type;

void MatrixMultiply(data_type A[DEPTH*ROWA*COLA], data_type B[DEPTH*COLA*COLB], data_type C[DEPTH*ROWA*COLB]);

#endif
