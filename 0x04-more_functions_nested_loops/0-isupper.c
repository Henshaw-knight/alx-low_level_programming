#include "main.h"

/**
 * _is_upper - function that checks for uppercase character
 *
 * @c: the character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _is_upper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
