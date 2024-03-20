#include "function_pointers.h"

/**
* int_index - function to search for an integer
* @array: array to search into
* @size: size of the array
* @cmp: pointer to the function to be used to compare values
* Return: index of the first element to match, -1 if error or no match
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
