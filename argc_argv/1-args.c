#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program that prints the number of arguments passed into it.
* @argv: argument vector
* @argc: argument count
* Return: 0 if success
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
