#include "main.h"
/**
* _strpbrk - gets the length of a prefix substring.
* @s: string
* @accept: substring
* Return: length of the matching substring
*/
char *_strpbrk(char *s, char *accept)

{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			else if (accept == NULL || *accept == '\0')
			{
				return (NULL);
			}
		}
		i++;
	}
	return (0);
}
