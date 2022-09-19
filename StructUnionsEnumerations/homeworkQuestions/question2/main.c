#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/*
	2.Question->Create a clock structure, there will be hour minute second variables in it.
				Create 2 variables from this structure that you have created and read the value from the user.
 				Write a program that will calculate the difference of the last 2 hours entered and print the result.
*/

typedef struct {
	int hour;
	int minute;
	double second;
} timeInfo;

timeInfo findDifference(timeInfo firstTime, timeInfo secondTime)
{
	timeInfo timeDifference;        //result keep this.

	double firstTimeDouble = firstTime.hour * 3600 + firstTime.minute * 60 + firstTime.second;
	double secondTimeDouble = secondTime.hour * 3600 + secondTime.minute * 60 + secondTime.second;

	if (firstTimeDouble >= secondTimeDouble)
	{
		if (firstTime.second < secondTime.second)
		{
			firstTime.second += 60;
			firstTime.minute -= 1;
		}
		if (firstTime.minute < secondTime.minute)
		{
			firstTime.minute += 60;
			firstTime.hour -= 1;
		}
		timeDifference.hour = firstTime.hour - secondTime.hour;
		timeDifference.minute = firstTime.minute - secondTime.minute;
		timeDifference.second = firstTime.second - secondTime.second;
	}
	else
	{
		if (firstTime.second > secondTime.second)
		{
			secondTime.second += 60;
			secondTime.minute -= 1;
		}
		if (firstTime.minute > secondTime.minute)
		{
			secondTime.minute += 60;
			secondTime.hour -= 1;
		}
		timeDifference.hour = secondTime.hour - firstTime.hour;
		timeDifference.minute = secondTime.minute - firstTime.minute;
		timeDifference.second = secondTime.second - firstTime.second;

	}
	return timeDifference;

}

int main()
{
	timeInfo userTime1, userTime2;
	timeInfo timeDifference;

	printf("Please enter your first time information in the form of hours: minutes: seconds:");
	scanf("%d:%d:%lf", &userTime1.hour, &userTime1.minute, &userTime1.second);

	printf("Please enter your second time information in the form of hours: minutes: seconds::");
	scanf("%d:%d:%lf", &userTime2.hour, &userTime2.minute, &userTime2.second);

	timeDifference = findDifference(userTime1, userTime2);
	printf("%d:%d:%.2lf", timeDifference.hour, timeDifference.minute, timeDifference.second);

	return 0;

}