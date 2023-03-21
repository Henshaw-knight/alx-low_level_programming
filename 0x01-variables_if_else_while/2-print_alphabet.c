#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'A program that prints the alpyhabet in lowercase and new line'
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 97; letter < 123; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
