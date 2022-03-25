#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{

	// QUESTION 3: CREATING TWO MATRIES AND CREATING A NEW MATRIX BY MULTIPLYING THESE TWO MATRIES


	int matrixA[5][5], matrixB[5][5], resultMatrix[5][5], i, j, k, sum;
	srand(time(NULL));
	printf("First Matrix:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			matrixA[i][j] = rand() % 5;
			matrixB[i][j] = rand() % 5;
			printf("%d\t", matrixA[i][j]);
		}
		printf("\n\n");
	}
	printf("Second Matrix:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{

			printf("%d\t", matrixB[i][j]);
		}
		printf("\n\n");
	}
	printf("Result Matrix:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			sum = 0;
			for (k = 0; k < 5; k++)
			{
				sum += matrixA[i][k] * matrixB[k][j];
			}
			resultMatrix[i][j] = sum;
			printf("%d\t", resultMatrix[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
