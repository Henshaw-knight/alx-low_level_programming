#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog, stores a copy of the
 * name and owner of the dog.
 *
 * @name: the name of the dog
 * @age: its age
 * @owner: the owner of the dog
 *
 * Return: the new dog structure, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int length = 0, i;
	char *name_copy, *owner_copy;
	dog_t *n_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	while (name[length] != '\0')
		length++;
	name_copy = malloc(sizeof(char) * (length + 1));
	if (name_copy == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	length = 0;
	while (owner[length] != '\0')
		length++;

	owner_copy = malloc(sizeof(char) * (length + 1));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';
	for (i = 0; owner[i]; i++)
		owner_copy[i] = owner[i];
	owner_copy[i] = '\0';
	n_dog->name = name_copy;
	n_dog->age = age;
	n_dog->owner = owner_copy;
	return (n_dog);
}
