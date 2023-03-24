#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @i: the number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int i)
{
	int last_digit;

	if (i < 0)
		i = i * -1;

	last_digit = i % 10;

	if (last_digit < 0)
		last_digit = last_digit * -1;

	_putchar(last_digit + '0');
	return (last_digit);
}
