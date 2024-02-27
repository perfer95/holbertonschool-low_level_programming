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
	int i;

	if (n == 0 && n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = (n - 1); i > 0; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
	_putchar('\n');
}
