#include "main.h"
/**
* times_table - prints the times table from 0 to 9
*
* Return: void
*/
void times_table(void)

{
	int a = 0;
	int b;

	do {
		b = 0;
			do {
			int product = a * b;

			if (b > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product < 10)
			{
				if (b > 0)
				{
					_putchar(' ');
				}
				_putchar(product + '0');
			}
			else
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		b++;
		} while (b <= 9);
	_putchar('\n');
	a++;
	} while (a <= 9);
}
