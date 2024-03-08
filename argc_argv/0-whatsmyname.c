#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program that prints its name, followed by a new line
* @argv: argument vector
* @argc: argument count
* Return: 0 if success
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
