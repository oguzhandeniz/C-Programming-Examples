#include <stdio.h>
#include <math.h>

#define pi 3.14                                                // define sabit deger belirlemek icin kullanilir

int main(int argc, const char* argv[])
{
	// QUESTİON : Get the radius value from the user and calculate the circumference and area of the circle.

	//SOLUTİON
	float radius, circumference, area;
	printf("Enter the radius of the circle:");
	scanf("%f", &radius);
	circumference = 2 * pi * radius;
	area = pi * pow(radius, 2);
	printf("Circumference of the circle:%.2f \nArea:%.2f \n", circumference, area);


	return 0;
}
