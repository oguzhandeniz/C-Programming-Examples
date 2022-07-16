#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// An example that reads the student's first name, last name, midterm exam and final exam from the file and writes that it has been moved to the new file.

typedef struct {
	char nameSurname[20], letterGrade;
	int midterm, final;
	double average;

} studentInfo;

double averageCalc(int midterm, int final)
{
	return midterm * 0.35 + final * 0.65;
}

char letterGradeCalc(double average)
{
	if (average >= 90)
	{
		return 'A';
	}

	else if (average >= 80 && average < 90)
	{
		return 'B';
	}

	else if (average >= 65 && average < 80)
	{
		return 'C';
	}

	else if (average >= 50 && average < 65)
	{
		return 'D';
	}

	else
	{
		return 'F';
	}

}

void resultCalc(FILE* firstFile, FILE* secondFile)
{
	while (!feof(firstFile))
	{
		studentInfo student;
		fscanf(firstFile, "%s %d %d", &student.nameSurname, &student.midterm, &student.final);
		student.average = averageCalc(student.midterm, student.final);
		student.letterGrade = letterGradeCalc(student.average);

		if (student.letterGrade != 'F')
		{
			fprintf(secondFile, "%s\t%d\t%d\t%lf\t%c\t%s\n", student.nameSurname, student.midterm, student.final,
					student.average, student.letterGrade, "Successful.");
		}

		else
		{
			fprintf(secondFile, "%s\t%d\t%d\t%lf\t%c\t%s\n", student.nameSurname, student.midterm, student.final,
					student.average, student.letterGrade, "Unsuccessful.");
		}
	}

}


int main(int argc, const char* argv[])
{

	FILE* firstFile = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/fileOperationsExamples/example3/file1.txt","r");
	FILE* secondFile = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/fileOperationsExamples/example3/file2.txt","w");

	if (firstFile == NULL || secondFile == NULL)
	{
		fprintf(stderr, "An error occurred while opening files.");
		exit(0);
	}

	resultCalc(firstFile, secondFile);
	printf("The calculation completed.");
	fclose(firstFile);
	fclose(secondFile);


	return 0;
}