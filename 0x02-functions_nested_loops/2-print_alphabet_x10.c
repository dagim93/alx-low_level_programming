# include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return:0
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 9)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		i++;
		_putchar('\n');
	}
}

