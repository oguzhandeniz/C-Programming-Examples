#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{

	// QUERY WHETHER THE USER'S INPUT STRING IS PALINDROME
	// kabak --> kabak  ( the reverse reading is the same as the word )
	// redivider --> redivider     madam --> madam

	char userLogin[20];
	int charNum, i;
	int queryPalindrome = 1;
	puts("Please enter the string to be queried:");
	gets(userLogin);
	charNum = strlen(userLogin);
	for (i = 0; i < charNum / 2; i++)
	{
		if (userLogin[i] != userLogin[charNum - i - 1])
		{
			queryPalindrome = 0;
			break;
		}
	}
	if (queryPalindrome)
	{
		puts("The string you entered is a Palindrome.");
	}
	else
	{
		puts("The string you entered is not a Palindrome.");
	}

	return 0;
}
