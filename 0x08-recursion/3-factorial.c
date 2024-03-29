#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: the number
 *
 * Return: the factorial of param n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
