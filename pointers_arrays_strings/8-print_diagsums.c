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
	int i, j;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0, j = 0; i < 8; i++, j++)
	{
		diag1 = diag1 + a[i][j];
	}
	for (i = size - 1, j = size - 1; i >= 0; i--, j--)
	{
		diag2 = diag2 + a[i][j];
	}
	printf("%d, %d\n", diag1, diag2);
}
