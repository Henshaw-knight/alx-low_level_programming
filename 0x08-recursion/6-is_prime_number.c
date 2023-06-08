#include "main.h"

/**
 * is_prime_number - function that helps to determine if an integer is prime
 * or not
 *
 * @n: the integer
 *
 * Return: 1 if the integer is a prime number, otherwise 0
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
 * helper - function to aid in checking the number
 *
 * @n: the integer
 * @i: the incrementer to help find factors of n
 *
 * Return: 1 as the final result or 0
 */
int helper(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (1 * helper(n, i + 1));
		}
	}
	return (1);
}
