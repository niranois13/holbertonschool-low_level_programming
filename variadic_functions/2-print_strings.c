#include "variadic_functions.h"

/**
* print_strings - function that prints strings of char, followed by a newline
* @separator: string to be printed between strings to pass
* @n: number of strings to pass
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	const char *string;

	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
	{
		string = va_arg(ap, const char *);
		if (string == NULL)
		{
		printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
