#include <unistd.h>

/**
 * _putchar - function to putchar
 * @c: value to be printed
 * Return: on success, 1. on error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

	for (i = 0; i < len; i++)
		_putchar(string[i]);
	_putchar('\n');
	return (0);
}
