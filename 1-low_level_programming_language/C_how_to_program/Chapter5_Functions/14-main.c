#include "Fibonacci.h"
#include <stdio.h>

/**
 * main - Entry point to print Fibonacci sequence.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int n = 50;

	printf("Fibonacci Sequence up to %d terms:\n", n);
	fibonacci(n, 0, 1);
	printf("\n");

	return (0);
}
