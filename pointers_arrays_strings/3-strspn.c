#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: string
* @accept: substring
* Return: length of the matching substring
*/
unsigned int _strspn(char *s, char *accept)

{
	int i = 0;
	int j;
	int k = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i++;
	}
	return (k);
}
