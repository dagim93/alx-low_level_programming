#include "main.h"
/**
 * print the word _putchar using while loop
 * 
 * Return: O.
 *
 */
int main(void)
{
	char c[8] = "_putchar";
	int i = 0;
	
	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
