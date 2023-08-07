#include "main.h"

/**
 * get_bit - function that returns the value pf a bit at a given index
 *
 * @n: number to get bit from
 * @index: the index, starting from 0, of the bit you want to get
 *
 * Return: the value of the bit at the index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = 1UL << index;
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	if ((n & i) == 0)
		return (0);
	else
		return (1);
}
