#include <stdio.h>


int fibonacciRecursive(int);

int main(int argc, const char* argv[])
{

	// FIBONACCI ARRAY PRINT

	int i, upperLimit;
	puts("Please enter a ust limit for the series: ");
	scanf("%d", &upperLimit);
	for (i = 0; i < upperLimit; i++)
	{
		printf("%d ", fibonacciRecursive(i));
	}


	return 0;
}


int fibonacciRecursive(int number)
{
	if (number == 0 || number == 1)
	{
		return number;
	}
	else
	{
		return fibonacciRecursive(number - 1) + fibonacciRecursive(number - 2);
	}
}
