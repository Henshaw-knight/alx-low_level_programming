#include "main.h"

/**
 * factorial - function to return the factorial of a given number
 * if n is lower than 0, the funcion return -1 to indicate an error
 * Factorial of 0 is 1
 *
 * @n: the number
 *
 * Return: the calculated factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
