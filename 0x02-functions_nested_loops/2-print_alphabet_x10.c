# include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return:0
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 9)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		i++;
		_putchar('\n');
	}
}

