#include "main.h"
/**
* _strstr - function that locates a substring
* @needle: the substring to locate
* @haystack: the string
* Return:	pointer to the beginning of the substring
*			NULL if no match or empty substring
*/
char *_strstr(char *haystack, char *needle)

{
	while (*needle != '\0')
	{
		char *n = needle;
		char *h = haystack;
		char *start = haystack;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (start);
		}
		haystack = start + 1;
	}

	return (NULL);
}
