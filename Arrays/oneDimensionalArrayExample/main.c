#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{


	// Example of loop collecting random items

	int i, mostBig, smallest;
	int numArray[10];
	int sum = 0, average;
	int userLogin;
	printf("Please enter a number: ");
	scanf("%d", &userLogin);
	srand(time(NULL));
	for (i = 0; i < 10; i++)
	{

		numArray[i] = rand() % 100;

		printf("%d ", numArray[i]);

	}
	mostBig = numArray[0];
	smallest = numArray[0];
	printf("\n");

	for (i = 0; i < 10; i++)
	{

		if (numArray[i] > mostBig)
		{
			mostBig = numArray[i];
		}
		if (numArray[i] < smallest)
		{
			smallest = numArray[i];
		}

		sum += numArray[i];
		printf("%d. element added and new total: %d\n", i + 1, sum);
	}
	average = sum / 10;
	printf("Average of the Array: %d\n", average);
	printf("The largest element of the array: %d\n", mostBig);
	printf("The smallest element of the array: %d\n", smallest);

	for (i = 0; i < 10; i++)
	{
		if (numArray[i] >= average)
		{
			printf("%d Number is greater than or equal to the mean of the array.\n", numArray[i]);
		}
		else
		{
			printf("%d The number is smaller than the mean of the array.\n", numArray[i]);
		}

	}
	for (i = 0; i < 10; i++)
	{
		if (numArray[i] % userLogin == 0)
		{
			printf("The number %d is a multiple of the number entered by the user.\n", numArray[i]);
		}
	}
	return 0;
}

