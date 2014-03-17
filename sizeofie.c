/* Demonstrates the sizeof() operator */

#include <stdio.h>

/* Declare several 100-element arrays */

int intarray[100];
float floatarray[100];
double doublearray[100];

main()
{
	/* Display the sizes of numeric data types */

	printf("\n\nSize of int = %lu bytes", sizeof(int));
	printf("\nSize of short = %lu bytes", sizeof(short));
	printf("\nSize of long = %lu bytes", sizeof(long));
	printf("\nSize of float = %lu bytes", sizeof(float));
	printf("\nSize of double = %lu bytes", sizeof(double));

	/* Display the sizes of the three arrays */

	printf("\nSize of intarray = %lu bytes", sizeof(intarray));
	printf("\nSize of floatarray = %lu bytes", sizeof(floatarray));
	printf("\nSize of doublearray = %lu bytes\n", sizeof(doublearray));

	return 0;
}
