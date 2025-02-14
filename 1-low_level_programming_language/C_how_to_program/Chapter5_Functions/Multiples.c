#include "multiples.h"

/**
 * isMultiple - Checks if num2 is a multiple of num1.
 * @num1: The first integer.
 * @num2: The second integer.
 *
 * Description: A multiple means num2 should be exactly divisible by num1.
 * If num1 is zero, division is not possible.
 *
 * Return: 1 if num2 is a multiple of num1, otherwise 0.
 */
int isMultiple(int num1, int num2)
{
    if (num1 == 0)
        return (0); /* Avoid division by zero */
    return (num2 % num1 == 0 ? 1 : 0);
}
