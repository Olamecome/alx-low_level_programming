#include <stdio.h>

/**
 * main - Function to print out combination of two two-digits number
 * description - output will have leading 0 for single digits e.g 01
 * Numbers should be printed in ascending order
 * combination of numbers must be separated by a comma followed by space
 * use only putchar function
 * Return: Function returns 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a; b <= 99; b++)
		{
			if (a == b)
				continue;
			/**
			 * putchar will print the ASCII equivalent of the digits
			 * when digits go above 10, it printsspecial character
			 * I used integer division and modulo to the the double digit value
			 *
			 */

			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');

			putchar(b / 10 + '0');
			putchar(b % 10 + '0');

			if (b == 99 && a == b - 1)
				continue;
			putchar(',');
			putchar(' ');
		}

	}

	return (0);
}
