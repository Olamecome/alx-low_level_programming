#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Generates random value and printsif its negative or positive
 * Return: it returns 0
 */

int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	/* your code goes there */
	if (a > 5)
		printf("Last digit of %d is %d and is greater than 5positive\n", n, a);
	else if (a == 0)
		printf("Last digit of %d is %d and is 0\n", n, a);
	else if (a < 6 && a != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);

	return (0);

}
