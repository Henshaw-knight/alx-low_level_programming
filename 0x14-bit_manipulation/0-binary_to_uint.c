#include "main.h"

/**
 * binary_to_uint - function for converting a binary number to
 * an unsigned int
 *
 * @b: string containing 0 and 1 chars
 *
 * Return: the converted number on success, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1;
	unsigned int result = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
		i++;

	while (i)
	{
		if (b[i - 1] != '1' && b[i - 1] != '0')
			return (0);

		if (b[i - 1] == '1')
			result += base;
		base *= 2;
		i--;
	}
	return (result);
}
