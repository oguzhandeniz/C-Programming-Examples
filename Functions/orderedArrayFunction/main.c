#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


void arrayPrint(int [], int);

void arrayOrdered(int [], int);

void arrayFilIn(int [], int);

int main(int argc, const char* argv[])
{

	int employeeNum = 10;
	int array[employeeNum];


	arrayFilIn(array, employeeNum);
	printf("Not Sequent Array :");
	arrayPrint(array, employeeNum);
	printf("\n");
	arrayOrdered(array, employeeNum);
	printf("Sequent Array:");
	arrayPrint(array, employeeNum);

	return 0;
}


void arrayPrint(int array[], int employeeNum)
{
	int i;
	for (i = 0; i < employeeNum; i++)
	{
		printf("%d ", array[i]);
	}
}


void arrayOrdered(int array[], int employeeNum)
{
	int i, j, indexSmallNum, smallestNum;

	for (i = 0; i < employeeNum - 1; i++)
	{
		smallestNum = array[employeeNum - 1];
		indexSmallNum = employeeNum - 1;
		for (j = i; j < employeeNum - 1; j++)
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

}


void arrayFilIn(int array[], int employeeNum)
{
	int i;
	srand(time(NULL));
	for (i = 0; i < employeeNum; i++)
	{
		array[i] = rand() % 100;
	}
}


