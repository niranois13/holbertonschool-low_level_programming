#include "variadic_functions.h"

/**
* print_numbers - function that prints numbers, followed by a newline.
* @separator: char string to print between numbers
* @n: constant unsigned integer, number of arguments to pass
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int print;

	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
	{
		print = va_arg(ap, int);
		printf("%d", print);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
