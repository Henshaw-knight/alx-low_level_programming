#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: pointer to the destination
 * @src: pointer to the source string
 * @n: the number of bytes of src to copy to dest
 *
 * Return: pointer to the new destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
