#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, prints opcode of main function
 * @argc: the argument count
 * @argv: array of args
 * Return: 0 (Success), 1 or 2 on failure
 */
int main(int argc, char *argv[])
{
	int bytes, j;
	unsigned char *func_p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	func_p = (unsigned char *)main;
	j = 0;

	if (bytes > 0)
	{
		while (j < (bytes - 1))
			printf("%02hhx ", func_p[j++]);
		printf("%hhx\n", func_p[j]);
	}
	return (0);
}
