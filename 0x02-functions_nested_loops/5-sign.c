#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: Number sign is to be checked for
 * Return: 1 if sign is positive,
 * 0 if number is zero
 * -1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
