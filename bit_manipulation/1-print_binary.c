#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to convert
 * Return: empty just print
 */
void print_binary(unsigned long int n)
{
	unsigned long int auxi = n;

	if (auxi > 1)
	{
		print_binary(auxi >> 1);
	}

	_putchar((auxi & 1) + '0');
}
