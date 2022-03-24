#include "main.h"

/**
* _strcmp - compares two strings
* @s1: the first to be compared
*
* Retrun : cmp.
*/

int _strcmp(char *s1, char *s1)
{
	int i, j, cmp;

	for (i = 0; s1[i] != '\0'; )
		++i;
	for (j = 0; s2[j] != '\0'; )
		++j;

	cmp = i - j;
	return (cmp);
}
