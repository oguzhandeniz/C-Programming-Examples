#include <stdio.h>

int main()
{
	// GCD(EBOB)-LCM(EKOK) CALCULATOR

	int num1, num2, GCD, LCM;
	int count, bigNum, smallNum;

	printf("Please enter two number:");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		bigNum = num1;
		smallNum = num2;
	}
	else
	{
		bigNum = num2;
		smallNum = num1;
	}

	//LCM
	count = bigNum;
	while (1)
	{
		if (count % bigNum == 0 && count % smallNum == 0)
		{
			LCM = count;
			break;
		}
		count++;
	}

	//GCD
	count = smallNum;
	while (1)
	{
		if (bigNum % count == 0 && smallNum % count == 0)
		{
			GCD = count;
			break;
		}
		count--;
	}

	printf("GCD value :%d\nLCM value:%d\n", GCD, LCM);


	return 0;
}
