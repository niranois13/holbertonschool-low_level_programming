#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*
*
*
*
*/
int main(int argc, char *argv[])
{
	int coins = atoi(argv[1]);
	int cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1] <= 0)
	{
		printf("0");
	}

	while (coins > 0)
	{
		if (coins >= 25)
		{
			coins = coins - 25;
			cents++;
		}
		else if (coins >= 10)
		{
			coins = coins - 10;
			cents++;
		}
		else if (coins >= 5)
		{
			coins = coins - 5;
			cents++;
		}
		else if (coins >= 2)
		{
			coins = coins - 2;
			cents++;
		}
		else if (coins >= 1)
		{
			coins = coins - 1;
			cents++;
		}
	}

	printf("%d\n", cents);
	return (0);
}
