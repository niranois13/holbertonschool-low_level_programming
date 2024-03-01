#include "main.h"
/**
* _strcmp - main function that compares two strings
* @s1 : first string
* @s2 : second string
* Return: result
*/
int _strcmp(char *s1, char *s2)

{
	int i = 0;
	int result;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = (s1[i] - s2[i]);
		}
		i++;
	}
	return (result);
}
