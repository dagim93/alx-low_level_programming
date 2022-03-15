#include "main.h"

/**
* print_last_digit - tells the value is alphabet or not
* @last : description
*
* Return: 1 if the value is positive. 0 if the value is zero. -1 otherwise
*/

int print_last_digit (int last)
{
      int last_digit;

      if (last >= 0)
      {
            last_digit = last % 10;     
      }
      else
      {
            last = last * -1;
            last_digit = last % 10;
      }
      
      _putchar( last_digit + '0');

      return (last_digit);
}
