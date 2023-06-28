#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that sums two nums
 * @a: the first number
 * @b: the second number
 *
 * Return: their sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that finds difference between two numbers
 * @a: first number
 * @b: second number
 *
 * Return: their difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that returns the result of the division of two numbers
 * @a: the numerator
 * @b: the denominator
 *
 * Return: the result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}	
	return (a / b);
}

/**
 * op_mod - function tha treturns the remainder of the division of two nums
 * @a: the numerator
 * @b: the denominator
 *
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
