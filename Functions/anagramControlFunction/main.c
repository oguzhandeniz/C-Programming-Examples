#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

void stringSequent(char [], int);

void anagramControl(char [], char []);


int main(int argc, const char* argv[])
{

	char userLogin[20], userLogin2[20];
	puts("Please enter first string:");
	gets(userLogin);
	puts("Please enter second string:");
	gets(userLogin2);

	anagramControl(userLogin, userLogin2);


	return 0;
}


void stringSequent(char userLogin[], int charNum)
{
	int i, j, employee;
	for (i = 1; i < charNum; i++)
	{
		employee = userLogin[i];
		for (j = i - 1; j >= 0 && employee <= userLogin[j]; j--)
		{
			userLogin[j + 1] = userLogin[j];
		}
		userLogin[j + 1] = employee;
	}
}


void anagramControl(char userLogin[], char userLogin2[])
{
	int i, j, employee, query = 1;
	int charNum, charNum2;

	charNum = strlen(userLogin);
	charNum2 = strlen(userLogin2);

	if (charNum != charNum2)
	{
		puts("They are not anagram.");
	}
	else
	{
		stringSequent(userLogin, charNum);
		stringSequent(userLogin2, charNum2);
		for (i = 0; i < charNum; i++)
		{
			if (userLogin[i] != userLogin2[i])
			{
				query = 0;
				break;
			}
		}
		if (query)
		{
			puts("Anagram.");
		}
		else
		{
			puts("Not Anagram.");
		}
	}
}


