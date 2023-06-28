#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Entry point, function that performs simple operations
 * @argc: the argument count
 * @argv: the array of arguments
 *
 * Return: the result of the operation
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	int (*op_func)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", op_func(num1, num2));
	return (0);
}
