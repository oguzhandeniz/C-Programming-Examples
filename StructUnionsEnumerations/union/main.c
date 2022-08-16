#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

typedef union {                                    // Ortak bellek alani kullanir.
	int intNumber;            // 4 byte
	float floatNumber;        // 6 byte
	double doubleNumber;      // 8 byte           // Maksimum byte seviyesine gore yer acar.
} Number;


int main(int argc, const char* argv[])
{

	Number num;

	num.intNumber = 12;
	printf("%d\n", num.intNumber);
	printf("%f\n", num.floatNumber);
	printf("%f\n", num.doubleNumber);

	printf("\n");

	num.floatNumber = 3.85;
	printf("%d\n", num.intNumber);
	printf("%f\n", num.floatNumber);
	printf("%f\n", num.doubleNumber);

	printf("\n");

	num.doubleNumber = 12.954;
	printf("%d\n", num.intNumber);
	printf("%f\n", num.floatNumber);
	printf("%f\n", num.doubleNumber);

	return 0;
}
