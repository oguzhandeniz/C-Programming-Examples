#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{
	// QUESTION-5: QUERY IF THE NUMBER ENTERED IS ARMSTRONG NUMBER
	// EXAMPLE : 371: 3^3 + 7^3 + 1^3 = 27 + 343 + 1 = 371

	// SOLUTİON :

	int num, tempNum, digit, sum = 0;
	printf("Please enter the number to be checked: ");
	scanf("%d", &num);
	tempNum = num;

	while (tempNum != 0)
	{
		digit = tempNum % 10;
		sum += pow(digit, 3);
		tempNum /= 10;
	}
	if (sum == num)
	{
		printf("%d number is an Armstrong number.\n", num);
	}
	else
	{
		printf("%d number is not an Armstrong number.\n", num);
	}




	// Example finding armstrong numbers between 1 and 1000

	int tempNum2, digit2, sum2 = 0;
	int i;
	printf("\nArmstrong numbers from 1 to 1000\n");
	for (i = 1; i < 1000; i++)
	{
		tempNum2 = i;
		sum2 = 0;
		while (tempNum2 != 0)
		{
			digit2 = tempNum2 % 10;
			sum2 += pow(digit2, 3);
			tempNum2 /= 10;
		}
		if (i == sum2)
		{
			printf("%d number is an Armstrong number.\n", i);
		}
	}


	return 0;
}
