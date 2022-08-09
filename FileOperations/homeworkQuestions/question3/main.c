#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// 3.QUESTION->Create a movie list dynamically, take the movie names entered by the user and print them to your file.

int main(int argc, const char* argv[])
{
	int i;
	char* movieList[5];
	char movie[20];
	FILE* movieFile;


	if ((movieFile = fopen("/Users/oguzhan/Desktop/CProgrammingExamples/FileOperations/homeworkQuestions/question3/file.txt", "w")) ==
		NULL)
	{
		fprintf(stderr, "An error occurred while opening the file.");
		exit(0);
	}

	for (i = 0; i < 5; i++)
	{
		puts("Please enter the series-movie name you want:");
		gets(movie);
		movieList[i] = (char*)malloc(sizeof(char) * strlen(movie) + 1);
		strcpy(movieList[i], movie);
	}

	for (i = 0; i < 5; i++)
	{
		fprintf(movieFile, "Movie-Series Name:%s\n", movieList[i]);
	}
	fclose(movieFile);

	return 0;
}