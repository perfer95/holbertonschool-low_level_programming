/*
 * File: 9-times_table.c
 * Author: perfer
 * Description: function that prints
 * the 9 times table, starting with 0.
 */

#include "main.h"
#include <stdio.h>

/**
 * times_table - printer
 * Description: print the table
 * Return: void
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int num;

	while (i <= 9)
	{
		while (j <= 9)
		{
			num = i * j;

			if (j == 0)
			{
				_putchar(num + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (num < 10 && j != 9)
			{
				_putchar(' ');
				_putchar(num + '0');
				_putchar(',');
				_putchar(' ');

			}
			else if (num >= 10 && j != 9)
			{
				_putchar((num / 10) + '0'); /*First number*/
				_putchar((num % 10) + '0');/*Last number*/
				_putchar(',');
				_putchar(' ');
			}
			else if (num < 10 && j == 9)
			{
				_putchar(' ');
				_putchar(num + '0');
				_putchar('\n');
			}
			else if (num >= 10 && j == 9)
			{
				_putchar((num / 10) + '0'); /*First number*/
				_putchar((num % 10) + '0');/*Last number*/
				_putchar('\n');
			}

			j++;
		}

		j = 0;
		i++;
	}
}
