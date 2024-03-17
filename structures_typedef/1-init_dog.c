#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: new strucutr
 * @name: dog´ name
 * @age: dog´sage
 * @owner: dog´sowner
 * Return: empty
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
