#include <curses.h>

int main( void )
{
	initscr();
	char ch;
	while ((ch = getch()) != '*')
	{
		putchar(ch);
		fprintf(stdout, "%c", ch);
	}
	endwin;
	return 0;
}
