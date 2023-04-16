#include "main.h"

/**
 * is_prime_number - function that checks if an integer is a primenumber or not
 *
 * @n: the input integer
 *
 * Return: 1 if prime number, else 0
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (helper(n, 2));
}

/**
 * helper - function to assist in checking num
 *
 * @n: the integer
 * @i: the incrementer for finding factors of n
 *
 * Return: 1 as the final result or 0
 */
int helper(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
			return (0);
		else
			return (1 * helper(n, i + 1));
	}
	return (1);
}
