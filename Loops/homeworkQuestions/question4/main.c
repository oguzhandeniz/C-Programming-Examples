#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{
	// QUESTION-4: PRIME NUMBERS BETWEEN VALUES RECEIVED FROM USER

	// SOLUTİON :

	int lowLimit, upLimit, query;
	int i, j;

	printf("Please enter the lower and upper limit information: ");
	scanf("%d%d", &lowLimit, &upLimit);

	for (i = lowLimit; i <= upLimit; i++)
	{
		query = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				query = 1;
				break;
			}
		}
		if (!query)
		{
			printf("%d ", i);
		}
	}

	return 0;
}
