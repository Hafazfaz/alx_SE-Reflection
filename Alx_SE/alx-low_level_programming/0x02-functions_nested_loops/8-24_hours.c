#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Description: Prints from 00:00 to 23:59
 */
void jack_bauer(void)
{
    int hour, minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            _putchar('0' + hour / 10);    /* First hour digit */
            _putchar('0' + hour % 10);    /* Second hour digit */
            _putchar(':');                /* Colon */
            _putchar('0' + minute / 10);  /* First minute digit */
            _putchar('0' + minute % 10);  /* Second minute digit */
            _putchar('\n');               /* New line */
        }
    }
}
