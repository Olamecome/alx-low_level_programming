#include "main.h"

/**
 * print_number - Prints numbers using _putchar
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

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}