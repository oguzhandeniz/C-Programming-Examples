#include <stdio.h>

#define MAX_CHAR_COUNT 50

// BİR DOSYADAN ALINAN BİLGİLERİ BASKA BİR DOSYAYA YAZDIRAN ORNEK

int main(int argc, const char* argv[])
{


	char nameSurname[MAX_CHAR_COUNT], departmentInfo[MAX_CHAR_COUNT];
	float average;
	FILE* file1 = fopen(
			"/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/fileOperationsFormattedReadAndWrite/Read.txt",
			"r");
	FILE* file2 = fopen(
			"/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/fileOperationsFormattedReadAndWrite/Write.txt",
			"w");
	if (file1 != NULL && file2 != NULL)
	{
		printf("Both of your files were opened successfully.\n");

		fscanf(file1, "%s %f %s", &nameSurname, &average, &departmentInfo);
		printf("Name-Surname : %s\nAverage : %.2f\nDepartment : %s\n", nameSurname, average, departmentInfo);

		fprintf(file2, "Name-Surname : %s\nAverage : %.2f\nDepartment : %s\n", nameSurname, average, departmentInfo);
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
