#include <stdio.h>

/**
* main - Entry point
* Description: This will print all single digit numbers separated by commas.
* Return: 0 if success
*/

int main(void)

{
	int num = '0';

	for (num = '0' ; num <= '9' ; ++num)
	{
		putchar(num);
		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}

	return (0);
}
