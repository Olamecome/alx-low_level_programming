#include "main.h"

/**
 * main - function to print out _putchar
 * Return: 0
 */
int main(void)
{
	char string[] = "_putchar\n";
	int i;
	int len;

	len = sizeof(string) / sizeof(char);

	for (i = 0; i < len; i++)
		_putchar(string[i]);
	return (0);
}
