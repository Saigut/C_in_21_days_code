/* Demonstrating the shift operators. */

#include <stdio.h>

int main( void )
{
  unsigned char y, x = 255;
  int count;

  printf("Decimal\t\tshift left by\tresult\n");

  for (count = 1; count < 8; count++)
    {
      y = x << count;
      printf("%d\t\t%d\t\t%d\n", x, count, y);
    }
  printf("\n\nDecimal\t\tshift right by\tresult\n");

  for (count = 1; count < 8; count++)
    {
      y = x >> count;
      printf("%d\t\t%d\t\t%d\n", x, count, y);
    }
  return 0;
}
