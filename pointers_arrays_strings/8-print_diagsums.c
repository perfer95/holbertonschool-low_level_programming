#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: array
 * @size: dimension
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < (size * size); i = (i + size + 1))
	{
		diag1 = diag1 + a[i];
	}
	for (i = size - 1; i <= (size * size - 1 - (size - 1)); i = (i + size - 1))
	{
		diag2 = diag2 + a[i];
	}
	printf("%d, %d\n", diag1, diag2);
}
