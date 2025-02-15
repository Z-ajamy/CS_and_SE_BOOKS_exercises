#include "Reversing_Digits.h"
#include <stdio.h>

/**
 * Reversing_Digits - Reverses the digits of a given integer.
 * @x: The integer to be reversed.
 *
 * Return: The reversed integer.
 */
int Reversing_Digits(int x)
{
	int n = 0;

	while (x != 0)
	{
		n = n * 10 + (x % 10);
		x /= 10;
	}

	return (n);
}
