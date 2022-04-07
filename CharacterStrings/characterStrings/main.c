#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

int main(int argc, const char* argv[])
{

	// char name [20];
	// char name2 [20] = {'o','g','u','n','\n'};

	// scanf("%s",name2);       // it is an external string retrieval process, there is no need for the & sign.
	// printf("%s",name2);



	/*
    char names[][10]={"ogun","duygu","elif","burak"};
    char surnames[][10]={"birinci","keydal","deniz","yılmaz"};

    int i;
    for (i=0; i<4; i++)
    {
        printf("Name and Surname of the Student: %s %s\n",names[i],surnames[i]);
    }
	*/



	/*
    char names[4][10];
    char surnames[4][10];

    int i;
    for (i=0; i<4; i++)
    {
        printf("Please enter the name and surname of the %d student:",i+1);
        scanf("%s%s",names[i],surnames[i]);
    }
    for (i=0; i<4; i++)
    {
        printf("%d.Name and Surname of the Student: %s %s\n",i+1,names[i],surnames[i]);
    }
	*/



	/*
	// PUTS&GETS FUNCTIONS

	char names[4][10];
	char surnames[4][10];
	int i;


	for (i = 0; i < 4; i++)
	{
		puts("Please enter name:");
		gets(names[i]);
		puts("Please enter surname:");
		gets(surnames[i]);
	}
	for (i = 0; i < 4; i++)
	{
		puts(names[i]);
		puts(surnames[i]);
	}
	*/


	return 0;
}
