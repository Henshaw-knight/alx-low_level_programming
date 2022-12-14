#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a num
 * @n: the number in consideration
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (n < 0)
		n = n * -1;

	if (last_digit < 0)
		last_digit = last_digit * -1;

	_putchar(last_digit + '0');
	return (last_digit);
}
