#include "Recursive_Exponentiation.h"
#include <stdio.h>

/**
 * main - Entry point to test recursive_exponentiation function.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int a, b, c;

	printf("Enter base and exponent (separated by space): ");
	if (scanf("%d %d", &a, &b) == 2)
	{
		if (b < 0)
			printf("Negative exponents are not supported.\n");
		else
		{
			c = recursive_exponentiation(a, b);
			printf("%d^%d = %d\n", a, b, c);
		}
	}
	else
		printf("Invalid input! Please enter two numbers.\n");

	return (0);
}
