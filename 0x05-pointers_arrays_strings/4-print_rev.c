#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by
 * a new line
 *
 * @s: the string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i - 1;

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
