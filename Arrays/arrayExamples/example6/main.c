#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main()
{
	//Arrays Sequence

	int array[10], i, j;
	srand(time(NULL));
	printf("Array:\n");
	for (i = 0; i < 10; i++)
	{
		array[i] = rand() % 100;
		printf("%d ", array[i]);
	}

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

			}
		}
	}
	printf("\nSequence Array:\n");

	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}

	return 0;
}
