/*
 * File: 100-times_table.c
 * Author: perfer
 * Description: function that prints
 * the n times table, starting with 0.
 */
#include "main.h"
#include <stdio.h>

/**
 * print_times_table - printer
 * @n: times to print
 * Description:  prints the n times table
 * Return: void
 */
void print_times_table(int n)
{
	int x, n1, n2;

	if (n <= 15 && n >= 0)
	{
		for (n1 = 0; n1 <= n; n1++)
		{
			_putchar('0');

			for (n2 = 1; n2 <= n; n2++)
			{
				x = n1 * n2;

				_putchar(',');
				_putchar(' ');

				if (x < 10)
				{
					_putchar(' ');
				}
				if (x < 100)
				{
					_putchar(' ');
				}

				if (x >= 100)
				{
					_putchar((x / 100) + '0');
					_putchar(((x / 10)) % 10 + '0');
				}
				else if (x < 100 && x >= 10)
				{
					_putchar((x / 10) + '0');
				}
				_putchar((x % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
