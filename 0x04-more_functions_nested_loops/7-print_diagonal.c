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
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
	}
	_putchar('\n');
}
