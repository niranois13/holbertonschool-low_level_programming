#include "main.h"
/**
* print_line - prints a line of '_' n times
* @n : number of '_' to print
* Return: void
*/
void print_line(int n)

{
	while (n > 0)
	{
		if (n <= 0)
		{
		_putchar('\n');
		}
		_putchar('_');
		n--;
	}
	_putchar('\n');

}
