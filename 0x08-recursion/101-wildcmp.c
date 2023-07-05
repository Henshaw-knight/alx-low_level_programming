#include "main.h"

/**
 * wildcmp - function that compares two strings and checks if they are
 * identical or not
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if strings are identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1++, s2++));

	if (*s2 == '*' && *(s1 + 1) && *s2)
		return (0);

	if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
		return (1);

	return (0);
}
