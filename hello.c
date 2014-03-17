#include <stdio.h>
int a,b,c;
int product(int x, int y)
{
    return (x * y);
}
main ()
{
printf("Enter a number between 1 and 100: ");
scanf("%d", &a);
printf("Enter another number between 1 and 100: ");
scanf("%d", &b);
c = product(a,b);
printf ("%d times %d = %d\n", a, b, c);
return 0;
}
//int product(int x, int y)
//{
//   return (x * y);
//}
