#include "main.h"
#include <stdlib.h>
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

	if (str == 0)
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

	return (ptr);
}
