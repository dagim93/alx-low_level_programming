#include "main.h"

/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{
      int i = 0;
      
      while (s[i])
            i++;
      
      while (i >= 0)
      {
            _putchar(s[i]);
            --i;
      }
_putchar('\n');
}
