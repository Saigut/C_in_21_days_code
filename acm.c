/* ziliang的烦恼 */

#include <stdio.h>

int main()
{
	int nbr, ctr, ctr2, ctr3, spot, text_l;
	char array[500], array2[500], array3[500], array4[1000];
	array4[0] = '\0';
	do
		scanf("%d",&nbr); 
	while(nbr == '\0');

	for (ctr = 0; ctr < nbr; ctr++)
	{
		do
			scanf("%s", array);
		while(*array == '\0');

		for (text_l = 0; array[text_l] != '\0'; text_l++)
			;
		do
			scanf("%d", &spot);
		while(!(spot > 0 && spot < text_l));

		do
			scanf("%s", array2);
		while(*array2 == '\0');

		for (ctr2 = 0; ctr2 < spot; ctr2++)
			array3[ctr2] = array[ctr2];
		for (ctr3 = 0; array2[ctr3] != '\0'; ctr3++)
			array3[ctr2+ctr3] = array2[ctr3];
		for(; array[ctr2] !='\0'; ctr2++)
			array3[ctr2+ctr3] = array[ctr2];
		array3[ctr2+ctr3] = '\n';
		array3[ctr2+ctr3+1] = '\0';

		for (text_l = 0; array4[text_l] != '\0'; text_l++)
			;
		for (ctr2 = 0; array3[ctr2] != '\0'; ctr2++)
			array4[text_l+ctr2] = array3[ctr2];
	}
	
	printf("%s", array4);

	return 0;
}
