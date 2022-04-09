#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{

	char name[20];
	int charNum;
	puts("Please enter name:");
	gets(name);
	for (charNum = 0; name[charNum] != '\0'; charNum++)
	{

	}
	printf("there are %d characters.", charNum);


	printf("\n*****************************************\n");


	char name2[20];
	int charNum2 = 0;
	puts("Please enter name:");
	gets(name2);
	while (name2[charNum2] != '\0')
	{
		charNum2 += 1;
	}
	printf("there are %d characters.", charNum2);


	printf("\n*****************************************\n");


	char name3[20], name3_1[20];
	int charNum3 = 0, i;
	puts("Please enter name:");
	gets(name3);
	while (name3[charNum3] != '\0')
	{
		charNum3 += 1;
	}
	for (i = 0; i <= charNum3; i++)
	{
		name3_1[i] = name3[i];
	}
	puts(name3_1);


	printf("\n*****************************************\n");


	char name4[20], name4_1[20];
	int charNum4 = 0, i1;
	int charNum4_1;
	puts("Please enter names:");
	gets(name4);
	gets(name4_1);

	for (charNum4_1 = 0; name4_1[charNum4_1] != '\0'; charNum4_1++)
	{

	}

	while (name4[charNum4] != '\0')
	{
		charNum4 += 1;
	}

	for (i1 = 0; i < charNum4_1; i1++)
	{
		name4[charNum4 + i1] = name4_1[i1];
	}
	name4[charNum4 + i1] = '\0';
	puts(name4);


	printf("\n*****************************************\n");

	char name5[20], name5_1[20];
	int charNum5 = 0, i2 = 0;
	int charNum5_1;
	int equal = 1;
	puts("Please enter names:");
	gets(name5);
	gets(name5_1);

	for (charNum5_1 = 0; name5_1[charNum5_1] != '\0'; charNum5_1++)
	{

	}

	while (name5[charNum5] != '\0')
	{
		charNum5 += 1;
	}


	while (name5[i2] != '\0' && name5_1[i2] != '\0')
	{
		if (name5[i2] > name5_1[i2])
		{
			printf("%s comes before %s alphabetically.", name5_1, name5);
			equal = 0;
			break;
		}
		else if (name5[i2] < name5_1[i2])
		{
			printf("%s comes after %s alphabetically.", name5_1, name5);
			equal = 0;
			break;
		}
		i++;
	}
	if (equal)
	{
		if (charNum5 == charNum5_1)
		{
			printf("The 2 strings you entered are exactly the same.");
		}
		else if (charNum5 > charNum5_1)
		{
			printf("%s comes after %s alphabetically.", name5, name5_1);
		}
		else
		{
			printf("%s comes before %s alphabetically.", name5, name5_1);
		}
	}


	return 0;
}
