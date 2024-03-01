#include "main.h"
/**
* reverse_array - main function that prints values of an array in reverse
* @a : array to be reversed
* @n : number of elements to print
* Return: void
*/
void reverse_array(int *a, int n)

{
	int l;
	int temp;

	for (l = 0 ; l < (n / 2); l++)
	{
		temp = a[l];
		a[l] = a[n - l - 1];
		a[n - l - 1] = temp;
	}
}
