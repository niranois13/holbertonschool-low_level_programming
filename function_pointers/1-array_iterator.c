#include "function_pointers.h"

/**
* array_iterator - function that executes a function given as a parameter
* on each element of an array.
* @array: array to execute the function to
* @size: size of the array
* @action: pointer to the function to execute on the array
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned long int i;

	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
