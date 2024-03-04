#include "main.h"
/**
* -memcpy -  that copies 'n' bytes from memory area 'src' to memory area 'dest'
* @src: memory area source
* @n: number of bytes to copy
* @dest: memory area destination
* Return: pointer to 'dest'
*/
char *_memcpy(char *dest, char *src, unsigned int n)

{
	for (n = 0; n != 32; ++n)
	{
    	src[n] = dest[n];
	}

	for (n = 0; n != 32; ++n)
    {
		src[n] = dest[32 + n];
	}
	return (dest);
}
