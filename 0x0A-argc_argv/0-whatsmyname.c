#include <stdio.h>

/**
 * main - Entry point; function that prints its name,
 * followed by a new line.
 *
 * @argc: the argument count
 * @argv: the argument vector - array of pointers to strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
