#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{

	// INVERT THE USER'S INPUT STRING

	// oguz ---> zguo ---> zugo

	char userLogin[20];
	int charNum, i;
	char tempChar;

	puts("Please enter the string you want to reverse:");
	gets(userLogin);

	charNum = strlen(userLogin);

	for (i = 0; i < charNum / 2; i++)
	{
		tempChar = userLogin[i];
		userLogin[i] = userLogin[charNum - i - 1];
		userLogin[charNum - i - 1] = tempChar;
	}
	puts("REVERSE :");
	puts(userLogin);


	return 0;
}
