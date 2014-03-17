#include <stdio.h>

int x = 999;
void func( void );

int main( void )
{
	int x = 111;
	printf("x in main function is %d\n", x);
	func();

	return 0;
}

void func( void )
{
	printf("x outside main function is %d\n", x);
}
