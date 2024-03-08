#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: int to determine its factorial
 * Return: int with the result of factorial
 */
int factorial(int n)
{
	int result = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	result = n * factorial(n - 1);

	return (result);
}
