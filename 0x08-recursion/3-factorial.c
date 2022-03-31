#include "main.h"

/**
* factorial- gives factorial fo an number.
* @n: the number.
*
* Return: -1 or 1 or non zer int.
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
