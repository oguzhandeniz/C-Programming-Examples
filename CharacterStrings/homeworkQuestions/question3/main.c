#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, const char* argv[])
{

	// QUESTION 3: HOW TO CHECK IF TWO DIRECTORIES ENTERED BY THE USER ARE ANAGRAM TO EACH OTHER?
	// kalem--> kelam  || flea --> leaf || raptor --> parrot

	char userLogin[20], userLogin2[20];
	int i, j, employee, query = 1;
	int charNum, charNum2;
	puts("Please enter the first string:");
	gets(userLogin);
	puts("Please enter the second string:");
	gets(userLogin2);

	charNum = strlen(userLogin);
	charNum2 = strlen(userLogin2);

	if (charNum != charNum2)
	{
		puts("They Are Not Anagrams");
	}
	else
	{
		for (i = 1; i < charNum; i++)
		{
			employee = userLogin[i];
			for (j = i - 1; j >= 0 && employee <= userLogin[j]; j--)
			{
				userLogin[j + 1] = userLogin[j];
			}
			userLogin[j + 1] = employee;
		}
		for (i = 1; i < charNum2; i++)
		{
			employee = userLogin2[i];
			for (j = i - 1; j >= 0 && employee <= userLogin2[j]; j--)
			{
				userLogin2[j + 1] = userLogin2[j];
			}
			userLogin2[j + 1] = employee;
		}
		for (i = 0; i < charNum; i++)
		{
			if (userLogin[i] != userLogin2[i])
			{
				query = 0;    // not anagram
				break;
			}
		}
		if (query)
		{
			puts("Anagram");
		}
		else
		{
			puts("Not Anagram");
		}
	}

	return 0;
}
