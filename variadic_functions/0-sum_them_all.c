#include "variadic_functions.h"

/**
* sum_them_all - a variadic function that adds all integers passed as arguments
* @n: number of arguments to pass to this function
*
*
* Return: sum or else if error
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
	{
		sum = sum + va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
