#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR_COUNT 50

/*
 İsimize yarayacak fonksiyonlar:

1. feof(FILE POINTER)-->>dosyanın sonuna gelip gelinmediğini söyler.Dosyanın sonuna gelindiği zaman 0'dan farklı bir deger donuyor, aksi halde 0.

2. rewind(FILE POINTER)-->dosyanın en başına dönmemizi sağlar.

3. fseek(FILE POINTER,KAÇ BYTE,NEREDEN İTİBAREN)--->imleci dosyanın belirli yerlerine götürmemizi sağlar.

        (0)SEEK_SET->dosyanın başından itibaren
        (1)SEEK_CUR->en son kalınan yerden itibaren.
        (2)SEEK_END->sondan itibaren

        '-'  -> geriye doğru anlamına.

4. ftell(FILE POINTER)-->kaçıncı byte değerinde olduğumuzu söyler.
*/


int main(int argc, const char* argv[])
{


	char nameSurname[MAX_CHAR_COUNT], departmentInfo[MAX_CHAR_COUNT];
	float average;
	FILE* file1 = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/fileOperationsSpeacialFunctions/Read.txt", "r");
	FILE* file2 = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/fileOperationsSpeacialFunctions/Write.txt","w");
	if (file1 != NULL && file2 != NULL)
	{
		printf("Both of your files have been successfully opened.\n");

		while (!feof(file1))
		{
			fscanf(file1, "%s %f %s", &nameSurname, &average, &departmentInfo);
			printf("Name-Surname : %s\nAverage : %.2f\nDepartment : %s\n", nameSurname, average, departmentInfo);
			fprintf(file2, "Name-Surname : %s\nAverage : %.2f\nDepartment : %s\n\n----------------------------\n\n",nameSurname, average, departmentInfo);
		}

		printf("The last character is %d BYTE.\n", ftell(file1));
		fseek(file1, 5, SEEK_SET);                                     // Dosyanin basinden itibaren 5 byte ileri goturur.
		fseek(file1, 5,SEEK_CUR);                                      // Dosyada kaldigimiz yerden itibaren 5 byte ileri goturur.
		fseek(file1, -1, SEEK_END);                                    // Dosyanin sondan bir onceki karakterine goturur.
		printf("%d BYTE value.\n", ftell(file1));                      // Dosyanin byte degerini bulmamizi saglar.


	}

	else
	{
		printf("An error occurred while opening files.\n");
	}

	int closedFile;
	closedFile = fclose(file1);
	if (closedFile == 0)
	{
		printf("The file was successfully closed.\n");
	}
	else
	{
		printf("An error occurred while closing the file.\n");
	}
	closedFile = fclose(file2);
	if (closedFile == 0)
	{
		printf("The file to be written has been successfully closed.\n");
	}
	else
	{
		printf("An error occurred while closing the file.\n");
	}

	return 0;
}




