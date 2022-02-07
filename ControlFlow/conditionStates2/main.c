#include <stdio.h>

int main(int argc, const char* argv[])
{

	// Simple Calculator

	int num1, num2, result;
	char operator;
	printf("Number 1:");
	fflush(stdin);
	scanf("%d", &num1);
	printf("Number 2:");
	fflush(stdin);
	scanf("%d", &num2);
	printf("Operator:");
	fflush(stdin);
	scanf("%c", &operator);

	switch (operator)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	default:
		printf("Incorrect operation\n");
	}
	printf("Result :%d\n", result);

	return 0;
}
