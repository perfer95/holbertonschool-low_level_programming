/*
 * File: int _isdigit(int c);
 * Author: perfer
 * Description: function that checks
 * for a digit (0 through 9).
 */

#include "main.h"

/**
 * _isdigit - printer
 * Description: prints if is upper or not
 * @c: digit to check
 * Return: 0 is not, 1 it is
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
