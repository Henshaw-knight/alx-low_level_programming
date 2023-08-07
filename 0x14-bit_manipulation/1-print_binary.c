#include "main.h"
#include <math.h>

/**
 * print_binary - function that prints the binary representation of a num
 *
 * @n: the number from which the binary form will be printed
 *
 * Return: void (nothing)
 */
void print_binary(unsigned long int n)
{
	unsigned int i = 0;
	int flag = 0;
	unsigned long int largest = 1UL << ((sizeof(unsigned long int) * 8) - 1);

	while (i < sizeof(unsigned long int) * 8)
	{
		if ((largest & n) != 0)
			flag = 1;

		if (flag == 1)
		{
			if ((largest & n) == 0)
				_putchar('0');
			else
				_putchar('1');
		}
		largest = largest >> 1;
		i++;
	}
	
	if (flag == 0)
		_putchar('0');
}
