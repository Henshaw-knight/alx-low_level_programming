#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: the string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i - 1;

	i = 0;

	while (s[i] != '\0')
	{
		if (i <= (length / 2))
		{
		char letter;

		letter = *(s + i);
		*(s + i) = *(s + (length - i));
		*(s + (length - i)) = letter;
		}

		i++;
	}
}
