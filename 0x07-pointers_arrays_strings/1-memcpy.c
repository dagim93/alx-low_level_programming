#include "main.h"

/**
* _memcpy- copy block of memory form src to dest
* @dest: address of memory to be filled
* @src: value to be copied
* @n: number of bytes
*
* Return: char dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
