#include "main.h"
/**
* more_numbers - prints 10 times numbers from 0 to 14
* Description: prints 10 times numbers from 0 to 14
* Result: void
*/
void more_numbers(void)

{
	int t = 0, a;

	while (t < 10)
	{
		a = 0;
			while (a <= 14)
			{
				if (a > 9)
				{
					_putchar('0' + a / 10);
				}
				_putchar ('0' + a % 10);
				a++;
			}
		_putchar('\n');
		t++;
	}
}
