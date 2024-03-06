#include "main.h"
/**
* print_diagsums - function that prints the sum
*					of the two diagonals of a square matrix of integers.
* @size:  numbers of rows and columns in the square matrix
* @a: pointer to the first element of the square matrix.
* Return: void
*/
void print_diagsums(int *a, int size)

{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		diag1 += *(a + i * size + i);
		diag2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", diag1, diag2);
}
