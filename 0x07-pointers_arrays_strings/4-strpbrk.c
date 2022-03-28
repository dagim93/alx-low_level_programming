#include "main.h"

/**
* _strpbrk- finds the character in the string.
* @s : string to be scanned.
* @accept : sting to be searched.
*
* Return: char s.
*/

char *_strpbrk(char *s, char *accept)
{
    int i, j;

    for (i = 0; s[i] != '\0'; ++i)
        for (j = 0; accept[j] != '\0'; ++j)
            if (s[i] == accept[j])
                return &s[i];
}
