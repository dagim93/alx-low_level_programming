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
	
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
