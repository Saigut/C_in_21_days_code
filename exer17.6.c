/* I really don't want to write any program.. */
#include <stdio.h>
#include <ctype.h>

char *strtrue = "TRUE", *strfalse = "FALSE";
char *TorF(int r);

int main( void )
{
  int var = 1;
  char x = 65;


  puts("\nisxxxx() macros' prototype:");
  puts("int isxxxx(int ch);");


  puts("\n\nint var = 1");
  printf("var is %c\n", var);
  puts("Results of var:");
  printf("isalnum() returns %s\n", TorF(isalnum(var)));
  printf("isalpha() returns %s\n", TorF(isalpha(var)));
  printf("isblank() returns %s\n", TorF(isblank(var)));
  printf("iscntrl() returns %s\n", TorF(iscntrl(var)));

  printf("isdigit() returns %s\n", TorF(isdigit(var)));
  printf("isgraph() returns %s\n", TorF(isgraph(var)));
  printf("islower() returns %s\n", TorF(islower(var)));
  printf("isprint() returns %s\n", TorF(isprint(var)));

  printf("ispunct() returns %s\n", TorF(ispunct(var)));
  printf("isspace() returns %s\n", TorF(isspace(var)));
  printf("isupper() returns %s\n", TorF(isupper(var)));
  printf("isdigit() returns %s\n", TorF(isdigit(var)));


  puts("\nchar x = 65");
  printf("x is %c\n", x);
  puts("Results of x:");
  printf("isalnum() returns %s\n", TorF(isalnum(x)));
  printf("isalpha() returns %s\n", TorF(isalpha(x)));
  printf("isblank() returns %s\n", TorF(isblank(x)));
  printf("iscntrl() returns %s\n", TorF(iscntrl(x)));

  printf("isdigit() returns %s\n", TorF(isdigit(x)));
  printf("isgraph() returns %s\n", TorF(isgraph(x)));
  printf("islower() returns %s\n", TorF(islower(x)));
  printf("isprint() returns %s\n", TorF(isprint(x)));

  printf("ispunct() returns %s\n", TorF(ispunct(x)));
  printf("isspace() returns %s\n", TorF(isspace(x)));
  printf("isupper() returns %s\n", TorF(isupper(x)));
  printf("isdigit() returns %s\n", TorF(isdigit(x)));


  puts("");

  return 0;
}

char *TorF(int r)
{
  if (r != 0)
    return strtrue;
  else
    return strfalse;
}
