#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>


struct Student {
	char name[20];          // 20 byte yer kapliyor
	char surname[30];       // 30 byte yer kapliyor
	float average;          // 6 byte  yer kapliyor
};


int main(int argc, const char* argv[])
{

	int elementCount, i;
	printf("Please enter student count : ");
	scanf("%d", &elementCount);

	struct Student* stdPtr;
	stdPtr = (struct Student*)malloc(sizeof(struct Student) * elementCount);   //dinamik bir sekilde degisken olusturuldu.

	for (i = 0; i < elementCount; i++)
	{

		puts("Please enter name:");
		scanf("%s", &stdPtr[i].name);
		puts("Please enter surname:");
		scanf("%s", &stdPtr[i].surname);
		puts("Please enter average:");
		scanf("%f", &stdPtr[i].average);
	}
	for (i = 0; i < elementCount; i++)
	{
		printf("Student name 	    : %s\n", stdPtr[i].name);
		printf("Student surname     : %s\n", stdPtr[i].surname);
		printf("Student average     : %.2f\n", stdPtr[i].average);
	}

	free(stdPtr);


	return 0;
}
