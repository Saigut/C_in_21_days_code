#include <stdio.h>

int main( void )
{
	char ch = 1;
	int i = 1;

	while ((ch = getchar()) != EOF)
	{
		ungetc(ch, stdin);
		printf("%d:\t", i++);
		while ((ch = getchar()) != '\n' && ch != EOF)
			putchar(ch);
		printf("\n");
	}

	return 0;
}
