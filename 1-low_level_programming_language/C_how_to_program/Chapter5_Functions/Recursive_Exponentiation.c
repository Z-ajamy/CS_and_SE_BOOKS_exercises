#include "Recursive_Exponentiation.h"

/**
 * recursive_exponentiation - Recursively computes base^exponent.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The computed power x^y.
 */
int recursive_exponentiation(int x, int y)
{
	if (y < 0)  /* Handling negative exponents */
		return (0);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * recursive_exponentiation(x, y - 1));
}
