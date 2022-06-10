#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

// Dynamic Array Creation and Selective Sorting & Binary Search Algorithm

void fillArray(int* array, int elementCount)
{
	srand(time(NULL));
	int* ptr;
	for (ptr = array; ptr < array + elementCount; ptr++)
	{
		*ptr = rand() % 100;
	}
}

void printArray(int* array, int elementCount)
{

	int* ptr;
	printf("Array : ");
	for (ptr = array; ptr < array + elementCount; ptr++)
	{
		printf("%d ", *ptr);
	}
	printf("\n");
}

void selectiveShort(int* array, int elementCount)
{
	int* ptr, * ptr2, * smallestNumber;
	for (ptr = array; ptr < array + elementCount; ptr++)
	{
		smallestNumber = array + elementCount - 1;
		for (ptr2 = ptr; ptr2 < array + elementCount; ptr2++)
		{
			if (*ptr2 < *smallestNumber)
			{
				smallestNumber = ptr2;
			}
		}
		int temp = *smallestNumber;
		*smallestNumber = *ptr;
		*ptr = temp;

	}

}

void binarySearch(int* array, int elementCount, int wantedNumber)
{
	int* ptrLeft = array;                                 // the beginning of the array
	int* ptrRight = array + elementCount - 1;              // the end of the array
	int* ptrMid;
	int ifFound = 0;
	while (ptrLeft <= ptrRight)
	{
		ptrMid = ptrLeft + (ptrRight - ptrLeft) /
						   2;    // the mid value of the array is: how many bytes are found according to how many should be in the future
		if (*ptrMid == wantedNumber)
		{
			ifFound = 1;
			break;
		}
		else if (*ptrMid > wantedNumber)
		{
			ptrRight = ptrMid - 1;
		}
		else
		{
			ptrLeft = ptrMid + 1;
		}
	}
	if (ifFound)
	{
		printf("The Number of %d was found.\n", wantedNumber);
	}
	else
	{
		printf("The Number of %d was not found.\n", wantedNumber);
	}
}


int main(int argc, const char* argv[])
{


	int foundValue;
	int elementCount;
	puts("Please enter the number of elements of the array: ");
	scanf("%d", &elementCount);

	int* array = (int*)malloc(sizeof(int) * elementCount);   // a dynamic array has been created
	fillArray(array, elementCount);
	printArray(array, elementCount);
	selectiveShort(array, elementCount);
	printArray(array, elementCount);

	printf("Please enter the number you want to search: ");
	scanf("%d", &foundValue);
	binarySearch(array, elementCount, foundValue);

	return 0;
}
