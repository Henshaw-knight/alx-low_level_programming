#include "main.h"

/**
 * is_palindrome - function that checks if a string is palindrome or not
 *
 * @s: pointer to the string
 *
 * Return: 1 if string is palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int length = get_length(s);

	if (length <= 1)
	{
		return (1);
	}
	if (*s)
		return (1 * helper_f(s, length));
	else
		return (1);
}

/**
 * helper_f - helper function to assist in finding palindrome strings
 * compares necessary characters to find if they are same or not
 *
 * @s: character of a string
 * @length: length of the string
 *
 * Return: 1 if characters are same, otherwise 0
 */
int helper_f(char *s, int length)
{
	if (length <= 1)
		return (1);

	if (*s == *(s + (length - 1)))
	{
		return (1 * helper_f(s + 1, length - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * get_length - function to get the length of the string
 *
 * @s: the string
 *
 * Return: the string length
 */
int get_length(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + get_length(s + 1));
}
