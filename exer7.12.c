#include <stdio.h>

int array[20];
int array_max(void);
int array_min(void);

main()
{
	int r, nbr;
	for(nbr = 0; nbr < 20; nbr++)
	{
		printf("Enter %d of the 20 numbers in array: ", nbr+1);
		scanf("%d", &r);
		if (r != 0)
			array[nbr] = r;
		else
			nbr = 20;
	}
	printf("The maximum number in array is %d\nThe minimum number in array is %d\n", array_max(), array_min());
	for(nbr = 0; nbr < 20; nbr++)
		printf("%d ", array[nbr]);
	puts("");
	return 0;
}

int array_max(void)
{
	int max, nbr;
	max = array[0];
	for(nbr = 1; nbr < 20; nbr++)
	{
		if (max < array[nbr])
			max = array[nbr];
	}
	return max;
}

int array_min(void)
{
	int min, nbr;
	min = array[0];
	for(nbr = 1; nbr < 20; nbr++)
	{
		if (min > array[nbr])
			min = array[nbr];
	}
	return min;
}
