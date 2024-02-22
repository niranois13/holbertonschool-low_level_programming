#include "main.h"
/**
* _isalpha - program that determine if 'c' is a letter or not
* @c : character to be checked
* Return: 1 if 'c' is letter, 0 if it's not
*/
int _isalpha(int c)

{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
