#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Calculating Rectangular Area using Nested Struct

typedef struct {
	int x;
	int y;
} Point;

typedef struct {
	Point coordinate[4];     //N0-->x ve y receipt  N1---->x ve y receipt N2--->x ve y receipt N3--->x ve y receipt
} rectangle;

float areaCalc(rectangle userEntry)
{
	float x_edge, y_edge;
	x_edge = userEntry.coordinate[1].x - userEntry.coordinate[0].x;
	y_edge = userEntry.coordinate[3].y - userEntry.coordinate[0].y;
	return x_edge * y_edge;

}


int main()
{

	rectangle calcRectangle;
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("Please enter the x and y values for the N%d coordinate, respectively:", i);
		scanf("%d%d", &calcRectangle.coordinate[i].x, &calcRectangle.coordinate[i].y);
	}

	float result = areaCalc(calcRectangle);
	printf("The field value for the x-y values you entered is:%.2f\n", result);


	return 0;
}
