#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main(int argc, const char* argv[])
{


	int array[10];
	int* ptr = &array[0];    // The address of the first element means the address of the array.
	int* ptr2 = array;       // The name of the directory also means its address.
	int i;
	srand(time(NULL));
	printf("The starting address of the array: %#X\n", ptr);
	printf("The starting address of the array: %#X\n", ptr2);


	for (i = 0; i < 10; i++)
	{
		// IN THIS LOOP PTR VALUE SHOWED THE SAME MOLD START ADDRESS,
		// THE 'i' VALUE WAS CONTINUOUSLY INCREASED AND THE VALUE OF THE NEXT ELEMENT WAS TAKEN.

		printf("%d of the array. the address of the index: %#X", i, ptr + i);
		*(ptr + i) = rand() % 100;
		printf("  and value: %d\n", *(ptr + i));
	}


	for (ptr = array; ptr != array + 10; ptr++)
	{
		// IN THIS LOOP, THE VALUE OF THE PTR WAS CONTINUOUSLY UPDATED AND MOVED TO THE NEXT ELEMENT.

		printf("Address: %#X  ve  Value: %d\n", ptr, *ptr);
	}


	int* p = array;

	printf("%d\n", (*p)++);    // FIRST GO PRINT THE FIRST ELEMENT OF THE ARRAY, THEN INCREASE THIS VALUE BY 1.

	printf("%d\n", *(p++));    // FIRST PRINT THE ELEMENT OF THE ARRAY, THEN LET THE POINTER MOVE TO THE NEXT INDEX.

	printf("%d\n", *(++p));    // FIRST, INCREASE THE ADDRESS(LET THE POINTER MOVE TO THE NEXT INDEX), THEN PRINT IT.

	printf("%d\n", ++(*p));    // INCREASE THE VALUE OF WHEREVER THE POINTER SHOWS, AND THEN PRINT IT OUT.

	return 0;
}
