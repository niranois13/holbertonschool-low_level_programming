#include <stdio.h>

/**
* main - Entry point
* Description: This program will print the whole alphabet in lower case
* Return: 0 if success
*/

int main(void)

{
	char letter = 'z';

	for (letter = 'z' ; letter >= 'a' ; --letter)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
