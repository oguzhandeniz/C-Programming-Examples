#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>


// Dynamic Matrix Summation & The Unit Matrix & Creating a Transpose Matrix

void fillArray(int** twoDimensionalArray, int lineCount, int columnCount)
{
	int i, j;
	srand(time(NULL));
	for (i = 0; i < lineCount; i++)
	{
		for (j = 0; j < columnCount; j++)
		{
			twoDimensionalArray[i][j] = rand() % 5;
		}
	}
}

void printArray(int** twoDimensionalArray, int lineCount, int columnCount)
{
	int i, j;
	for (i = 0; i < lineCount; i++)
	{
		for (j = 0; j < columnCount; j++)
		{
			printf("%d ", twoDimensionalArray[i][j]);
		}
		printf("\n");
	}

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

void createUnitMatrix(int lineCount, int columnCount)
{
	int** unitMatrix;
	int i, j;
	unitMatrix = (int**)calloc(lineCount, sizeof(int*));    //CREATING A DYNAMIC ARRAY
	for (i = 0; i < lineCount; i++)
	{
		unitMatrix[i] = (int*)calloc(columnCount, sizeof(int));
	}
	puts("The Previous Version Without a Unit Matrix:");
	printArray(unitMatrix, lineCount, columnCount);
	for (i = 0; i < lineCount; i++)
	{
		for (j = 0; j < columnCount; j++)
		{
			if (i == j)
			{
				unitMatrix[i][j] = 1;
			}
		}
	}
	puts("The Unit Matrix is the Formed State:");
	printArray(unitMatrix, lineCount, columnCount);
	for (i = 0; i < lineCount; i++)
	{
		free(unitMatrix[i]);                                            //release
	}
	free(unitMatrix);
}

void printTranspose(int** twoDimensionalArray, int lineCount, int columnCount)
{
	int i, j;
	for (i = 0; i < lineCount; i++)
	{
		for (j = 0; j < columnCount; j++)
		{
			printf("%d ", twoDimensionalArray[j][i]);
		}
		printf("\n");
	}

}

int main(int argc, char** argv)
{

	//1.Matrix Addition
	//2.The Unit Matrix
	//3.Transpose Printing
	int lineCount, columnCount;
	int** firstMatrix, ** secondMatrix, ** resultMatrix;
	int i;
	puts("Lutfen satir ve sutun sayisini sirayla giriniz:");
	scanf("%d%d", &lineCount, &columnCount);
	createUnitMatrix(lineCount, columnCount);                        //UNIT MATRİX

	firstMatrix = (int**)malloc(sizeof(int*) * lineCount);
	secondMatrix = (int**)malloc(sizeof(int*) * lineCount);
	resultMatrix = (int**)calloc(lineCount, sizeof(int*));    //it both dynamic and assigned to 0.

	for (i = 0; i < lineCount; i++)
	{
		firstMatrix[i] = (int*)malloc(sizeof(int) * columnCount);
		secondMatrix[i] = (int*)malloc(sizeof(int) * columnCount);
		resultMatrix[i] = (int*)calloc(columnCount, sizeof(int));
	}
	fillArray(firstMatrix, lineCount, columnCount);
	fillArray(secondMatrix, lineCount, columnCount);
	puts("FİRST MATRİX:");
	printArray(firstMatrix, lineCount, columnCount);
	puts("SECOND MATRİX:");
	printArray(secondMatrix, lineCount, columnCount);
	puts("The state of the Sum Matrix Before Summing:");
	printArray(resultMatrix, lineCount, columnCount);
	matrixSum(firstMatrix, secondMatrix, resultMatrix, lineCount, columnCount);
	puts("The state of the Sum Matrix after addition is:");
	printArray(resultMatrix, lineCount, columnCount);
	puts("The Transpose of the Total Matrix:");
	printTranspose(resultMatrix, lineCount, columnCount);

	for (i = 0; i < lineCount; i++)
	{                                        //WE RETURNED THE SPACE WE USED
		free(firstMatrix[i]);
		free(secondMatrix[i]);
		free(resultMatrix[i]);
	}
	free(firstMatrix);                    //we did free
	free(secondMatrix);
	free(resultMatrix);


	return 0;
}

