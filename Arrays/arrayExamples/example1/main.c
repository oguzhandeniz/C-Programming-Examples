#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main()
{
	// FINDING THE SUM OF ROWS AND COLUMNS OF THE MATRIX

	int fistMatrix[5][5], i, j, sumRow, sumColumn;
	srand(time(NULL));
	printf("MATRIX:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			fistMatrix[i][j] = rand() % 10;
			printf("%d\t", fistMatrix[i][j]);
		}
		printf("\n\n");
	}
	for (i = 0; i < 5; i++)
	{
		sumRow = 0;
		sumColumn = 0;

		for (j = 0; j < 5; j++)
		{
			sumRow += fistMatrix[i][j];
			sumColumn += fistMatrix[j][i];
		}
		printf("%d.Sum of the row : %d\n", i + 1, sumRow);
		printf("%d.Sum of the column : %d\n\n", i + 1, sumColumn);
	}

	return 0;
}
