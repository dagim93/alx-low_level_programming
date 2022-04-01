#include "main.h"

/**
* main- gives the number of arguments
* @argc: number of arguments including name.
* @argv: char.
*
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int i;

	(void)*argv;

	if (argc != 0)
		for (i = 0; i < argc; )
			i++;

	printf("%d\n", i - 1);

	return (0);
}
