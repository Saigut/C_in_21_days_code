/* simple.c - demonstrates the use of a simple structures*/

#include <stdio.h>

int length, width;
long area;

struct coord{
	int x;
	int y;
} myPoint;

int main( void )
{
	/* set value into the coordinates */
	myPoint.x = 12;
	myPoint.y = 14;

	printf("The coordinates are: (%d, %d).\n", myPoint.x, myPoint.y);

	return 0;
}
