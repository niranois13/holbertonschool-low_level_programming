#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program that prints the number of arguments passed into it.
* @argv: argument vector
* @argc: argument count
* Return: 0 if success
*/
int main(int argc, char *argv[])
{
	int i = 0;
	if (argv[i] > 0)
	{
		printf("%d\n", argc);
	}
	return (0);
}
