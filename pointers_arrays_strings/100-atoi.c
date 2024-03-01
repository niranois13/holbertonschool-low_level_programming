#include "main.h"
/**
* _atoi - converts a string of char to integers
* @s : string to be converted
* Return: result;
*/
int _atoi(char *s)

{
	unsigned int result = 0;
	int sign = 1;
	int digit;

	while (*s != '\0')
	{
		if (*s == (' '))
		{
		s++;
		}
		else if (*s == '-')
		{
		sign *= -1;
		s++;
		}
		else if (*s == '+')
		{
		s++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			result = (result * 10) + digit;
			s++;
		}
		else
		{
			break;
		}
	}

	return (result * sign);
}
