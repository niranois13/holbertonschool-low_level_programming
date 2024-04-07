#include "main.h"

/**
* binary_to_unit - function that translate a binary string to unisgned int
* @b: the string
* Return: the converted number or 0 on failure
*/
unsigned int binary_to_uint(const char *b)
{
    unsigned int number = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		number = number * 2 + (*b - '0');
		b++;
	}

	return (number);
}
