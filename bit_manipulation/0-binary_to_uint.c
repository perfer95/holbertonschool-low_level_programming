#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string with the binary value
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numInt = 0;
	int i = 0, pow = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}

	i--;
	while (i >= 0)
	{
		if (b[i] == '1')
		{
			numInt = numInt +  _pow_recursion(2, pow);
		}
		i--;
		pow++;
	}

	return (numInt);
}



/**
 * _pow_recursion - function that returns the value of
 * x raised to the power of y.
 * @x: int base
 * @y: int exponent
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	int result = 0;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	result = x * _pow_recursion(x, y - 1);

	return (result);
}
