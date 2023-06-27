#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: pointer to the string (first char)
 *
 * @f: function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || name == NULL)
		return;
	f(name);
}
