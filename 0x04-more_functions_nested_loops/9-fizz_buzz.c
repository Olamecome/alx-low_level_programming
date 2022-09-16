#include <stdio.h>

/**
 * main - function to print  numbers 1 to 100
 * Multiples of 3 are replaced with Fizz
 * Multiples of 5 are replaced with Buzz
 * Multiples of 3 and 5 are replaced woth FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
