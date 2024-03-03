#include <stdio.h>

/**
 * main - function that prints a square,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	unsigned long num = 612852475143;
	int i;
	unsigned long  factor = 1;

	for (i = 2; i <= num; i++)
	{
		if ((num % i) == 0)
		{
			if (i > factor)
			{
				factor = i;
			}
		}
	}
	printf("%lu", factor);
	return (0);
}
