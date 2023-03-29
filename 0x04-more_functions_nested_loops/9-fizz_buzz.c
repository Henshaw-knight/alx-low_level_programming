#include <stdio.h>

/**
 * main - Entry point for program that prints the numbers from 1 to 100
 * followed by a new line. Fizz is printed for multiples of 3, Buzz for
 * multiples of 5 and FizzBuzz for multiples of 3 and 5.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
		{
			if (i ==  100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
}
