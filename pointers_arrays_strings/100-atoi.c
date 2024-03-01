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
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= ('9'))
		{
			result = (result * 10) + (s[i] - '0');
		}
		else if (result > '9')
		{
			break;
		}
	}
	return (result * sign);
}
