#include "main.h"

/**
 * print_number - Prints numbers using _putchar
 * @n: Number to be printed
 * Return: 0
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}

	if (m / 10)
		print_number(m / 10);

	_putchar(m % 10 + '0');
}
