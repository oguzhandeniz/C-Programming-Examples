#include <stdio.h>
#include <string.h>

struct Student {
	char name[20];
	char surname[30];
	float average;
};

int main(int argc, const char* argv[])
{

	struct Student std;                                 // degisken tanimlamasi
	struct Student* stdPtr, * stdPtr2;                    // pointer degiskeni tanimlamasi
	stdPtr = &std;                                        // ogrPtr ogr nin adresini tutuyor ve onu isaret ediyor
	stdPtr2 = &std;

	/*
	 Pointer gösterimi
	 (*ogrPtr).isim
	 ogrPtr->isim

	 iki kullanimda aynidir.
	 */

	/*  //1.pointer kullanim sekli

	strcpy((*ogrPtr).isim, "Oguzhan");
	strcpy((*ogrPtr).soyisim, "Deniz");
	(*ogrPtr).ortalama = 3.45;
	 */


	//2.pointer kullanim sekli

	strcpy(stdPtr->name, "Oguzhan");
	strcpy(stdPtr->surname, "Deniz");
	stdPtr->average = 3.45;


	strcpy(stdPtr->name, "Halim");
	strcpy(stdPtr->surname, "Ocakli");
	stdPtr->average = 3.65;

	/*                           İSİM       SOYİSİM   ORTALAMA
		ogrPtr--->> ogr         oguzhan      deniz      3.45
		ogrPtr2-->> ogr          halim       ocakli     3.65
	*/


	printf("Address : %#X\n", stdPtr);
	printf("Name    : %s\n", (*stdPtr).name);
	printf("Surname : %s\n", (*stdPtr).surname);
	printf("Average : %.2f\n", (*stdPtr).average);


	return 0;
}
