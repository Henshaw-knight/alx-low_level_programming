#include <stdio.h>

/**
 * main - function that prirts all arguments it receives.
 *
 * @argc: the number of argumentrs
 * @argv: array of strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
