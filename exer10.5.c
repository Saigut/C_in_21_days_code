#include <stdio.h>
#define SIZE 10
/* protype */
int cnt;
void assign(int [], int []);
main()
{
	int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, array2[SIZE];
	/* before assigning */
	for (cnt = 0; cnt < SIZE; cnt++)
		printf("array[%d] = %d \t\tarray2[%d] = %d\n", cnt, array[cnt], cnt, array2[cnt]);
	assign(array, array2);
	/* after assigning */
	for (cnt = 0; cnt < SIZE; cnt++)
		printf("array[%d] = %d \t\tarray2[%d] = %d\n", cnt, array[cnt], cnt, array2[cnt]);
	return 0;
}
/* function */
void assign(int a[], int b[])
{
	for (cnt = 0; cnt < SIZE; cnt++)
		b[cnt] = a[cnt];
}

