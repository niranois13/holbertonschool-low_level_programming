#include "dog.h"
/**
* free_dog - frees dogs
* @d: pointer to the allocated memory to be freed
*
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);

	free(d->name);
	free(d->owner);
	free(d);
}
