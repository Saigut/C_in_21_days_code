#include <stdio.h>

int array[10], array2[10];

main()
{
	int cnt;

	for (cnt = 0; cnt < 10; cnt++)
		array[cnt] = cnt;

	for (cnt = 0; cnt < 10; cnt++)
		printf("array[%d] = %d\n", cnt, array[cnt]);

	for (cnt = 0; cnt < 10; cnt++)
		array2[cnt] = array[cnt] + 10;

	for (cnt = 0; cnt < 10; cnt++)
		printf("array2[%d] = %d\n", cnt, array2[cnt]);

	return 0;
}
