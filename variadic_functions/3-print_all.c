#include "variadic_functions.h"
/**
* print_c - prints characters
* @ap: pointer to the data to print in the va_list
* Return: void
*/
void print_c(va_list *ap)
{
	printf("%d", va_arg(*ap, int));
}

/**
* print_i - prints integers
* @ap: pointer to the data to print in the va_list
* Return: void
*/
void print_i(va_list *ap)
{
	printf("%d", va_arg(*ap, int));
}

/**
* print_f - prints float numbers
* @ap: pointer to the data to print in the va_list
* Return: void
*/
void print_f(va_list *ap)
{
	printf("%f", va_arg(*ap, double));
}

/**
* print_s - prints integers
* @ap: pointer to the data to print in the va_list
* Return: void
*/
void print_s(va_list *ap)
{
	char *string = va_arg(*ap, char *);

	if (string == NULL)
	{
		printf("(Nil)");
	}
	printf("%s", string);
}

/**
* print_all - function that prints anythin passed through it
* @format: number of arguments passed through
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	va_list ap;

	print array[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', NULL}
	};

	va_start(ap, format);

	while (format != 0 && format[i] != 0)
	{
		while (array[j].type != '\0')
		{
			if (array[j].type == format[i])
			{
				array[j].func(&ap);
				printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
