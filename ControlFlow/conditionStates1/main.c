#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char* argv[])
{


	/*
	// Number Comparison

    int num1,num2;
    srand(time(NULL));                                        // It is used to generate different values each time.
	num1=rand()%100;
	num2=rand()%100;
    printf("First Number:%d\nSecond Number:%d \n",num1,num2);
    if (num1<num2) {

        printf("%d is less than %d\n",num1,num2);
    }
    else if(num1==num2) {
        printf("%d equals %d\n",num1,num2);
    }
    else {
		printf("%d is greater than %d\n",num1,num2);
    }
	*/


	/*
    // Find odd number, even number

    int num;
    srand(time(NULL));
	num=rand()%100;
    printf("Number :%d\n",num);
    if (num%2==0) {
        printf("Number is even\n");
    }
    else {
        printf("Number is odd\n");
    }
     */



	/*

     // EXAMPLE OF A SIMPLE CALCULATOR

    int num1,num2;
    float result;
    char ch;
    printf("Please enter two numbers in order:\n");
    scanf("%d%d",&num1,&num2);

    printf("lease enter the action you want to do(+ , - , * , /):\n");
    fflush(stdin);                                  // Used to clear the buffer
    scanf("%c",&ch);
    if (ch == '+') {
		result=num1+num2;
        printf("Addition result:%.2f\n",result);

    }
    else if(ch == '-') {
		result=num1-num2;
        printf("Subtraction result:%.2f\n",result);
    }
    else if(ch == '*') {
		result=num1*num2;
        printf("Multiplication result:%.2f\n",result);
    }
    else if(ch == '/') {
		result=num1/num2;
        printf("Division result:%.2f\n",result);
    }
    else {
        printf("You have taken a wrong action.\n");
    }
    */

	return 0;
}
