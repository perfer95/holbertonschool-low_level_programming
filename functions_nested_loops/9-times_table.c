#include "main.h"
#include <stdio.h>

/**
 * times_table - printer
 * Description: print the table
 * Return: void
 */
void times_table(void)
{
	int i = 0, j = 0, num;

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
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
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
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				_putchar('\n');
			}
			j++;
		}
		j = 0;
		i++;
	}
}
