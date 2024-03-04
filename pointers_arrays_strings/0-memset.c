#include "main.h"
/**
* _memset - function that fills memory with a constant byte
* @s : pointer to memory area we want to fll
* @b : constant byte to fill with
* @n : number of bytes we want to fll
* Return: pointer to the memory area 's'
*/
char *_memset(char *s, char b, unsigned int n)

{

	char *temp = s;

	while (n > 0)
	{
		*temp = b;
		temp++;
		n--;
	}
	return (s);
}
