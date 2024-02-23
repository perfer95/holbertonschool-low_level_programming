/*
 * File: 3-islower.c
 * Author: perfer
 * Description: function that checks for
 * lowercase character.
 */

#include "main.h"
#include <ctype.h>

/**
 * _islower - check
 * @c: The character to check
 * Description: check if the char is lowercase
 * Return: 0 if is not and 1 if it´ lowercase
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
