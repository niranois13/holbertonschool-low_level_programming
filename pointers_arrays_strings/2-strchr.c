#include "main.h"
/**
 * _strchr - locates a character 'c' in a string 's'.
 * @s: string
 * @c: character to be found in string
 * Return: pointer to the location of the first character
 *         NULL if character not found
 */
char *_strchr(char *s, char c)
{
	int i;
	for (i = 0 ; s[i] <= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
