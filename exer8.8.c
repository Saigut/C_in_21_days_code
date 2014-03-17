/* EXER8.8.C */

#include <stdio.h>
#include <stdlib.h>

int random_array[1000];
int a, b;

main()
{
	/* Fill the array with random numbers. The C library
	   function rand() returns a random number. */

	for (a = 0; a < 1000; a++)
	{
		random_array[a] = rand();
	}

	/* Now display the array elements 10 at a time */

	for (a = 0; a < 990; a++)
	{
		for (b = a; b < a + 10; b++)
		{
			printf("\nrandom_array[%d] = ", b);
			printf("%d", random_array[b]);
		}
		printf("\nPress Enter to continue, CTRL-C to quit.");

		getchar();
	}
	return 0;
}
