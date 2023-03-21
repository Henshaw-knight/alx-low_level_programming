#include <stdio.h>

/**
 * main - Entry point
 *
 * Desc: Program that prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9')
	{
		if (i != '9')
		{
			putchar(i);
			putchar(', ');
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
}
