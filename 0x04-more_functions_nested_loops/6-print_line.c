#include "main.h"

/**
 * print_line - Function to print _ number of times passed
 * @n: integer value for number of times _ should be printed
 * if @n is 0 or less, new line should be printed
 */
void print_line(int n)
{
	int i;
	
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
