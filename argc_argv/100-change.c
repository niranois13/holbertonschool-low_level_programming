#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* calc_coins - calculates minimum number of coins to make change for money
* @money: the amount of money
*
* Return: 0 if success
*/
int calc_coins(int money)
{
	int cents = 0;

	while (money > 0)
	{
		if (money >= 25)
		{
			money -= 25;
			cents++;
		}
		else if (money >= 10)
		{
			money -= 10;
			cents++;
		}
		else if (money >= 5)
		{
			money -= 5;
			cents++;
		}
		else if (money >= 2)
		{
			money -= 2;
			cents++;
		}
		else if (money >= 1)
		{
			money -= 1;
			cents++;
		}
	}
	return (cents);
}
/**
* main - Entry point, prints minimum number of coins to make change for money
* @argc: argument counter
* @argv: argument vector
* Return: 0 if success
*/
int main(int argc, char *argv[])
{
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	coins = atoi(argv[1]);

	if (coins <= 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", calc_coins(coins));
	return (0);

}

