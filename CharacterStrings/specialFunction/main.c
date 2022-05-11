#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	/*
	 STRLEN: The character length of the string you sent returns to you.
	 string:oguz-----> there are 4 characters.(The NULL character is ignored.)

	 STRCPY: Copies the second string you sent to the first one.
	 name=oguz
	 name2=oguz

	 STRCAT: Adds the second string you october to the end of the first one.
	 name: oguzhandeniz
	 surname: deniz

	 STRCMP: Compares the two strings you sent.
				If they are completely separated from each other, it turns 0
				a value greater than 0 if the first one comes after the second one alphabetically,
				if the first one is alphabetically preceded by the second, a value less than 0 is returned.
	 name:oguz
	 name2:deniz
	 */






	//STRLEN
	/*
	char name[20];
	puts("Please enter name:");
	gets(name);
	int charNum=strlen(name); 	//Returns the number of characters without taking into account the NULL character.
	printf("%s string contains %d characters.\n",name,charNum);
	*/


	//STRCPY
	/*
	char name[20];
	char name2[20];
	puts("Please enter name:");
	gets(name);
	strcpy(name2,name);   		// copies the second sent string to the first
	int charNum=strlen(name2); 	//Returns the number of characters without taking into account the NULL character.
	printf("%s string contains %d characters.\n",name2,charNum);
	*/


	//STRCAT
	/*
	char name[20];
	char name2[20];
	puts("Please enter name:");
	gets(name);
	puts("Please enter name:");
	gets(name2);
	strcat(name2, name);
	int charNum=strlen(name2); 	//Returns the number of characters without taking into account the NULL character.
	printf("%s stringi %d adet karakter icermektedir.\n",name2,charNum);
	*/


	//STRCMP

	char name[20];
	char name2[20];

	puts("Please enter a name:");
	gets(name);
	puts("Please enter another name:");
	gets(name2);

	int comparisonResult = strcmp(name, name2);
	if (comparisonResult == 0)
	{
		printf("Two strings are the same.");
	}
	else if (comparisonResult > 0)
	{
		printf("The first string comes after the second alphabetically.");
	}
	else
	{
		printf("The first string precedes the second alphabetically.");
	}


	return 0;
}
