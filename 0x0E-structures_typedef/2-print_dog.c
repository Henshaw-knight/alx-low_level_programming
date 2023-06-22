#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 *
 * @d: pointer to the struct dog
 *
 * Return: Nothing (Void)
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (!(d->age))
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
