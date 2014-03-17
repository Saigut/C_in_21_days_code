#include <stdio.h>

int array[6];
void print_array(void);

main()
{
	int int_var;
	int int_var2;
	int int_var3 = 0;

	do
	{
		do
		{
			printf("4. Enter the %d of 6 even integer numbers. 99 to quit\n", int_var3+1);
			scanf("%d", &int_var);
			if (int_var > 0)
				int_var2 = int_var;
			else
				int_var2 = -int_var;
			for( ; int_var2 > 1; int_var2 -= 2) ;
		}while(int_var2 == 1 && int_var != 99);
		
		if (int_var != 99)
		{
			array[int_var3] = int_var;
			int_var3++;
		}
	}while(int_var != 99 && int_var3 < 6);
	print_array();
	printf( "Jack said, \"Peter Piper picked a peck of pickled peppers.\"\n");

	return 0;
}

void print_array(void)
{
	int r;
	puts("i");
	for (r=0; r<6; r++)
	{
		printf("%d\t", array[r]);
	}
	puts("");
}
