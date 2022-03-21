#include "main.h"

/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{
      long i = 0;
      long count = 0;
      long j = 0;
      
      while (s[count] != '\0')
            count++;
      j = count - 1;
      
      for (i = 0; i < count; i++)
      {
            s[i] = s[j];
            j--;
      }
}
