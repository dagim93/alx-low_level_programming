#include "main.h"

/**
* print_last_digit - tells the value is alphabet or not
* @last : description
*
* Return: 1 if the value is positive. 0 if the value is zero. -1 otherwise
*/

int print_last_digit (int last)
{
      int last_digit = last % 10;
      _putchar('0' + last_digit);
  
      return (last_digit);
}
