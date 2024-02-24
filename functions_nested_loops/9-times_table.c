#include "main.h"

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

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (num < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(num + '0');
			}
			else if (num >= 10)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			else
			{
				_putchar((num % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
