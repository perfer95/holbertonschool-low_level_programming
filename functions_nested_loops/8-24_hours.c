/*
 * File: 8-24_hours.c
 * Author: perfer
 * Description: function that prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59.
 */

#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - printer
 * Description: time printer
 * Return: void
 */
void jack_bauer(void)
{
	int hourDec = 0;
	int hourUnit = 0;
	int minuteDec = 0;
	int minuteUnit = 0;

	while (hourDec <= 2)
	{
		while (hourUnit <= 9 && (hourDec != 2 || hourUnit != 4))
		{
			while (minuteDec <= 5)
			{
				while (minuteUnit <= 9)
				{
					_putchar(hourDec + '0');
					_putchar(hourUnit + '0');
					_putchar(':');
					_putchar(minuteDec + '0');
					_putchar(minuteUnit + '0');
					_putchar('\n');

					minuteUnit++;
				}

				minuteUnit = 0;
				minuteDec++;
			}

			minuteDec = 0;
			hourUnit++;
		}

		hourUnit = 0;
		hourDec++;
	}
}
