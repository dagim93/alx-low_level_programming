#include "main.h"

/**
* _strchr- find first occurence of a string.
* @c : the string to be found.
* @s : char string to find c.
*
* Return: char ot NULL.
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
		if (s[i] == c)
		{
			return (s + i);
		}

	return ('\0');
}
