#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a param
 *
 * @str: the string
 *
 * Return: pointer to newly allocated space in memory containing the copy
 */
char *_strdup(char *str)
{
	char *strptr;
	int n = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		n++;
		i++;
	}

	strptr = (char *) malloc(sizeof(char) * (n + 1));

	if (strptr == NULL)
		return (NULL);
	i = 0;

	while (strptr[i] != '\0')
	{
		strptr[i] = str[i];
		i++;
	}
	strptr[i] = '\0';

	return (strptr);
}
