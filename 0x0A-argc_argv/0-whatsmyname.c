#include "main.h"

/**
* main- prints program name.
* @argv: strings that have been passed.
*
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc != 0)
		for (i = 0; *argv[i] != '\0'; i++)
			_putchar(*argv[i]);

	return (0);
}
