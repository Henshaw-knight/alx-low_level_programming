#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to the number in which the value of the bit will be set
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = 1UL << index;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	*n = *n | i;
	return (1);
}
