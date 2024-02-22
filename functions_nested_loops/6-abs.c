#include "main.h"
/**
* _abs - prints the absolute value of an integer
* @i : the integer to be determined
* Return: i
*/
int _abs(int i)
{
	if (i < 0)
	{
		(i = -i);
		return (i);
	}
	else
	{
		return (i);
	}
	return (0);
}
