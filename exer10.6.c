#include <stdio.h>

void contrast(char [], char []);

int main(void)
{
	char array1[] = "lsadfdsfl", array2[] = "asfasdfdsfaasdfdsf";
	printf("array1 = \"%s\"\narray2 = \"%s\"\n", array1, array2);
	contrast(array1, array2);

	return 0;
}

void contrast(char ay1[], char ay2[])
{
	int ctay1, ctay2;
	for (ctay1 = 0; ay1[ctay1] != '\0'; ctay1++);
	for (ctay2 = 0; ay2[ctay2] != '\0'; ctay2++);
	if (ctay1 > ctay2)
		puts("ay1 is longer");
	else
		puts("ay2 is longer");
}
