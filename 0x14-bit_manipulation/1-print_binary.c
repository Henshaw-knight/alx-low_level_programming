#include "main.h"

/**
 * print_binary - function that prints the binary representation of a num
 *
 * @n: the number from which the binary form will be printed
 *
 * Return: void (nothing)
 */
void print_binary(unsigned long int n)
{
	unsigned int flag = 0, biggest = 32768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (biggest)
	{
		if ((n & biggest) == 0 && flag == 1)
			_putchar('0');
		else if ((n & biggest) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		biggest = biggest >> 1;
	}
}
