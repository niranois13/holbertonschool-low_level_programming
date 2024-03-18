#include "function_pointers.h"

/**
* print_name - function that prints a name
* @name: name to print
* @f: pointer to the function print_name
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
