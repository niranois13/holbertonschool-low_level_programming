#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - function that concatenates n bytes of 2 strings
* @s1: first string
* @s2: second string
* @n: number of bytes to take from s2
* Return: pointer to the allocated memory or NULL if failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s2[length2] != '\0' && length2 < n)
	{
		length2++;
		n--;
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}

	ptr = malloc((length1 + length2 + 1) * sizeof(char));
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

	ptr[length1 + length2] = '\0';
	return (ptr);
}
