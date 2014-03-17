#include <stdio.h>

int a[10] = {1, 3, 4, 4, 5, 6, 6, 3, 8, 5}, b[10] = {4, 4, 6, 7, 7, 5, 3, 6, 9, 0};
int sumarrays(int a[], int b[]);

main()
{
	int ctr;
	for (ctr = 0; ctr < 10; ctr++)
		printf("a[%d] = %d\t\tb[%d] = %d\n", ctr, a[ctr], ctr, b[ctr]);
	printf("The total of a[] and b[] is %d\n", sumarrays(a, b));
	return 0;
}

int sumarrays(int a[], int b[])
{
	int ctr, sum = 0;
	for (ctr = 0; ctr < 10; ctr++)
		sum += a[ctr] + b[ctr];
	return sum;
}
