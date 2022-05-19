#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int recursiveGCD(int x, int y)
{
	if (y == 0)
	{
		return x;
	}
	return recursiveGCD(y, x % y);
}

int recursiveLCM(int x, int y)
{
	return x * y / recursiveGCD(x, y);
}

int main(int argc, const char* argv[])
{
	//WITH RECURSIVE FUNCTION GCD -  LCM CONTROL

	printf("GCD: %d\n", recursiveGCD(4, 3));
	printf("LCM: %d\n", recursiveLCM(4, 3));


	return 0;
}
