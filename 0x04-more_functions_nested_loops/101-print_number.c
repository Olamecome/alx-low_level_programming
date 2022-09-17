#include "main.h"

/**
 * print_number - Prints numbers using _putchar
 * @n: Number to be printed
 * Return: 0
 */
void print_number(int n)
{
	int m;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	if (n / 10)
		print_number(n / 10);

	m = n % 10;
	
	if (m < 0)
		m = -m;

	_putchar(m + '0');
}
