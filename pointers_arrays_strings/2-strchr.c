#include "main.h"
/**
* _strchr - locates a character 'c' in a string 's'.
* @s : string
* @c : character to be found in string
* Return: 	pointer ton the location of the first character
*			NULL if character not found
*/
char *_strchr(char *s, char c)

{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
