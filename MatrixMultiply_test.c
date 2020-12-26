#include "MatrixMultiply.h"

int main()
{
	data_type A[DEPTH*ROWA*COLA];
	data_type B[DEPTH*COLA*COLB];
	data_type C[DEPTH*ROWA*COLB];

	int i = 0, j = 0, k = 0, depth = 0;
	for (depth=0;depth<DEPTH;depth++)
	{
		for (i=0;i<ROWA;i++)
		{
			for (k=0;k<COLB;k++)
			{
				C[depth*ROWA*COLB+i*COLB+k] = 0;
				for (j=0;j<COLA;j++)
				{
					A[depth*ROWA*COLA+i*COLA+j] = 3;
					B[depth*COLA*COLB+j*COLA+k] = 3;
				}
			}
		}
	}

	MatrixMultiply(A, B, C);
	for (depth=0;depth<DEPTH;depth++)
	{
		for (i=0;i<ROWA;i++)
		{
			for (k=0;k<COLB;k++)
			{
				printf("%d,", C[depth*ROWA*COLB+i*COLB+k]);
			}
			printf("\n");
		}
	}
	
	return 0;
}