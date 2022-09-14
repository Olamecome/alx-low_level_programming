#include "main.h"

/**
 * print_last_digit - Prints last digit of any integer
 * @n: Number last digit is to be printed
 * Return: Returns the last digit
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = n * -1;

	m = n % 10;

	if (m < 0)
		m = m * -1;

	_putchar(m + '0');

	return (m);
}
