#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 *
 * @format: list of types of arguments passed to the function
 * c, i, f, s
 *
 * Return: void/nothing
 */
void print_all(const char * const format, ...)
{
	va_list args_list;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char allowed_types[] = "cifs";

	va_start(args_list, format);
	while (format && format[i])
	{
		j = 0;
		while (allowed_types[j])
		{
			if (format[i] == allowed_types[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args_list, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(args_list, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(args_list, double)), c = 1;
				break;
			case 's':
				str = va_arg(args_list, char *), c = 1;
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		} i++;
	}
	printf("\n"), va_end(args_list);
}
