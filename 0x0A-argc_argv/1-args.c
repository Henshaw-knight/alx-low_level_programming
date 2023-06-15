#include <stdio.h>

/**
 * main - function that prints the number of arguments passed into it
 *
 * @argc: the number of arguments
 * @argv: an array of pointers to the strings (argument)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;

	return (0);
}
