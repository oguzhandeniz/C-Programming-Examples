#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

//  Clock Information Operations with Struct

typedef struct {

	int hour;
	int minute;
	double second;     // second + decimal part (split)

} hourInfo;

hourInfo hourPart(double userHour)
{
	hourInfo convertHour;

	int integerPart = (int)userHour;
	double decimalPart = userHour - integerPart;

	convertHour.hour = integerPart / 3600;                                 //hour
	convertHour.minute = (integerPart % 3600) / 60;                        //minute
	convertHour.second = (integerPart % 3600) % 60 + decimalPart;          //second



	return convertHour;;
}

int main(int argc, const char* argv[])
{

	double userEnter;
	hourInfo userHour;

	printf("Please enter the time value that you will enter in seconds: ");
	scanf("%lf", &userEnter);

	userHour = hourPart(userEnter);                                //hour-minute-second

	printf("%d : %d : %.2lf\n", userHour.hour, userHour.minute, userHour.second);

	return 0;
}
