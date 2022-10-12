#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


// EXAMPLE FINDING THE MAX AND MIN VALUES, AVERAGE AND SUM OF THE SERIES


void arrayFilIn(int* array, int employeeCount)
{
	srand(time(NULL));
	int* ptr;
	for (ptr = array; ptr < array + employeeCount; ptr++)
	{      //it means increasing 4 bytes because ptr++ is intended
		*ptr = rand() % 100;
	}
}

void arrayPrint(int* array, int employeeCount)
{
	int* ptr;
	printf("Array : ");
	for (ptr = array; ptr < array + employeeCount; ptr++)
	{
		printf("%d ", *ptr);
	}
}

void maxMinFind(int* array, int employeeCount, int* max, int* min)
{
	int* ptr = array;      //ptr = 1.employee  ,  ptr = array[0]
	*max = *ptr;
	*min = *ptr;
	ptr++;                 //2.we provide the transition to the element

	for (; ptr < array + employeeCount; ptr++)
	{
		if (*ptr > *max)
		{
			*max = *ptr;   //max value updated
		}
		else if (*ptr < *min)
		{
			*min = *ptr;
		}
	}

}

void sumAvgCalc(int* array, int employeeCount, int* avg, int* sum)
{
	int* ptr = array;
	for (; ptr < array + employeeCount; ptr++)
	{
		*sum += *ptr;
	}
	*avg = *sum / employeeCount;
}


int main(int argc, const char* argv[])
{

	int array[10];
	int max, min;
	int avg = 0, sum = 0;
	arrayFilIn(array, 10);
	arrayPrint(array, 10);
	maxMinFind(array, 10, &max, &min);
	printf("\nThe largest element of the array: %d\nThe smallest element of the array: %d\n", max, min);
	sumAvgCalc(array, 10, &avg, &sum);
	printf("The sum of the array: %d\nAverage of the series: %d\n", sum, avg);


	return 0;
}