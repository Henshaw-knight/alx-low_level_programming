#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 *
 * @n: first number/integer
 * @m: second number to convert to.
 *
 * Return: the number of bits that got flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_count = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		if (xor & 1)
			flip_count++;
		xor >>= 1;
	}

	return (flip_count);
}
