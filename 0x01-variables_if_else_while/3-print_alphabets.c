#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program that prints aplhabets in all uppercase,then new line'
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 97; letter < 123; letter++)
		putchar(letter);
	for (letter = 65; letter < 91; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
