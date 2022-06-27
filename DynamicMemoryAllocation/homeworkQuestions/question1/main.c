#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

/*1.Question->Check if the 2 strings you will receive from the user are anagrams of each other,
 but this time when doing so does this by keeping the frequencies of the letters in two arrays
 (do this using the calloc function during array creation).
*/


int anagramControl(char* str, char* str2)
{

	int* frequencyArray, * frequencyArray2;
	char* ptr = str, * ptr2 = str2;
	int i;

	if (strlen(str) != strlen(str2))
	{
		return 0;                                    //not anagram
	}

	frequencyArray = (int*)calloc(26, sizeof(int));
	frequencyArray2 = (int*)calloc(26, sizeof(int));

	while (*ptr != '\0' && *ptr2 != '\0')
	{
		int index = *ptr - 'a';
		frequencyArray[index] += 1;
		index = *ptr2 - 'a';
		frequencyArray2[index] += 1;
		ptr++;
		ptr2++;
	}
	for (i = 0; i < 26; i++)
	{
		printf("%d ", frequencyArray[i]);
	}
	printf("\n");
	for (i = 0; i < 26; i++)
	{
		printf("%d ", frequencyArray2[i]);
	}

	for (i = 0; i < 26; i++)
	{
		if (frequencyArray[i] != frequencyArray2[i])
		{
			return 0;                                //not anagram
		}

	}
	return 1;                                        //anagram


}

int main()
{

	if (anagramControl("raptor", "parrot"))
	{
		puts("\nThe two strings you enter are an anagram of each other.\n");
	}
	else
	{
		puts("The two strings you entered are not an anagram of each other.");
	}
	return 0;
}


