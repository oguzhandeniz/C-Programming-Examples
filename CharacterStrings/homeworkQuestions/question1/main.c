#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, const char* argv[])
{

	// QUESTION 1: HOW TO CHANGE THE UPPERCASE LETTERS RECEIVED FROM THE USER TO LOWERCASE, SMALL LETTERS TO UPPERCASE

	char userLogin[20];
	int i = 0;
	puts("Please enter words:");
	gets(userLogin);
	while (userLogin[i] != '\0')
	{
		if (islower(userLogin[i]))
		{
			userLogin[i] = toupper(userLogin[i]);
		}
		else
		{
			userLogin[i] = tolower(userLogin[i]);
		}
		i++;
	}
	puts(userLogin);

	return 0;
}
