#include "main.h"

/**
* print_last_digit - tells the value is alphabet or not
* @last : description
*
* Return: 1 if the value is positive. 0 if the value is zero. -1 otherwise
*/

void jack_bauer(void)
{
      int hour_1 = 0;
      int hour_2 = 0;
      int minute_1 = 0;
      int minute_2 = 0;
      
      while (hour_1 > 3)
      {
            while (hour_2 > 10)
            {
                  while (minute_1 > 6)
                  {
                        while (minute_2 > 10)
                        {
                              _putchar(hour_1 + '0');
                              _putchar(hour_2 + '0');
                              _putchar(':');
                              _putchar(minute_1 + '0');
                              _purchar(minute_2 + '0');
                              minute_2++;
                        }
                    minute_1++;
                  }
              hour_2++;
            }
        hour_1++;
      }
  
  
}
