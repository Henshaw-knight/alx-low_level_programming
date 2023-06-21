#include <stdio.h>
#ifndef FILENAME
#define FILENAME __FILE__
#endif /* FILENAME */

/**
 * main - Entry point, prints the name of the file it was compiled from
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; FILENAME[i]; i++)
		printf("%c", FILENAME[i]);
	printf("\n");

	return (0);
}
