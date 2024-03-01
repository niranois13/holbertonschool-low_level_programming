#include "main.h"
/**
* leet - function that converts a string in leetspeach
* @str : string to be converted
* Return: str
*/
char *leet(char *str)

{
	char *lettres = "aeotlAEOTL";
	char *nombres = "4307143071";
	int i;
	int j;

	for (i = 0 ; str[i] != '\0'; i++)
	{
		for (j = 0 ; lettres[j] != '\0' ; j++)
		{
			if (str[i] == lettres[j])
			{
				str[i] = nombres[j];
				break;
			}
		}
	}
	return (str);
}
