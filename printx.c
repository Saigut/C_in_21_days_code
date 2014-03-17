/* Demonstrates nesting two for statement */

#include <stdio.h>

void draw_box( int, int);

main()
{
	draw_box( 8, 35);

	return 0;
}

void draw_box( int row, int column)
{
	int col;
	for ( ; row > 0; row--)
	{
		for (; column > 0; column--)
			printf("X");

		printf("\n");
	}
}
