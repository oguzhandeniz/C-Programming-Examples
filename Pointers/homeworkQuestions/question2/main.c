#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//2.Question->Create an array of function pointers and perform addition, subtraction, multiplication,
// and division operations according to the number entered by the user.

int addition(int num1, int num2)
{
	return num1 + num2;
}

int multiplication(int num1, int num2)
{
	return num1 * num2;
}

int division(int num1, int num2)
{
	return num1 / num2;
}

int subtraction(int num1, int num2)
{
	return num1 - num2;
}

int calculate(int(* ptr[4])(int, int), int num1, int num2, int operation)
{

	if (operation == 1)
	{
		(*ptr[0])(num1, num2);
	}
	else if (operation == 2)
	{
		(*ptr[1])(num1, num2);
	}
	else if (operation == 3)
	{
		(*ptr[2])(num1, num2);
	}
	else if (operation == 4)
	{
		(*ptr[3])(num1, num2);
	}

}

int main()
{

	int num1, num2;
	int operation;
	int (* ptr[4])(int, int);
	ptr[0] = addition;
	ptr[1] = subtraction;
	ptr[2] = multiplication;
	ptr[3] = division;
	printf("Please enter two number:");
	scanf("%d%d", &num1, &num2);
	printf("Please select the operation you want to perform (1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division):");
	scanf("%d", &operation);
	int result = calculate(ptr, num1, num2, operation);
	printf("Result: %d", result);
	return 0;
}