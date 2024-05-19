#include <stdio.h>
/**
* main - entry point
* Description: This will print a text,
* replacing multiples of 3 by "Fizz",
* multiples of 5 by "Buzz" and multiples of both by "FizzBuzz"
* Return: 0 if success
*/
int main(void)

{
	int n;
	int cent = 100;

	for (n = 1 ; n <= 100 ; ++n)
	{
		if (n % 15 == 0)
			printf("FizzBuzz");

		else if (n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%d", n);

		if (n != cent)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
