#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void resultCalc(int a, int b)
{
	printf("Result : %d\n", a * 2 + b * 3);
	//3*2+5*3=6+15=21
}

void resultCalc2(int a, int b)
{
	printf("Result : %d\n", (a + 2) * (b - 5));
	//2+2*12-5=4*7=28
}

void resultCalc3(int a, int b)
{
	printf("Result : %d\n", a * 3 + b * 2);
	//4*3+7*2=12+14=26
}

void calc(void (* ptr)(int, int), int a, int b)
{
	ptr(a, b);
}

int main(int argc, const char* argv[])
{


	void (* funcPtr[3])(int, int);
	funcPtr[0] = resultCalc;
	funcPtr[1] = resultCalc2;
	funcPtr[2] = resultCalc3;

	(*funcPtr[0])(3, 5);
	(*funcPtr[1])(2, 12);
	(*funcPtr[2])(4, 7);

	calc(resultCalc, 3, 5);

	return 0;
}
