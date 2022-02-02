#include <stdio.h>

int main(int argc, const char* argv[])
{


	int num1 = 15, num2 = 25;
	printf("First number:%d, Second number:%d, Query result(0 or 1):%d\n", num1, num2, num1 > num2);     // buyuk ?
	printf("First number:%d, Second number:%d, Query result(0 or 1):%d\n", num1, num2, num1 < num2);     // kucuk ?
	printf("First number:%d, Second number:%d, Query result(0 or 1):%d\n", num1, num2, num1 == num2);    // esittir ?
	printf("First number:%d, Second number:%d, Query result(0 or 1):%d\n", num1, num2,
			num1 != num2);    // esit degildir ?
	printf("First number:%d, Second number:%d, Query result(0 or 1):%d\n", num1, num2,
			num1 >= num2);    // buyuk esittir ?
	printf("First number:%d, Second number:%d, Query result(0 or 1):%d\n", num1, num2,
			num1 <= num2);    // kucuk esittir ?
	printf("First number:%d, Second number:%d, Query result(0 or 1):%d\n", num1, num2,
			!(num1 == num2)); // unlem basa geldigi icin terse cevirdi
	printf("First number:%d, Second number:%d, Query result(0 or 1):%d\n", num1, num2,
			(num1 != num2) && (num1 < num2));  // ve operatoru icin iki tarafta 1 dondurmelidir
	printf("First number:%d, Second number:%d, Query result(0 or 1):%d\n", num1, num2,
			(num1 == num2) && (num1 < num2));  // iki taraf 1 olmadigi icin 0 verdi
	printf("First number:%d, Second number:%d, Query result(0 or 1):%d\n\n", num1, num2,
			(num1 != num2) || (num1 < num2));  // iki taraftan her hangi birisi 1 verirse 1 dondurur



	//BIT DUZEYINDEKI MANTIKSAL OPERATORLER
	int bitLevel1 = 64; //0100 0000
	int bitLevel2 = 32;//0010 0000

	printf("Ve operatoru sonuc: %d\n", bitLevel1 & bitLevel2);
	printf("Veya operatoru sonuc: %d\n", bitLevel1 | bitLevel2);
	/* Yukaridaki islemin aciklamasi
	 VE operatoru
	 64 = 0100 0000
	 32 = 0010 0000
	 s  = 0000 0000 -> 0

	 VEYA operatoru
	 64 = 0100 0000
	 32 = 0010 0000
	 s  = 0110 0000 -> 96 (2^6*1 + 2^5*1 = 96)
	*/
	return 0;

}
