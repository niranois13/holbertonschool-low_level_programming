#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - Entry point
* Description: Will generate a random number "n" and print positive/negative
* Return: 0 if success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
		if (n < 0)
		printf("%d is negative\n", n);
		if (n == 0)
		printf("%d is zero\n", n);
		if (n > 0)
		printf("%d is positive\n", n);
	}
	return (0);
}
