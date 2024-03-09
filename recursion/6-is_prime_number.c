#include "main.h"

/**
 * prime - define if the number is a prime number
 * @num: number to check
 * @aux: aux variable
 * Return: 1 if is prime and otherwise 0
 */
int prime(int num, int aux)
{
	if (num <= 1)
	{
		return (0);
	}
	else if (num == aux)
	{
		return (1);
	}
	else if (num % aux == 0)
	{
		return (0);
	}

	return (prime(num, aux + 1));
}

/**
 * is_prime_number - first function
 * @n: radican
 * Return: an integer
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
