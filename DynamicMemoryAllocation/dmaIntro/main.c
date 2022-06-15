#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>


int main(int argc, const char* argv[])
{

	/*
	int array[20];              		 // 20 elements * 4 = 40 bytes of space is used.
	printf("%d ",sizeof(array));
	beginning_adress=malloc();  		 // it is used to allocate space.
	free();                    		 // it is used to free up space back.
	*/


	int* ptr;                   // to keep the initial address.
	ptr = (int*)malloc(sizeof(int));
	*ptr = 15;
	int* ptr2 = ptr;              // i assigned the reserved area to the second pointer.
	printf("%#X\n", ptr);
	printf("%d\n", *ptr);
	printf("%#X\n", ptr2);
	printf("%d\n", *ptr2);

	free(ptr2);                 // we've taken the space out of use.

	printf("%#X\n", ptr);
	printf("%d\n", *ptr);
	printf("%#X\n", ptr2);
	printf("%d\n", *ptr2);


	int* ptr3;
	ptr3 = (int*)malloc(sizeof(int));
	*ptr3 = 15;


	int* ptr4;
	ptr4 = (int*)malloc(sizeof(int));
	*ptr4 = 30;

	*ptr3 = *ptr4;                 // the value of ptr 4 was assigned to ptr3.

	printf("%#X\n", ptr3);
	printf("%d\n", *ptr3);
	printf("%#X\n", ptr4);
	printf("%d\n", *ptr4);


	return 0;
}
