#include "main.h"
/**
* _strcpy -  copies string pointed to by src to the buffer pointed to by dest.
* @src : source to be copied
* @dest : destination of the elements copied
* Return: dest
*/
char *_strcpy(char *dest, char *src)

{
	int length = 0;
	int i;

	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0 ; i < length ; i++)
	{
		dest[i] = src[i];
	}
	dest[length] = 0;
	return (dest);
}
