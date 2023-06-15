#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers and prints the result
 * followed by a new line
 *
 * @argc: the number of arguments
 * @argv: the array of argumerts
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");

	return (0);
}
