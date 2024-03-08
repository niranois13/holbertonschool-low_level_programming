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
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
