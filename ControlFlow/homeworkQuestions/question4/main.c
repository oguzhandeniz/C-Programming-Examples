#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* QUESTION : Get 3 triangle edge information from user.
	   Evaluate whether a triangle can be formed based on the information received.

	   Triangle rule:
	        if the sides are x,y,z
	    	for x ---->   |y-z| < x < y+z
	 */


	// SOLUTION :


	int x, y, z;
	printf("Please enter the information of the x, y, z sides respectively:\n");
	scanf("%d%d%d", &x, &y, &z);

	if (abs(y - z) < x && x < (y + z))
	{
		if (abs(x - z) < y && y < (x + z))
		{
			if (abs(y - x) < z && z < (x + y))
			{
				printf("A triangle can be created based on the edge information you entered.\n");
			}

			else
			{
				printf("Z edge prevents triangle formation.\n");
			}
		}
		else
		{
			printf("Y edge prevents triangle formation.\n");
		}
	}
	else
	{
		printf("X edge prevents triangle formation.\n");
	}

	return 0;
}
