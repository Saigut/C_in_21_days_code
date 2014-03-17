/* Demonstrates ptinter output. */
/* stdprn is not ANSI standard */
#include <stdio.h>

int main( void )
{
	float f = 2.0134;

	fprintf(stdout, "\nThis message is printed.\r\n");
	fprintf(stdout, "And now some numbers:\r\n");
	fprintf(stdout, "The square of %f is %f.", f, f*f);

	/* Send a form feed. */
	fprintf(stdin, "\f");

	return 0;
}
