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

	if (length == 0)
	{
		return (1);
	}
	if (*s)
		return (1 * helper_f(s, 1, length));
	else
		return (1);
}

/**
 * helper_f - helper function to assist in finding palindrome strings
 * compares necessary characters to find if they are same or not
 *
 * @s: character of a string
 * @i: param used to get index of the character
 * @length: length of the string
 *
 * Return: 1 if characters are same, otherwise 0
 */
int helper_f(char *s, int i, int length)
{
	if (*s == *(s + (length - i)))
	{
		i++;
		return (1 * helper_f(s + 1, i, length));
	}
	else
	{
		i++;
		return (0 * helper_f(s + 1, i, length));
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
