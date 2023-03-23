#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char letter;

	while (i <= 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);

			if (letter == 'z')
				_putchar('\n');
		}

		i++;
	}
}
