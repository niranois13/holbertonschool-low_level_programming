#include <stdio.h>

/**
* main - Entry point
* Description: This program will print the whole alphabet in lower case
* Return: 0 if success
*/

int main(void)

{
	char letter = 'a';

	for (letter = 'a' ; letter <= 'z' ; ++letter)
	{
		putchar(letter);
		if (letter == 'e')
			continue;
		if (letter == 'q')
			continue;
	}

	putchar('\n');

	return (0);
}
