/* Program to calculate the product of two number. */
#include <stdio.h>

int a,b,c;

int product(int x, int y);

main()
{
    /* Input the second number */
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &a);

    /* Input the second number */
    printf("Enter another number between 1 and 100: ");
    scanf("%d", &b);

    /* Calculate and display the product */
    c = product (a, b);
    printf ("%d times %d = %d\n", a, b, c);
    return 0;
 }

 /* Function returns the produce of its two arguments */
 int product(int x, int y)
 {
     return (x * y);
 }
