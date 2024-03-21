#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: string with the name
 * @f: pointer function
 * Return: void just print
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}


