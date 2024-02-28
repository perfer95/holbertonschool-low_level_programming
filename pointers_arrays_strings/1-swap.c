/*
 * File: 1-swap.c
 */

#include "main.h"

/**
 * swap_int - change a value o a variable with pointers
 * @a: 1st variable integer pointer
 * @b: 2nd variable integer pointer
 * return: empty
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = b;
	*b = aux;
}
