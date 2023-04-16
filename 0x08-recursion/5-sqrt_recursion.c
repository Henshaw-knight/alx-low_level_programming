#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: the number
 *
 * Return: the natural square root, if n has no natural square root -1
 * is returned
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (helper(n, 1));
}

/**
 * helper - helper function assist solve _sqrt_recursion func,
 * compares the product of the incrementer to the given number
 *
 * @n: given number
 * @i: incrementer that would be multiplied by itself
 *
 * Return: the square root or -1 if not found
 */
int helper(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (helper(n, i + 1));
	else
		return (-1);
}
