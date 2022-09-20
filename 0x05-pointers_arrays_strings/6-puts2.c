#include "main.h"

/**
 * puts2 - Prints every oda xter 4rm a string starting from the 1st
 * @str: String character will be printed from
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
