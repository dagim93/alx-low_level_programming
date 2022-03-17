#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(");

	i = 0;
	/* don't delete it!*/
	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided!");

	return (0);
}
