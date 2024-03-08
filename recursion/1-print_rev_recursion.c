#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: string to print
 * Return: empty
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
		return;
	}
	else
	{
		_putchar(*s);
	}
}
