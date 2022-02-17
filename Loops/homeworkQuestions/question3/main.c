#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{
	/* QUESTION-3: QUESTION IF THE NUMBER ENTERED IS A PERFECT NUMBER
	  (perfect number: numbers that are equal to the sum of their divisors are called)
	  For example : 6 --> 3 , 2 , 1
					3 + 2 + 1 = 6
					6 is a perfect number.
	*/


	int number, sum = 0, i;
	printf("Please enter the number to be queried: ");
	scanf("%d", &number);
	for (i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			sum += i;
		}
	}
	if (sum == number)
	{
		printf("%d The number is a perfect number.\n", number);
	}
	else
	{
		printf("%d The number is not a perfect number.\n", number);
	}




	// Example of finding perfect numbers from 1 to 1000
	int sum2 = 0, k, j;
	for (k = 1; k < 1000; k++)
	{
		sum2 = 0;
		for (j = 1; j < k; j++)
		{
			if (k % j == 0)
			{
				sum2 += j;
			}
		}
		if (k == sum2)
		{
			printf("%d number is a perfect number.\n", k);
		}
	}

	return 0;
}
