#include <stdio.h>

int main()
{
	// QUESTION 1: QUESTIONING IF THE MATRIX CREATED IS SYMMETRIC
	/*
	 123 -> a00 a01 a01
	 213 -> a10 a11 a12
	 331 -> a20 a21 a22
	 */

	int twoDimensionalArray[3][3] = {{ 1, 2, 3 },
									 { 2, 1, 3 },
									 { 3, 3, 1 }};
	int i, j, query = 0;
	printf("First Matrix:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", twoDimensionalArray[i][j]);
		}
		printf("\n\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (twoDimensionalArray[i][j] != twoDimensionalArray[j][i])
			{
				query = 1;
				break;
			}
		}
	}
	if (query)
	{
		printf("Not symmetrical.\n");
	}
	else
	{
		printf("Symmetrical.\n");
	}
	return 0;
}
