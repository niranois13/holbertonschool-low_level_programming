#include <stdio.h>

/**
* main - Entry point
* Description: This program will print all single digit numbers.
* Return: 0 if success
*/

int main(void)

{
	int num = '0';

	for (num = '0' ; num <= '9' ; ++num)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
