#include <stdio.h>

/**
 * main - Entry point
 *
 * Desc: Program that prints numbers of base 10 starting from 0, then new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
}
