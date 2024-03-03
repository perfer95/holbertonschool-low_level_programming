#include <stdio.h>

/**
 * main - function that prints a square,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long i = 2;
	unsigned long  factor = 1;

	while (num != 1)
	{
		if ((num % i) == 0)
		{
			if (i > factor)
			{
				factor = i;
			}

			num = num / i;
			i = 1;
		}
		i++;
	}
	printf("%lu", factor);
	return (0);
}
