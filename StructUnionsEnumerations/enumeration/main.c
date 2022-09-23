#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>


typedef enum {
	monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6, sunday = 7
} weekendDays;


typedef enum {
	beginner = 1, intermediate = 2, advanced = 3, prof = 4
} gameLevels;


int main(int argc, const char* argv[])
{

	weekendDays days;
	puts("Please enter a number between 1-7 days of the week : ");
	scanf("%d", &days);

	switch (days)
	{
	case monday:
	case tuesday:
	case wednesday:
	case thursday:
	case friday:
		printf("Weekdays.");
		break;
	case saturday:
	case sunday:
		printf("Weekend.");
		break;
	default:
		printf("You have made an incorrect entry.");
	}

	printf("\n\n");

	// EXAMPLE 2
	gameLevels levels;
	puts("Please enter the level comparison in the game : ");
	scanf("%d", &levels);
	if (levels == beginner)
	{
		printf("You are not authorized to receive this service.");
	}
	else if (levels == intermediate || levels == advanced)
	{
		printf("You can get this task.");
	}
	else if (levels == prof)
	{
		printf("Your level is too high to get this vision.");
	}
	else
	{
		printf("Incorrect level entry.");
	}

	return 0;
}
