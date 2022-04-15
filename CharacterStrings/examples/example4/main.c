#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{


	// FINDING THE NUMBER OF WORDS AND LETTERS IN THE ENTERED STRING

	char sentence[50];
	int wordNum = 0, charNum = 0, i = 0;

	puts("Please enter the string to be calculated:");
	gets(sentence);

	while (sentence[i] != '\0')
	{
		if (sentence[i] == ' ')
		{
			wordNum += 1;
		}
		charNum += 1;
		i++;
	}
	wordNum += 1;
	printf("The string you entered contains %d chars.\n", charNum);
	printf("The string you entered contains %d words.", wordNum);

	return 0;
}
