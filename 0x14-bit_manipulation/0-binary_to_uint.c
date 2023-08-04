#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an
 * unsigned int
 *
 * @b: the string containing 0 and 1 chars
 *
 * Return: the converted number on success, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, result = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[i])
		i++;

	while (i)
	{
		if (b[i - 1] != '0' && b[i - 1] != '1')
			return (0);

		if (b[i - 1] == '1')
			result += base;
		base = base * 2;
		i--;
	}
	return (result);
}
