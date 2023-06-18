#include <stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes
 * it with a specific char
 *
 * @size: the size of the array
 * @c: the specific character
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *j;
		unsigned int i;

		j = (char *) malloc(sizeof(char) * size);
		if (j == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
			j[i] = c;

		return (j);
	}
}
