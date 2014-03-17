#include <stdio.h>

int main( void )
{
	char array[500];
	scanf("%s", array);
	puts("you input :");
	printf("%s\n", array);
	int ctr;
	char text;
//	for(ctr = 0; text != '\n', ctr++)
//		text = *(array + ctr);
//	printf("the size of it is %d\n bytes", ctr *  
	for (ctr = 0; ctr < 10; ctr++)
		printf("element %d is %c\n", ctr, array[ctr]);
	if (array[8] == '\0')
		puts("array[8] is 0");

	if (array[8] == '\n')
	                puts("array[8] is n");

	if (array[7] == '\0')
	                puts("array[7] is 0");
	if (array[7] == '\n')
	                puts("array[7] is n");
	return 0;
}
