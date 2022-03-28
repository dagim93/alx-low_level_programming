#include "main.h"

/**
* _memset- set particular value to a set of memory
* @s: addres to be filled.
* @b: value to be filled.
* @n: number of bytes to be filled.
*
* Return: char s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
