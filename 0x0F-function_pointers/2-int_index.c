#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: array of integers
 * @size: the size of the array
 * @cmp - function pointer
 *
 * Return: index of the first element for which cmp function does
 * not return 0 (false) in this case, also -1 is returned if no element
 * matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
