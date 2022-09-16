#include "main.h"

/**
 * print_diagonal - Function to print \ across the screen
 * @n: integer value for number of times \ should be printed
 * if @n is 0 or less, new line should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
