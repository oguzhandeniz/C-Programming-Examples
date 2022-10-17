#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void changeNum(int, int);

void changeNumPointer(int*, int*);


int main(int argc, const char* argv[])
{

	int a = 5, b = 12;

	printf("Value of A number : %d , Value of B number : %d\n\n", a, b);
	changeNum(a, b);                                  // are sent with their names, ie values. CALL BY VALUE
	printf("Value of A number : %d , Value of B number : %d\n\n", a, b);
	changeNumPointer(&a, &b);                         // sent with addresses. CALL BY REFERENCE
	printf("Value of A number : %d , Value of B number : %d\n", a, b);

	return 0;
}


void changeNum(int funcA, int funcB)  // Assigning the value of funcA = a
{
	int tempNum;
	tempNum = funcB;  // b value should not be lost
	funcB = funcA;
	funcA = tempNum;
	printf("Value of A in Function : %d , Value of B in Function : %d\n", funcA, funcB);
}

// funcA and funcB disappear when the changeNum function finishes

void changeNumPointer(int* funcA, int* funcB)
{
	int tempNum;
	tempNum = *funcB;
	*funcB = *funcA;
	*funcA = tempNum;
	printf("Value of A in Pointer : %d , Value of B in Pointer : %d\n", *funcA, *funcB);
}
