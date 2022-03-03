#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main()
{
	// EXAMPLE OF TAKING MATRIX TRANSPOSE

	int firstMatrix[5][5], transposeMatrix[5][5], i, j;
	srand(time(NULL));


	printf("FIRST MATRIX:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			firstMatrix[i][j] = rand() % 10;
			printf("%d\t", firstMatrix[i][j]);

		}
		printf("\n\n");
	}


	printf("TRANSPOSE MATRIX:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			transposeMatrix[i][j] = firstMatrix[j][i];
			printf("%d\t", transposeMatrix[i][j]);
		}
		printf("\n\n");
	}


	return 0;
}
