#include <stdio.h>

/**
 * main - FUnction to print the alphabets in lower case
 * Return: Function returns 0 - Success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');

	return (0);
}
