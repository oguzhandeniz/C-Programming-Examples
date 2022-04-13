#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{

	// COMPARISON OF NON-SMALL-LARGE LETTER SENSITIVITY

	char firstString[20];
	char secondString[20];
	int charNum, charNum2, i;
	int karakterSorgusu = 1;
	puts("Enter two string:");
	gets(firstString);
	gets(secondString);
	charNum = strlen(firstString);
	charNum2 = strlen(secondString);

	if (charNum != charNum2)
	{
		puts("The two strings entered are different from each other.");
	}
	else
	{
		for (i = 0; i < charNum; i++)
		{
			if ((tolower(firstString[i])) != tolower(secondString[i]))
			{
				karakterSorgusu = 0;
				break;
			}
		}
		if (karakterSorgusu)
		{
			puts("The two strings entered are the same.");
		}
		else
		{
			puts("The two strings entered are different from each other.");

		}
	}


	return 0;
}
