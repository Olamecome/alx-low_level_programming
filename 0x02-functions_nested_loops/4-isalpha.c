#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Check if character is alphabet
 * @c: character to be evaluated
 * Return: returns 1 if character is lowercase, 0 if it isnt
 */
int _isalpha(int c)
{
	return (isalpha(c) == 0 ? 0 : 1);
}
