#include <stdio.h>

/**
 * main - FUnction to print all the numbers of base 16 0123456789abcdef
 * Return: Function returns 0 - Success
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
