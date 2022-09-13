#include "main.h"

void print_alphabet(void);

/**
 * main - check the code
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
	return;
}
