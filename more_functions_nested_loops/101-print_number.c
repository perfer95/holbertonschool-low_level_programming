#include "main.h"
#include <math.h>

/**
 * print_number - function that prints an integer
 * @n: integer
 * return: void just print
 */
void print_number(int n)
{
	unsigned int number;
	unsigned int aux = 0;
	int counter = 0;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		aux = n;
	}

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		aux = n;

		while (aux / 10 != 0)
		{
			aux = aux / 10;
			counter++;
		}

		while (counter >= 0)
		{
			number = n / pow(10, counter);
			_putchar(number + '0');
			n = n - (number * pow(10, counter));
			counter--;
		}
	}
}
