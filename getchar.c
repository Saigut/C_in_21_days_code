/* Demonstrates the getchar() function. */

#include <stdio.h>

char * somechar( void );
int main( void )
{
	while (somechar() != '\n')
		;
	return 0;
}
char * somechar( void )
{
	int ch;
	ch = getchar();
	putchar(ch);

	return ch;
}

