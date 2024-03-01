#include "main.h"
/**
* _strcat - main function that concatenates two strings
* @dest : string in wich elements are added
* @src : elements to add
* Return: dest
*/
char *_strcat(char *dest, char *src)

{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (result);
}
