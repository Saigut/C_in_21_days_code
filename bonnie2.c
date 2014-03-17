#include<stdio.h>

int main()
{
  int n, a, i;
  long s, sum = 0;
  printf("Input n: ");
  scanf("%d", &n);
  printf("Input a: ");
  scanf("%d", &a);
  for(; n != 0; n--)
    {
      for(i = n, s = 0; i != 0; i--)
	s = 10 * s + a;
      sum += s;
    }
  printf("The result is : %d\n", sum);
  return 0;
}
