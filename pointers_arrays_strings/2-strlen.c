#include "main.h"
/**
* _strlen - prints the length of a string
*
* Return: length of the string
*/
int _strlen(char *s)

{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
