#include "main.h"

/**
 * print_diagonal - function that draws on a diagonal line of the terminal
 *
 * @n: number of times to draw the diagonal lines
 *
 * Return: void
 */
void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\\');
		n--;
	}
	_putchar('\n');
}
