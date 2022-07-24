#include <stdio.h>

#define MAX_ROW_COUNT 50
#define MAX_CHAR_COUNT 50

// BİR DOSYADAN OKUNAN DEGERLERİ DİGER DOSYAYA YAZDİRMA ORNEGİ

int main(int argc, const char* argv[])
{


	char storedPlace[MAX_ROW_COUNT][MAX_CHAR_COUNT];
	int rowCount = 0;
	FILE* file1 = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/fileOperationsRowReadAndWrite/Read.txt", "r");
	FILE* file2 = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/fileOperationsRowReadAndWrite/Write.txt", "w");
	if (file1 != NULL && file2 != NULL)
	{
		printf("The files were successfully opened.\n");
		while (rowCount < MAX_ROW_COUNT && !feof(file1))
		{
			fgets(storedPlace[rowCount], MAX_CHAR_COUNT, file1);
			printf("the expression %s was copied to file2.\n", storedPlace[rowCount]);
			fputs(storedPlace[rowCount], file2);


			rowCount++;

		}

	}

	else
	{
		printf("An error occurred opening the file.\n");
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
