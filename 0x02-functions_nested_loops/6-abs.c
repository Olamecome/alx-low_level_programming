#include <stdlib.h>
#include "main.h"

/**
 * _abs - Prints absolute value
 * Return: Zero
 */
int _abs(int n)
{
	if (abs(n) < 10)
		_putchar(n + '0');
	else
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	return (0);
}
