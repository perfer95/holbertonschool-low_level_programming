/*
 * File: 5-sign.c
 * Author: perfer
 * Description: Function that prints the sign of a number.
 */

#include "main.h"

/**
 * print_sign - checker
 * @n: The number to check
 * Description: check the sign of the number
 * Return: 1 if is greater than zero, 0 if is zero
 * -1 if is less than zero
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
