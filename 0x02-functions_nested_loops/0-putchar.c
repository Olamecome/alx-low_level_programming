#include "main.h"

/**
 * main - function to print out _putchar
 * Return: 0
 */
int main(void)
{
	char string[] = "_putchar";
	int i;
	int len;

	len = sizeof(string) / sizeof(char);

	for (i = 0; i <= len; i++)
		_putchar(string[i]);
	_putchar('\n');
	return (0);
}
