#include "main.h"

/**
 * reverse_array - function that reverses the content
 * of an array of integers
 * @a: string to reverse
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j, aux;

	n = n - 1;

	for (j = 0; j <= n; j++)
	{
		aux = a[j];
		a[j] = a[n];
		a[n] = aux;
		n--;
	}
}
