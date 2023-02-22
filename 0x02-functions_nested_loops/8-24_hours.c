#include "main.h"

/**
 * jack_bauer - Prints every minutes of the day
 * Starting from 00 : 00 to 23 : 59
 * Auth - ALABI TIMOTHY
 */

void jack_bauer(void)
{
	int minute, hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
