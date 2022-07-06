#include <stdio.h>


// AN EXAMPLE OF COMPARING THE CONTENTS OF TWO FILES



int fileCompare(FILE* file1, FILE* file2)
{
	int charCount1, charCount2;

	fseek(file1, 0, SEEK_END);                                               //İkisini de dosyanin sonuna gonderdik.
	fseek(file2, 0, SEEK_END);

	charCount1 = (int)ftell(
			file1);                                              //Son karakter kaçıncı byte, yani karakter sayısını öğrendik.
	charCount2 = (int)ftell(file2);

	printf("The first file contains %d characters.\n", charCount1);
	printf("The second file contains %d characters.\n", charCount2);


	if (charCount1 > charCount2)
	{
		printf("The size of your first file is larger than your second file.\n");
	}
	else if (charCount2 > charCount1)
	{
		printf("The size of your second file is larger than your first file.\n");
	}
	else
	{
		rewind(file1);                                                          //En bastan karsilastirma yapabilmek icin tanimladik.
		rewind(file2);

		int ch, ch2;

		while (1)
		{
			ch = fgetc(file1);
			ch2 = fgetc(file2);

			printf("\n");
			printf("1.The character of the file :%c\n", ch);
			printf("2.The character of the file :%c\n", ch2);

			if (ch == EOF && ch2 == EOF)
			{
				break;
			}
			if (ch != ch2)
			{
				return 0;                                   //Karakterler farklidir.
			}
		}
	}
	return 1;                                               //Tum karakterler aynidir.
}


int main(void)
{

	FILE* firstFile = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/fileOperationsExamples/example1/file1.txt","r");
	FILE* secondFile = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/fileOperationsExamples/example1/file2.txt","r");

	if (firstFile != NULL && secondFile != NULL)
	{
		int result = fileCompare(firstFile, secondFile);

		if (result == 1)
		{
			printf("The two files are exactly the same.\n");
		}
		else if (result == 0)
		{
			printf("These two files are different from each other.\n");
		}
	}
	return 0;
}

