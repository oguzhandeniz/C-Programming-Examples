#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main()
{
	//QUESTİON: Get the characters from the user in a loop and evaluate the suitability of the password.
	// The entered password must contain lowercase and uppercase letters and numbers.
	// It must be min8 - max16 characters long.

	//SOLUTİON:

	int lowercaseQuery = 0, uppercaseQuery = 0, numQuery = 0, charNum = 0;
	char ch;
	printf("Please enter a password: ");

	do
	{
		ch = getchar();
		if (lowercaseQuery == 0)
		{
			if (islower(ch))
			{
				lowercaseQuery = 1;
			}
		}
		if (uppercaseQuery == 0)
		{
			if (isupper(ch))
			{
				uppercaseQuery = 1;
			}
		}
		if (numQuery == 0)
		{
			if (isdigit(ch))
			{
				numQuery = 1;
			}
		}
		charNum++;
	} while (ch != '\n');
	{
		if (lowercaseQuery && uppercaseQuery && numQuery && charNum >= 8 && charNum <= 16)
		{
			printf("Your password has been accepted.\n");
		}
		else
		{
			printf("Your password is not accepted.\n");
		}
	}
	return 0;
}

