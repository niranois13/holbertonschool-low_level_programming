#include "main.h"
/**
* _strchr - locates a character 'c' in a string 's'.
* @s : string
* @c : character to be found in string
* Return:	pointer ton the location of the first character
*			NULL if character not found
*/
char *_strchr(char *s, char c)

{
	char *temp = s;

	while (*temp != '\0')
	{
		if (*temp == c)
		{
			return (temp);
		}
		temp++;
	}
	return (NULL);
}
