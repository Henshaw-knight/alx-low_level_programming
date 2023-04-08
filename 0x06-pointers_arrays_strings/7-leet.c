#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * Letters a and A would be replaced by 4
 * Letters e and E would be replaced by 3
 * Letters o and O would be replaced by 0
 * Letters t and T would be replaced by 7
 * Letters l and L would be replaced by 1
 *
 * @str: the string to encode
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	int char_ascii[] = {65, 69, 79, 84, 76};
	char encoded_val[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == char_ascii[j]
					|| str[i] == char_ascii[j] + 32)
			{
				str[i] = encoded_val[j];
			}
		}
	}

	return (str);
}
