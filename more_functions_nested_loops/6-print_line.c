/*
 * File: 6-print_line.c
 * Author: perfer
 */

#include "main.h"

/**
 * print_line -function that draws a straight line in the terminal.
 * @n: number of times to print _
 * return: void just print
 */
void print_line(int n)
{
	int i;

	if (n == 0 && n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
