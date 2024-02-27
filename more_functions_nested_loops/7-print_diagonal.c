/*
 * File: 7-print_diagonal.c
 * Author: perfer
 */

#include "main.h"

/**
 * print_diagonal - function that draws diagonals in the terminal.
 * @n: number of times to print \
 * return: void just print
 */
void print_diagonal(int n)
{
	int i, j;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; i != 1 || j <= n; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
