/* Demonstrates a simple for statement */

#include <stdio.h>

int nbr = 0;

main()
{
	/* Print the numbers 1 through 20 */

	for  (printf("Please input a number, 99 to quit.\n"); nbr != 99; )
		scanf( "%d", &nbr );

	return 0;
}
