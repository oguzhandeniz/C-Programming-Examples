#include <stdio.h>


int main(int argc, const char* argv[])
{

	// QUESTİON:Create 4 different types of pyramids with the * character.

	// SOLUTİON:

	int pyramidLimit1, i1, j1;
	printf("Please enter the pyramid limit:");
	scanf("%d", &pyramidLimit1);

	for (i1 = 1; i1 <= pyramidLimit1; i1++)
	{
		for (j1 = 0; j1 < i1; j1++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("---------------------------------------\n");


	int pyramidLimit2, i2, j2;
	printf("Please enter the pyramid limit:");
	scanf("%d", &pyramidLimit2);

	for (i2 = 0; i2 <= pyramidLimit2; i2++)
	{
		for (j2 = pyramidLimit2 - i2; j2 > 0; j2--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("---------------------------------------\n");


	int pyramidLimit3, i3, j3;
	printf("Please enter the pyramid limit:");
	scanf("%d", &pyramidLimit3);

	for (i3 = 0; i3 < pyramidLimit3; i3 += 2)
	{
		for (j3 = pyramidLimit3 - i3; j3 > 0; j3--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("---------------------------------------\n");


	int pyramidLimit4, i4, j4;
	printf("Please enter the pyramid limit:");
	scanf("%d", &pyramidLimit4);
	for (i4 = 1; i4 <= pyramidLimit4; i4 += 2)
	{
		for (j4 = 0; j4 < pyramidLimit4 - i4 / 2; j4++)
		{
			printf(" ");
		}
		for (j4 = 0; j4 < i4; j4++)
		{
			printf("*");
		}

		for (j4 = 0; j4 < pyramidLimit4 - i4 / 2; j4++)
		{
			printf(" ");
		}
		printf("\n");
	}

	return 0;
}
