/* Demonstrates of frequently used escape sequences */

#include <stdio.h>

#define QUIT 3

int get_menu_choice( void );
void print_report( void );

main()
{
	int choice = 0;

	while (choice != QUIT)
	{
		choice = get_menu_choice();

		if (choice == 1)
			printf("\nBeeping the computer\a\a\a");
		else
		{
			if (choice == 2)
				print_report();
		}
	}
	printf("You chose to quit!\n");

	return 0;
}

int get_menu_choice( void )
{
	int selection = 0;

	do
	{
		printf( "\n" );
		printf( "\n1 - Beep Computer");
		printf( "\n2 - Display Report");
		printf( "\n3 - Quit");
		printf( "\n" );
		printf( "\nEnter a selection:" );

		scanf( "%d", &selection );
	}while ( selection < 1 || selection > 3 );

	return selection;
}

void print_report( void )
{
	printf( "\nSAMPLE REPORT" );
	printf( "\n\nSequence\tMeaning" );
	printf( "\n========\t=======" );
	printf( "\n\\a\t\tBell (alert)" );
	printf( "\n\\b\t\tBackspace" );
	printf( "\n\\n\t\tNewline" );
	printf( "\n\\t\t\tHorizontal tab" );
	printf( "\n\\\\\t\tBackslash" );
	printf( "\n\\?\t\tQuestion mark" );
	printf( "\n\\'\t\tSingle quotation" );
}
