#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>


int main(int argc, const char* argv[])
{


	int number = 5;
	// direct access: access by name
	// indirect access : we provide access with the address
	// int *ptr = &number;
	int* p1, * p2;         // * sign means pointer during initial definition.
	p1 = &number;         // assignment has been made. The & sign means address.
	p2 = &number;
	*p2 = 8;             // The value of where p2 points has been changed to 8.
	*p1 = 12;


	printf("Address of number variable using pointer         : %#X\n", p1);
	printf("Address of number variable without using pointer : %#X\n", &number);
	printf("Value of number variable using pointer           : %d\n", *p1);
	printf("Value of number variable without using pointer   : %d\n", number);

	/*

		  p1 ----------->> number <<------------p2


	 */



	return 0;
}
