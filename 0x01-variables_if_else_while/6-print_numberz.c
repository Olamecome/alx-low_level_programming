#include <stdio.h>

/**
 * main - FUnction to print numbers in string
 * Return: Function returns 0 - Success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
