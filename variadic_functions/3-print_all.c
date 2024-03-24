#include "variadic_functions.h"

void p_char(char *separator, va_list args);
void p_integer(char *separator, va_list args);
void p_float(char *separator, va_list args);
void p_char_ptr(char *separator, va_list args);


/**
 * print_all - function that prints anything.
 * @format:  list of types of arguments passed to the function
 * Return: empty just print
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;
	va_list args;
	s_type type[] = {
		{ "c", p_char },
		{ "i", p_integer },
		{ "f", p_float },
		{ "s", p_char_ptr }
	};
	char *sep = "";

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(args, format);

	while (format[i] && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *type[j].identifier)
			{
				type[j].f(sep, args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

/**
  * p_char - Prints char
  * @separator: separator
  * @args: Arguments
  * Return: empty
  */
void p_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
  * p_integer - Prints integers
  * @separator: separator
  * @args: arguments
  * Return: empty
  */
void p_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
  * p_float - Prints float
  * @separator: separator
  * @args: arguments
  * Return: empty
  */
void p_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
  * p_char_ptr - Prints char pointer
  * @separator: separator
  * @args: arguments
  * Return: empty
  */
void p_char_ptr(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, arg);
}
