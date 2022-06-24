#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>


int main(int argc, const char* argv[])
{

	// pointerToPointer

	int** twoDimensionalArray;
	int lineCount, columnCount;
	int i, j;

	srand(time(NULL));

	printf("Line Count: ");
	scanf("%d", &lineCount);
	printf("Column Count: ");
	scanf("%d", &columnCount);

	twoDimensionalArray = (int**)malloc(sizeof(int*) * lineCount);  // Space as much as the number of lines is reserved


	// DYNAMICALLY CREATING AN ARRAY
	for (i = 0; i < lineCount; i++)
	{
		twoDimensionalArray[i] = (int*)malloc(sizeof(int) * columnCount); // each line is reserved for columns.
	}



	// THE VALUE ASSIGNMENT PART
	for (i = 0; i < lineCount; i++)
	{
		for (j = 0; j < columnCount; j++)
		{
			twoDimensionalArray[i][j] = rand() % 90 + 10;
		}
	}



	// PRİNT PART
	for (i = 0; i < lineCount; i++)
	{
		for (j = 0; j < columnCount; j++)
		{
			printf("%d ", twoDimensionalArray[i][j]);
		}
		printf("\n");
	}



	// THE RETURN OF RESERVED AREAS SECTION
	for (i = 0; i < lineCount; i++)
	{
		free(twoDimensionalArray[i]);
	}
	free(twoDimensionalArray);


	return 0;
}
