#include "main.h"
/**
* checker - checks fo primality of numbers
* @n: number to check
* @i: operator
* Return: 1 if prime number, 0 if not
*/
int checker(int n, int i)
{
	if (n <= 1 || (n > 2 && n % 2 == 0))
		return (0);
	if (n == 2)
		return (1);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	if (i * i == n)
		return (0);
	return (checker(n, i + 2));
}

/**
* is_prime_number - returns if the input integer is a prime number, or not.
* @n: number
*
* Return: 1 if prime number, 0 if not
*/
int is_prime_number(int n)
{
	return (checker(n, 3));
}

