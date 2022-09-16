#include "main.h"

/**
 * print_most_numbers - FUnction to print numbers in string except 2 and 4
 * Return: Function returns 0 - Success
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;

		_putchar(i + '0');
	}
	_putchar('\n');

}
