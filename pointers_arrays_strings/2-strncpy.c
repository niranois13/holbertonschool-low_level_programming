#include "main.h"
/**
* _strncpy - function that copies "n" bytes of a string to another
* @dest : variable in which elements are copied to
* @src : variable source of the element to copy
* @n : number of source element to copy
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
	dest[i] = '\0';
	}

	return (dest);
}
