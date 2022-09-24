#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string parameter
 * Return: 0
 */
void rev_string(char *s)
{
	int l, i;
	char *ch;

	ch = s;

	for (l = 0; s[l] != '\0'; ++l)

	for (i = 0; i < l; ++i)
	{
		/*ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;*/
		s[i] = ch [l - i];
	}
}
