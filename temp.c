#include <stdio.h>

int main( void )
{
	int array[2][3][4] = {{{1, 2, 3, 4}, {5, 6, 7, 8}, {10, 11, 12, 13}}, {{14, 15, 16, 17}, {18, 19, 20, 21}, {22, 23, 24, 25}}}
	int i, j, k;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3;j++)
			for (k = 0; k < 4; k++)
				printf("%d", array[i]
	return 0;
}
