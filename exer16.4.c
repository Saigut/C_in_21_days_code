#include <stdio.h>

int main( void )
{
  FILE *fp;
  int c;
  char filename[80];
  printf("Enter the filename you want to display: ");
  scanf("%s", filename);
  if ((fp = fopen( filename, "r" )) == NULL)
    {
      printf("Error openning file the file.\n");
      return -1;
    }
  while ((c = fgetc(fp)) != EOF)
    printf("%c", c);
  fclose(fp);

  return 0;
}
