#include "main.h"
/**
* _strlen_recursion - function that returns the length of a string
* @s : pointer to the string
* Return: length of the string
*/
int _strlen_recursion(char *s)

{
	int len = 0;

	if (*s != '\0')
	{
		len ++;
	}

	_strlen_recursion(s++);
	return (len);
}
