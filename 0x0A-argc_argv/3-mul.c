#include "main.h"

/**
* main- multiplies two integers
* @argc: number of arguments,
* @argv: passed integer to be multiplied
*
* Return: 0 or 1.
*/

int main(int argc, char *argv[])
{
	int mul, a, b;

	if (argc >= 1)
	{
		a = (int *) &argv[1];
		b = (int *) &argv[2];

		mul = a * b;
		printf("%d", mul);
	}
	else
		printf("Error");
		return (1);

	return (0);
}
