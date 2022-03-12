#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	char y = 'a';

	while (y <= 'f')
	{
		putchar(y);
		y++;
	}

	putchar('\n');
	return (0);
}
