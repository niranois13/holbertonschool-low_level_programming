#include "3-calc.h"
/**
* op_add - function that adds two int
* @a: first int
* @b: second int
*
* Return: result
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - function that substracts an int from another
* @a: first int
* @b: second int
*
* Return: result
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - function that multiplies two ints
* @a: first int
* @b: second int
*
* Return: result
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - function that divide an int with another
* @a: first int
* @b: second int
*
* Return: result
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - function that divide an int with another
* @a: first int
* @b: seconde int
*
* Return: remainder of the division
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
