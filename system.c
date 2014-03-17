#include <stdio.h>

int main( void )
{
	int chi;

	while (1)
	{
		puts("Please choose the number of the command you want to execute, 5 to exit: ");
		do
		{
			puts("\t 1 \t top");
			puts("\t 2 \t ls");
			puts("\t 3 \t eix opera");
			puts("\t 4 \t cat ~/c/temp.c");
			puts("\t 5 \t exit");

			printf("You choice is: ");
			scanf("%d", &chi);
		} while (chi != 1 && chi != 2 && chi != 3 && chi != 4 && chi !=  5);
		switch ( chi )
		{
			case 1:		system("xterm top &"); break;
			case 2:		system("ls"); break;
			case 3:		system("eix opera"); break;
			case 4:		system("cat ~/c/temp.c"); break;
			case 5:		exit(0);
		}
	}
}
