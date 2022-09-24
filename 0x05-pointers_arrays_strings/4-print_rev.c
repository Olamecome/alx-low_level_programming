#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string parameter
 * Return: 0
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; ++index)
		;

	for (--index; index >= 0; --index)
		putchar(s[index]);
	putchar('\n');
}
