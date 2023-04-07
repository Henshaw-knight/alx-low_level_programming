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
	int i = 0;

	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 32
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		char c = *(str--);

		if (c == ',' || c == ';' || c == '.' || c == '!'
				|| c == '?' || c == '"' || c == '('
				|| c == ')' || c == '{' || c == '}'
				|| c == ' ' || c == '\t' || c == '\n'
		   )
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
	}

	return (str);
}
