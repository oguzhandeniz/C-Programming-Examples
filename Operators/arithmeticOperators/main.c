#include <stdio.h>

int main(int argc, const char* argv[])
{

	// ARITMETIK OPERATORLER
	int num1 = 13, num2 = 2;                                  //atama operatoru
	printf("%d+%d=%d\n", num1, num2, num1 + num2);             //toplama operatoru
	printf("%d-%d=%d\n", num1, num2, num1 - num2);             //cikarma operatoru
	printf("%d*%d=%d\n", num1, num2, num1 * num2);             //carpma operatoru
	printf("%d/%d=%d\n", num1, num2, num1 / num2);             //bolme operatoru
	printf("%d%%%d=%d\n\n", num1, num2, num1 % num2);          //mod alma operatoru

	//atama operatoru ile kullanim
	int result = 1;
	result *= 4;     //sonuc=sonuc*4:4
	result *= 3;     //sonuc=sonuc*3:12
	result *= 2;     //sonuc=sonuc*2:24
	printf("Result : %d\n\n", result);

	int i = 5;
	printf("i value : %d\n", ++i); //once arttırıp sonra yazdırır
	printf("i value : %d\n\n", i);

	int k = 5;
	printf("k value : %d\n", k++); //once yazdırıp sonra arttırır
	printf("k value : %d\n\n", k);



	// BIT DUZEYINDE ISLEMLER
	int bitLevel = 64;
	printf("Shifted left result : %d\n", bitLevel << 1); //2 ile carpma anlamina gelir
	printf("Shifted righ result : %d\n", bitLevel >> 1); //2 ile bolme anlamina gelir

	return 0;
}
