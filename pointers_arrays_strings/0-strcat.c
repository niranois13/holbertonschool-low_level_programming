#include "main.h"
/**
* _strcat - main function that concatenates two strings
* @dest : string in wich elements are added
* @src : elements to add
* Return: dest
*/
char *_strcat(char *dest, char *src)

{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		dest++;
		i++;
	}

	while (src[j] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}

	return (dest);
}
