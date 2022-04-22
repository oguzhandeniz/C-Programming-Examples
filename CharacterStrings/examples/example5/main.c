#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{

	/*
	 AN APPLICATION THAT CHANGES HOW MANY LETTERS ARE ENTERED FROM THE USER AND THE STRING ENTERED FROM THE USER
	 */

	char userLogin[50];
	char changeChar, changeChars;
	int i = 0, charNum = 0;

	puts("Please write the string you want to enter:");
	gets(userLogin);
	puts("Which letter would you like to change:");
	scanf("%c", &changeChar);
	puts("Which letter do you want to replace it with:");
	fflush(stdin);        // buffer free
	scanf("%c", &changeChars);

	while (userLogin[i] != '\0')
	{
		if (userLogin[i] == changeChar)
		{
			charNum++;
			userLogin[i] = changeChars;
		}
		i++;
	}
	puts(userLogin);
	printf("%d is replaced with %c character, %c.", charNum, changeChar, changeChars);

	return 0;
}
