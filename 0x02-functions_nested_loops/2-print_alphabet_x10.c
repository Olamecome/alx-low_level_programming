#include "main.h"

/**
 * print_alphabet_x10 - print alphabets in lowercase 10x
 * Return: returns 0 meaning success
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		i++;
	}
}
