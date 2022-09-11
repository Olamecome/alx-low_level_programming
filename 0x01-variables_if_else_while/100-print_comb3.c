#include <stdio.h>

/**
 * main - Function to print the possible combination of two digit numbers
 * description - characters are to be printed separated by a comma and space.
 * However, the last character should not have a comma and space.
 * the combination should be a combination of different digits
 * 01 and 10 are considered same combination and the least should be printed
 * Return: Function returns 0 - Success
 */
int main(void)
{
	/* declaring the two counter variables */
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		j = i; /** setting the second counter to be the value of the
			 * previous first counter
			 * this will ensure J doenst go behind i no case of 10 or 31 or 74
			 */
		for (j; j < 10; j++)
		{
			if (i == j) /** checking if i and j are the same
				      * e.g. 00 or 66 or 88.
				      * if they are move to the next iteration
				      */
				continue;
			putchar(i + '0');
			putchar(j + '0');

			/**
			 * this is to know when to print the comma and space.
			 * they shouldnt be after the last value
			 */

			if (j == 9 && i == j - 1)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
