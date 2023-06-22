#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable dog
 *
 * @d: pointer to object with struct type
 * @name: string, dog's name
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: Nothing (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
