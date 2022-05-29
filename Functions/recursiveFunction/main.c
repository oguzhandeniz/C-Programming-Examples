#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


int printNum(int);

int factorialCalc(int);


int main(int argc, const char* argv[])
{


	printf("%d\n", factorialCalc(5));
	printNum(10);

	return 0;
}


int printNum(int num1)
{
	if (num1 == 0)
	{
		return 0;
	}
	printf("%d\n", num1);
	return printNum(num1 - 1);
}

int factorialCalc(int num2)
{
	if (num2 == 0 || num2 == 1)
	{
		return 1;
	}
	int result = num2 * factorialCalc(num2 - 1);
	return result;
}
