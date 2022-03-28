#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{



	/*
	 A00 A01 A02 A03 ....... A09
	 A10 A11 A12 A13 ....... A19
				.
				.
				.
	 A90 A91 A92 A93 ....... A99
	*/


	int twoDimArray[10][10];
	int i, j;
	printf("Space occupied by memory: %d byte\n", sizeof(twoDimArray));

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			twoDimArray[i][j] = i * j;
		}

	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d\t", twoDimArray[i][j]);
		}
		printf("\n");
	}


	printf("\n");
	printf("\n");


	int twoDimArray2[10][10];
	int i1, j1;
	for (i1 = 0; i1 < 10; i1++)
	{
		for (j1 = 0; j1 < 10; j1++)
		{
			if (i1 == j1)
			{
				twoDimArray2[i1][j1] = 1;
			}
			else
			{
				twoDimArray2[i1][j1] = 0;
			}
		}
	}
	for (i1 = 0; i1 < 10; i1++)
	{
		for (j1 = 0; j1 < 10; j1++)
		{
			printf("%d\t", twoDimArray2[i1][j1]);
		}
		printf("\n");
	}


	return 0;
}
