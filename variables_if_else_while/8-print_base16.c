#include <stdio.h>

/**
* main - Entry point
* Description: This program will print the whole alphabet in lower case
* Return: 0 if success
*/

int main(void)

{
	int num;

	for (num = 48 ; num <= 57 ; ++num)
	{
		putchar(num);
	}
	for (num = 97 ; num <= 102 ; ++num)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
