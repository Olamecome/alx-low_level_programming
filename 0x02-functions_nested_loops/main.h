#include <unistd.h>

int _putchar(char c);
void print_alphabet(void);

/**
 * _putchar - function to print characters
 * Return: Return 1 if success, -1 if failed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - function to print lowercase alphabets
 * Return: Zero for success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
