#include <stdio.h>

int main(int argc, const char* argv[])
{

	int sayiInt = 1234;
	printf("SayiInt 10'luk taban : %d\n", sayiInt);
	printf("SayiInt 10'luk taban : %X\n", sayiInt);
	printf("SayiInt 10'luk taban : %o\n\n\n", sayiInt);

	float sayiFloat = 1.123456;

	printf("sayiFloat normal hali : %f\n", sayiFloat);
	printf("sayiFloat bilimsel hali : %e\n", sayiFloat);
	printf("sayiFloat bilimsel hali : %E\n", sayiFloat);
	printf("sayiFloat bilimsel hali : %g\n", sayiFloat);
	printf("sayiFloat bilimsel hali : %G\n\n\n", sayiFloat);

	printf("Merhaba Dunya\n");           /* \n alt satira gecmek icin kullanilir */
	printf("Merhaba \t Dunya\n");        // \t bir tab kadar bosluk birakir
	printf("Merhaba\bDunya\n");          // \b bir karakter geriye dogru siler
	printf("Merhaba \\Dunya\n\n");       // \ slash isareti kullanmak icin iki tane yazmak gereklidir

	printf("\"Merhaba Dunya\" \n");      // cift tirnak isaretini kullanmak icin cift tirnak onune slash isareti getirilir
	printf("Merhaba %% Dunya\n");        // mod ifadesini kullanmak icin 2 adet yazmamız gereklidir

	return 0;
}
