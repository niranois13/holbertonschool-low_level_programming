#include "main.h"
/**
* print_alphabet_x10 - prints the alphabet 10 times
* Return: 0 if success
*/

void print_alphabet_x10(void)

{
	int l;
	char letter;

	for (l = 0 ; l < 10 ; l++)
	{
		for (letter = 'a' ; letter <= 'z' ; ++letter)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
