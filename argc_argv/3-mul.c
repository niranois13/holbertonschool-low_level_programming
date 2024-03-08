#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program that multiplies two arguments passed into it.
* @argv: argument vector
* @argc: argument count
* Return: 0 if success
*/
int main(int argc, char *argv[])
{
	int result = 0;
	int num1;
	int num2;

	if (argc != 3)
	{
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
