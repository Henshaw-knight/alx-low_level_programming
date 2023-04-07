#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: pointer to the array
 * @n: the number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = n - 1;
	int j;

	for (j = 0; j < (n / 2); j++)
	{
		int num;

		num = *(a + j);
		*(a + j) = *(a + (i - j));
		*(a + (i - j)) = num;
	}
}
