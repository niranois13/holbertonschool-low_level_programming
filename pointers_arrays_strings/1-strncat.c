#include "main.h"
/**
* _strncat - main function that concatenates two string
* @src : string to be added
* @dest : strings elements are bing added to
* @n : number of bytes from *src to be added
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)

{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}


	return (result);
}
