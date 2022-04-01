#include "main.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int mul;

	if (argc >= 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", mul);
	}
	else
		printf("Error");
		return (1);

	return (0);
}
