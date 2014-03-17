#include<stdio.h>

int main()
{
  int n;
  printf("All the numbers are: ");
  for(n = 100; n < 201; n++)
    {
      if (n%3 == 2 && n%5 == 3 && n%7 == 2)
	printf("%d ", n);
    }
  printf("\n");

  return 0;
}
