#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program that prints all digit nums of base 10 starting from 0'
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 9)
			printf("%d", i);
		else
			printf("%d\n", i);
	}

	return (0);
}
