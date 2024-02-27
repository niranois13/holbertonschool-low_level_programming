#includ "main.h"
/**
* print_triangle - prints a triangle
* @size : size of the triangle
* Return: void
*/
void print_triangle(int size)

{
	int space, squares;

	for (space = 0 ; space < size ; space--)
	{
		for (squares = 0 ; squares < size ; squares++)
		{
			_putchar('#');
		}
		_putchar(' ');
	}
	_putchar('\n');
}
