#include <stdio.h>
#include "calc.h"

/**
 * op_add - sum
 * @a: first integer
 * @b: second integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract
 * @a: first integer
 * @b: second integer
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: first integer
 * @b: second integer
 * Return: the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: first integer
 * @b: second integer
 * Return: the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_int - module
 * @a: first integer
 * @b: second integer
 * Return: the modul of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

