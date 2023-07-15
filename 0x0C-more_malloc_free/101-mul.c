#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Multiplies two numbers and prins the result
 * follwed by a new line
 *
 * @argc: argument coun
 * @argv: the array of arguments
 *
 * Return: 0 (on Success)
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		result = i * j;

		printf("%d\n", result);

		return (0);
	}
}
