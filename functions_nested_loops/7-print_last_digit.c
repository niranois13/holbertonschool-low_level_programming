#include "main.h"
#include "6-abs.c"
/**
* print_last_digit - prints the last digit of 'i'
* @i : integer from wich the last digit is printed
* Return: last_digit being the last digit of 'i'
*/
int print_last_digit(int i)
{
	int last_digit;

	last_digit = _abs(i % 10);
	_putchar('0' + last_digit);

	return (last_digit);
}
