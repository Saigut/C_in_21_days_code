#include<stdio.h>

int main()
{
  int n;
  long s;
  printf("Please input a number(between 1 and 15): ");
  scanf("%d", &n);
  while (n < 1 || n > 15)
    {
      printf("The number you input should between 0 and 15.\nPlease input it again: ");
      scanf("%d", &n);
    }
  for (s = 1; n != 0; n--)
    s *= n;
  printf("n! = %ld\n", s);

  return 0;
}
