/* Using the strncpy() function. */

#include <stdio.h>
#include <string.h>

char dest[] = ".........................................";
char source[] = "abcdefghijklmnop";

int main( void )
{
  size_t n;

  while(1)
    {
      puts("Enter the number of characters to copy (1-26):");
      scanf("%d", &n);

      if (n > 0 && n < 27)
	break;
    }

  printf("\nBefore strncpy destination = %s", dest);

  strncpy(dest, source, n);

  printf("\nAfter strncpy destination = %s\n", dest);
  if (NULL == '\0')
    puts("Y");
  else
    puts("N");
  return 0;
}
