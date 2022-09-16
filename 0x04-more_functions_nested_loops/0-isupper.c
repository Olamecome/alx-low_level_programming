#include <ctype.h>
#include "main.h"

/**
 * _isupper - Check if character is uppercase
 * @c: character to be evaluated
 * Return: returns 1 if character is lowercase, 0 if it isnt
 */
int _isupper(int c)
{
	return (isupper(c) == 0 ? 0 : 1);
}
