#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0, if s1 and s2 are equal, a -ve value if s1 < s2
 * or +ve value if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 < s2)
		return (-1);
	else if (s1 > s2)
		return (1);
	else
		return (0);
}
