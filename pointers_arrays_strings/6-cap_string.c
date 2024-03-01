#include "main.h"
/**
* cap_string - function that captalizes every word of a string
* @str : string to capitalize
* Return: str
*/
char *cap_string(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n' || str[i] == ',' ||
			str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
			str[i] == '\"' || str[i] == '(' || str[i] == ')' ||
			str[i] == '{' || str[i] == '}') && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] = (str[i + 1]) - 32;
		}
	}

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	return (str);
}
