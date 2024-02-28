#include "main.h"
/**
* puts2 - write a character out of two from a string
* @str : string
* Return: void
*/
void puts2(char *str)
{
	int l = 0;
	int i;

	while (str[l] != '\0')
	{
		l++;
	}
	for (i = 0 ; i < l ; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
