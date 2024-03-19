#include "3-calc.h"

/**
* main - entry point
* @argc: number of arguments
* @argv: value of the arguments
*
* Return: 0 if success, else otherwise
*/
int main(int argc, char *argv[])
{
	char *s;
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	s = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(s) == NULL || s[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(s)(a, b));
	return (0);
}
