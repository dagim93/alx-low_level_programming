#include "main.h"

/**
* _puts_recursion- prints string input.
* @s: the string to be printed.
*
* Return: none or void.
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')	
		_putchar(*s);
		_puts_recursion(s + 1);
	else if (*s == '\0')
		_putchar('\n');
}
