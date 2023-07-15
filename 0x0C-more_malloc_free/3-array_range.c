#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array
 * The array created would contain all the values from min
 * (included) to max (included), ordered from min to max
 *
 * @min: the minimum integer value
 * @max: the maximum integer value
 *
 * Return: pointer to the newly created array on success, NULL otherwise
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
