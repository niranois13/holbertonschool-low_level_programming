#include "main.h"
/**
* print_alphabet - Entry point
* Description: Prints the alphabet
* Return: 0 if success
*/
void print_alphabet(void)

{
	char letter = 'a';

	for (letter = 'a' ; letter <= 'z' ; ++letter)
	{
		_putchar(letter);
	}
	_putchar('\n');

}
