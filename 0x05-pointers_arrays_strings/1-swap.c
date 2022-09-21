#include "main.h"

/**
 * swap_int - swap two integers
 * @a: First integer
 * @b: second intger
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
