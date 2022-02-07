#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char* argv[])
{

	/* QUESTİON : Make an example using functions such as islower, toupper, isdigit.

	 */

	//SOLUTİON :


	//isLower
	/*
	char ch;
	printf("Please enter a character:\n");
	ch=getchar();
	if (ch>='a' && ch<='z')
	{
		printf("Lowercase.\n");
	}
	else
	{
		printf("Not lowercase.\n");
	}
	*/



	//isUpper
	/*
	char ch;
	printf("Please enter a character:\n");
	ch=getchar();
	if (ch>=65 && ch<=90)
	{
		printf("Uppercase.\n");
	}
	else
	{
		printf("Not uppercase.\n");
	}
	*/



	//isAlpha
	/*
	char ch;
	printf("Please enter a character:\n");
	ch=getchar();
	if ((ch>='A' && ch<='Z') || (ch>=97 && ch<=122))
	{
		printf("It is an alphabetic letter.\n");
	}
	else
	{
		printf("It is not an alphabetic letter.\n");
	}
	*/



	//isAlnum
	/*
	char ch;
	printf("Please enter a character:\n");
	ch=getchar();
	if ((ch>='A' && ch<='Z') || (ch>=97 && ch<=122) || (ch>=48 && ch<=57))
	{
		printf("It is alphanumeric.\n");
	}
	else
	{
		printf("It is not alphanumeric.\n");
	}
	*/



	//isDigit
	/*
	char ch;
	printf("Please enter a character:\n");
	ch=getchar();
	if (ch>=48 && ch<=57)
	{
		printf("It is number.\n");
	}
	else
	{
		printf("It is not number.\n");
	}
	*/



	//toLower
	/*
	char ch;
	printf("Please enter a character:\n");
	ch=getchar();

	if (ch>='A' && ch<='Z')
	{
		ch+=32;
		putchar(ch);
	}
	else
	{
		printf("The value you entered is not an uppercase value.\n");
	}
   */



	//toUpper
	/*
	char ch;
	printf("Please enter a character:\n");
	ch=getchar();

	if (ch>='a' && ch<='z')
	{
		ch-=32;
		putchar(ch);
	}
	else
	{
		printf("The value you entered is not an lowercase value.\n");
	}
	*/
	return 0;
}
