#include <stdio.h>
#include "main.h"



void fibonacci(void);

/**
 * main - chack code
 * Return: Zero
 */
int main(void)
{
	fibonacci();
	return (0);
}


/**
 * fibonacci - Print Fibonacci series
 * Return: Zero
 */
void fibonacci(void)
{
	long int t1 = 1;
	long int t2 = 2;
	long int next = t1 + t2;
	int num = 98 - 2;/* to remove first two values from the total loop*/

	printf("%ld, %ld, ", t1, t2);

	while (num > 0)
	{
		printf("%ld", next);
		/* prints comma and space between items excet the last one*/
		if (num > 1)
		{
			printf(", ");
		}
		t1 = t2;
		t2 = next;
		next = t1 + t2;
		num--;
	}
	printf("\n");
}
