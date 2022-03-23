#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

int main()
{
	/*
	 QUESTION 2: CONVERTING A ONE-DIMENSIONAL
	 MATRIX CREATED TO A TWO-DIMENSIONAL MATRIX ACCORDING TO THE NUMBER OF ROWS AND
	 COLUMNS RECEIVED FROM USER
	 */

	int array[12], row, column, i, j;
	srand(time(NULL));
	//printf("array:");
	for (i = 0; i < 12; i++)
	{
		array[i] = rand() % 100;
		printf("%d ", array[i]);
	}

	printf("\nPlease enter the number of rows and columns:");
	scanf("%d%d", &row, &column);
	int twoDimArray[row][column];

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			twoDimArray[i][j] = array[column * i + j];
			printf("%d\t", twoDimArray[i][j]);
		}
		printf("\n");
	}

	return 0;
}
