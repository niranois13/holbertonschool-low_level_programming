#include <stdlib.h>
#include "main.h"
/**
* print_to_98 - Prints all numbers from any int to 98.
* @n : starting point
*/
void print_to_98(int n)

{
	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}
	for (; n > 98; n--)
	{
		printf("%d, ", n);
	}
	printf("%d\n", n);
}
