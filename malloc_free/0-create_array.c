#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars, and init it with a specific char
* @size: size of the array
* @c: character to initialize the array with
* Return: pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(size * (sizeof(char)));
	if (ptr == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	for (i = 0 ; i < size ; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
