#include <stdio.h>

int main()
{
	// PRIME NUMBER QUERY

	int queryNumber, i, findNum = 0;
	printf("Please enter the number to be queried:");
	scanf("%d", &queryNumber);

	for (i = 2; i < queryNumber; i++)
	{
		if (queryNumber % i == 0)
		{
			findNum = 1;
			break;
		}
	}
	if (findNum == 0)
	{
		printf("%d number is a prime number\n", queryNumber);
	}
	else
	{
		printf("%d number is not a prime number\n", queryNumber);
	}
	return 0;
}
