#include "main.h"

/**
* _strlen_recursion- returns the number of char in string
* @s: the string to counted.
*
* Return: number of string int.
*/

int _strlen_recursion(char *s);
{
	if (*s == NULL)
		return 0;
	else
		return 1 + _strlen_recursion(s+1);
}
