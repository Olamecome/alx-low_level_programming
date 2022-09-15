#include <stdio.h>

/**
 * main - Print Fibonacci series
 * Return: Zero
 */
int main(void)
{
	long t1 = 1;
	long t2 = 2;
	long next = t1 + t2;
	long sum = 0;

	while (next <= 4000000)
	{
		if (next % 2 == 0)
			sum += next;

		t1 = t2;
		t2 = next;
		next = t1 + t2;
	}
	printf("%ld\n", sum);

	return (0);
}
