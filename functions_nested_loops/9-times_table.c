#include "main.h"
/**
 * calculate_product - calculates the product of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of a and b
 */
int calculate_product(int a, int b)
{
	return (a * b);
}

/**
 * times_table - prints the times table from 0 to 9
 */
void times_table(void)
{
	int a, b, product;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			product = calculate_product(a, b);

			if (b > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (product < 10 && b > 0)
			{
				_putchar(' ');
			}

			if (product < 10)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
