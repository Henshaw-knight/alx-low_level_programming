#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list nums;

	if (separator == NULL)
		return;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		int j = va_arg(nums, int);

		if (n - i == 1)
			printf("%d\n", j);
		else
			printf("%d%s", j, separator);
	}

	va_end(nums);
}
