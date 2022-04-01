#include "main.h"

int main(int argc, char *argv[])
{
	int i;

	(void)*argv;

	if (argc != 0)
		for (i = 0; i < argc; i++);

	printf("%d", i - 1);

	return (0);
}
