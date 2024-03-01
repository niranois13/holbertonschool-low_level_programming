#include "main.h"
/**
* _strncat - main function that concatenates two string
* @src : string to be added
* @dest : strings elements are bing added to
* @n : number of bytes from *src to be added
*/
char *_strncat(char *dest, char *src, int n)

{
	int i;
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	for (i = 0 ; i < n ; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (result);
}
