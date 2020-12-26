#include "MatrixMultiply.h"

void MatrixMultiply(data_type A[DEPTH*ROWA*COLA], data_type B[DEPTH*COLA*COLB], data_type C[DEPTH*ROWA*COLB])
{
	int i, j, k, depth;
	depth: for (depth=0;depth<DEPTH;depth++)
	{
		rowa: for (i=0;i<ROWA;i++)
		{
			colb: for (k=0;k<COLB;k++)
			{
				data_type sum = 0;
				cola: for (j=0;j<COLA;j++)
				{
					sum += A[depth*ROWA*COLA+i*COLA+j] * B[depth*COLA*COLB+j*COLB+k];
				}
				C[depth*ROWA*COLB+i*COLB+k] = sum;
			}
		}
	}
}
