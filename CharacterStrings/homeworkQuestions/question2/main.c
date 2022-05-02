#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, const char* argv[])
{

	// QUESTION 2: THE CODE TO RECEIVE 2 STRINGS FROM THE USER AND CHECK IF THE FIRST STRING IS DELAYED IN THE SECOND

	char userLogin[20];
	char userLogin2[20];
	int i = 0, j = 0, continuedIndex = 0;
	int query;

	puts("Please enter the first string:");
	gets(userLogin);
	puts("Please enter the second string:");
	gets(userLogin2);

	while (userLogin[i] != '\0')
	{
		i = continuedIndex;
		j = 0;
		query = 1;
		while (userLogin2[j] != '\0')
		{
			if (userLogin[i] != userLogin2[j])
			{
				query = 0;
				break;
			}
			i++;
			j++;
		}
		if (query)
		{
			printf("We detected that the 2nd String you entered is inside the first one.");
			break;
		}
		continuedIndex++;
	}

	return 0;
}
