/*
 * File: 7-print_last_digit.c
 * Author: perfer
 * Description: function that prints the
 * last digit of a number.
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - computes
 * @n: The number to filter
 * Description: return the value of the last digit
 * Return: the last digit
 */
int print_last_digit(int n)
{
	long n_2 = n;
	int last;

	if (n_2 < 0)
	{
		last = (int)((-1 * n_2) % 10);
	}
	else
	{
		last = n % 10;
	}

	_putchar(last + '0');

	return (last);
}
