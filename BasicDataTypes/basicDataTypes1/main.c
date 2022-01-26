#include <stdio.h>
#include <limits.h>

int main(int argc, const char* argv[])
{

	int sayi = 5;
	short int shortSayi;
	long int longSayi;
	long long int longlongSayi;
	float floatSayi = 5.123456789;
	double doubleSayi;

	printf("shortint kapladigi alan : %lu byte\n",
			sizeof(shortSayi));       // sizeof(degisken) -> bu komut icindeki degiskenin ne kadar alan kapladigini verir
	printf("longint kapladigi alan : %lu byte\n", sizeof(longSayi));
	printf("longlongint kapladigi alan : %lu byte\n", sizeof(longlongSayi));
	printf("int kapladigi alan : %lu byte\n", sizeof(sayi));
	printf("float kapladigi alan : %lu byte\n", sizeof(floatSayi));
	printf("double kapladigi alan : %lu byte\n", sizeof(doubleSayi));


	int sayiDonusum = (int)floatSayi;
	printf("Donusturulmus hali : %d\n", sayiDonusum);

	float sayiDonusum2 = (float)sayi;
	printf("Donusturulmus hali : %f\n", sayiDonusum2);

	printf("Short maksimum aralik : %d\n", SHRT_MAX);
	printf("Short minimum aralik : %d\n", SHRT_MIN);
	return 0;
}
