#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{

	/*
	 0000 -> (1.employee)(0.index)
	 0004 -> (2.employee)(1.index)
	 0008 -> (3.employee)(2.index)
		  -> (N.employee)(N-1.index)
	 */


	int numArray[10];
	//4byte*10=40byte takes up space
	// Array information

	printf("Dizinin kapladigi alan:%lu byte\n", sizeof(numArray));
	printf("Dizinin 1.elemaninin adresi: %#X ve degeri: %d \n", &numArray[0], numArray[0]);
	printf("Dizinin 2.elemaninin adresi: %#X ve degeri: %d \n", &numArray[1], numArray[1]);
	printf("Dizinin 3.elemaninin adresi: %#X ve degeri: %d \n", &numArray[2], numArray[2]);
	printf("Dizinin 4.elemaninin adresi: %#X ve degeri: %d \n", &numArray[3], numArray[3]);
	printf("Dizinin 5.elemaninin adresi: %#X ve degeri: %d \n", &numArray[4], numArray[4]);


	printf("\n");


	// Example of array calculating squares of digits 0-10

	int sayiDizisi2[10];
	int i2;
	for (i2 = 0; i2 < 10; i2++)
	{
		sayiDizisi2[i2] = pow(i2, 2);
		printf("%d.eleman: %d\n", i2 + 1, sayiDizisi2[i2]);
	}


	return 0;
}

