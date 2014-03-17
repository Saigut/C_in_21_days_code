#include <stdio.h>

int main( void )
{
	char ch;

	while ((ch = getchar()) != EOF)
		fprintf(stdout, "%c", ch);

	return 0;
}
