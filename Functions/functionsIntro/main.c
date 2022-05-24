#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

/*

 returnType functionName(argumentsToTake)
    {
     actions to be taken;
    }

 void --> no return value
 int,char,double,float --> returns value

*/

void hello(char name[15])
{
	printf("Hello %s!\n", name);
}

int sum(int num1, int num2)
{
	return num1 + num2;
}

char myToupper(char ch)
{
	return ch - 32;
}


int main(int argc, const char* argv[])
{

	hello("Oguz");

	int sonuc = sum(15, 25);
	printf("%d\n", sonuc);
	printf("%c\n", myToupper('a'));


	return 0;
}
