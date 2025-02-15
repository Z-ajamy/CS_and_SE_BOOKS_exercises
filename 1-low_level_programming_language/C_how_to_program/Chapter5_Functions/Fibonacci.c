#include "Fibonacci.h"
#include <stdio.h>

/**
 * fibonacci - Recursively prints the Fibonacci sequence up to `n` terms.
 * @n: The number of terms to print.
 * @a: The first number in the sequence.
 * @b: The second number in the sequence.
 *
 * Return: Nothing (void function).
 */
void fibonacci(int n, long int a, long int b)
{
	if (n <= 0)
		return;

	printf("%ld", a);

	if (n > 1)
		printf(", ");

	fibonacci(n - 1, b, a + b);
}
