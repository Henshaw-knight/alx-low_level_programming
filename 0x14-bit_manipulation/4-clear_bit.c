#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 *
 * @n: pointer to the number in which the bit will be set
 * @index: the index, stating from 0, of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an erro occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = 1UL << index;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	if ((*n & i) == 0)
		return (1);
	*n = *n & (~(1 << index));

	return (1);
}
