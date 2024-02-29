#include "main.h"
/**
* rev_string - prints a string in reverse
* @s : string to be printed
* Return: void
*/
void rev_string(char *s)
{
	int l = 0;
	int e;
	int f;
	int temp;

	while (s[l] != '\0')
		l++;

	e = l - 1;
	f = 0;

	while (f < e)
	{
		temp = s[f];
		s[f] = s[e];
		s[e] = temp;
		f++;
		e--;
	}
}
