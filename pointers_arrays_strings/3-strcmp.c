#include "main.h"
/**
* _strcmp - main function that compares two strings
* @s1 : first string
* @s2 : second string
* Return:	< 0 if s1 is less than s2,
*			0 if s1 is equal to s2,
*			> 0 if s1 is greater than s2
*/
int _strcmp(char *s1, char *s2)

{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
