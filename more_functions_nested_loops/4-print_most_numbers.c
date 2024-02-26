#include "main.h"
/**
* print_most_numbers - prints most numbers
* Description: prints all single digit numbers exept 2 and 4
* Return: void
*/

void print_most_numbers(void)

{
	int a = 0;

	while (a < 10)
	{
		if (a != 2 && a != 4)
		{
		_putchar('0' + a);
		}
		a++;
	}
	_putchar('\n');
}
