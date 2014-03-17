#include <stdio.h>

int array[50];


main()
{
int x;
array[49] = 123;

for (x = 1; x < 100; x += 3) ;
printf("for: %d\n", x);

x = 1;
while (x < 100)
	x += 3;
printf("while: %d\n", x);

x = 1;
do
	x += 3;
while(x < 100);
printf("do: %d\n", x);

int counter = 1;
for (counter = 1; counter < 100; counter++)
	printf("Counter = %d\n", counter );
	printf("Counter = %d\n", counter );

return 0;
}
