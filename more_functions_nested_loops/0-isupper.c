/*
 * File: 0-isupper.c
 * Author: perfer
 * Description: Write a function that checks
 * for uppercase character.
 */

#include "main.h"
#include <ctype.h>

/**
 * _isupper - printer
 * Description: prints if is upper or not
 * Return: 0 is not, 1 it is
 */
int _isupper(int c)
{
	if (isupper(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
