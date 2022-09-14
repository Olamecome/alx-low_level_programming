#include "main.h"

/**
 * print_last_digit - Prints last digit of any integer
 * @n: Number last digit is to be printed
 * Return: Returns the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;

	_putchar(n % 10 + '0');

	return (n % 10);
}
