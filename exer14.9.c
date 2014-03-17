#include <stdio.h>

int main( void )
{
	int i = 1;
	char buffer[257];
	while (gets(buffer) != NULL)
		printf("%d:\t%s\n", i++, buffer);
	return 0;
}
