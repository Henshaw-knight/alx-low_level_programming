#include "main.h"
#include <stdio.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated witha a
 * call to malloc i.e  malloc(old size)
 * @old_size: the size, in bytes, of the allocated space for pt
 * @new_size: the new size, in bytes, of the new memory block
 *
 * Return: void pointer to the new memory location, NULL otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
