#include <stdio.h>

/**
 * main - Entry point
 *
 * Desc: Program that prints lowercase alphabet in reverse, then a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
