#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to the dog, NULL if failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
		return (NULL);

	ndog->name = _strdup(name);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->age = age;

	ndog->owner = _strdup(owner);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	return (ndog);
}

/**
* _strdup - function that returns a pointer to newly allocated space in memory,
*			which contains a copy of the string given as a parameter.
* @str: string to copy
*
* Return: a pointer to the duplicated string or NULL if not enough memory
*/
char *_strdup(char *str)
{
	char *ptr;
	int l = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
	{
		l++;
	}

	ptr = (char *) malloc((l + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < l ; i++)
	{
		ptr[i] = str[i];
	}

	ptr[l] = '\0';

	return (ptr);
}
