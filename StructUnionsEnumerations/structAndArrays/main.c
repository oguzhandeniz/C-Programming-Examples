#include <stdio.h>
#include <string.h>

struct Student {
	char name[30];
	char surname[30];
	float average;
};


int main(int argc, const char* argv[])
{

	struct Student students[] = {{ "Oguzhan", "Deniz",     3.25 },
								 { "Halim",   "Ocakli",    3.30 },
								 { "Berkin",  "Topaloglu", 3.55 }};

	printf("Name    : %s\n", students[0].name);
	printf("Surname : %s\n", students[0].surname);
	printf("Average : %.2f\n\n", students[0].average);

	printf("Name    : %s\n", students[1].name);
	printf("Surname : %s\n", students[1].surname);
	printf("Average : %.2f\n\n", students[1].average);

	printf("Name    : %s\n", students[2].name);
	printf("Surname : %s\n", students[2].surname);
	printf("Average : %.2f\n", students[2].average);

	printf("\n\n");

	//Sorting data by taking it from the user
	struct Student students2[3];
	int i;
	for (i = 0; i < 3; i++)                         // Bilgi alma kismi
	{
		puts("Please enter name:");
		scanf("%s", &students2[i].name);
		puts("Please enter surname:");
		scanf("%s", &students2[i].surname);
		puts("Please enter average:");
		scanf("%f", &students2[i].average);
	}
	for (i = 0; i < 3; i++)                        // Bilgi yazdirma kismi
	{
		printf("%d. Name-Surname : %s %s and Average : %.2f\n", i + 1, students2[i].name, students2[i].surname,
				students2[i].average);
	}


	return 0;
}
