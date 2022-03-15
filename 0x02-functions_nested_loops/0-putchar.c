#include "main.h"

/**
 * main - print the word _putchar using while loop
 * Return: O
 */
char c[8] = "_putchar";
int i = 0;

int main(void)
{
	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
