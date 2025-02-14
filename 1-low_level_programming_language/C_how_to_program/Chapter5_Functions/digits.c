#include <stdio.h>
#include "digits.h"

/**
 * quotient - Computes the integer quotient of a divided by b.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The integer quotient of a divided by b.
 */
int quotient(int a, int b)
{
    return (a / b);
}

/**
 * remainder - Computes the remainder of a divided by b.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of a divided by b.
 */
int _remainder(int a, int b)
{
    return (a % b);
}

/**
 * printDigits - Prints an integer as separate digits with two spaces in between.
 * @num: The integer to be printed (between 1 and 32767).
 *
 * Description: This function extracts digits using division and modulus operations
 * and prints them with two spaces separating each digit.
 */
void printDigits(int num)
{
    int rev = 0, digit;

    /* Reverse the number to extract digits in the correct order */
    while (num > 0)
    {
        rev = (rev * 10) + _remainder(num, 10);
        num = quotient(num, 10);
    }

    /* Print digits with two spaces in between */
    while (rev > 0)
    {
        digit = _remainder(rev, 10);
        printf("%d", digit);
        rev = quotient(rev, 10);
        
        if (rev > 0)
            printf("  "); /* Two spaces */
    }
    printf("\n");
}
