#include "main.h"
/**
* print_line - prints a line of '_' n times
* @n : number of '_' to print
* Return: void
*/
void print_line(int n)

{
	do {
		_putchar('_');
		n--;
	} while (n > 0);
	_putchar('\n');

}
