#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: the destination string
 * @s2: the source string
 * @n: the number of bytes to copy from s2 to s1
 *
 * Return: char pointer on success, NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, length_s1, length_s2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length_s1 = get_length(s1);
	length_s2 = get_length(s2);

	if (n >= length_s2)
		n = length_s2;

	str = malloc(sizeof(char) * (length_s1 + n + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';

	return (str);
}

/**
 * get_length - function to get the length of a string
 * @s: the string
 *
 * Return: the string's length
 */
unsigned int get_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + get_length(s + 1));
}
