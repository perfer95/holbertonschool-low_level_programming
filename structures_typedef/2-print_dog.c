#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function that initialize a variable of type struct dog
 * @d: struct
 * Return: empty
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
