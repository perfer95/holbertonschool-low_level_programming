#include "main.h"

/**
 * sqrtroot - obtain the square root
 * @rad: radicando
 * @aux: auxiliar
 * Return: result of square root
 */
int sqrtroot(int rad, int aux)
{
	if (aux * aux == rad)
	{
		return (aux);
	}
	else if (aux * aux > rad)
	{
		return (-1);
	}

	return (sqrtroot(rad, aux + 1));
}

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number.
 * @n: radicando
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
	return (sqrtroot(n, 1));
}
