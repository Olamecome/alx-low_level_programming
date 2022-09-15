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
	/*adding the first even number of the first 2 values */
	long sum = t2;

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
