#include <stdio.h>

main()
{
	int var = 1;
	int *ptr;
	ptr = &var;
	printf("The value of var is %d\n", var);
	printf("The value of *ptr is %d\n", *ptr);
	printf("The value of ptr is %p\n", ptr);
	printf("The value of &var is %p\n", &var);
	return 0;
}
