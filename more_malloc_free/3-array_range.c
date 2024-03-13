#include "main.h"
#include <stdlib.h>
/**
* array_range - creates an array of integers sorted from min to max
* @min: minimum value
* @max: maximum value
* Return: pointer to the newly created array or NULL if failure
*
*/
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int arraysize;

	if (min > max)
		return (NULL);

	arraysize = max - min + 1;

	arr = malloc (arraysize * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0 ; i < arraysize ; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
