#include "main.h"

/**
* print_last_digit - tells the value is alphabet or not
* @last : description
*
* Return: 1 if the value is positive. 0 if the value is zero. -1 otherwise
*/

int print_last_digit(int n)
{
	int nv;

	if (n < 0)
		nv = -1 * (n % 10);
	else
		nv = n % 10;

	_putchar(nv + '0');
		return (nv);
}
