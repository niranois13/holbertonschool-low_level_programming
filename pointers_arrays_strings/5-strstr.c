#include "main.h"
/**
*
*
*
*
*/
char *_strstr(char *haystack, char *needle)

{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*needle != '\0')
	{
		char *n = needle;
		char *h = haystack;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
