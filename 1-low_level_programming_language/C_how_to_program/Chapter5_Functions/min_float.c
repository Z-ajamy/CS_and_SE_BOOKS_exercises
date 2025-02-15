#include "min_float.h"

/**
 * findMinimum - Determines the smallest of three floating-point numbers.
 * @a: First floating-point number.
 * @b: Second floating-point number.
 * @c: Third floating-point number.
 *
 * Description: Compares three numbers and returns the smallest one.
 *
 * Return: The minimum value among a, b, and c.
 */
float findMinimum(float a, float b, float c)
{
    float min = a;

    if (b < min)
        min = b;

    if (c < min)
        min = c;

    return (min);
}
