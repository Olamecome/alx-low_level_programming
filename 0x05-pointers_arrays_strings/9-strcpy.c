#include "main.h"

/**
 * _strcpy - copies strings
 * @dest: first parameter
 * @src: second parameter
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}

	dest[b] = '\0';
	return (dest);
}
