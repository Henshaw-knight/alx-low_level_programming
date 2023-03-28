#include "main.h"

/**
 * print_numbers - function that prints the numbers, 0 to 9, then a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	char c = '0';

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	putchar('\n');
}
