#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, const char* argv[])
{

	// QUESTION 4: CONVERT THE INITIALS OF THE WORDS INTO CAPITALS IN THE STRING ENTERED BY THE USER

	char userLogin[20], bigOutput[20];
	int i = 0, j = 0;

	puts("Please enter string:");
	gets(userLogin);
	userLogin[i] = toupper(userLogin[i]);
	bigOutput[j] = toupper(userLogin[i]);
	i++;
	j++;
	while (userLogin[i] != '\0')
	{
		if (userLogin[i] == ' ')
		{
			i++;
			userLogin[i] = toupper(userLogin[i]);
			bigOutput[j] = toupper(userLogin[i]);
			j++;
		}
		i++;
	}

	puts(userLogin);
	puts(bigOutput);


	return 0;
}
