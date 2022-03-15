#include "main.h"

/**
* jack_bauer - print 24 hours.
*
* Return: Always return 0.
*/

void jack_bauer(void)
{
int hour_1;
int hour_2;
int minute_1;
int minute_2;
int h;

hour_1 = 0;
while (hour_1 < 3)
{
      if (hour_1 == 2)
      {      
            h = 4;
      }
      else
      {
            h = 10;
      }

      hour_2 = 0;
      while (hour_2 < h)
      {
            minute_1 = 0;
            while (minute_1 < 6)
            {
                  minute_2 = 0;
                  while (minute_2 < 10)
                  {
                        _putchar('0' + hour_1);
                        _putchar('0' + hour_2);
                        _putchar(':');
                        _putchar('0' + minute_1);
                        _putchar('0' + minute_2);
                        _putchar('\n');
                        minute_2++;
                  }
                  minute_1++;
            }
            hour_2++;
      }
hour_1++;
}
  
  
}
