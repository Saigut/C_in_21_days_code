#include <stdio.h>

void print_var( int x );

int main( void )
{
	int var = 27;

	print_var( var );

	return 0;
}

void print_var( int x )
{
	printf("%d\n", x);
}
