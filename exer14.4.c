#include <stdio.h>

int main( void )
{
	char buffer[31];
	scanf("%30[^*]", buffer);
	puts(buffer);
	putchar(getchar());

	return 0;
}
