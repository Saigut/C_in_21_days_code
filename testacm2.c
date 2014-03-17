#include <stdio.h>

int main()
{
	char array[500];
	
	do
	        scanf("%s", array);
        while(*array == '\0');
        puts(array);

	return 0;
}
