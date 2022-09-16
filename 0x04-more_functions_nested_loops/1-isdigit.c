#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Check if character is digit
 * @c: character to be evaluated
 * Return: returns 1 if character is lowercase, 0 if it isnt
 */
int _isdigit(int c)
{
	return (isdigit(c) == 0 ? 0 : 1);
}
