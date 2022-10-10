#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void merhabaDunya()
{
	printf("Merhaba Dunya\n");
}

void helloWorld()
{
	printf("Hello World\n");
}

void halloWelt()
{
	printf("Hallo Welt\n");
}

void definitionFunction(void (* funcPtr[3])(), int num)
{
	switch (num)
	{
	case 1:
		(*funcPtr[0])();
		break;
	case 2:
		(*funcPtr[1])();
		break;
	case 3:
		(*funcPtr[2])();
		break;
	default:
		printf("There is a function for the value you entered.");
	}
}

int main(int argc, const char* argv[])
{

	void (* funcPtr[3])(void);
	funcPtr[0] = merhabaDunya;
	funcPtr[1] = helloWorld;
	funcPtr[2] = halloWelt;

	int i;
	for (i = 1; i <= 3; i++)
	{
		definitionFunction(funcPtr, i);
	}

	return 0;
}


