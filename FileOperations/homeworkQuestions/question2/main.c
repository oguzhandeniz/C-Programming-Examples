#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//2.QUESTION-> Write a function that returns whether a user-entered word is in your file and test it in the main section


int wordSearch(FILE* file, char* str)
{
	char word[20];

	int wordCount = 0;

	while (!feof(file))
	{
		fscanf(file, "%s", &word);
		wordCount += 1;
		if (strcmp(word, str) == 0)
		{
			return wordCount;
		}
	}
	return -1;
}

int main(int argc, const char* argv[])
{

	char findWord[20];
	FILE* file = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/homeworkQuestions/question2/file.txt", "r");

	if (file == NULL)
	{
		fprintf(stderr, "An error occurred while opening the file.");
		exit(0);
	}

	puts("Enter which word you are looking for:");
	gets(findWord);

	int index = wordSearch(file, findWord);

	if (index != -1)
	{
		printf("The word %s is the %d.word of the file", findWord, index);
	}

	else
	{
		printf("The word %s was not found in the file.", findWord);
	}


	return 0;
}

