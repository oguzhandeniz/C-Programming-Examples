#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>


int main(int argc, const char* argv[])
{

	// calloc  --> clear and allocation
	// realloc --> reallocation


	int elementCount;
	puts("Please enter the element count:");
	scanf("%d", &elementCount);
	int* array = (int*)calloc(elementCount, sizeof(int));  // start adress
	int* ptr;                                                      // all operations will be performed on ptr

	for (ptr = array; ptr < array + elementCount; ptr++)
	{
		*ptr = 10;
		printf("%d ", *ptr);
	}


	puts("\nHow much would you like to increase the number of elements:");
	scanf("%d", &elementCount);
	array = realloc(array, elementCount * sizeof(int));

	for (ptr = array; ptr < array + elementCount; ptr++)
	{
		*ptr = 20;
		printf("%d ", *ptr);
	}

	free(array);

	return 0;
}
