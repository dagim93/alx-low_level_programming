#include "main.h"

/**
* _strncat - concatinate two strings by using n bytes for src.
* @dest: destination string.
* @src: source string.
* @n: byte for src.
*
* Return: char dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; )
		++i;

	for (j = 0; j < n; ++j, ++i)
	{
		if (dest[j] == '\0')
			break;

		dest[i] = src[j];
	}

	return (dest);
}
