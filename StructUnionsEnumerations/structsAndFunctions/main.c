#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

// THE USE OF typedef IS GIVEN WITH THE EXPLANATION AT THE BOTTOM.

// EXAMPLE: CHANGING THE LOCATION OF ENTERED VALUES USING FUNCTION

struct Student {
	char name[20];          // 20 byte
	char surname[30];       // 30 byte
	float average;          // 6 byte
};

void readInfo(struct Student* stdPtr)
{
	puts("Please enter student name: ");
	scanf("%s", &stdPtr->name);
	puts("Please enter student surname: ");
	scanf("%s", &stdPtr->surname);
	puts("Please enter student average: ");
	scanf("%f", &stdPtr->average);
}

void printInfo(struct Student* stdPtr)
{
	printf("Student Name: %s\n", stdPtr->name);
	printf("Student Surname: %s\n", stdPtr->surname);
	printf("Student Average: %.2f\n", stdPtr->average);
}

void changeStudentInfo(struct Student* std, struct Student* std2)
{
	struct Student tempStudent;
	strcpy(tempStudent.name, std->name);
	strcpy(tempStudent.surname, std->surname);
	tempStudent.average = std->average;

	strcpy(std->name, std2->name);
	strcpy(std->surname, std2->surname);
	std->average = std2->average;

	strcpy(std2->name, tempStudent.name);
	strcpy(std2->surname, tempStudent.surname);
	std2->average = tempStudent.average;
}


int main(int argc, const char* argv[])
{

	struct Student std;
	struct Student std2;

	readInfo(&std);
	readInfo(&std2);

	puts("\nFirst Student Informations:");
	printInfo(&std);
	puts("\nSecond Student Informations:");
	printInfo(&std2);

	changeStudentInfo(&std, &std2);

	puts("\nFirst Student Informations:");
	printInfo(&std);
	puts("\nSecond Student Informations:");
	printInfo(&std2);

	return 0;
}



/*    USE OF TYPEDEF

 NOTE: IF WE USE TYPEDEF, WE CAN ONLY DO THIS BY TYPING THE VALUE WE HAVE DEFINED, WITHOUT HAVING TO TYPE STRUCT IN THE PLACES WE HAVE DEFINED STRUCT..

 1.METHOD OF USE

 struct studentInfo
 {
     char name[20];
     char surname[30];
     float average;
 };
 typedef struct studentInfo Student;

 /////////////////////////////////////////

 2.METHOD OF USE

 typedef struct studentInfo
 {
     char name[20];
     char surname[30];
     float average;
 }Student;

 /////////////////////////////////////////

 3.METHOD OF USE

 typedef struct
 {
     char name[20];
     char surname[30];
     float average;
 }Student;

 */
