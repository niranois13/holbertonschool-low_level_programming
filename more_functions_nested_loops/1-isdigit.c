#include "main.h"
/**
* _isdigit - checks if a character is a digit or not
* @c : character to be checked
* Return: 1 if it's a digit, 0 if it's not
*/

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
