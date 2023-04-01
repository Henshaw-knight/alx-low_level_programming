#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * The function should print the second half of the string
 * If the number of characters is odd, the function should print the last n
 * characters of the string, where n = (length_of_string - 1) / 2
 *
 * @str: the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, n;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = (length / 2); i <= (length - 1); i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		n = (length - 1) / 2;

		for (i = length - n; i <= (length - 1); i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
