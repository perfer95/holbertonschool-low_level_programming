#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: sprintg to be printed between numbers
 * @n: number of arguments
 * Return: empty just print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args; /*Firs variable*/

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator == NULL)
		{
			printf("");
		}
		else if (i == n - 1)
		{
			printf("\n");
		}
		else
		{
			printf("%c ", *separator);
		}
	}
	va_end(args);
}
