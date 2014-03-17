#include <stdio.h>

unsigned char ascii[] = {73, 32, 99, 97, 110, 0, 2};

int main( void )
{
	int count = 0;
	for (;count < 7; count++)
		printf("%d is %c\n", *(ascii + count), *(ascii + count));

	return 0;
}
