#include "header.h"

/**
 * exponentiation - Computes base^exponent using iteration
 * @base: The base number
 * @exponent: The exponent (must be non-negative)
 *
 * Return: The result of base^exponent as a long int
 */
long int exponentiation(int base, int exponent)
{
    long int result = 1;
    int i;

    for (i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return (result);
}
