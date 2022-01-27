#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{

	char characterArray[] = "1234.1234";                // string ifadedir

	char character = 'a';

	printf("%c karakterinin hafizada kapladigi alan : %d byte \n", character, sizeof(character));
	printf("%c karakterinin decimal karsiligi : %d, Hexadecimal karsiligi : %X\n\n", character, character, character);


	// 0 donerse yanlıs - 1 donerse dogru

	printf("Karakter icin isalpha sonucu : %d\n", isalpha(character));        // alfabetik olup olmadıgını sorgular
	printf("Sayi icin isalpha sonucu : %d\n\n", isalpha('5'));

	printf("Karakter icin isdigit sonucu : %d\n", isdigit(character));        // rakam mi degil mi sorgular
	printf("Sayi icin isdigit sonucu : %d\n\n", isdigit('5'));

	printf("Karakter icin isalnum sonucu :%d\n",
			isalnum(character));      // ya alfabetik olması gerekiyor yada rakam , diger karakterlerde sonuc yanlıs döner
	printf("Sayi icin isalnum sonucu : %d\n", isalnum('5'));
	printf("+ icin isalnum sonucu : %d\n\n", isalnum('+'));

	printf("H icin islower : %d\n", islower('H'));                 // kucuk harf olup olmadigini sorgular
	printf("h icin islower : %d\n\n", islower('h'));

	printf("H icin isupper : %d\n", isupper('H'));                 // buyuk harf olup olmadigini sorgular
	printf("h icin isupper : %d\n\n", isupper('h'));

	printf("h icin toupper : %c\n", toupper('h'));                 //kucuk harfi buyuk harfe cevirir
	printf("H icin tolower : %c\n\n", tolower('H'));               // buyuk harfi kucuk harfe cevirir


	int num;
	float decimalNum;

	num = atoi(characterArray);                 // string ifadeyi tam sayiya cevirir
	decimalNum = atof(characterArray);           // string ifadeyi float a çevirir
	printf("Sayi: %d\n", num);
	printf("Sayi: %.4f\n", decimalNum);


	return 0;
}
