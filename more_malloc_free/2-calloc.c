#include "main.h"
#include <stdlib.h>
/**
* _calloc - function that allocates memory for an array, using malloc
* @nmemb: unsigned int
* @size: unsigned int
* Return: pointer to the allocated memory or NULL on failure
*
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
