#include <stdio.h>

int main()
{
	// CONVERTING NUMBER RECEIVED FROM USER TO BIT LEVEL (0-1 LEVEL)

	int num, tempNum, i = 0;
	char bitArray[32];

	printf("Please enter the number to be converted to bit level:");
	scanf("%d", &num);
	tempNum = num;

	while (tempNum != 0)
	{
		if (tempNum % 2 == 0)
		{
			bitArray[i] = '0';
		}
		else
		{
			bitArray[i] = '1';
		}
		i++;
		tempNum /= 2;
	}
	printf("%d number of bits:", num);
	while (i >= 0)
	{
		printf("%c ", bitArray[i]);
		i--;
	}

	return 0;
}
