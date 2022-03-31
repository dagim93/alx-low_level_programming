#include "main.h"

/**
* _pow_recursion- gives the power root of a number.
* @x: the number to be powered.
* @y: how many time to power x.
*
* Return: int number.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recurion(x, y - 1));
}
