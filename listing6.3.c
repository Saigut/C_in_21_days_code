/* Demmonstrates a simple while statement */

#include <stdio.h>

int count;

int main()
{
	/* Print the number 1 through 20 */

	count = 1;

	while (count <= 20)
	{
		printf("%d\n", count);
		count++;
	}
	return 0;
}
