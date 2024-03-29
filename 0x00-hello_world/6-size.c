#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'C program that prints the size of various types'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int m;
	long long int n;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
