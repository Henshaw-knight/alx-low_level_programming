#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 *
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list strs;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(strs, char*);

		if (str == NULL)
			printf("(nil)");
		else
		{
			if (n - i == 1)
				printf("%s", str);
			else
			{
				printf("%s", str);

				if (separator != NULL)
					printf("%s", separator);
			}
			va_end(strs);
		}
	}
	printf("\n");
}
