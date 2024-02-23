/*
 * File: 7-print_last_digit.c
 * Author: perfer
 * Description: function that prints the
 * last digit of a number.
 */

#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - computes
 * @n: The number to filter
 * Description: return the value of the last digit
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = abs(n) % 10;

	_putchar(last + '0');

	return (last);
}
