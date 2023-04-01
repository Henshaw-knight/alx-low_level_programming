#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, follwed by a new line
 *
 * @str: the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	for ( ; str[i] != '\0'; )
	{
		_putchar(str[i]);

		i = i + 2;
	}
	_putchar('\n');
}
