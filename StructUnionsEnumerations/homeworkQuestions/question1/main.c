#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


/*
	Question 1-> Create a complex number structure, in it there will be a real and virtual part.
			 From this structure you have created, it will create 2 variables and calculate their sum
			 type a function and print the result in the main section.
*/


typedef struct {
	float realPart;
	float virtualPart;
} complexNumber;

void sayiTopla(complexNumber num1, complexNumber num2, complexNumber* result)
{
	result->realPart = num1.realPart + num2.realPart;
	result->virtualPart = num1.virtualPart + num2.virtualPart;
}


int main(void)
{

	complexNumber num1, num2, result;

	printf("Please enter the real and virtual part of the first number:");
	scanf("%f%f", &num1.realPart, &num1.virtualPart);

	printf("Please enter the real and virtual part of the second number:");
	scanf("%f%f", &num2.realPart, &num2.virtualPart);

	sayiTopla(num1, num2, &result);
	printf("Result :%.1f+%.1fi", result.realPart, result.virtualPart);

	return 0;
}

