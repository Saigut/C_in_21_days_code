#include <stdio.h>

char * link(char *, char*);

int main()
{
	char *str1 = "Tony", *str2 = "Saigut", *combi;
	combi = link(str1, str2);
	puts(combi);
	free(combi);

	return 0;
}

char * link(char *fst, char *scd)
{
	char *add;
	if ((add = malloc((strlen(fst) + strlen(scd)) * sizeof(char))) == NULL)
		puts("There is no place to malloc the pointer");
	int i, j = 0;
	
	for (i = 0; *(fst + i) != '\0'; i++)
		*(add + i) = *(fst + i);
	*(add + i) = ' ';

	do
	{
		*(add + i + 1 + j) = *(scd + j);
		j++;
	}
	while(*(scd + j) != '\0');


	return add; 
}
