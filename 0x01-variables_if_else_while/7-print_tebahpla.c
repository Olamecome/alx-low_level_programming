#include <stdio.h>

/**
 * main - FUnction to print the alphabets in lower casei in reverse
 * Return: Function returns 0 - Success
 */
int main(void)
{
	char c;

	for (c = 'z'; c <= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
