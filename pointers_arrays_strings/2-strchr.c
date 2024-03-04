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
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return s;
		}
	}
	return NULL;
}
