#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// TRANSFERRING ALL CHARACTERS TO ANOTHER FILE USING UPPERCASE LETTERS


void changeUpperCase(FILE* file1, FILE* file2)
{
	int ch;                                                     //EOF int deger oldugu.
	while (1)
	{                                                           //Sonsuz döngü.
		ch = fgetc(file1);
		if (ch == EOF)
		{
			break;                                              //Tum harfler buyuk harfe cevrildi.Cikis yapiliyor.
		}
		fputc(toupper(ch), file2);
	}
	printf("The conversion is complete..\n");
}


int main(int argc, const char* argv[])
{

	FILE* firstFile = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/fileOperationsExamples/example2/file1.txt","r");
	FILE* secondFile = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/fileOperationsExamples/example2/file2.txt","w");

	if (firstFile == NULL || secondFile == NULL)
	{
		fprintf(stderr, "An error occurred while opening files.\n");
		exit(0);                                              //Cikis kodumuz.
	}

	changeUpperCase(firstFile, secondFile);
	fclose(firstFile);
	fclose(secondFile);

	return 0;
}
