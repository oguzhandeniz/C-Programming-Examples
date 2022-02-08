#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*QUESTION : Customer's shopping price calculator */

	// SOLUTION :


	int priceAmount, installmentAmount;
	char userAnswer;
	srand(time(NULL));
	priceAmount = rand() % 2000;

	printf("Shopping Amount :%d TL\n", priceAmount);
	printf("Do your want installment ? (YES (Y) - NO (N): ");
	userAnswer = getchar();
	if (userAnswer == 'Y')
	{
		printf("How many installments do you want? (3-6-9): ");
		scanf("%d", &installmentAmount);
		switch (installmentAmount)
		{
		case 3:
			priceAmount += priceAmount * 0.03;
			printf("%d Installment Applied.\n", installmentAmount);
			break;
		case 6:
			priceAmount += priceAmount * 0.06;
			printf("%d Installment Applied.\n", installmentAmount);
			break;
		case 9:
			priceAmount += priceAmount * 0.09;
			printf("%d Installment Applied.\n", installmentAmount);
			break;
		default:
			printf("The installment amount you entered is incorrect.\n");

		}
	}
	else
	{
		printf("No installments were applied.\n");
	}

	printf("Do you have a customer card? (YES (Y) - NO (N): ");
	fflush(stdin);
	userAnswer = getchar();
	if (userAnswer == 'Y')
	{
		priceAmount -= priceAmount * 0.05;
	}
	else
	{
		printf("No discount was applied..\n");
	}
	printf("Total Amount: %d TL\n", priceAmount);

	return 0;
}
