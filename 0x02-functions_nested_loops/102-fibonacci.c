#include <stdio.h>

/**
 * main - Print Fibonacci series
 * Return: Zero
 */
int main(void)
{
	int t1 = 1;
	int t2 = 2;
	int next = t1 + t2;
	int num = 50 - 2;/* to remove first two values from the total loop*/

	printf("%d, %d, ", t1, t2);

	while (num > 0)
	{
		printf("%d", next);
		/* prints comma and space between items excet the last one*/
		if (num > 1)
			printf(", ");
		t1 = t2;
		t2 = next;
		next = t1 + t2;
		num--;
	}
	printf("\n");

	return (0);
}
