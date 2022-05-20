#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void arrayFilIn(int funcArray[][5], int lineCount, int columnCount)
{
	int i, j;
	srand(time(NULL));
	for (i = 0; i < lineCount; i++)
	{
		for (j = 0; j < columnCount; j++)
		{
			funcArray[i][j] = rand() % 5 + 1;    // we added +1 so that it is not zero
		}
	}

}

void arrayPrint(int funcArray[][5], int lineCount, int columnCount)
{
	int i, j;
	for (i = 0; i < lineCount; i++)
	{
		for (j = 0; j < columnCount; j++)
		{
			printf("%d ", funcArray[i][j]);
		}
		printf("\n");
	}

}

int diagonalProduct(int funcArray[][5], int lineCount, int columnCount)
{
	int i, j;
	int multiplicationResult = 1;
	for (i = 0; i < lineCount; i++)
	{
		for (j = 0; j < columnCount; j++)
		{
			if (i == j)
			{
				multiplicationResult *= funcArray[i][j];
			}
		}
	}
	return multiplicationResult;
}

int rightDiagonalProduct(int funcArray[][5], int lineCount, int columnCount)
{
	int i, j;
	int multiplicationResult;
	for (i = 0; i < lineCount; i++)
	{
		for (j = 0; j < columnCount; j++)
		{
			if (i + j == lineCount - 1)
			{
				multiplicationResult *= funcArray[i][j];
			}
		}
	}
	printf("Right diagonal multiplication:%d\n", multiplicationResult);
	if (multiplicationResult == diagonalProduct(funcArray, lineCount, columnCount))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


void lineColumnSum(int funcArray[][5], int lineCount, int columnCount)
{
	int i, j;
	for (i = 0; i < lineCount; i++)
	{
		int lineSum = 0;
		int columnSum = 0;
		for (j = 0; j < columnCount; j++)
		{
			lineSum += funcArray[i][j];
			columnSum += funcArray[j][i];
		}
		printf("%d. the sum of the line: %d\n", i + 1, lineSum);
		printf("%d. the sum of the column: %d\n", i + 1, columnSum);
	}
}


int main(int argc, const char* argv[])
{

	// A FUNCTION THAT TAKES AN ARRAY FROM THE USER AND MULTIPLIES THE VALUES IN THE DIAGONALS
	// PRINT THE SUM OF THE VALUES CONTAINED IN THE LINE AND COLUMN

	int lineCount = 5, columnCount = 5;
	int array[lineCount][columnCount];
	arrayFilIn(array, lineCount, columnCount);
	arrayPrint(array, lineCount, columnCount);

	printf("Diagonal multiplication:%d\n", diagonalProduct(array, lineCount, columnCount));
	int result = rightDiagonalProduct(array, lineCount, columnCount);
	if (result)
	{
		printf("The right and left diagonal multiplications are equal..\n");
	}
	else
	{
		printf("The right and left diagonal multiplications are not equal..\n");
	}

	lineColumnSum(array, lineCount, columnCount);

	return 0;
}