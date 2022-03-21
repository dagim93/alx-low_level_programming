#include "main.h"

/**
*
*
*
*/

void print_rev(char *s)
{
int i = 1;
while (s[i])
{
	_putchar(s[-i]);
	i++;
}
_putchar('\n');
}
