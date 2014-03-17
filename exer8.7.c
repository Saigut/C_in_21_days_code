#include <stdio.h>
#include <stdlib.h>

int array[5][4], a, b;

main()
{
	for (a = 0; a < 5; a++)
		for (b = 0; b < 4; b++)
			array[a][b] = rand();

	puts("array\t\tvlue\n=====\t\t====");
	for (a = 0; a < 5; a++)
		for (b = 0; b < 4; b++)
			printf("array[%d][%d]\t%d\n", a, b, array[a][b]);

	return 0;
}
