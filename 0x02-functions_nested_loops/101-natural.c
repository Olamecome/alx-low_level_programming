#include <stdio.h>

int sum_multiple(int num);

/**
 * main - check code
 * Return: zero
 */
int main(void)
{
	printf("%d\n", sum_multiple(1024));
	return (0);
}

/**
 * sum_multiple - prints sum of multiples of 3 and 5 within a range
 * @num: Range(excluded) to check multiples of 3 and 5
 * Return: Sum of the multiples of 3 and 5
 */
int sum_multiple(int num)
{
	int i;
	int sum = 0;

	for (i = 0; i < num; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	return (sum);
}
