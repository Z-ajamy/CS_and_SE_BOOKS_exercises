#include "even_odd.h"

/**
 * isEven - Checks if a number is even.
 * @num: The integer to check.
 *
 * Description: A number is even if it is divisible by 2 without remainder.
 *
 * Return: 1 if even, 0 otherwise.
 */
int isEven(int num)
{
    return (num % 2 == 0 ? 1 : 0);
}
