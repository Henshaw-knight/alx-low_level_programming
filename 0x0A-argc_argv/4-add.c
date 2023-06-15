#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function that adds positive numbers
 *
 * @argc: the number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	while (--argc)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			char c = argv[argc][i];

			if (!isdigit(c))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
