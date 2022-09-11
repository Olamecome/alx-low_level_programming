#include <stdio.h>

/**
 * main - Function to print the possible combination of single digit numbers
 * description - characters are to be printed separated y a comma and space.
 * However, the last charahter should not have a comma and space
 * Return: Function returns 0 - Success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
