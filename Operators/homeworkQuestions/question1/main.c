#include <stdio.h>
#include <math.h>

int main(int argc, const char* argv[])
{
	/*QUESTİON : Make a delta calculation by taking a, b, c values from the user.
	Query whether the delta is greater or less than 0. */

	// SOLUTİON
	int a, b, c;
	float delta;
	printf("Please enter A , B , C values:\n");
	scanf("%d%d%d", &a, &b, &c);
	printf("Values :%d %d %d\n", a, b, c);
	delta = pow(b, 2) - 4 * a * c;                                    // pow fonksiyonu ust degeri almak icin kullanilir
	printf("Delta result : %.2f\n", delta);
	printf("Comparison of delta result:%d\n", delta >= 0);

	return 0;
}