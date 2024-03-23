#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: sprintg to be printed between numbers
 * @n: number of arguments
 * Return: empty just print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list args; /*Firs variable*/

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(args, char *);

			if (string == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", string);
			}

			if (separator != NULL && *separator != 0 && (i != n - 1))
			{
				printf("%s", separator);
			}
			else if (i == n - 1)
			{
				printf("\n");
			}
		}
		va_end(args);
	}
	else
	{
		printf("\n");
	}
}
