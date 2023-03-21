#include <stdio.h>

/**
 * main - Entry point
 *
 * Desc: Program that prints all nums of base 16 in lowercase, then a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
