#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - Entry point
* Description: print a random number "n" and tells about the last digit
* Return: 0 if success
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
	printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else
	printf("Last digit of %d is %d and is less than 6 and not 0\n", +
	n, last_digit);
	return (0);
}
