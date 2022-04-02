#include <stdio.h>

int main()
{
	// Calculating spaces in entered text by taking characters in a loop from the user

	char ch;
	int spacesNumber = 0;
	printf("Please enter text: ");
	do
	{
		ch = getchar();
		if (ch == ' ')
		{
			spacesNumber++;
		}
	} while (ch != '\n');
	{
		printf("Number of spaces: %d\n", spacesNumber);
	}

	return 0;
}
