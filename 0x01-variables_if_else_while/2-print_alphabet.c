#include <stdio.h>
#include <stdlib.h>
/* Descripion */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return(0);
}
