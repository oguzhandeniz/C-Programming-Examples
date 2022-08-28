#include <stdio.h>
#include <string.h>


struct Student {
	char name[20];
	char surname[30];
	float average;
};                             // data type definition has been made


int main(int argc, const char* argv[])
{

	//int x;                                                          			// degisken olusturma ( VERİ TİPİ : int, DEGİSKEN İSMİ : x)
	struct Student std1 = { "Oguzhan", "Deniz",
							3.14 };                                    // degisken olusturma ( VERİ TİPİ : struct, DEGİSKEN İSMİ : ogr1)
	struct Student std2;
	strcpy(std2.name,"Halim");                                                  // char cinsinden degerlere sonradan atama yapilacaksa   'strcpy' kullanilmalidir.
	strcpy(std2.surname, "Ocakli");
	std2.average = 3.30;


	printf("The name of the variable Std1:%s\n", std1.name);                            // degerlere erisim saglandi.
	printf("The surname of the variable Std1:%s\n", std1.surname);
	printf("The average of the variable Std1:%.2f\n\n", std1.average);


	printf("The name of the variable Std2:%s\n", std2.name);                            // degerlere erisim saglandi.
	printf("The surname of the variable Std2:%s\n", std2.surname);
	printf("The average of the variable Std2:%.2f\n", std2.average);

	return 0;
}
