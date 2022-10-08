#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define N 10

// Counting space characters in String.
//Print the reverse of the string.
//We will write our own strlen() and strcmp() functions.


void spaceCharCount(char* str, int* spaceCount)
{
	char* ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr == ' ')
		{
			*spaceCount += 1;
		}
		ptr++; // address increment operation for the next character.
	}
}

void myStrlen(char* str, int* charCount)
{
	char* ptr = str;
	while (*ptr != '\0')
	{
		*charCount += 1;
		ptr++;    // address increment.
	}
}

void reversePrint(char* str)
{
	int charCount = 0;
	myStrlen(str, &charCount);
	printf("String %d contains characters.\n", charCount);
	char* ptr = str + charCount - 1;
	while (ptr >= str)
	{
		printf("%c", *ptr);
		ptr--;
	}
	printf("\n");
}

int myStrCmp(char* str, char* str2)
{
	char* p1 = str;
	char* p2 = str2;
	while (*p1 != '\0' && *p2 != '\0')
	{
		if (*p1 == *p2)
		{
			p1++;
			p2++;
		}
		else if (*p1 > *p2)
		{
			return 1;   //alphabetically,  p1 value comes after p2.
		}
		else
		{
			return 2;
		}
	}

	if (strlen(p1) == strlen(p2))
	{
		return 0;   //strings are exactly the same as each other.
	}
	else if (strlen(p1) > strlen(p2))
	{
		return 1;   //alphabetically, the value p1 comes after p2.
	}
	else
	{
		return 2;
	}
}


int main()
{

	char* userLogin = "oguzz";
	char* userLogin2 = "oguz";
	int spaceCount = 0;
	spaceCharCount(userLogin, &spaceCount);
	printf("The string you entered contains %d space characters.\n", spaceCount);
	reversePrint(userLogin);

	int result = myStrCmp(userLogin, userLogin2);
	if (result == 0)
	{
		printf("The two strings are the same.\n");
	}
	else if (result == 1)
	{
		printf("The first string entered comes after the second.\n");
	}
	else
	{
		printf("The first string entered comes before the second.\n");
	}

	return 0;

}
