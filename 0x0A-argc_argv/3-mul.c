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
	int mul;

	if (argc = 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%i", mul);
	}
	else
	{
		printf("Error");
		return (1);
	}
	
	return (0);
}
