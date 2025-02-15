#include "Perfect_Numbers.h"

/**
 * Perfect_Numbers - Checks if a number is perfect.
 * @x: The number to check.
 *
 * Return: 1 if the number is perfect, 0 otherwise.
 */
int Perfect_Numbers(int x)
{
	int sum_of_factors = 0, i;

	for (i = 1; i < x; i++)
	{
		if (x % i == 0)
			sum_of_factors += i;
	}

	if (x == sum_of_factors)
		return (1);
	else
		return (0);
}
