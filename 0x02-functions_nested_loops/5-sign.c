#include "main.h"

/**
* print_sign - tells the value is alphabet or not
* @n : description
*
* Return: 1 if the value is positive. 0 if the value is zero. -1 otherwise
*/

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	else
	{
		result = n;
	}

	return (result);

}
