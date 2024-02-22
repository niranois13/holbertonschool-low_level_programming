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
			int produit = a * b;
			if (produit < 10)
			{
				_putchar('0' + produit);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(produit / 10 + '0');
				_putchar(produit % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		b++;
		} while (b <= 9);
	_putchar('\n');
	a++;
	} while (a <= 9);
}
