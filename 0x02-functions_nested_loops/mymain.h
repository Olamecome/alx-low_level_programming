#include <unistd.h>

int _putchar(char c);
/**
 * _putchar - function to print characters
 * Return: Return 1 if success, -1 if failed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
