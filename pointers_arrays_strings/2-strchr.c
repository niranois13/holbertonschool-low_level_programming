#include "main.h"
/**
* _strchr - function that return a pointer
* to the location of the first occurence of a character in a string
* @s: string
* @c: character
* Return:	pointer to the location of the character
*			NULL if no character
*/
char *_strchr(char *s, char c)

{
	int i = 0;
	char *temp = s;

	if (s[i] == '\0')
		return (NULL);

	while (s[i] != '0')
	{
		if (s[i] == c)
		{
			temp = s;
			i++;
			return (temp);
		}
		s++;
	}
	return (0);
}
