#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

void hello(char []);

int sum(int, int);

int result;    // is a global variable. It can appear from anywhere.
// local variable takes precedence over global variable.
int main(int argc, const char* argv[])
{

	hello("OGUZ");
	printf("%d\n", result);


	return 0;

}


void hello(char name[15])
{
	printf("Hello %s\n", name);
}

int sum(int num1, int num2)
{
	int result = num1 + num2;  // the result variable is a local variable. It can only appear in the aggregate function
	return result;
}
