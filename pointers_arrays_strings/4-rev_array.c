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

	for (j = 0; j < (n / 2); j++)
	{
		aux = a[j];
		a[j] = a[n - 1];
		a[n - 1] = aux;
		n--;
	}
}
