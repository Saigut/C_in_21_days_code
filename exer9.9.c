#include <stdio.h>

int array1[10] = {21, 34, 3, 234, 22, 32, 234, 5, 45, 45}, \
    array2[10] = {23, 56, 6, 67, 56, 566, 67, 77, 88, 56}, \
    array3[10];
void addarrays(int a[], int b[], int c[]);

int main()
{
	addarrays(array1, array2, array3);
	int ctr;
	for (ctr = 0; ctr < 10; ctr++)
		printf("array1[%d]: %d\t+\tarray2[%d]: %d\t=\tarray3[%d]: %d\n", ctr, array1[ctr], ctr, array2[ctr], ctr, array3[ctr]);
	return 0;
}

void addarrays(int a[], int b[], int c[])
{
	int ctr;
	for (ctr = 0; ctr < 10; ctr++)
		c[ctr] = a[ctr] + b[ctr];
}
