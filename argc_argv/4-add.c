#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program that adds arguments passed into it.
* @argv: argument vector
* @argc: argument count
* Return: 0 if success
*/
int main(int argc, char *argv[])

{
	int i;
	int j;
	int sum = 0;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] ; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (0);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
