#include <stdio.h>

int main()
{
  char array[12][12];
  int i, j;
  for (i = 0; i < 12; i++)
    {
      for (j = 0; j < 12; j++)
	array[i][j]='X';
    }

  char (*p_t_a)[12];
  char *ptr;
  p_t_a = array;

  for (i = 0; i < 12; i++)
    {
      ptr = (char *)p_t_a;
      p_t_a++;
      for (j = 0; j < 12; j++)
	printf("%c", *ptr++);
      printf("\n");
    }

  return 0;
}
