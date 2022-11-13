#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

#define  N 5



// 1.Question->The functions of creating a one-dimensional array and assigning values to it,
// first from the beginning to the end, and then from the end to the beginning, that is, reverse printing.

void arrayFilIn(int* array)
{
	srand(time(NULL));
	int* ptr;
	for (ptr = array; ptr < array + N; ptr++)
	{
		*ptr = rand() % 100;
	}
}

void arrayPrint(int* array)
{
	printf("Array:");
	int* ptr;
	for (ptr = array; ptr <= array + N; ptr++)
	{
		printf("%d ", *ptr);
	}
}

void arrayReversePrint(int* array)
{
	printf("\nReverse Array:");
	int* ptr = array + N;
	for (; ptr >= array; ptr--)
	{
		printf("%d ", *ptr);
	}

}

int main(int argc, const char* argv[])
{

	int array[N];
	arrayFilIn(array);
	arrayPrint(array);
	arrayReversePrint(array);

	return 0;
}