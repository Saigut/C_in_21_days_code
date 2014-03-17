#include <stdio.h>

void sort(void);
void ascend(void);
void descend(void);
double *ptrd[10];
int i, j;
double *tmp;

int main()
{
  char trash[80];
  printf("Please input 10 number one by one.\n");

  for (i = 0; i < 10; i++)
    {
      if ((ptrd[i] = (double *)malloc(sizeof(double))) == NULL)
	return -1;
      printf("The %d st/th number:\n", i + 1);
      scanf("%lf", ptrd[i]);
      gets(trash);
    }

  puts("");
  sort();

  for (i = 0; i < 10; i++)
    {
      printf("%lf\n", *ptrd[i]);
      free(ptrd[i]);
    }

  return 0;
}

void sort(void)
{
  int val;
  char trash[80];

  puts("Decide which way you want to sort:");
  puts("1. Ascend\n2. Descend");
  printf("Choose the corresponding number:");
  scanf("%d", &val);
  gets(trash);
  puts("");

  //  void (*WayOfSort)(double *ArrayOfPtr);
  if (val == 1)
    ascend();
  //  WayOfSort = ascend;
  else if (val == 2)
    descend();
  //  WayOfSort = descend;
  else
    {
      puts("!!Plesse choose 1 or 2.");
      sort();
    }


  //  WayOfSort();
}

void ascend(void)
{
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
}
void descend(void)
{
  for (i = 0; i < 9; i++)
    {
      for (j = 0; j < 9; j++)
	{
	  if ( *ptrd[j] < *ptrd[j + 1])
	    {
	      tmp = ptrd[j];
	      ptrd[j] = ptrd[j + 1];
	      ptrd[j + 1] = tmp;
	    }
	}
    }
}
