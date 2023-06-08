#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a num
 *
 * @n: the number
 *
 * Return: natural square root of the number (n) or -1 if n does not
 * have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper(n, 1));
}

/**
 * helper - helper function to aid in solving _sqrt_recursion func problem,
 * compares the product of the incrementer with the given number
 * @n: given number
 * @i: incrementer that would be multiplied by itself
 *
 * Return: the square root or -1 if square root is not found
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
