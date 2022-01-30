#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(int argc, const char* argv[])
{


	float userBalance = 1250.0, userAmount, dailyLimit = 500.0;
	int select;
	printf("HELLO WELCOME:\n");
	printf("TO DEPOSIT MONEY 1\nTO WITHDRAW MONEY 2\nTO SEE ACCOUNT BALANCE press 3 :");
	scanf("%d", &select);

	if (select == 1)
	{
		printf("Enter the amount you want to deposit:");
		scanf("%f", &userAmount);
		if (userAmount == 0)
		{
			printf("Please make a money entry within the specified time.:");
			sleep(5);
			scanf("%f", &userAmount);
		}
		userBalance += userAmount;
		printf("Your transaction was successful. Thank you.\n");
		printf("Your new balance: %.2f\n", userBalance);
	}

	else if (select == 2)
	{
		printf("Enter the amount you want to withdraw:");
		scanf("%f", &userAmount);
		if (userAmount > userBalance)
		{
			printf("Your balance is insufficient. Please login again.\n");

		}
		else if (userAmount > dailyLimit)
		{
			printf("Your daily withdrawal limit is insufficient. Please login again.\n");
		}
		else
		{
			userBalance -= userAmount;
			printf("Your transaction was successful. Thank you.\n");
			printf("Your new balance: %.2f\n", userBalance);
		}

	}
	else if (select == 3)
	{
		printf("Your account balance:%.2f\n", userBalance);
	}
	else
	{
		printf("YOU MADE A WRONG ENTRY\n");
	}
	return 0;
}
