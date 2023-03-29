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
	int i, j;

	for (i = 1; i <= size; i++)
	{
		j = 1;

		while (size > j)
		{
			_putchar(' ');
			j++;
		}

		for (j = 1; j <= size; j++)
			_putchar('#');
	}
	_putchar('\n');
}
