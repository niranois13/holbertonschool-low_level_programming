#include "main.h"
/**
* _islower - checks if "c" is lowercase
* @c : character to be checked
* Return: 1 if lowercase, 0 if not lowercase
*/
int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
