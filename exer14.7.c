/* 
   Method to use this program:
   Run in console: program_name < a_file
*/

#include <stdio.h>

int main( void )
{
	char ch, chara[261];
	int i, j = 0, charcnt[260];

	for (i = 0; i < 260; i++)
		charcnt[i] = 0;

	for (i = 0; i < 261; i++)
		chara[i] = '\0';

	while ((ch = getchar()) != EOF)
	{	
		i = 0;

		do
		{
			if (chara[i] == ch)
			{	
				charcnt[i]++;
				break;
			}
			else if (chara[i+1] == '\0')
			{
				chara[i+1] = ch;
				charcnt[i+1]++;
				j++;
				break;
			}
			i++;
		} while (chara[i] != '\0');
	}

	for (i = 1; chara[i] != '\0'; i++)
		printf("%c: \t %d\n", chara[i], charcnt[i]);
	printf("\nThe total of kind(s) of chracter(s) in this file is %d\n", j);

	return 0;
}
