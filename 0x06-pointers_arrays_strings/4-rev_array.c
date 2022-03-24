#include "main.h"

/**
* reverse_array - reverse an array.
*
* Return: nothing.
*/


void reverse_array(int *a, int n)
{
    int i, j, k;

    int b[n];
    n = n - 1;

    for (i = 0; n >= 0; --n, i++)
        b[i] = a[n];

    i = i-0;
    for (k = 0; i >= k; k++)
        a[k] = b[k];
}
