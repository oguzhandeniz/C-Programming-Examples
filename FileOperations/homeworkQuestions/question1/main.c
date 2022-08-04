#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// 1.QUESTION-> Write a function that counts the number of words in a file and test it in the main section.

int wordCountCalc(FILE* file)
{

	int wordCount = 0, ch;

	do
	{
		ch = fgetc(file);
		if (ch == ' ' || ch == '.')
		{
			wordCount += 1;
		}
	} while (ch != EOF);

	return wordCount;

}

int main(int argc, const char* argv[])
{


	FILE* file = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/homeworkQuestions/question1/file.txt", "r");

	if (file == NULL)
	{
		fprintf(stderr, "An error occurred while opening the file.");
		exit(0);
	}

	int wordCount = wordCountCalc(file);
	printf("The file contains %d words.", wordCount);


	return 0;

}
