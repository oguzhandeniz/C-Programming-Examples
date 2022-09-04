#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

// operations related to element information using element struct


typedef struct {

	char symbol[3];    // He
	char name[20];     // Helyum
	int atomNumber;

} element;

void info(element elementList[], char* symbol, int elementCount)
{
	int i;
	int ifFound = 0;   //if find make 1.
	for (i = 0; i < elementCount; i++)
	{
		if (strcmp(elementList[i].symbol, symbol) == 0)
		{
			printf("Symbol:%s\n", elementList[i].symbol);
			printf("Name:%s\n", elementList[i].name);
			printf("Atom Number:%d\n", elementList[i].atomNumber);
			ifFound = 1;
			break;
		}
	}
	if (!ifFound)
	{
		printf("The item you are looking for was not found in the list.\n");
	}

}


int main(int argc, const char* argv[])
{

	element elementList[] = {{ "He", "Helyum",   2 },
							 { "H",  "Hidrojen", 1 },
							 { "B",  "Bor",      5 },
							 { "F",  "Flor",     9 },
							 { "N",  "Azot",     7 }};
	char userSearch[5];

	while (1)
	{
		printf("Please enter the symbol of the element you want to print (Click Q to exit):");
		scanf("%s", &userSearch);
		if (strcmp(userSearch, "Q") == 0)
		{
			break;
		}
		info(elementList, userSearch, 5);
	}

	return 0;
}
