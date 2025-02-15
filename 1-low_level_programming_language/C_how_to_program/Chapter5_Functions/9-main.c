#include "Perfect_Numbers.h"
#include <stdio.h>

/**
 * main - Entry point to check if a number is perfect.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int x;

	printf("Please enter a number to check if it is perfect: ");

	if (scanf("%d", &x) == 1)
	{
		if (Perfect_Numbers(x))
			printf("%d is a Perfect number\n", x);
		else
			printf("%d is NOT a Perfect number\n", x);
	}
	else
		printf("Invalid input\n");

	return (0);
}
