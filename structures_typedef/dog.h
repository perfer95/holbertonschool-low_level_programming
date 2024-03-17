#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data
 * @name: dog´sname
 * @age: dog�s age
 * @owner: dog´ owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
