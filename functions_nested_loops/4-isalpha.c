/*
 * File: 4-isalpha.c
 * Author: perfer
 * Description: function that checks for
 * alphabetic character.
 */

#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check
 * @c: The character to check
 * Description: check if the char is alphabetic type
 * Return: 0 if is not and 1 if it´ lowercase
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
