#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>


int main(int argc, const char* argv[])
{


	int elementNumber, i;
	srand(time(NULL));
	printf("Please enter how many elements are required:");
	scanf("%d", &elementNumber);

	int* array;
	array = (int*)malloc(sizeof(int) * elementNumber);
	int* ptr = array;


	for (ptr = array; ptr < array + elementNumber; ptr++)
	{
		(*ptr) = 10;
		(*ptr) = rand() % 100;
	}
	for (ptr = array; ptr < array + elementNumber; ptr++)
	{
		printf("%d ", *ptr);
	}

	printf("\nREVERSE CASE\n");

	for (ptr = array + elementNumber - 1; ptr >= array; ptr--)
	{
		printf("%d ", *ptr);
	}

	free(array);

	return 0;
}
