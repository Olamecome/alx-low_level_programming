#include "main.h"

/**
 * print_triangle - Function to print triangle with #
 * @size: Size of triangle to be printed
 * if @n is 0 or less, new line should be printed
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j < i; j--)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	}
}
