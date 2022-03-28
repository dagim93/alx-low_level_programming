#include "main.h"

/**
* _strspn- calculate number of string are same in two strings
* @s: string that is going to be checked
* @accept: string to check.
* @n: length of prefix substring.
*
* Return: unsigned int n;
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned i, j, n = 0;

	for (i = 0; s[i] != ' ' && s[i] != '0'; i++)
		for (j = 0; accept[j] != '0'; j++)
			if (s[i] == accept[j])
				n++;

	return (n);
}
