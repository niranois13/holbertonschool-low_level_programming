#include "main.h"
/**
* print_diagonal - prints diagonal lines based on 'n'
* @n : lenght of the last line
*/
void print_diagonal(int n)

{
	int ligne;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (ligne = 0 ; ligne < n ; ligne++)
	{
		for(space = 0 ; space < ligne ; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
