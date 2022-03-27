#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{

	// QUESTION 4:SORTING OF RANDOMLY GENERATED ARRAY BY SELECTIVE SORTING ALGORITHM

	int array[10], i, j, indexSmallNum, smallestNum;
	srand(time(NULL));
	printf("Not Sequential Array:");
	for (i = 0; i < 10; i++)
	{
		array[i] = rand() % 100;
		printf("%d ", array[i]);
	}
	printf("\n\n");

	for (i = 0; i < 9; i++)
	{
		smallestNum = array[9];
		indexSmallNum = 9;
		for (j = i; j < 9; j++)
		{
			if (array[j] < smallestNum)
			{
				smallestNum = array[j];
				indexSmallNum = j;
			}
		}
		printf("%d number and %d number have changed places.\n", smallestNum, array[i]);
		array[indexSmallNum] = array[i];
		array[i] = smallestNum;

	}

	printf("\nSequential Array:");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}



	/*
	 QUESTION 5: USING THE BINARY SEARCH ALGORITHM,
	 RANDOM VALUE SEARCH IN THE DECODED ARRAY (THE ABOVE DECODED ARRAY WAS USED)
	 */

	int middle, left, right, findNum, found = 0;
	printf("\nPlease enter the number you are looking for:");
	scanf("%d", &findNum);
	left = 0; // index numbers
	right = 9; // index numbers
	while (left <= right)
	{
		middle = (left + right) / 2;
		if (findNum == array[middle])
		{
			found = 1;
			break;
		}
		else if (findNum > array[middle])
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}

	}
	if (found)
	{
		printf("The number %d is found in the array.\n", findNum);
	}
	else
	{
		printf("The number %d is not found in the array.\n", findNum);
	}

	return 0;
}
