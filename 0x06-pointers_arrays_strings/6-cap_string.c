#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str: the string
 *
 * Return: a pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			char c = *(str - 1);
		if (str[i] == str[0] || c == ',' || c == ';' || c == '.'
				|| c == '!' || c == '?' || c == '"' || c == '('
				|| c == ')' || c == '{' || c == '}'
				|| c == ' ' || c == '\t' || c == '\n'
		   )
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
