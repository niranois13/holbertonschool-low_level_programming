#include <stdio.h>

/**
* main - Entry point
* Description: This program will print the whole alphabet in lower case
* Return: 0 if success
*/

int main(void)

{
	char letter = 'a';
	char LETTER = 'A';

	for (letter = 'a' ; letter <= 'z' ; ++letter)
	{
		putchar(letter);
	}
	for (LETTER = 'A'; LETTER <= 'Z'; ++LETTER)
	{
		putchar(LETTER);
	}

	putchar('\n');

	return (0);
}
