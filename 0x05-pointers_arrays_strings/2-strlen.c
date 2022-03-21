#include "main.h"
#include <stdio.h>

/**
* _strlen - tells the length of a character
*
* Return : nothing
*/

int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}

int _strlen(char *s)
{
      strlen((int*)s);
}
