#include "main.h"
#include <stdlib.h>
/**
* str_concat - function that concatenates two strings.
* @s1: first string
* @s2: second string
* Return: pointer to the concatenated strings, NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int length1 = 0;
	int length2 = 0;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s2[length2] != '\0')
	{
		length2++;
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}



	ptr = (char *) malloc((length1 + length2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < length1 ; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0 ; j < length2 ; j++)
	{
		ptr[length1 + j] = s2[j];
	}


	return (ptr);
}
