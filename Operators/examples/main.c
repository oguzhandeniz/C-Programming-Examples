#include <stdio.h>

int main(int argc, const char* argv[])
{

	// Finding the number of banknotes in the amount of money entered

	int moneyAmount;
	printf("Please enter a money amount :");
	scanf("%d", &moneyAmount);

	printf("%d amount 200 TL exists.\n", moneyAmount / 200);
	moneyAmount %= 200;
	printf("%d amount 100 TL exists.\n", moneyAmount / 100);
	moneyAmount %= 100;
	printf("%d amount 50 TL exists.\n", moneyAmount / 50);
	moneyAmount %= 50;
	printf("%d amount 20 TL exists.\n", moneyAmount / 20);
	moneyAmount %= 20;
	printf("%d amount 10 TL exists.\n", moneyAmount / 10);
	moneyAmount %= 10;
	printf("%d amount 5 TL exists.\n", moneyAmount / 5);
	moneyAmount %= 5;
	printf("%d amount 1 TL exists.\n", moneyAmount / 1);
	moneyAmount %= 1;

	/*

	 1480 TL = 7 adet 200 TL
	 80   TL = 0 adet 100 TL
	 80   TL = 1 adet 50  TL
	 30   TL = 1 adet 20  TL
	 10   TL = 1 adet 10  TL bulunmaktadır

	*/

	return 0;
}
