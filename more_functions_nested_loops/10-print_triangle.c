#include "main.h"
/**
* print_triangle - prints a triangle
* @size : size of the triangle
* Return: void
*/
void print_triangle(int size)

{
	int row, spaces, squares;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = (size - 1) ; row >= 0 ; row--)
	{
		for (spaces = 0 ; spaces < row ; spaces++)
		{
		_putchar(' ');
		}

		for (squares = 0 ; squares < (size - row) ; squares++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
