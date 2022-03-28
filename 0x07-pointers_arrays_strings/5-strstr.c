#include "main.h"

/**
* _strstr - finds the character in the string.
* @haystack: sting to be searched.
* @needle: sting to be searched.
*
* Return: char or 0.
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	for (i = 0; haystack[i] != '\0'; ++i)
		if (needle[j] == haystack[i])
			return (&haystack[i]);

	return ('\0');
}
