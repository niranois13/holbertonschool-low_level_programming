#include "main.h"
/**
* _memcpy -  that copies 'n' bytes from memory area 'src' to memory area 'dest'
* @src: memory area source
* @n: number of bytes to copy
* @dest: memory area destination
* Return: pointer to 'dest'
*/
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
