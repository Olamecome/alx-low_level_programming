#include "main.h"

/**
 * print_triangle - Function to print triangle with #
 * @size: Size of triangle to be printed
 * if @n is 0 or less, new line should be printed
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
				_putchar(' ');
			for (k = i; k > 0; k--)
				_putchar('#');
			_putchar('\n');
		}
	}
}
