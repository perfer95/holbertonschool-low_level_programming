#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: variable string to check the size
 * Return: an integer with the size
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 * _strcpy - Write a function that copies the string pointed
 * to by src, including the terminating null byte (\0), to
 * the buffer pointed to by dest.
 * @dest: array which is goin to recibe the string
 * @src: string to copy
 * Return: variable dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}


/**
 * new_dog - function that creates a new dog.
 * @name: dog´sname
 * @age: dog´sage
 * @owner: dog´s owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int size_name, size_owner;
	dog_t *create_dog;

	create_dog = malloc(sizeof(dog_t));
	if (create_dog == NULL)
	{
		return (NULL);
	}
	size_name = _strlen(name);
	create_dog->name = malloc(sizeof(char) * (size_name + 1));
	if (create_dog->name == NULL)
	{
		free(create_dog);
		return (NULL);
	}
	create_dog->name = _strcpy(create_dog->name, name);
	create_dog->age = age;
	size_owner = _strlen(owner);
	create_dog->owner = malloc(size(char) * (size_owner + 1));
	if (create_dog->owner == NULL)
	{
		free(create_dog->name);
		free(create_dog);
		return (NULL);
	}
	create_dog->owner = _strcpy(create_dog->owner, owner);
	return (create_dog);
}
