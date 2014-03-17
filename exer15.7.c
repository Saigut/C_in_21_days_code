#include <stdio.h>


int main()
{
  double *ptrd[10];
  int i, j;
  double *tmp;

  printf("Please input 10 number one by one.\n");

  for (i = 0; i < 10; i++)
    {
      if ((ptrd[i] = (double *)malloc(sizeof(double))) == NULL)
	return -1;
      printf("The %d st/th number\n", i + 1);
      scanf("%lf", ptrd[i]);
    }

  for (i = 0; i < 9; i++)
    {
      for (j = 0; j < 9; j++)
	{
	  if ( *ptrd[j] > *ptrd[j + 1])
	    {
	      tmp = ptrd[j];
	      ptrd[j] = ptrd[j + 1];
	      ptrd[j + 1] = tmp;
	    }
	}
    }
  puts("");
  for (i = 0; i < 10; i++)
    {
      printf("%lf\n", *ptrd[i]);
    }
  return 0;
}
