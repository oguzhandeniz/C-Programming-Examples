#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main()
{
	// Array Sequence

	int array[10], i, j, employee;
	srand(time(NULL));
	printf("Array :\n");
	for (i = 0; i < 10; i++)
	{
		array[i] = rand() % 100;
		printf("%d ", array[i]);
	}
	printf("\n\n");
	printf("Sequence Array:\n");

	for (i = 1; i < 10; i++)
	{
		employee = array[i];

		for (j = i - 1; j >= 0 && employee <= array[j]; j--)
		{
			array[j + 1] = array[j];
		}
		array[j + 1] = employee;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}

	return 0;
}
