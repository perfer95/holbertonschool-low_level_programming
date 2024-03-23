#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return: a int with the result.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;
	va_lis args; /*Firs variable*/

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_args(args, int);
	}
	va_end(args);

	return (sum);
}
