#include <stdio.h>

/**
* main - Entry point
* Description: This will print all single digit numbers separated by commas.
* Return: 0 if success
*/

int main(void)

{
	int num = 00;
	for (num = 00 ; num <= 98 ; ++num)
	{
		putchar((num/10)+'0');
		putchar ((num%10)+'0');
		if (num < 98)
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
