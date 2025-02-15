#include "Reversing_Digits.h"
#include <stdio.h>

/**
 * main - Entry point to test Reversing_Digits function.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int x, a;

	printf("Enter a number to reverse: ");
	if (scanf("%d", &x) == 1)
	{
		a = Reversing_Digits(x);
		printf("Reversed number: %d\n", a);
	}
	else
	{
		printf("Invalid input. Please enter an integer.\n");
	}

	return (0);
}
