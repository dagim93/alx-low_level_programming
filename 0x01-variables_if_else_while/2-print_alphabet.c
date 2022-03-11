#include <stdio.h>
#include <stdlib.h>
/* Descripion */
int man(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	return(0);
}
