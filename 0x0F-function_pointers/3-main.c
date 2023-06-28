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
	int (*op_func)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[3]);
		char *operation = argv[2];

		op_func = get_op_func(operation);

		if (op_func == NULL)
		{
			printf("Error\n");
			exit(99);
		}

		printf("%d\n", op_func(num1, num2));
	}
	return (0);
}
