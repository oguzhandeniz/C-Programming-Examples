#include <stdio.h>


int main(int argc, const char* argv[])
{


	FILE* file1 = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/fileOperationsCharReadAndWrite/Read.txt", "r");
	FILE* file2 = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/fileOperationsCharReadAndWrite/Write.txt", "w");
	if (file1 != NULL)
	{
		printf("Your file was successfully opened.\n");
	}
	else
	{
		printf("An error occurred while creating the file.\n");
	}
	if (file2 != NULL)
	{
		printf("The file that will be written was successfully opened.\n");
	}
	else
	{
		printf("An error occurred while creating the file.\n");
	}


	int ch;
	do
	{
		ch = fgetc(file1);
		fputc(ch, file2);
	} while (ch != EOF);     	// DOSYANIN SONUNA GELDİĞİMİZİ ANLAMAMIZI SAĞLAR.

	printf("\n");


	int closeFile;
	closeFile = fclose(file1);
	if (closeFile == 0)
	{
		printf("The file was successfully closed.\n");
	}
	else
	{
		printf("An error occurred while closing the file.\n");
	}
	closeFile = fclose(file2);
	if (closeFile == 0)
	{
		printf("The file to be written has been successfully closed.\n");
	}
	else
	{
		printf("An error occurred while closing the file.\n");
	}

	return 0;
}
