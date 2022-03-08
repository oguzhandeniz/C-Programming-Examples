#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{

	// EXAMPLE OF SEARCHING FOR VALUES IN AN ARRAY

	int array[10], i, find = 0, findValue;    // if find return 1
	srand(time(NULL));
	printf("Array:\n");
	for (i = 0; i < 10; i++)
	{
		array[i] = rand() % 100;
		printf("%d ", array[i]);
	}
	printf("\n\n");
	printf("Please enter the value to be searched:");
	scanf("%d", &findValue);

	for (i = 0; i < 10; i++)
	{
		if (array[i] == findValue)
		{
			find = 1;
			break;
		}
	}
	if (find == 1)
	{
		printf("Value found\n");
	}
	else
	{
		printf("Value not found\n");
	}
	return 0;
}
