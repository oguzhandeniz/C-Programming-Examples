#include <stdio.h>

int main(int argc, const char* argv[])
{

	// degiskeninTipi degiskeninAdi=degiskeninDegeri;

	int sayi, sayi2 = 9; // tam sayilar için kullanılır
	float sayi3 = 5.7;   // ondalikli sayilar icin kullanilir
	double sayi4 = 2.8;  // ondalikli sayilar icin kullanilir
	char karakter = 'x'; // karakterler icin kullanilir

	sayi = 5;
	printf("%d  %i  %.2f  %.2lf  %c\n", sayi, sayi2, sayi3, sayi4, karakter);
	printf("%X  %X  %X  %X   %X\n", &sayi, &sayi2, &sayi3, &sayi4, &karakter);


	return 0;
}
