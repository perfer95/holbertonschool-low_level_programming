#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: integer
 * return: void just print
 */
void print_number(int n)
{
	unsigned int number;
	unsigned int aux = 0, power = 1;
	int counter = 0, i;

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
			for (i = 0; i < counter; i++)
			{
				power *= 10;
			}
			number = n / power;
			_putchar(number + '0');
			n = n - (number * power);
			counter--;
			power = 1;
		}
	}
}
