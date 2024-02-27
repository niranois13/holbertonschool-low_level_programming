#include "main.h"
/**
* print_square - prints squares based on the value of 'size'
* @size : size of the suare to be drawn
* Return: void
*/
void print_square(int size)

{
	int line = 0;
	int row = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 1 ; row <= size ; row++)
	{
		for (line = 1 ; line <= size ; line++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
