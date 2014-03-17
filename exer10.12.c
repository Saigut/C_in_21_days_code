#include <stdio.h>

int main()
{
	int height, width, i, j = 0;
	printf("Enter the Height: ");
	scanf("%d", &height);
	printf("Enter the width: ");
	scanf("%d", &width);
	puts("");

//	printf("%c", 201);
	for (i = 1; i < width; i++)
		printf("= ");
	puts("=");
//	printf("%c\n", 187);

	while (j < (height - 2))
	{
		printf("=");
		for (i = 3; i < 2 * width; i++)
			printf(" ");
		printf("=\n");
		j++;
	}

//	printf("%c", 200);
	if (height >1)
	{
		for (i = 1; i < width; i++)
			printf("= ");
		puts("=");
	}
//	printf("%c\n", 188);

	return 0;
}
