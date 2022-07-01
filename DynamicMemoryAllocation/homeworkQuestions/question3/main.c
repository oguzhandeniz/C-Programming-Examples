#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

/*
4.Question->Create a dynamic array with the number of elements that you will receive from the user.
 		Assign random elements to the array you have created and print the array once.
 		Finally, decode and print the array using the INSERTION algorithm.

5.Question->4.search for the value you received from the user above the index you have sorted in the question using the Linear Search ALGORITHM.
*/


void fillArray(int* array, int elementCount)
{
	int* ptr;                            //it will go from the beginning to the end.
	srand(time(NULL));
	for (ptr = array; ptr < array + elementCount; ptr++)
	{
		*ptr = rand() % 100;
	}
}

void printArray(int* array, int elementCount)
{
	int* ptr;                            //it will go from the beginning to the end.
	for (ptr = array; ptr < array + elementCount; ptr++)
	{
		printf("%d ", *ptr);
	}
	printf("\n");
}

void insertion(int* array, int elementCount)
{

	int* ptr, * ptr2, arayaSokulacakEleman;
	for (ptr = array + 1; ptr < array + elementCount; ptr++)
	{
		arayaSokulacakEleman = *ptr;
		for (ptr2 = ptr - 1; ptr2 >= array && arayaSokulacakEleman <= *ptr2; ptr2--)
		{
			*(ptr2 + 1) = *ptr2;
		}
		*(ptr2 + 1) = arayaSokulacakEleman;
	}
}

int senquentialSearch(int* array, int elementCount, int wantedNumber)
{
	int* ptr;
	for (ptr = array; ptr < array + elementCount; ptr++)
	{
		if (*ptr == wantedNumber)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int elementCount;
	int wantedNumber;
	puts("Please enter the number of elements of the array:");
	scanf("%d", &elementCount);
	int* array = (int*)malloc(sizeof(int) * elementCount);            //DYNAMIC ONE-DIMENSIONAL ARRAY CREATION.
	puts("Unordered State:");
	fillArray(array, elementCount);
	printArray(array, elementCount);
	insertion(array, elementCount);
	puts("Ordered State:");
	printArray(array, elementCount);
	puts("Enter the value you want to search for:");
	scanf("%d", &wantedNumber);
	if (senquentialSearch(array, elementCount, wantedNumber))
	{
		puts("The value you are looking for has been found in the series.");
	}
	else
	{
		puts("The value you are looking for has not been found in the series.");
	}

	free(array);

	return 0;
}