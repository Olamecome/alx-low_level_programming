#include <stdio.h>

/**
 * main - This is the main function that the size of datatypes on a machine
 * description - This returns a 0 value
 * Return: Zero
 */
int main(void)
{
	char charType;
	int intType;
	long int longInt;
	long long int longLongInt;
	float floatType;

	/**
	 * evaluates the sizes of these data types
	 */
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongInt));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
