#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>


/* 2.Question->Dynamically create a two-dimensional array based on the number of satyrs and milk you will receive from the user.
 	Fill in the contents of the matrix by taking the values from the user and print the matrix once.
 	Compare whether the most recent matrix is symmetric or not.


3.Question->Dynamically create two two-dimensional arrays based on the number of satyrs and columns you will receive from the user.
	Fill in two arrays with random values and print them both.
	Print the result matrix by subtracting the second most recently entered matrix from the first one.
 */


void fillArray(int** matrix, int lineCount, int columnCount)
{
	int i, j;
	for (i = 0; i < lineCount; i++)
	{
		for (j = 0; j < columnCount; j++)
		{
			printf("Please [%d][%d] value enter:", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
}

void printArray(int** matrix, int lineCount, int columnCount)
{
	int i, j;
	for (i = 0; i < lineCount; i++)
	{
		for (j = 0; j < columnCount; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

int symectricControl(int** matrix, int lineCount, int columnCount)
{

	int i, j;
	for (i = 0; i < lineCount; i++)
	{
		for (j = 0; j < columnCount; j++)
		{
			if (matrix[i][j] != matrix[j][i])
			{
				return 0;                    //not symectric
			}
		}
	}
	return 1;                                //symectric
}

void matrixSum(int** firstMatrix, int** secondMatrix, int** resultMatrix, int lineCount, int columnCount)
{
	int i, j;
	for (i = 0; i < lineCount; i++)
	{
		for (j = 0; j < columnCount; j++)
		{
			resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
		}
	}
}

void switchToNegative(int** matrix, int lineCount, int columnCount)
{
	int i, j;
	for (i = 0; i < lineCount; i++)
	{
		for (j = 0; j < columnCount; j++)
		{
			matrix[i][j] *= -1;                        //each value is calculated by minus 1
		}
	}
}

int main()
{

	int lineCount, columnCount;
	int** twoDimensionalMatrix, ** secondMatrix, ** resultMatrix;        //for dynamic array
	int i;
	puts("Please enter the number of line and column in the order:");
	scanf("%d%d", &lineCount, &columnCount);

	//CREATE DYNAMIC

	twoDimensionalMatrix = (int**)malloc(sizeof(int) * lineCount);        //we have reserved a place for line
	secondMatrix = (int**)malloc(sizeof(int) * lineCount);                //we have reserved a place for line
	resultMatrix = (int**)malloc(sizeof(int) * lineCount);                //we have reserved a place for line
	for (i = 0; i < lineCount; i++)
	{
		twoDimensionalMatrix[i] = (int*)malloc(
				sizeof(int) * columnCount);        //we have reserved as much space as the column
		secondMatrix[i] = (int*)malloc(
				sizeof(int) * columnCount);                //we have reserved as much space as the column
		resultMatrix[i] = (int*)malloc(
				sizeof(int) * columnCount);                //we have reserved as much space as the column
	}


	puts("FİRST MATRİX:");
	fillArray(twoDimensionalMatrix, lineCount, columnCount);
	printArray(twoDimensionalMatrix, lineCount, columnCount);
	puts("SECOND MATRİX:");
	fillArray(secondMatrix, lineCount, columnCount);
	printArray(secondMatrix, lineCount, columnCount);

	switchToNegative(secondMatrix, lineCount,
			columnCount);                    //we went negative for the subtraction process.
	matrixSum(twoDimensionalMatrix, secondMatrix, resultMatrix, lineCount, columnCount);

	puts("Subtraction :");
	printArray(resultMatrix, lineCount, columnCount);


	if (symectricControl(twoDimensionalMatrix, lineCount, columnCount))
	{
		puts("It is Symmetrical.");
	}
	else
	{
		puts("It is not Symmetrical.");
	}


	//FREE

	for (i = 0; i < lineCount; i++)
	{
		free(twoDimensionalMatrix[i]);
		free(secondMatrix[i]);
		free(resultMatrix[i]);
	}
	free(twoDimensionalMatrix);
	free(secondMatrix);
	free(resultMatrix);


}
