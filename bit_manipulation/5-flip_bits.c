#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int auxi;
	int c = 0;

	auxi = n ^ m;

	while (auxi != 0)
	{
		if ((auxi & 1) == 1)
		{
			c++;
		}
		auxi = auxi >> 1;
	}

	return (c);
}
