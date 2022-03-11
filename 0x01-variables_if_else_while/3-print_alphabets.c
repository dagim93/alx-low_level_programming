#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Print the lowercase alphabet in order
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	char cz = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cz <= 'Z')
	{
		putchar(cz);
		cz++;
	}

	putchar('\n');
	return (0);
}
