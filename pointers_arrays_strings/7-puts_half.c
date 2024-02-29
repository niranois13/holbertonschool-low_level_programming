#include "main.h"
/**
* puts_half - prints the last half of a string
* @str : string
* Return: void
*/
void puts_half(char *str)
{
	int length = 0;
	int end;
	int n;
	int half;

	while (str[length] != '\0')
	{
		length++;
	}

	end = length - 1;
	n = (end) / 2;

	for (half = n + 1; half <= end ; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
