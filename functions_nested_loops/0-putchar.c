/*
 * File: 0-putchar.c
 * Author: perfer
 * Description: Write a program that prints _putchar,
 * followed by a new line.
 */

#include <unistd.h>
#include "main.h"


/**
 * main - main code
 * Description: call the _putchar funciton
 * Return: 0
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');

	return (0);
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

