#include "main.h"
#include <stdio.h>

/**
* _strlen - tells the length of a character
* @s : pointer to the string to check
*
* Return : int value i.
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
