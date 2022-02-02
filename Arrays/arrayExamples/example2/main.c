#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main()
{

	// Two Matrix Sum

	int firstMatrix[5][5], secondMatrix[5][5], sumMatrix[5][5], i, j;
	srand(time(NULL));

	printf("FIRST MATRIX:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			firstMatrix[i][j] = rand() % 10;
			secondMatrix[i][j] = rand() % 10;
			printf("%d\t", firstMatrix[i][j]);
			//  printf("%d\t",secondMatrix[i][j]);
		}
		printf("\n\n");
	}


	printf("SECOND MATRIX:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			//  firstMatrix[i][j]=rand()%10;
			//  secondMatrix[i][j]=rand()%10;
			//  printf("%d\t",firstMatrix[i][j]);
			printf("%d\t", secondMatrix[i][j]);
		}
		printf("\n\n");
	}


	printf("SUM MATRIX:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			sumMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
			printf("%d\t", sumMatrix[i][j]);
		}
		printf("\n\n");
	}

	return 0;
}
