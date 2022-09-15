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
	int t1 = 1;
	int t2 = 2;
	int next = t1 + t2;
	int num = 98 - 2;/* to remove first two values from the total loop*/

	printf("%d, %d, ", t1, t2);

	while (num > 0)
	{
		_putchar((int)next);
		/* prints comma and space between items excet the last one*/
		if (num > 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		t1 = t2;
		t2 = next;
		next = t1 + t2;
		num--;
	}
	_putchar('\n');
}
