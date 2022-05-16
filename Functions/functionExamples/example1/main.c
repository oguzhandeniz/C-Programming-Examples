#include <stdio.h>


int arrayCountChar(char userLogin[])
{
	char characters[26];        // max characters that can be used
	int i, j;
	for (i = 0; i < 26; i++)
	{
		characters[i] = '$';    // to question whether it is empty or not
	}
	i = 0;
	while (userLogin[i] != '\0')
	{
		j = 0;
		while (1)
		{
			if (characters[j] == '$')
			{
				characters[j] = userLogin[i];
				break;
			}
			else if (characters[j] == userLogin[i])
			{
				break;
			}
			j++;
		}
		i++;
	}
	for (i = 0; i < 26; i++)
	{
		if (characters[i] == '$')
		{
			break;
		}
	}
	return i;
}


int main(int argc, const char* argv[])
{

	// THE FUNCTION EXAMPLE THAT SAYS HOW MANY CHARACTERS ARE IN THE SERIES

	int speacialChar = arrayCountChar("oguzhandeniz");

	printf("The string you are sending contains %d special characters.\n", speacialChar);


	return 0;
}
