#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space in memory containing
 * the results, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_string;
	int i = 0, j = 0;
	int length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		length++;
		i++;
	}

	i = 0;
	while (s2[i] != '\0')
	{
		length++;
		i++;
	}

	concat_string = (char *) malloc(sizeof(char) * (length + 1));
	if (concat_string == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		concat_string[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concat_string[i] = s2[j];
		j++;
		i++;
	}
	concat_string[i] = '\0';

	return (concat_string);
}
