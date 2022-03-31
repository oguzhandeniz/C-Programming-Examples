#include <stdio.h>

int main()
{

	int twoDimArray1[10][10];
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i <= j)
			{
				twoDimArray1[i][j] = 1;
			}
			else
			{
				twoDimArray1[i][j] = 0;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d\t", twoDimArray1[i][j]);
		}
		printf("\n");

	}

	printf("\n");
	printf("\n");


	int twoDimArray2[10][10];
	int k, l;

	for (k = 0; k < 10; k++)
	{
		for (l = 0; l < 10; l++)
		{
			if (k % 2 == 0)
			{
				twoDimArray2[k][l] = 1;
			}
			else
			{
				twoDimArray2[k][l] = 0;
			}
		}
	}
	for (k = 0; k < 10; k++)
	{
		for (l = 0; l < 10; l++)
		{
			printf("%d\t", twoDimArray2[k][l]);
		}
		printf("\n");

	}

	return 0;
}
