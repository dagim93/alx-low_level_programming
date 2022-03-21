#include "main.h"

/**
* swap_int - swap the value of two integers
* @a : swap value with b
* @b : swap value with a
*
* Return : nothing
*/

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
