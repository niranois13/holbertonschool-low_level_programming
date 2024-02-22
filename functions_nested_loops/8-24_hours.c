#include "main.h"
/**
* jack_bauer - prints every minute of a whole day
* Return: minutes of a whole day
*/
void jack_bauer(void)

{
	int h = 0;
	int m;

	do {
		m = 0;
		do {
			_putchar('0' + h / 10);
			_putchar('0' + h % 10);
			_putchar(':');
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar('\n');
			m++;
			} while (m < 60);
		h++;
		} while (h < 24);
}
