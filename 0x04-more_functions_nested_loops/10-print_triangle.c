#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * based on size parameter
 *
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			k = i;

			while (size > k)
			{
				_putchar(' ');
				k++;
			}
			for (j = 1; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
