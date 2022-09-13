#include <stdio.h>

/**
 * print_alphabet - function to print alphabets in lower letter
 * Return: returns 0 meaning success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
}

/**
 * main - check the code
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
